/*
 * XREFs of KeEnumerateNextProcessor @ 0x14008F8D0
 * Callers:
 *     KeIntSteerPeriodic @ 0x140002920 (KeIntSteerPeriodic.c)
 *     KiIntSteerDistributeInterrupts @ 0x140002A00 (KiIntSteerDistributeInterrupts.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14008F400 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkReportUnparkedCores @ 0x14008F6E0 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x14008F710 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14008F760 (PpmParkUnblockIdle.c)
 *     PpmParkDistributeUtility @ 0x14008F9F0 (PpmParkDistributeUtility.c)
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     PpmPerfApplyLatencyHints @ 0x140090630 (PpmPerfApplyLatencyHints.c)
 *     PpmCheckMakeupSkippedChecks @ 0x140090AF0 (PpmCheckMakeupSkippedChecks.c)
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     PpmIdlePrepare @ 0x140099130 (PpmIdlePrepare.c)
 *     PopCheckForIdleness @ 0x1400B0C20 (PopCheckForIdleness.c)
 *     KiIntSteerConnect @ 0x1400B32A0 (KiIntSteerConnect.c)
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     PpmPerfMinimumPerfReached @ 0x1401252E4 (PpmPerfMinimumPerfReached.c)
 *     KiIntSteerDisable @ 0x14012940C (KiIntSteerDisable.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     PpmParkRegisterParking @ 0x140137E1C (PpmParkRegisterParking.c)
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 *     PpmPerfApplyProcessorStates @ 0x14014D300 (PpmPerfApplyProcessorStates.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401EF4D0 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1402087C0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1402089D0 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140209BCC (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140209C84 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14020BA1C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14020C534 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x14023A3D0 (PoExecuteIdleCheck.c)
 *     PpmEstimateIdleDuration @ 0x14023A918 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x14023AFC0 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x14023BD44 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x14023C714 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x14024876C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x1402491D0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1402494B0 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x14024C4A4 (PpmParkChooseCoresToUnpark.c)
 *     KiConfigureSchedulingInformation @ 0x14042516C (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x14042B290 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x14042BBD8 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x14042D168 (PnprQuiesceProcessors.c)
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopEtIsrDpcQuery @ 0x140459780 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14058ECEC (PopProcessorInformation.c)
 *     PpmPerfResetHistoryAll @ 0x1405B3B0C (PpmPerfResetHistoryAll.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406D7B60 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfResizeHistoryAll @ 0x1406F9E60 (PpmPerfResizeHistoryAll.c)
 *     PpmUpdatePerfStates @ 0x1406F9EC0 (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r9
  unsigned int v4; // r8d
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v2 = *a2;
  if ( *a2 )
    v4 = *v2;
  else
    v4 = *((unsigned __int16 *)a2 + 8) + 1;
  if ( a2[1] )
  {
LABEL_6:
    v7 = (unsigned __int64)a2[1];
    _BitScanForward64(&v8, v7);
    a2[1] = (unsigned __int16 *)(v7 & ~(1LL << v8));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v8];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned __int16)++*((_WORD *)a2 + 8);
      if ( (unsigned int)v5 >= v4 )
        return 3221226021LL;
      v6 = *(unsigned __int16 **)&v2[4 * v5 + 4];
      a2[1] = v6;
      if ( v6 )
        goto LABEL_6;
    }
  }
}
