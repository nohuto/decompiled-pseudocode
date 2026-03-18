/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x14059F524
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14000DDE8 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1407989B0 (KdpTimeSlipWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
