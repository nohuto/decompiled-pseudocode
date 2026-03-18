/*
 * XREFs of SymCryptRestoreXmm @ 0x140203CF4
 * Callers:
 *     SymCryptParallelSha256Process @ 0x140179EE0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
