/*
 * XREFs of GreEnableWindowResizeOptimization @ 0x1C0124674
 * Callers:
 *     NtUserEnableWindowResizeOptimization @ 0x1C0124620 (NtUserEnableWindowResizeOptimization.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreEnableWindowResizeOptimization(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( !gfDwmResizeOptimizationOverride )
  {
    gdwDwmResizeOptimizationOptions = a1;
    gdwDwmResizeTimeoutGdi = a2;
    gdwDwmResizeTimeoutModern = a3;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  SEMOBJ::vUnlock((SEMOBJ *)&v7);
  return 1LL;
}
