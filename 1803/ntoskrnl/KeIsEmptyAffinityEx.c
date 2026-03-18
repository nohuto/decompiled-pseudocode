/*
 * XREFs of KeIsEmptyAffinityEx @ 0x1400352E0
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     PpmParkSteerInterrupts @ 0x140033FB0 (PpmParkSteerInterrupts.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140035180 (KiGetNextTimerExpirationDueTime.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     HvlParkedVirtualProcessors @ 0x14022BEE0 (HvlParkedVirtualProcessors.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14023F6F0 (KiConfigureHeteroProcessorsTarget.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1402465D0 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x140271800 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x140271960 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140273CF8 (PpmUnlockProcessors.c)
 *     PspSetEffectiveJobLimits @ 0x14052F1E4 (PspSetEffectiveJobLimits.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1405F33FC (PspSetProcessAffinityUpdateMode.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14063F71C (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x14063F8D0 (PpmParkParkingAvailable.c)
 *     PpmHeteroDetectFavoredCores @ 0x140640260 (PpmHeteroDetectFavoredCores.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1406403D0 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407AB938 (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax

  v1 = 0;
  if ( !*a1 )
    return 1LL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= *a1 )
      return 1LL;
  }
  return 0LL;
}
