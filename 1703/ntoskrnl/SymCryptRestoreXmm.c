/*
 * XREFs of SymCryptRestoreXmm @ 0x1401FDBEC
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14017A6A8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
