/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C001E740
 * Callers:
 *     RaidUnitPoFxActivateComponent @ 0x1C0004FF0 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E97C (RaidUnitSetDevicePowerIrp.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaidCreateUnit @ 0x1C0016DBC (RaidCreateUnit.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0033108 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0038D50 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C00396E4 (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C006787C (RaidAdapterStopDeviceIrp.c)
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
  PoFxActivateComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1;
}
