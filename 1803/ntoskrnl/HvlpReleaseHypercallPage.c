/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140159B9C
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x14014E050 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpSlowFlushListTb @ 0x140159940 (HvlpSlowFlushListTb.c)
 *     HvlLpReadMultipleMsr @ 0x140159A80 (HvlLpReadMultipleMsr.c)
 *     HvlpCommitLpIndices @ 0x1401A55CC (HvlpCommitLpIndices.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401A57C4 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlGetCoverageData @ 0x140226864 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x140226998 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x140226C68 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1402270A0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1402272C4 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140227768 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140227944 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140227B9C (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1402283A0 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1402285B0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140228634 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140228760 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140228B40 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140228C20 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140228E60 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1402291A0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1402293B0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1402298A0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1402299D0 (HvlLpReadCpuid.c)
 *     HvlLpWriteMultipleMsr @ 0x140229AD0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140229BC0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140229C50 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140229EF0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140229FB0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x14022A03C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x14022A1B0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x14022A2B0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x14022A460 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x14022A690 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x14022A814 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x14022A8A0 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x14022A930 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x14022A9C0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x14022AFB0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x14022B0F0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x14022B3A0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x14022B7B4 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14022B868 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14022B914 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x14022BE84 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x14022BF80 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14022C094 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x14022C200 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x14022C268 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x14022C564 (HvlpSetPowerProperty.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x14022C620 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlCollectLivedump @ 0x14022C9EC (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14022D518 (HvlpCheckTscSync.c)
 *     HvlpLogIommuInitStatus @ 0x14022D864 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14022E3AC (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14022E7DC (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14022E874 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x14022E97C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14022EE04 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x1402CA3C0 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1402CA680 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1402CA7E4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1402CA904 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140717C40 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x1408DE074 (HvlpLpCpuid.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
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
