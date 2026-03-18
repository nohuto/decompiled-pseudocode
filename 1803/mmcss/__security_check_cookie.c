/*
 * XREFs of __security_check_cookie @ 0x1C0001160
 * Callers:
 *     __GSHandlerCheckCommon @ 0x1C00011FC (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C000179C (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0001878 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C00018F4 (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0001960 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C00019DC (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0001A44 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0001AAC (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0001B14 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C0001BA4 (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0001C2C (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0001D70 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0001E00 (CiLogTurboEngaged.c)
 *     CiNdisThrottle @ 0x1C00090E0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C00093B4 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000CDD4 (CiConfigQueryValue.c)
 *     CiConfigReadDWORD @ 0x1C000CFE0 (CiConfigReadDWORD.c)
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
