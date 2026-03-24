/*
 * XREFs of __security_check_cookie @ 0x1C0002980
 * Callers:
 *     KeyboardStart @ 0x1C00025B0 (KeyboardStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002A0C (__GSHandlerCheckCommon.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C010 (KeyboardClassFindMorePorts.c)
 *     KbdCreateClassObject @ 0x1C000CC80 (KbdCreateClassObject.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000D150 (KeyboardClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C000F4E0 (KbdConfiguration.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
