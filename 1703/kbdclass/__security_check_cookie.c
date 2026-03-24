/*
 * XREFs of __security_check_cookie @ 0x1C0002DC0
 * Callers:
 *     KeyboardStart @ 0x1C00025B0 (KeyboardStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002E2C (__GSHandlerCheckCommon.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C010 (KeyboardClassFindMorePorts.c)
 *     KbdCreateClassObject @ 0x1C000CCF0 (KbdCreateClassObject.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000D1C0 (KeyboardClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C000F030 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C000F490 (KbdConfiguration.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
