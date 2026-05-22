/*
 * XREFs of ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C2390
 * Callers:
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A3B0 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800621D4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C0B00 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C0E28 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C167C (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::IsInContactForDeviceId(ManipulationInjector *this, int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r8d
  _DWORD *v4; // r9
  _DWORD *i; // rcx

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = (_DWORD *)((char *)this + 124);
  for ( i = (_DWORD *)((char *)this + 712); *i != a2 || ((*v4 - 65542) & 0xFFFEFFFF) != 0; ++i )
  {
    ++v3;
    v4 += 38;
    if ( v3 >= v2 )
      return 0;
  }
  return 1;
}
