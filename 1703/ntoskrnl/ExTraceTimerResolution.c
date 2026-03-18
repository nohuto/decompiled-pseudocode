/*
 * XREFs of ExTraceTimerResolution @ 0x140453F58
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PoRundownSystemTimer @ 0x140453FB8 (PoRundownSystemTimer.c)
 *     PoTraceSystemTimerResolution @ 0x140561FFC (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
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
