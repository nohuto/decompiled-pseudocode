/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1400FED50
 * Callers:
 *     IoNotifyQuotaState @ 0x1400020D0 (IoNotifyQuotaState.c)
 *     PsGetNextPartitionUnsafe @ 0x14000457C (PsGetNextPartitionUnsafe.c)
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     MiViewMayContainPage @ 0x1400823C0 (MiViewMayContainPage.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1400CFD50 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiSelectSessionAttachProcess @ 0x1400E174C (MiSelectSessionAttachProcess.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F3D30 (AlpcpLookasidePacketCallbackRoutine.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     MiCapturePfnVm @ 0x140124730 (MiCapturePfnVm.c)
 *     KiMonitorCacheErrata @ 0x140249BD0 (KiMonitorCacheErrata.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x1404E8C3C (PspGetPreviousProcessThread.c)
 *     PspGetNextJobProcess @ 0x14052F0B0 (PspGetNextJobProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x14052FA34 (PopEtGetNextEnergyTracker.c)
 *     PspGetNextJob @ 0x1405352AC (PspGetNextJob.c)
 *     PspEnforceLimits @ 0x140536480 (PspEnforceLimits.c)
 *     PspGetNextChildJob @ 0x140536680 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEnforceLimitsProcessCallback @ 0x1405375E0 (PspEnforceLimitsProcessCallback.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x14057EE90 (ExpGetNextCallback.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14077B3B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x14077BBE0 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
