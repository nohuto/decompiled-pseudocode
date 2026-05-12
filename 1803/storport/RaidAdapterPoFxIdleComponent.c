/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C0026B14
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0010CC0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     RaidUnitFreeResources @ 0x1C00123F4 (RaidUnitFreeResources.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00281D4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028680 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     StorPortUnitIdleState @ 0x1C0036BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0036EE0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0037184 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 5088);
  if ( *(_QWORD *)(v3 + 72) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v3 + 72));
    PoFxIdleComponent(**(_QWORD **)(a1 + 5088), a2, a3);
    v3 = *(_QWORD *)(a1 + 5088);
  }
  return (*(_BYTE *)(v3 + 20) & 1) == 0;
}
