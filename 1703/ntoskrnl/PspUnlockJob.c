/*
 * XREFs of PspUnlockJob @ 0x140479650
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x14041EBBC (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140446EEC (PspQueryJobHierarchyProcessIdList.c)
 *     PspJobNotificationWorker @ 0x14044A260 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x14044D060 (PspNotificationPacketCallback.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140478450 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x1404786C4 (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140478790 (PspChargeJobWakeCounter.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140479260 (PspEnforceLimitsJobPostCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x140546E24 (PspSendProcessNotificationToJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405471A8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     PspLockRootJobFromProcess @ 0x140547770 (PspLockRootJobFromProcess.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PspGetNextJobProcess @ 0x14054D334 (PspGetNextJobProcess.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x140560980 (PspJobClose.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PsInsertPermanentSiloContextEx @ 0x1405A3A00 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1406DE840 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1406DEAE8 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406E17A8 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSetNetRateControl @ 0x1406E1F2C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int16 v4; // ax

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    v4 = *(_WORD *)(a2 + 486) + 1;
    *(_WORD *)(a2 + 486) = v4;
    if ( !v4 && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v3);
  }
}
