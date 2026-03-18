/*
 * XREFs of ExQueryWnfStateData @ 0x140457810
 * Callers:
 *     PopErratumUpdateCallback @ 0x14022DB00 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x140575E70 (PopWnfAudioCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1406885C0 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406C7270 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1406C7310 (PopWnfUserAwayPredictionCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x1406D0150 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1406D01E0 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404578B4 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1404F0098 (ExpWnfReadStateData.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
