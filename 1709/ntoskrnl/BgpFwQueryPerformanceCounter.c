/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14013B95C
 * Callers:
 *     LogFwReport @ 0x1407CE4FC (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407CFBD0 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x1407CFD10 (LogFwStat.c)
 *     AnFwpProgressAnimationManual @ 0x1407D3DA8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
