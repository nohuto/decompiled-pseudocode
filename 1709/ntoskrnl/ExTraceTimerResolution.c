/*
 * XREFs of ExTraceTimerResolution @ 0x1404521F0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404F1610 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PoTraceSystemTimerResolution @ 0x1404494F8 (PoTraceSystemTimerResolution.c)
 *     PoRundownSystemTimer @ 0x140452240 (PoRundownSystemTimer.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 */

void __fastcall ExTraceTimerResolution(__int64 a1)
{
  __int64 *i; // rbx

  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
    PoTraceSystemTimerResolution(1, (__int64)(i - 206));
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
