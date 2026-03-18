/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140090600
 * Callers:
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14010F698 (KiGetNextTimerExpirationDueTime.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14014E5A0 (KiConfigureHeteroProcessorsTarget.c)
 *     HvlParkedVirtualProcessors @ 0x1401EE644 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1402089D0 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x14023A3D0 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x14023A530 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x14023C714 (PpmUnlockProcessors.c)
 *     PspSetEffectiveJobLimits @ 0x14050B034 (PspSetEffectiveJobLimits.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405B5C34 (PpmHeteroDetectFavoredCores.c)
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x1405B6230 (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1405B6D34 (PpmHeteroComputeRelativePerformance.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1405D8D74 (PspSetProcessAffinityUpdateMode.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
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
