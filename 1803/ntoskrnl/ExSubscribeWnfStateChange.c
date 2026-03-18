/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1405751F0
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x140278524 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x140611F50 (PopEsWorker.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140627C38 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140627C74 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140627CB0 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x140627CEC (PopSetupMixedRealitytNotification.c)
 *     PopSetupAudioEventNotification @ 0x140627D68 (PopSetupAudioEventNotification.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     RtlpCtContextInit @ 0x14078AC68 (RtlpCtContextInit.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     PiUEventInit @ 0x1408BC494 (PiUEventInit.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
