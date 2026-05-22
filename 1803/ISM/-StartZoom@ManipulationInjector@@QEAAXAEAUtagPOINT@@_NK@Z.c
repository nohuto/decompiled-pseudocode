/*
 * XREFs of ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800AC8A4
 * Callers:
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x180034CB4 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18003641C (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800ACC54 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 */

void __fastcall ManipulationInjector::StartZoom(
        ManipulationInjector *this,
        struct tagPOINT *a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  if ( *((_DWORD *)this + 22) == 64 )
    ManipulationInjector::EndManipulationInternal(this, 1, 1);
  ManipulationInjector::StartManipulation(this, 16 * ((a3 ^ 1u) + 1), *a2, a4);
}
