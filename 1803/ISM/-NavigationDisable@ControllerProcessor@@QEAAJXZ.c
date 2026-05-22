/*
 * XREFs of ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180033268
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18002EF30 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18002F290 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1800320A4 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180035DF0 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationDisable(ControllerProcessor *this)
{
  int updated; // ebx

  updated = ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL, 0LL);
  if ( updated < 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)updated;
}
