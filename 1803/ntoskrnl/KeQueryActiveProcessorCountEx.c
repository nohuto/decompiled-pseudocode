/*
 * XREFs of KeQueryActiveProcessorCountEx @ 0x140036ED0
 * Callers:
 *     KiGenericCallDpcWorker @ 0x140004B80 (KiGenericCallDpcWorker.c)
 *     PpmCheckComputeEnergy @ 0x140036C30 (PpmCheckComputeEnergy.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PopCheckForIdleness @ 0x140073BB0 (PopCheckForIdleness.c)
 *     KiOutSwapKernelStacks @ 0x1400B29D4 (KiOutSwapKernelStacks.c)
 *     KeInitializeQueue @ 0x1400BB9B0 (KeInitializeQueue.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400CFBD0 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400D2FA0 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140109AF0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1401549A8 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 *     KeAdjustInterruptTime @ 0x140156098 (KeAdjustInterruptTime.c)
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 *     KiAddProcessorToGroupDatabase @ 0x1401760B4 (KiAddProcessorToGroupDatabase.c)
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 *     KeInitializePriQueue @ 0x140181E1C (KeInitializePriQueue.c)
 *     DbgkpLkmdSnapGlobals @ 0x14022374C (DbgkpLkmdSnapGlobals.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x14022C378 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlGetProcessorIndexFromVpIndex @ 0x14022DD00 (HvlGetProcessorIndexFromVpIndex.c)
 *     IoFillDumpHeader @ 0x140232D74 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140235DE0 (KeCapturePersistentThreadState.c)
 *     KdpSetCommonState @ 0x14023EB1C (KdpSetCommonState.c)
 *     KeQueryActiveProcessorCount @ 0x140241930 (KeQueryActiveProcessorCount.c)
 *     KeCheckForTimer @ 0x140241F58 (KeCheckForTimer.c)
 *     KeSetTargetProcessorDpc @ 0x1402453E0 (KeSetTargetProcessorDpc.c)
 *     KeSwitchFrozenProcessor @ 0x1402472C0 (KeSwitchFrozenProcessor.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140273820 (PpmSetPlatformIdleDurationHint.c)
 *     KeRestoreMtrrBroadcast @ 0x14047C5A8 (KeRestoreMtrrBroadcast.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     ExProcessorCounterSetCallback @ 0x14052B910 (ExProcessorCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 *     PopCheckSkipTick @ 0x140655AD8 (PopCheckSkipTick.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x1407158DC (FsRtlAddDiskIOCounterInstance.c)
 *     IoEnableIrpCredits @ 0x140719270 (IoEnableIrpCredits.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     KiSynchCounterSetCallback @ 0x140741960 (KiSynchCounterSetCallback.c)
 *     EtwpInitializeStackTracing @ 0x1407A72B8 (EtwpInitializeStackTracing.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 *     KdpAllowDisable @ 0x1408063A8 (KdpAllowDisable.c)
 *     KdpGetStateChange @ 0x1408063F0 (KdpGetStateChange.c)
 *     KdpSysReadControlSpace @ 0x1408064E8 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1408065D0 (KdpSysWriteControlSpace.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1408B31E8 (KiIntSteerDetermineSteeringEnabled.c)
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
    v2 = qword_14044C5D8[GroupNumber] - (((unsigned __int64)qword_14044C5D8[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
