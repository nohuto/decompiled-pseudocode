/*
 * XREFs of SymCryptRestoreXmm @ 0x1402412A8
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401A476C (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
