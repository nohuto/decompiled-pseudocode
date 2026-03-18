/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x14048C07C
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140003E2C (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x140805A90 (KdpTimeSlipWork.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
