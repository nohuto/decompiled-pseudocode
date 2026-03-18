/*
 * XREFs of atexit @ 0x1800D30C4
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001000 (std--_dynamic_initializer_for__initlocks__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180001020 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001030 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001050 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800010C0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800010D0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_csCompositionEngine__ @ 0x180001100 (_dynamic_initializer_for__g_csCompositionEngine__.c)
 *     _dynamic_initializer_for__CInteraction::s_InteractionHandleTable__ @ 0x180001130 (_dynamic_initializer_for__CInteraction--s_InteractionHandleTable__.c)
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x180001140 (_dynamic_initializer_for__g_DisplayManager__.c)
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x1800011A0 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180001280 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800012A0 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__ @ 0x1800012C0 (_dynamic_initializer_for__CManipulationManager--s_rwPointerBufferLock__.c)
 *     _dynamic_initializer_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1800012F0 (_dynamic_initializer_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001300 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001450 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     _dynamic_initializer_for__CRectanglesShape::sc_emptyShape__ @ 0x180001470 (_dynamic_initializer_for__CRectanglesShape--sc_emptyShape__.c)
 *     _dynamic_initializer_for__Contexts__ @ 0x180001490 (_dynamic_initializer_for__Contexts__.c)
 *     _dynamic_initializer_for__Components::Animations::Sequence::s_rpDefaultInterpolation__ @ 0x1800014F0 (_dynamic_initializer_for__Components--Animations--Sequence--s_rpDefaultInterpolation__.c)
 *     _dynamic_initializer_for__Components::Animations::Sequence::s_rpDefaultValue__ @ 0x180001500 (_dynamic_initializer_for__Components--Animations--Sequence--s_rpDefaultValue__.c)
 *     Components::Animations::_dynamic_initializer_for__g_defaultHeap__ @ 0x180001510 (Components--Animations--_dynamic_initializer_for__g_defaultHeap__.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     CreateNullProcessAttribution @ 0x1800CA3F0 (CreateNullProcessAttribution.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     _onexit_0 @ 0x1800D3034 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
