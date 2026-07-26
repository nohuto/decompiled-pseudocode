/*
 * XREFs of ?ndisCheckWatchdogTimer@@YAEXZ @ 0x1C00620D4
 * Callers:
 *     ndis5InterruptDpc @ 0x1C00622C0 (ndis5InterruptDpc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

bool ndisCheckWatchdogTimer(void)
{
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  return KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
      && ndisDpcWatchdogLimit
      && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit;
}
