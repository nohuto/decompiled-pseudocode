/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C0014F3C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C000EC7C (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C000ECCC (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C000ED54 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000F1A0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C000F270 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterRescanBus @ 0x1C0012B98 (RaidAdapterRescanBus.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C0028110 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C00296C0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C002B730 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C0034CBC (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C0034D44 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0034DD8 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0034E68 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0034EEC (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0034F80 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C0036380 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C0036470 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C0036550 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0036760 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0036840 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C00369E0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0060F20 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0063900 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C006498C (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EDD4 (RaCallMiniportAdapterControl.c)
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
