/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C0012E88
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0011690 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterRestartAdapter @ 0x1C0011A08 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStop @ 0x1C0012020 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0012070 (RaidAdapterStopAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0012100 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterRescanBus @ 0x1C0012EF4 (RaidAdapterRescanBus.c)
 *     RaidPowerSettingCallback @ 0x1C001C2D0 (RaidPowerSettingCallback.c)
 *     StorPortAdapterActiveCondition @ 0x1C001CE20 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001CED0 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001CF68 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C001DAB0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C001DE68 (RaidAdapterSendPowerToMiniport.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C001DF00 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidCoalescingCallback @ 0x1C002EA20 (RaidCoalescingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C0035B1C (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0035BA4 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0035C30 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0035CB0 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterIdleState @ 0x1C0036C50 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0036DD0 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C005DD1C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C005E4FC (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00644E4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00124FC (RaCallMiniportAdapterControl.c)
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
    *(_DWORD *)(a1 + 564) = 18;
    v6 = RaCallMiniportAdapterControl(a1 + 296);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 272);
}
