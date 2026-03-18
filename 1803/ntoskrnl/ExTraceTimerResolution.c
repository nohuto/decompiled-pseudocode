/*
 * XREFs of ExTraceTimerResolution @ 0x14048C1D0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     PoRundownSystemTimer @ 0x14048C230 (PoRundownSystemTimer.c)
 *     PoTraceSystemTimerResolution @ 0x14048D050 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x14048DB94 (ExAcquireTimeRefreshLock.c)
 */

void __fastcall ExTraceTimerResolution(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *i; // rbx

  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
  {
    LOBYTE(v1) = 1;
    PoTraceSystemTimerResolution(v1, i - 206);
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
