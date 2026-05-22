/*
 * XREFs of atexit @ 0x1800E1670
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001230 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001240 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x1800012A0 (_dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 *     _dynamic_initializer_for__TestCommandHost::m_instance__ @ 0x180001300 (_dynamic_initializer_for__TestCommandHost--m_instance__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001310 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800013D0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__ISMStatics::s_viewHierarchy__ @ 0x180001490 (_dynamic_initializer_for__ISMStatics--s_viewHierarchy__.c)
 *     _dynamic_initializer_for__ISMStatics::s_inputSystemBamoConnection__ @ 0x1800014A0 (_dynamic_initializer_for__ISMStatics--s_inputSystemBamoConnection__.c)
 *     _dynamic_initializer_for__MPCManagerClient::s_creationLock__ @ 0x1800014C0 (_dynamic_initializer_for__MPCManagerClient--s_creationLock__.c)
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180001560 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 *     _dynamic_initializer_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x1800015D0 (_dynamic_initializer_for__MPCSixDofProcessor--s_registryWatcher__.c)
 *     _dynamic_initializer_for__MPCManager::s_instance__ @ 0x1800015E0 (_dynamic_initializer_for__MPCManager--s_instance__.c)
 *     _dynamic_initializer_for__EdgyConnection::s_spThis__ @ 0x1800015F0 (_dynamic_initializer_for__EdgyConnection--s_spThis__.c)
 *     _dynamic_initializer_for__WGIRawInputProvider::s_spInstance__ @ 0x180001600 (_dynamic_initializer_for__WGIRawInputProvider--s_spInstance__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_lockSingleton__ @ 0x1800016D0 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraph.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_wpSingleton__ @ 0x180001700 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic-_ea_180001700.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent__ @ 0x180001710 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic-_ea_180001710.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18002E478 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18003689C (-Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18006F600 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180074A24 (-Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x18009D08C (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800E2BA0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x1800E1620 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
