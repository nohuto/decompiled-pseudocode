/*
 * XREFs of ExSubscribeWnfStateChange @ 0x14045BC80
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x14022DA34 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x140583CC0 (PopEsWorker.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1405A85D4 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405A8610 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupAudioEventNotification @ 0x1405A864C (PopSetupAudioEventNotification.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     PiUEventInit @ 0x14080CA34 (PiUEventInit.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
