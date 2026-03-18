/*
 * XREFs of PnpWatchdogBugcheckWatchCallback @ 0x1405F4180
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogBugcheckConfigure @ 0x14060594C (PnpWatchdogBugcheckConfigure.c)
 */

__int64 __fastcall PnpWatchdogBugcheckWatchCallback(void *a1)
{
  return PnpWatchdogBugcheckConfigure(a1);
}
