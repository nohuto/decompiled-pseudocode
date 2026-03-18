/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x14048DB94
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140003E2C (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     ExTraceTimerResolution @ 0x14048C1D0 (ExTraceTimerResolution.c)
 *     NtSetTimerResolution @ 0x14048CE8C (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PopPolicyTimeChange @ 0x1405EF280 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x1407BC1A0 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x140805A90 (KdpTimeSlipWork.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
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
