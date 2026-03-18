/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x140563098
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14003C378 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     ExTraceTimerResolution @ 0x140453F58 (ExTraceTimerResolution.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     NtSetTimerResolution @ 0x140561E44 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     ExpRefreshSystemTime @ 0x1405A57F4 (ExpRefreshSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x140715FA8 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x140716E0C (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x14078B790 (KdpTimeSlipWork.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
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
