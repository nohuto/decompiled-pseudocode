/*
 * XREFs of PspUnlockJob @ 0x1405102A0
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1404454F8 (PspSetJobIoRateControl.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspNotificationPacketCallback @ 0x14050CDB0 (PspNotificationPacketCallback.c)
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14050DA38 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x14050DAFC (PspQueryJobHierarchyProcessIdList.c)
 *     PspLockRootJobFromProcess @ 0x14050DFD0 (PspLockRootJobFromProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14050E678 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspChargeJobWakeCounter @ 0x14050F8C0 (PspChargeJobWakeCounter.c)
 *     PspGetNextChildJob @ 0x14050FA98 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x14050FDA0 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x14051259C (PspSendProcessNotificationToJobChain.c)
 *     PspJobClose @ 0x140512B10 (PspJobClose.c)
 *     PspJobNotificationWorker @ 0x14057F6D0 (PspJobNotificationWorker.c)
 *     PsInsertPermanentSiloContextEx @ 0x1405BFEB8 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140714CB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140714F44 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140717ADC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x140717C7C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x14071835C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v3);
  }
}
