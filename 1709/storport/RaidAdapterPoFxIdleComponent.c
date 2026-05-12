/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C001E788
 * Callers:
 *     RaidUnitPoFxIdleComponent @ 0x1C00053A0 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000FA60 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010F4C (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaidUnitFreeResources @ 0x1C001827C (RaidUnitFreeResources.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortUnitIdleState @ 0x1C0038D50 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0039080 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0039324 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
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
  }
  return (*(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1) == 0;
}
