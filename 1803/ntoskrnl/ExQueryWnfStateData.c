/*
 * XREFs of ExQueryWnfStateData @ 0x14057EA10
 * Callers:
 *     PopErratumUpdateCallback @ 0x1402785F0 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x1405E8F00 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140614350 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1406144D0 (PopWnfMixedRealityCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140719180 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14075F240 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14075F2E0 (PopWnfUserAwayPredictionCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x14076C4B0 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x14076C540 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExpWnfReadStateData @ 0x1404F6A2C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x14057EAB4 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    ExReleaseRundownProtection(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
