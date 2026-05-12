/*
 * XREFs of RaidAdapterExecuteXrb @ 0x1C00069E8
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0006998 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C000EC8C (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidAdapterScatterGatherExecute @ 0x1C0006814 (RaidAdapterScatterGatherExecute.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A340 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002D630 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C002F1B4 (RaidDmaFlushDmaBuffers.c)
 */

__int64 __fastcall RaidAdapterExecuteXrb(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // rdx

  if ( !*(_BYTE *)(a1 + 4450) )
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  v5 = a2[21];
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v6 = *(_DWORD *)(v5 + 24);
  else
    v6 = *(_DWORD *)(v5 + 12);
  if ( (*(_BYTE *)(a1 + 4451) & 4) != 0 )
  {
    v8 = a2[13];
    v9 = (v6 & 0x40) != 0;
    if ( v8 )
    {
      LOBYTE(a3) = v9;
      RaidDmaFlushDmaBuffers(a1 + 696, v8, a3);
    }
    v10 = a2[17];
    if ( v10 )
    {
      LOBYTE(a3) = v9;
      RaidDmaFlushDmaBuffers(a1 + 696, v10, a3);
    }
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  if ( !a2[17] )
  {
    if ( (v6 & 0xC0) != 0 )
      return RaidAdapterScatterGatherExecute(a1, (__int64)a2);
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  return RaidAdapterScatterGatherExecuteBidirectionalRequest();
}
