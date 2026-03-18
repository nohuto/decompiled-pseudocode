/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140047190
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     HvlParkedVirtualProcessors @ 0x1401E94E8 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x1402023D0 (KiStopProfileTarget.c)
 *     PoExecuteIdleCheck @ 0x1402275F0 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x140227750 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140229858 (PpmUnlockProcessors.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x1404189B0 (KiConfigureHeteroProcessorsTarget.c)
 *     PspSetEffectiveJobLimits @ 0x14054CE94 (PspSetEffectiveJobLimits.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140595E2C (PspSetProcessAffinityUpdateMode.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x1405C02B8 (PpmCheckReInit.c)
 *     PpmParkParkingAvailable @ 0x1405C0510 (PpmParkParkingAvailable.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405C0998 (PpmHeteroDetectFavoredCores.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1405C0B60 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
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
