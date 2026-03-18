/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140140FC4
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
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
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
