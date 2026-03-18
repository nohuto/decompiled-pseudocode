/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140083060
 * Callers:
 *     IoNotifyQuotaState @ 0x1400072C0 (IoNotifyQuotaState.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14000D270 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14006B170 (AlpcpLookasidePacketCallbackRoutine.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     MiSelectSessionAttachProcess @ 0x140089D00 (MiSelectSessionAttachProcess.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     MiCapturePfnVm @ 0x1400E6A5C (MiCapturePfnVm.c)
 *     MiViewMayContainPage @ 0x1400F25DC (MiViewMayContainPage.c)
 *     PsGetNextPartitionUnsafe @ 0x14011C07C (PsGetNextPartitionUnsafe.c)
 *     KiMonitorCacheErrata @ 0x14020B600 (KiMonitorCacheErrata.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspGetPreviousProcessThread @ 0x1404D6EB4 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 *     PspEnforceLimits @ 0x14050F6C0 (PspEnforceLimits.c)
 *     PspGetNextChildJob @ 0x14050FA98 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspEnforceLimitsProcessCallback @ 0x140510860 (PspEnforceLimitsProcessCallback.c)
 *     PspGetNextJob @ 0x1405109D0 (PspGetNextJob.c)
 *     ExpGetNextCallback @ 0x140596410 (ExpGetNextCallback.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407173F8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140717BC0 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
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
