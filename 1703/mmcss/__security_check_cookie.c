/*
 * XREFs of __security_check_cookie @ 0x1C0002D40
 * Callers:
 *     CiSchedulerSetTaskIndexMode @ 0x1C0001650 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerThreadFunction @ 0x1C0002030 (CiSchedulerThreadFunction.c)
 *     __GSHandlerCheckCommon @ 0x1C0002DBC (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003F54 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0004030 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C00040AC (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0004118 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004194 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C00041FC (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0004264 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C00042CC (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C000435C (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C00043E4 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0004528 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C00045B8 (CiLogTurboEngaged.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B0C0 (CiCreateTaskIndexClientFromThread.c)
 *     CiSystemThrottleNdis @ 0x1C000B760 (CiSystemThrottleNdis.c)
 *     CiConfigReadDWORD @ 0x1C000D5E0 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D670 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000DAE0 (CiConfigQueryValue.c)
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
