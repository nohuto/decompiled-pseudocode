/*
 * XREFs of atexit @ 0x1800CA61C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001230 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001240 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x1800012A0 (_dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 *     _dynamic_initializer_for__TestCommandHost::m_instance__ @ 0x180001300 (_dynamic_initializer_for__TestCommandHost--m_instance__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001310 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001380 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__GestureTargetingComponent::s_pMessageSession__ @ 0x1800013E0 (_dynamic_initializer_for__GestureTargetingComponent--s_pMessageSession__.c)
 *     _dynamic_initializer_for__GestureTargetingComponent::s_pTargetingComponent__ @ 0x1800013F0 (_dynamic_initializer_for__GestureTargetingComponent--s_pTargetingComponent__.c)
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180001470 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 *     _dynamic_initializer_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x1800014E0 (_dynamic_initializer_for__MPCSixDofProcessor--s_registryWatcher__.c)
 *     _dynamic_initializer_for__MPCManager::s_instance__ @ 0x1800014F0 (_dynamic_initializer_for__MPCManager--s_instance__.c)
 *     _dynamic_initializer_for__WGIRawInputProvider::s_spInstance__ @ 0x180001550 (_dynamic_initializer_for__WGIRawInputProvider--s_spInstance__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_lockSingleton__ @ 0x1800015B0 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraph.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_wpSingleton__ @ 0x1800015E0 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic-_ea_1800015E0.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent__ @ 0x1800015F0 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic-_ea_1800015F0.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18003B4D0 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18004218C (-Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18008FD44 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18009C444 (-Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800CBCD0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x1800CA5CC (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
