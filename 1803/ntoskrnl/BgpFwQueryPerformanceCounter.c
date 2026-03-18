/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x140165588
 * Callers:
 *     LogFwReport @ 0x14083B7D8 (LogFwReport.c)
 *     LogFwStat @ 0x14083B8CC (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x14083D3A0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x140840924 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
