/*
 * XREFs of KeAddProcessorAffinityEx @ 0x14008EC40
 * Callers:
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14000972C (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14000B3F4 (PoGetPerfStateAndParkingInfo.c)
 *     KeUpdateThreadTag @ 0x14000B720 (KeUpdateThreadTag.c)
 *     ExpUpdateTimerConfiguration @ 0x140015418 (ExpUpdateTimerConfiguration.c)
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 *     KeQueryTotalCycleTimeThread @ 0x14008D6A0 (KeQueryTotalCycleTimeThread.c)
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     PoIdle @ 0x1400967A0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x140099130 (PpmIdlePrepare.c)
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x14010F0C8 (KiSendClockInterruptToClockOwner.c)
 *     KiCheckKeepAlive @ 0x14011C7A8 (KiCheckKeepAlive.c)
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 *     PpmInstallNewIdleStates @ 0x14014CC90 (PpmInstallNewIdleStates.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x14014E5A0 (KiConfigureHeteroProcessorsTarget.c)
 *     KiStopProfileTarget @ 0x1402089D0 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x140209C84 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14020B770 (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x14023A3D0 (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x14023BFE0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x14023C450 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x14023C714 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x14023CC50 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x14023CDC0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14024876C (PpmCapturePerformanceDistribution.c)
 *     KiUpdateProcessorCount @ 0x140425510 (KiUpdateProcessorCount.c)
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14042E640 (KiInitializeDynamicProcessorDpc.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmUpdateIdleStates @ 0x1405B81D0 (PpmUpdateIdleStates.c)
 *     KiIntSteerInit @ 0x140838BF8 (KiIntSteerInit.c)
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
