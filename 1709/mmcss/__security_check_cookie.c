/*
 * XREFs of __security_check_cookie @ 0x1C0001130
 * Callers:
 *     __GSHandlerCheckCommon @ 0x1C00011CC (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C00017CC (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C00018A8 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0001924 (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0001990 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0001A0C (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0001A74 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0001ADC (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0001B44 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C0001BD4 (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0001C5C (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0001DA0 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0001E30 (CiLogTurboEngaged.c)
 *     CiNdisThrottle @ 0x1C00090E0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C00093C4 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000CDD0 (CiConfigQueryValue.c)
 *     CiConfigReadDWORD @ 0x1C000CFDC (CiConfigReadDWORD.c)
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
