/*
 * XREFs of KeCopyAffinityEx @ 0x140034E50
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140033FB0 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140034710 (KeIntSteerPeriodic.c)
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140035404 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkReportMask @ 0x140036A80 (PpmParkReportMask.c)
 *     KxFlushMultipleTb @ 0x140037C30 (KxFlushMultipleTb.c)
 *     KxFlushNonGlobalTb @ 0x1400394C0 (KxFlushNonGlobalTb.c)
 *     KxFlushSingleTb @ 0x14003B08C (KxFlushSingleTb.c)
 *     KeSynchronizeAddressPolicy @ 0x1400A3DEC (KeSynchronizeAddressPolicy.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     KiForwardTick @ 0x1401094D0 (KiForwardTick.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140109AF0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeQueryActiveProcessorAffinity @ 0x14017FF30 (KeQueryActiveProcessorAffinity.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140249D74 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14024A7F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140271960 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140273400 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 *     KeInitializeProfile @ 0x140742414 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x14074249C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14075D960 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407ABBD8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x1407C7550 (ExpProfileCreate.c)
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
