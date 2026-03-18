/*
 * XREFs of KeCopyAffinityEx @ 0x1400D9480
 * Callers:
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140045000 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     PpmParkReportMask @ 0x140046D50 (PpmParkReportMask.c)
 *     KxFlushNonGlobalTb @ 0x140063D58 (KxFlushNonGlobalTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KiForwardTick @ 0x1400F2D20 (KiForwardTick.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KxFlushSingleTb @ 0x14010DF88 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     KxFlushEntireTb @ 0x1401590F4 (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x140160880 (KeQueryActiveProcessorAffinity.c)
 *     KeSynchronizeAddressPolicy @ 0x14017BA00 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402030B4 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402055D0 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x140205F44 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140227750 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140228F60 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1406A0B20 (PnpReplacePartitionUnit.c)
 *     KeInitializeProfile @ 0x1406AD294 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1406AD320 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1406C5A80 (PpmInstallCoordinatedIdleStates.c)
 *     ExpProfileCreate @ 0x1407203E0 (ExpProfileCreate.c)
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
