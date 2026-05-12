/*
 * XREFs of RaSrbSetMiniportContext @ 0x1C0006C1C
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPowerPassToMiniPort @ 0x1C000F164 (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1C000F2C8 (RaAdapterStartPowerIo.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 444) + 7);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 104) = a3;
  }
  else if ( (result & 0xFFFFFFF8) != 0 )
  {
    *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
