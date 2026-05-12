/*
 * XREFs of RaidAdapterExecuteXrb @ 0x1C0007100
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00070B0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C000F2C8 (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C001EF20 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterScatterGatherExecute @ 0x1C0006F2C (RaidAdapterScatterGatherExecute.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009270 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002E628 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C002FEE8 (RaidDmaFlushDmaBuffers.c)
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
