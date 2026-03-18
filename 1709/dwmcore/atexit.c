/*
 * XREFs of atexit @ 0x1800C2D94
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001000 (std--_dynamic_initializer_for__initlocks__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180001020 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001030 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001050 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800010E0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800010F0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _anonymous_namespace_::_dynamic_initializer_for___currentSequence__ @ 0x180001120 (_anonymous_namespace_--_dynamic_initializer_for___currentSequence__.c)
 *     _anonymous_namespace_::_dynamic_initializer_for___lock__ @ 0x180001170 (_anonymous_namespace_--_dynamic_initializer_for___lock__.c)
 *     _dynamic_initializer_for__g_csCompositionEngine__ @ 0x1800011A0 (_dynamic_initializer_for__g_csCompositionEngine__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800011D0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800011F0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__CInteraction::s_InteractionHandleTable__ @ 0x1800012A0 (_dynamic_initializer_for__CInteraction--s_InteractionHandleTable__.c)
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800012B0 (_dynamic_initializer_for__g_DisplayManager__.c)
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x180001330 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180001410 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180001430 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__ @ 0x180001450 (_dynamic_initializer_for__CManipulationManager--s_rwPointerBufferLock__.c)
 *     _dynamic_initializer_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x180001480 (_dynamic_initializer_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001490 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x1800015E0 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     _dynamic_initializer_for__CRectanglesShape::sc_emptyShape__ @ 0x180001600 (_dynamic_initializer_for__CRectanglesShape--sc_emptyShape__.c)
 *     _dynamic_initializer_for__Contexts__ @ 0x180001620 (_dynamic_initializer_for__Contexts__.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800C2DC0 (__scrt_initialize_thread_safe_statics.c)
 *     ??$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ @ 0x1801BF14C (--$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ @ 0x1801BF244 (--$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z @ 0x1801BF33C (--$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z.c)
 *     ??$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF448 (--$DwmHolographicDisplayRemove@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ??$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z @ 0x1801BF540 (--$DwmHolographicDisplayUpdate@I@CompositorTracing@@SAX$$QEAI@Z.c)
 *     ??$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ @ 0x1801BF638 (--$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ.c)
 *     ??$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z @ 0x1801BF730 (--$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z.c)
 *     ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x1801C0038 (-DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ.c)
 *     ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x1801C0140 (-DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ.c)
 *     ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXII@Z @ 0x1801C0248 (-DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXII@Z.c)
 *     ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x1801C0388 (-DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1801C04B0 (-DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x1801C08F4 (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1801C09FC (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     _onexit_0 @ 0x1800C2D04 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
