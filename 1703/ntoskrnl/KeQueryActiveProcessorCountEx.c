/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140089140
 * Callers:
 *     KeInitializeQueue @ 0x140024C20 (KeInitializeQueue.c)
 *     KiOutSwapKernelStacks @ 0x14002B858 (KiOutSwapKernelStacks.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14003A2A8 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KiGenericCallDpcWorker @ 0x140040740 (KiGenericCallDpcWorker.c)
 *     PopCheckForIdleness @ 0x140070D60 (PopCheckForIdleness.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140080400 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140088870 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14013C420 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x14013DE70 (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x140147FF0 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x14015509C (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x14015E600 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x140163608 (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x1401E1F2C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401E99F8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x1401EA230 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x1401F0144 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1401F3000 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x1401FBCAC (KdpSetCommonState.c)
 *     KeQueryActiveProcessorCount @ 0x1401FDEC0 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x1401FE4D8 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x140201330 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x140203448 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140229380 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x140412370 (KeRestoreMtrrBroadcast.c)
 *     ExProcessorCounterSetCallback @ 0x1404F65F0 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x1405D5B10 (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x1406859F0 (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x14068865C (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x1406AC760 (KiSynchCounterSetCallback.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     KdpAllowDisable @ 0x14078C0A4 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x14078C0F0 (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x14078C1E4 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x14078C2CC (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140817C90 (KiIntSteerDetermineSteeringEnabled.c)
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
    v2 = qword_1403E42B8[GroupNumber] - (((unsigned __int64)qword_1403E42B8[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
