// Copyright (C) 2018 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <builders/ie_layer_fragment.hpp>
#include <ie_inetwork.hpp>
#include <string>

namespace InferenceEngine {
namespace Builder {

/**
 * @brief The class represents a builder for ELU layer
 */
class INFERENCE_ENGINE_API_CLASS(ELULayer): public LayerFragment {
public:
    /**
     * @brief The constructor creates a builder with the name
     * @param name Layer name
     */
    explicit ELULayer(const std::string& name = "");
    /**
     * @brief The constructor creates a builder from generic builder
     * @param genLayer generic builder
     */
    explicit ELULayer(Layer& genLayer);
    /**
     * @brief Sets the name for the layer
     * @param name Layer name
     * @return reference to layer builder
     */
    ELULayer& setName(const std::string& name);

    /**
     * @brief Returns port with shapes for the layer
     * @return Port with shapes
     */
    const Port& getPort() const;
    /**
     * @brief Sets port shapes for the layer
     * @param port Port with shapes
     * @return reference to layer builder
     */
    ELULayer& setPort(const Port& port);

    /**
     * @brief Returns alpha
     * @return alpha
     */
    float getAlpha() const;
    /**
     * @brief Sets alpha
     * @param alpha Alpha
     * @return reference to layer builder
     */
    ELULayer& setAlpha(float alpha);
};

}  // namespace Builder
}  // namespace InferenceEngine
