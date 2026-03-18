/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140047790
 * Callers:
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140006284 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x140007340 (KeQueryTotalCycleTimeThread.c)
 *     KiCheckKeepAlive @ 0x140027E18 (KiCheckKeepAlive.c)
 *     KiSendClockInterruptToClockOwner @ 0x14002EA08 (KiSendClockInterruptToClockOwner.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     KeFlushQueuedDpcs @ 0x14006D5B0 (KeFlushQueuedDpcs.c)
 *     PoGetIdleTimes @ 0x140088C1C (PoGetIdleTimes.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     PoIdle @ 0x1400F4340 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400F60C0 (PpmIdlePrepare.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14012CDF4 (ExpUpdateTimerConfiguration.c)
 *     KeUpdateThreadTag @ 0x1401307B0 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x14015B9D0 (PpmIdleSelectStates.c)
 *     PpmInstallNewIdleStates @ 0x14015F2A0 (PpmInstallNewIdleStates.c)
 *     KiStopProfileTarget @ 0x1402023D0 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x140203980 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1402055D0 (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x1402275F0 (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x140229130 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140229594 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140229858 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140229DA0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140229F10 (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402331F0 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x1402333F8 (PpmCapturePerformanceDistribution.c)
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 *     KiUpdateProcessorCount @ 0x140410E0C (KiUpdateProcessorCount.c)
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x1404189B0 (KiConfigureHeteroProcessorsTarget.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140418DA0 (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x1405A8220 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     KiIntSteerInit @ 0x140817BD8 (KiIntSteerInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(_WORD *a1, int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( (unsigned __int16)*a1 <= (unsigned int)v4 )
    *a1 = v4 + 1;
  v5 = *(_QWORD *)&a1[4 * v4 + 4];
  v6 = &a1[4 * v4];
  result = v3;
  _bittestandset64(&v5, v3);
  *((_QWORD *)v6 + 1) = v5;
  return result;
}
