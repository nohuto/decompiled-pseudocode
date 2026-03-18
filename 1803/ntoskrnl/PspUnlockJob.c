/*
 * XREFs of PspUnlockJob @ 0x140536FD0
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140489B40 (PspSetJobIoRateControl.c)
 *     PspJobNotificationWorker @ 0x14052DE40 (PspJobNotificationWorker.c)
 *     PspGetNextJobProcess @ 0x14052F0B0 (PspGetNextJobProcess.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405325F8 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x140532A40 (PspSendProcessNotificationToJobChain.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140532EEC (PspQueryJobHierarchyProcessIdList.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x1405348AC (PspLockRootJobFromProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405361A8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x140536680 (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140536740 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140536B14 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 *     PspNotificationPacketCallback @ 0x140576080 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1405797B0 (PspJobClose.c)
 *     PsInsertPermanentSiloContextEx @ 0x140620658 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140778EA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140779130 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14077BAFC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x14077BC9C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x14077C38C (PspSetNetRateControl.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
}
