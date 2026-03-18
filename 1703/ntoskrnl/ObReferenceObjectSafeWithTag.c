/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1400EFD50
 * Callers:
 *     IoNotifyQuotaState @ 0x140004710 (IoNotifyQuotaState.c)
 *     MiViewMayContainPage @ 0x140014728 (MiViewMayContainPage.c)
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14003BA00 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     MiCapturePfnVm @ 0x140078F10 (MiCapturePfnVm.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400ED6B0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 *     KiMonitorCacheErrata @ 0x140205460 (KiMonitorCacheErrata.c)
 *     ExpGetNextCallback @ 0x14045AD40 (ExpGetNextCallback.c)
 *     PspGetNextChildJob @ 0x1404786C4 (PspGetNextChildJob.c)
 *     PspEnforceLimits @ 0x140478970 (PspEnforceLimits.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEnforceLimitsProcessCallback @ 0x1404798A0 (PspEnforceLimitsProcessCallback.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     PspGetNextJob @ 0x14054B100 (PspGetNextJob.c)
 *     PspGetNextJobProcess @ 0x14054D334 (PspGetNextJobProcess.c)
 *     PspGetPreviousProcessThread @ 0x14054EFE0 (PspGetPreviousProcessThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406E1118 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406E1890 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
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
