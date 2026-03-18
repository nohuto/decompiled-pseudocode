/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140034480
 * Callers:
 *     KeFlushQueuedDpcs @ 0x140004DD0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x140004E90 (ExpUpdateTimerConfiguration.c)
 *     KiSendClockInterruptToClockOwner @ 0x140005910 (KiSendClockInterruptToClockOwner.c)
 *     PpmParkSteerInterrupts @ 0x140033FB0 (PpmParkSteerInterrupts.c)
 *     PoGetIdleTimes @ 0x14003837C (PoGetIdleTimes.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14007EC7C (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeDisableTimer2 @ 0x140087498 (KeDisableTimer2.c)
 *     KiCheckKeepAlive @ 0x1400BB894 (KiCheckKeepAlive.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1400C6718 (PoGetPerfStateAndParkingInfo.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     PoIdle @ 0x14010B740 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x14010DF60 (PpmIdlePrepare.c)
 *     KeUpdateThreadTag @ 0x140143DE0 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 *     PpmInstallNewIdleStates @ 0x1401805B0 (PpmInstallNewIdleStates.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14023F6F0 (KiConfigureHeteroProcessorsTarget.c)
 *     KiStopProfileTarget @ 0x1402465D0 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x1402478BC (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140249D74 (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x140271800 (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x1402735D0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140273A34 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140273CF8 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140274230 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402743A0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14027E7EC (PpmCapturePerformanceDistribution.c)
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x14047BC08 (KiUpdateProcessorCount.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140484800 (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x1406277D0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     KiIntSteerInit @ 0x1408B3130 (KiIntSteerInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(_WORD *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( (unsigned __int16)*a1 <= (unsigned int)v4 )
    *a1 = v4 + 1;
  v5 = (unsigned int)v4;
  v6 = *(_QWORD *)&a1[4 * v4 + 4];
  result = v3;
  _bittestandset64(&v6, v3);
  *(_QWORD *)&a1[4 * v5 + 4] = v6;
  return result;
}
