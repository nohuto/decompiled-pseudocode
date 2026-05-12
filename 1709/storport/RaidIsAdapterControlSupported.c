/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C00127FC
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000FE30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterRestartAdapter @ 0x1C0010708 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010F4C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterStop @ 0x1C0011B54 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0011C4C (RaidAdapterStopAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0011E30 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterRescanBus @ 0x1C0012868 (RaidAdapterRescanBus.c)
 *     RaidPowerSettingCallback @ 0x1C001CC90 (RaidPowerSettingCallback.c)
 *     StorPortAdapterActiveCondition @ 0x1C001DD40 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001DDF0 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001DE88 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C001E820 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C001E9A0 (RaidAdapterSendPowerToMiniport.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C001EA80 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002EA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidCoalescingCallback @ 0x1C002F760 (RaidCoalescingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C00377CC (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0037854 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C00378E0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0037960 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterIdleState @ 0x1C0038AD0 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0038C70 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006006C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006091C (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0067A28 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 296;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 544) & 0x10) == 0 )
  {
    *(_QWORD *)(a1 + 564) = 0LL;
    *(_QWORD *)(a1 + 572) = 0LL;
    *(_QWORD *)(a1 + 580) = 0LL;
    *(_DWORD *)(a1 + 564) = 19;
    v6 = RaCallMiniportAdapterControl(a1 + 296);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 272);
}
