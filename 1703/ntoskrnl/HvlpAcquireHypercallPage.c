/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1401E5364
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
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HvlpAcquireHypercallPage(PHYSICAL_ADDRESS *a1, LONG a2, __int64 a3, __int64 a4)
{
  __int64 HypercallCachedPages; // rsi
  __int16 v9; // ax
  struct _KPRCB *v10; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  unsigned __int64 v14; // rbx
  PHYSICAL_ADDRESS Next; // rax
  unsigned __int8 CurrentIrql; // al
  __int16 v17; // ax
  struct _KPRCB *v18; // rax
  __int16 v19; // [rsp+40h] [rbp-8h]

  HypercallCachedPages = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    v14 = (unsigned __int64)v13;
    if ( v13 )
    {
      a1[2].QuadPart = (LONGLONG)v13;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
    }
    else
    {
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( !a3 )
      {
        a1->LowPart = 4;
        v17 = v19;
        _disable();
        a1[1].HighPart = a2;
        LOBYTE(a1[1].LowPart) = (v17 & 0x200) != 0;
        v18 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
          return (__int64)v18->HypercallCachedPages;
        if ( (a2 & 2) != 0 )
          return (__int64)v18->HypercallCachedPages + 4096;
        return v14;
      }
      v14 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( ((v14 ^ (v14 + a4 - 1)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        v14 = (v14 + a4 - 1) & 0xFFFFFFFFFFFFF000uLL;
      a1->LowPart = 2;
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(a1[1].LowPart) = CurrentIrql;
      if ( CurrentIrql < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      Next = MmGetPhysicalAddress((PVOID)v14);
    }
    a1[3] = Next;
    return v14;
  }
  a1->LowPart = 4;
  v9 = v19;
  _disable();
  a1[1].HighPart = a2;
  LOBYTE(a1[1].LowPart) = (v9 & 0x200) != 0;
  v10 = KeGetCurrentPrcb();
  if ( (a2 & 1) != 0 )
  {
    HypercallCachedPages = (__int64)v10->HypercallCachedPages;
  }
  else if ( (a2 & 2) != 0 )
  {
    HypercallCachedPages = (__int64)v10->HypercallCachedPages + 4096;
  }
  result = HypercallCachedPages;
  a1[3] = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16);
  return result;
}
