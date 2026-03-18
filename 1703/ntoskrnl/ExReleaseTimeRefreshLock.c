/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x14045E2D4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14003C378 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x14078B790 (KdpTimeSlipWork.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
