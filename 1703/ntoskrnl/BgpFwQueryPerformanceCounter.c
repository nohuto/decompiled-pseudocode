/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x1401406BC
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x1407551BC (AnFwpProgressAnimationManual.c)
 *     LogFwReport @ 0x140755B14 (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407577C0 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x140757900 (LogFwStat.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER __stdcall BgpFwQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  return KeQueryPerformanceCounter(PerformanceFrequency);
}
