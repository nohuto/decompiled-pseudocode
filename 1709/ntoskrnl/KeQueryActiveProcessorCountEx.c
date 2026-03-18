/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x14008D0E0
 * Callers:
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400087EC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     KiFlushViaHypervisor @ 0x140059270 (KiFlushViaHypervisor.c)
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KiOutSwapKernelStacks @ 0x1400ACF64 (KiOutSwapKernelStacks.c)
 *     PopCheckForIdleness @ 0x1400B0C20 (PopCheckForIdleness.c)
 *     KiGenericCallDpcWorker @ 0x1400D04D0 (KiGenericCallDpcWorker.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FBEB0 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeQueue @ 0x14011C630 (KeInitializeQueue.c)
 *     KiAddProcessorToGroupDatabase @ 0x140139280 (KiAddProcessorToGroupDatabase.c)
 *     KeIpiGenericCall @ 0x140143640 (KeIpiGenericCall.c)
 *     KeBalanceSetManager @ 0x140148E40 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x140153994 (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x1401E60EC (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401EEAD8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1401EF460 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1401F5874 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401F89B0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x1402019CC (KdpSetCommonState.c)
 *     KeAdjustInterruptTime @ 0x14020358C (KeAdjustInterruptTime.c)
 *     KeQueryActiveProcessorCount @ 0x140204090 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140204778 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140207720 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140209740 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x14023C230 (PpmSetPlatformIdleDurationHint.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140264BC0 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeRestoreMtrrBroadcast @ 0x140426B74 (KeRestoreMtrrBroadcast.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1404875F0 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1405F2044 (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x1406B0DFC (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x1406B4640 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1406D7A50 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 *     KdpAllowDisable @ 0x1407992C8 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x140799314 (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x140799408 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1407994F0 (KdpSysWriteControlSpace.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140838BF8 (KiIntSteerInit.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140401408[GroupNumber] - (((unsigned __int64)qword_140401408[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
