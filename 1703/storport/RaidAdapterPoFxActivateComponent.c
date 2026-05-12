/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C001D930
 * Callers:
 *     RaidUnitPoFxActivateComponent @ 0x1C0004738 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E684 (RaidUnitSetDevicePowerIrp.c)
 *     RaidCreateUnit @ 0x1C0016ED0 (RaidCreateUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0032030 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0036EB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C00377F4 (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0064338 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 72LL));
  if ( *(_BYTE *)(a1 + 108) >= 0x80u )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5400));
    if ( (*(_BYTE *)(a1 + 109) & 1) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5408));
  }
  PoFxActivateComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return *(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1;
}
