/*
 * XREFs of __security_check_cookie @ 0x1C0002AC0
 * Callers:
 *     MouseStart @ 0x1C0002840 (MouseStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002B2C (__GSHandlerCheckCommon.c)
 *     MouseClassFindMorePorts @ 0x1C000C180 (MouseClassFindMorePorts.c)
 *     MouCreateClassObject @ 0x1C000C990 (MouCreateClassObject.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000CE80 (MouseClassGetWaitWakeEnableState.c)
 *     MouConfiguration @ 0x1C000F030 (MouConfiguration.c)
 *     DriverEntry @ 0x1C000F4D0 (DriverEntry.c)
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
