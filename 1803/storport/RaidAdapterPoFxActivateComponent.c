/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C0026AA8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006534 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E0E8 (RaidUnitSetDevicePowerIrp.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     RaidCreateUnit @ 0x1C0014F78 (RaidCreateUnit.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00281D4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028680 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C002F3F0 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0036BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0037554 (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00647E0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 72LL));
  if ( *(char *)(a1 + 108) < 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5400));
    if ( (*(_BYTE *)(a1 + 109) & 1) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5408));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1;
}
