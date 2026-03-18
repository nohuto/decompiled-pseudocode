/*
 * XREFs of KeEnumerateNextProcessor @ 0x1400459E0
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KiIntSteerDistributeInterrupts @ 0x140045400 (KiIntSteerDistributeInterrupts.c)
 *     PpmParkReportUnparkedCores @ 0x1400457F0 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x140045820 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140045870 (PpmParkUnblockIdle.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1400465B0 (PpmCheckMakeupSkippedChecks.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140046CD0 (PpmParkCalculateCoreParkingMask.c)
 *     PpmCheckComputeEnergy @ 0x140046D20 (PpmCheckComputeEnergy.c)
 *     PpmPerfApplyLatencyHints @ 0x1400471C0 (PpmPerfApplyLatencyHints.c)
 *     PpmParkDistributeUtility @ 0x140047310 (PpmParkDistributeUtility.c)
 *     KeFlushQueuedDpcs @ 0x14006D5B0 (KeFlushQueuedDpcs.c)
 *     PopCheckForIdleness @ 0x140070D60 (PopCheckForIdleness.c)
 *     PopQueueTargetDpc @ 0x1400889A0 (PopQueueTargetDpc.c)
 *     PpmPerfMinimumPerfReached @ 0x140088A50 (PpmPerfMinimumPerfReached.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     PpmIdlePrepare @ 0x1400F60C0 (PpmIdlePrepare.c)
 *     PpmPerfApplyProcessorStates @ 0x140146A10 (PpmPerfApplyProcessorStates.c)
 *     KiIntSteerDisable @ 0x14014BA4C (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14014C4CC (KiIntSteerConnect.c)
 *     PpmEstimateIdleDuration @ 0x14015BDC0 (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401EA2A0 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1402021C0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1402023D0 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x1402030B4 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402038C8 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140203980 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14020587C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x140205F44 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x1402275F0 (PoExecuteIdleCheck.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140228054 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140228E94 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140229858 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x1402333F8 (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140233CA0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140233F90 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x140237400 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14041093C (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x140416250 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140416BA4 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x140418140 (PnprQuiesceProcessors.c)
 *     PopProcessorInformation @ 0x14044D5F4 (PopProcessorInformation.c)
 *     PpmPerfUpdateDomains @ 0x140581950 (PpmPerfUpdateDomains.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x1405C0DC4 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistoryAll @ 0x1405C0E1C (PpmPerfResizeHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406AC870 (KiSynchNumaCounterSetCallback.c)
 *     PpmUpdatePerfStates @ 0x1406C92D0 (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x1407F6C58 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned int v4; // r9d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx

  v2 = *a2;
  if ( *a2 )
    v4 = *v2;
  else
    v4 = *((unsigned __int16 *)a2 + 8) + 1;
  if ( a2[1] )
  {
LABEL_4:
    v5 = (unsigned __int64)a2[1];
    _BitScanForward64(&v6, v5);
    a2[1] = (unsigned __int16 *)(v5 & ~(1LL << v6));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int64)*((unsigned __int16 *)a2 + 8)
                                             + (unsigned __int8)v6];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v8 = (unsigned __int16)++*((_WORD *)a2 + 8);
      if ( (unsigned int)v8 >= v4 )
        return 3221226021LL;
      v9 = *(unsigned __int16 **)&v2[4 * v8 + 4];
      a2[1] = v9;
      if ( v9 )
        goto LABEL_4;
    }
  }
}
