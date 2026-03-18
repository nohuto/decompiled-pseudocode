/*
 * XREFs of KeEnumerateNextProcessor @ 0x140034620
 * Callers:
 *     KeFlushQueuedDpcs @ 0x140004DD0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     PpmParkSteerInterrupts @ 0x140033FB0 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140034710 (KeIntSteerPeriodic.c)
 *     PpmParkDistributeUtility @ 0x140035950 (PpmParkDistributeUtility.c)
 *     PpmParkReportUnparkedCores @ 0x1400369B0 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x1400369E0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140036A30 (PpmParkUnblockIdle.c)
 *     PpmPerfApplyLatencyHints @ 0x140036AA0 (PpmPerfApplyLatencyHints.c)
 *     PpmCheckMakeupSkippedChecks @ 0x140036B10 (PpmCheckMakeupSkippedChecks.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140036BE0 (PpmParkCalculateCoreParkingMask.c)
 *     PopQueueTargetDpc @ 0x140038F50 (PopQueueTargetDpc.c)
 *     PopCheckForIdleness @ 0x140073BB0 (PopCheckForIdleness.c)
 *     PpmPerfMinimumPerfReached @ 0x1400C062C (PpmPerfMinimumPerfReached.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x1400C6C54 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     PpmIdlePrepare @ 0x14010DF60 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 *     PpmPerfApplyProcessorStates @ 0x14016B790 (PpmPerfApplyProcessorStates.c)
 *     PpmParkRegisterParking @ 0x14017F43C (PpmParkRegisterParking.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14022DD70 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1402463C0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1402465D0 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140247800 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1402478BC (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14024A018 (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14024A7F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoExecuteIdleCheck @ 0x140271800 (PoExecuteIdleCheck.c)
 *     PpmEstimateIdleDuration @ 0x140271D48 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140272498 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140273330 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140273CF8 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x14027E7EC (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x14027F160 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x14027F470 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x140282200 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14047B818 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x140481D94 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1404826F8 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x140483D08 (PnprQuiesceProcessors.c)
 *     PopEtIsrDpcQuery @ 0x14056DE40 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x140573E68 (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x140640644 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x140655C50 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140741A70 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfResizeHistoryAll @ 0x1407612EC (PpmPerfResizeHistoryAll.c)
 *     PpmUpdatePerfStates @ 0x140761350 (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x1408B7998 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_6:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( (unsigned __int16)++*((_WORD *)a2 + 8) < v3 )
    {
      v4 = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_6;
    }
    return 3221226021LL;
  }
}
