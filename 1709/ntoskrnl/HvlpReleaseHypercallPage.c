/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140140F8C
 * Callers:
 *     HvlpSlowFlushListTb @ 0x140140D44 (HvlpSlowFlushListTb.c)
 *     HvlLpReadMultipleMsr @ 0x140140E70 (HvlLpReadMultipleMsr.c)
 *     HvlpCommitLpIndices @ 0x14017AD2C (HvlpCommitLpIndices.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14017AF44 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlGetCoverageData @ 0x1401E96F4 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401E9824 (HvlGetCoverageInfo.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1401E9A4C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlResetCoverageVector @ 0x1401E9B78 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1401E9FF0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1401EA214 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401EA6B8 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401EA89C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1401EAAFC (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1401EB32C (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1401EB53C (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1401EB5C0 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1401EB6EC (HvlpStartVirtualProcessor.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1401EBA30 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlEnterSleepState @ 0x1401EBD60 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401EC200 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1401EC330 (HvlLpReadCpuid.c)
 *     HvlLpWriteMultipleMsr @ 0x1401EC430 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1401EC520 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1401EC5B0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401EC850 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1401EC910 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1401EC99C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1401ECB10 (HvlQueryAssociatedProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401ECC30 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401ECE60 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1401ECFE8 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1401ED070 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1401ED100 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1401ED190 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401ED780 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401ED8C0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401EDB70 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401EDF14 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401EDFCC (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401EE078 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1401EE5E8 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1401EE6E4 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401EE7F8 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1401EE964 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1401EE9CC (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1401EECC4 (HvlpSetPowerProperty.c)
 *     HvlpDetermineEnlightenments @ 0x1401EEFA8 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1401EF360 (HvlpQueryExtendedCapabilities.c)
 *     HvlCollectLivedump @ 0x1401EF9DC (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1401F02EC (HvlpCheckTscSync.c)
 *     HvlpLogIommuInitStatus @ 0x1401F0638 (HvlpLogIommuInitStatus.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x1401F08E4 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1401F0DA0 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401F0E2C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1401F1288 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x140294874 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x140294980 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140294B40 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140294CA4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140294DC0 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1406B30D4 (HvlpCreateRootVirtualProcessor.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 *     HvlpLpCpuid @ 0x140869840 (HvlpLpCpuid.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall HvlpReleaseHypercallPage(__int64 a1)
{
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v2; // rdx
  _SLIST_ENTRY *v3; // rax
  _SLIST_HEADER *v4; // rcx
  __int64 v5; // rax
  int v6; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  bool v8; // zf

  HypercallCachedPages = 0LL;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v2 = *(_SLIST_ENTRY **)(a1 + 16);
    v3 = *(_SLIST_ENTRY **)(a1 + 24);
    v4 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8) + 24640LL);
    v2[1].Next = v3;
    LOBYTE(v5) = (unsigned __int8)RtlpInterlockedPushEntrySList(v4, v2);
  }
  else if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    LOBYTE(v5) = *(_BYTE *)(a1 + 8);
    if ( (unsigned __int8)v5 < 2u )
      __writecr8((unsigned __int8)v5);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 12);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (v6 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages;
    }
    else if ( (v6 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages + 4096;
    }
    v8 = *(_BYTE *)(a1 + 8) == 0;
    v5 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(HypercallCachedPages + 16) = v5;
    if ( !v8 )
      _enable();
  }
  return v5;
}
