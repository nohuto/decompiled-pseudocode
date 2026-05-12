/*
 * XREFs of RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C000EC8C (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 */

__int64 __fastcall RaidAdapterRaiseIrqlAndExecuteXrb(__int64 a1, __int64 a2)
{
  KIRQL v4; // di

  v4 = KfRaiseIrql(2u);
  LODWORD(a2) = RaidAdapterExecuteXrb(a1, a2);
  KeLowerIrql(v4);
  return (unsigned int)a2;
}
