/*
 * XREFs of ExQueryWnfStateData @ 0x140597570
 * Callers:
 *     PopErratumUpdateCallback @ 0x140241060 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x140451960 (PopWnfAudioCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1406B4550 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406F7B70 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1406F7C10 (PopWnfMixedRealityCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1406F7C90 (PopWnfUserAwayPredictionCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140708500 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140708590 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x140500CA8 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140597614 (ExpWnfAcquireSubscriptionNameInstance.c)
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
    ExReleaseRundownProtection_0(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
