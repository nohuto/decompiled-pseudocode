/*
 * XREFs of atexit @ 0x1800DB0AC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001120 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001130 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _anonymous_namespace_::_dynamic_initializer_for___currentSequence__ @ 0x180001160 (_anonymous_namespace_--_dynamic_initializer_for___currentSequence__.c)
 *     _anonymous_namespace_::_dynamic_initializer_for___lock__ @ 0x1800011C0 (_anonymous_namespace_--_dynamic_initializer_for___lock__.c)
 *     _dynamic_initializer_for__g_csCompositionEngine__ @ 0x1800011F0 (_dynamic_initializer_for__g_csCompositionEngine__.c)
 *     _anonymous_namespace_::_dynamic_initializer_for__g_latencyData__ @ 0x180001220 (_anonymous_namespace_--_dynamic_initializer_for__g_latencyData__.c)
 *     _dynamic_initializer_for__CInteraction::s_InteractionHandleTable__ @ 0x180002090 (_dynamic_initializer_for__CInteraction--s_InteractionHandleTable__.c)
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800027A0 (_dynamic_initializer_for__g_DisplayManager__.c)
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x180002800 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x1800028E0 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180002900 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__ @ 0x180002920 (_dynamic_initializer_for__CManipulationManager--s_rwPointerBufferLock__.c)
 *     _dynamic_initializer_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x180002960 (_dynamic_initializer_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180002970 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180002A00 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     _dynamic_initializer_for__CRectanglesShape::sc_emptyShape__ @ 0x180002A20 (_dynamic_initializer_for__CRectanglesShape--sc_emptyShape__.c)
 *     _dynamic_initializer_for__Contexts__ @ 0x180002A40 (_dynamic_initializer_for__Contexts__.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800BAF00 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800DB0D0 (__scrt_initialize_thread_safe_statics.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180140BBC (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 * Callees:
 *     _onexit @ 0x1800DB05C (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
