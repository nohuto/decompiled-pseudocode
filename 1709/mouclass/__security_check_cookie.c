/*
 * XREFs of __security_check_cookie @ 0x1C00016D0
 * Callers:
 *     __GSHandlerCheckCommon @ 0x1C000175C (__GSHandlerCheckCommon.c)
 *     MouseStart @ 0x1C0003F10 (MouseStart.c)
 *     MouCreateClassObject @ 0x1C000B3D8 (MouCreateClassObject.c)
 *     MouseClassFindMorePorts @ 0x1C000C3D0 (MouseClassFindMorePorts.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000C828 (MouseClassGetWaitWakeEnableState.c)
 *     TraceLoggingRegisterEx @ 0x1C000CE30 (TraceLoggingRegisterEx.c)
 *     DriverEntry @ 0x1C000E080 (DriverEntry.c)
 *     MouConfiguration @ 0x1C000E95C (MouConfiguration.c)
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
