/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1401E5D98
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x14013890C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpCommitLpIndices @ 0x14017B4BC (HvlpCommitLpIndices.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14017B6EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x14017B8E8 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1401E4A10 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401E4B54 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1401E4DBC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1401E5160 (HvlQueryNumaDistance.c)
 *     HvlpDepositPages @ 0x1401E567C (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401E586C (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401E5A3C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1401E5C54 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1401E6520 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpStartLogicalProcessor @ 0x1401E673C (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1401E6868 (HvlpStartVirtualProcessor.c)
 *     HvlEnterSleepState @ 0x1401E6960 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401E6E50 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1401E6F80 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1401E7080 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1401E71B0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1401E72A0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1401E7330 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401E75D0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1401E7690 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1401E771C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1401E7890 (HvlQueryAssociatedProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401E79A0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401E7C60 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1401E7DE4 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1401E7E70 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1401E7F00 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1401E7F90 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401E8590 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401E86D0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401E8980 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401E8D18 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401E8DD0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401E8E7C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1401E948C (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1401E9554 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401E9668 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1401E986C (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1401E98DC (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1401E9BE4 (HvlpSetPowerProperty.c)
 *     HvlpDetermineEnlightenments @ 0x1401E9D50 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1401EA12C (HvlpQueryExtendedCapabilities.c)
 *     HvlCollectLivedump @ 0x1401EA82C (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1401EB060 (HvlpCheckTscSync.c)
 *     HvlpLogIommuInitStatus @ 0x1401EB3AC (HvlpLogIommuInitStatus.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1401EBE4C (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushListTb @ 0x1401EBED8 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401EC028 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1401EC488 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x140269B10 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x140269C18 (HvlNotifyPageHeat.c)
 *     HvlMapGpaPages @ 0x140269DC4 (HvlMapGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1406876B8 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140832954 (HvlpLpCpuid.c)
 * Callees:
 *     <none>
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
    v4 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8) + 24816LL);
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
