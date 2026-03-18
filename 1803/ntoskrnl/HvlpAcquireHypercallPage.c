/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140159BD4
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
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HvlpAcquireHypercallPage(PHYSICAL_ADDRESS *a1, LONG a2, __int64 a3, __int64 a4)
{
  __int64 HypercallCachedPages; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v10; // rax
  void *v11; // rbx
  PHYSICAL_ADDRESS Next; // rax
  __int64 result; // rax
  __int16 v14; // ax
  struct _KPRCB *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  __int16 v19; // ax
  struct _KPRCB *v20; // rax
  __int16 v21; // [rsp+40h] [rbp-8h]

  HypercallCachedPages = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    v11 = v10;
    if ( v10 )
    {
      a1[2].QuadPart = (LONGLONG)v10;
      Next = (PHYSICAL_ADDRESS)v10[1].Next;
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
      goto LABEL_4;
    }
    if ( (a2 & 4) == 0 )
    {
      if ( !a3 )
      {
        a1->LowPart = 4;
        v19 = v21;
        _disable();
        a1[1].HighPart = a2;
        LOBYTE(a1[1].LowPart) = (v19 & 0x200) != 0;
        v20 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
          return (__int64)v20->HypercallCachedPages;
        if ( (a2 & 2) != 0 )
          return (__int64)v20->HypercallCachedPages + 4096;
        return (__int64)v11;
      }
      v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v17 = v16 + a4 - 1;
      v11 = (void *)(v17 & 0xFFFFFFFFFFFFF000uLL);
      if ( ((v16 ^ v17) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        v11 = (void *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      a1->LowPart = 2;
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(a1[1].LowPart) = CurrentIrql;
      if ( CurrentIrql < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      Next = MmGetPhysicalAddress(v11);
LABEL_4:
      a1[3] = Next;
      return (__int64)v11;
    }
    return 0LL;
  }
  else
  {
    a1->LowPart = 4;
    v14 = v21;
    _disable();
    a1[1].HighPart = a2;
    LOBYTE(a1[1].LowPart) = (v14 & 0x200) != 0;
    v15 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages + 4096;
    }
    result = HypercallCachedPages;
    a1[3] = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16);
  }
  return result;
}
