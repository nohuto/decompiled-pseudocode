/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x14046C524
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14000DDE8 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     NtSetTimerResolution @ 0x140449340 (NtSetTimerResolution.c)
 *     ExTraceTimerResolution @ 0x1404521F0 (ExTraceTimerResolution.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x1407556D4 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x1407989B0 (KdpTimeSlipWork.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 */

char __fastcall ExAcquireTimeRefreshLock(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&ExpTimeRefreshLock, a1) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
