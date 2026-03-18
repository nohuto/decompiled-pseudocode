/*
 * XREFs of KeCopyAffinityEx @ 0x14005B740
 * Callers:
 *     KeIntSteerPeriodic @ 0x140002920 (KeIntSteerPeriodic.c)
 *     KxFlushNonGlobalTb @ 0x14005B3D0 (KxFlushNonGlobalTb.c)
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     PpmParkReportMask @ 0x1400901C0 (PpmParkReportMask.c)
 *     KiForwardTick @ 0x140093460 (KiForwardTick.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140095700 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KxFlushSingleTb @ 0x1400CA228 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1401174F8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeQueryActiveProcessorAffinity @ 0x140138EE0 (KeQueryActiveProcessorAffinity.c)
 *     KxFlushEntireTb @ 0x140143A74 (KxFlushEntireTb.c)
 *     KeSynchronizeAddressPolicy @ 0x14017B194 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14020B770 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14020C534 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x14023A530 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x14023BE10 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 *     KeInitializeProfile @ 0x1406D8594 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1406D8620 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1406F5D30 (PpmInstallCoordinatedIdleStates.c)
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 result; // ax
  __int64 v4; // rcx

  *(_WORD *)a1 = *a2;
  *(_WORD *)(a1 + 2) = a2[1];
  result = 0;
  for ( *(_DWORD *)(a1 + 4) = 0; result < *a2; *(_QWORD *)(8 * v4 + a1 + 8) = *(_QWORD *)&a2[4 * v4 + 4] )
    v4 = result++;
  return result;
}
