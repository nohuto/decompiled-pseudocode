/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140588290
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x140240F94 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x1405E2D50 (PopEsWorker.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405F2AE0 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x1405F2B1C (PopSetupMixedRealitytNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1405F2B58 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1405F2B94 (PopSetupAudioEventNotification.c)
 *     PiUEventInit @ 0x14083E7C4 (PiUEventInit.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404FF814 (ExpWnfSubscribeWnfStateChange.c)
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
