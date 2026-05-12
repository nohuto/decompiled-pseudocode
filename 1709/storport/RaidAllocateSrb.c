/*
 * XREFs of RaidAllocateSrb @ 0x1C0005EF4
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003E90 (RaUnitAtaPassThroughIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0015734 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C0015C10 (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001A9FC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitAbortSrb @ 0x1C003DDEC (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003E928 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003F17C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003F428 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003F738 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

_BYTE *__fastcall RaidAllocateSrb(__int64 a1, unsigned int a2, char a3, char a4)
{
  _BYTE *v4; // rdi
  _BYTE *Pool; // rax
  unsigned int v8; // esi
  int v9; // ebp
  _BYTE *v10; // rax

  v4 = 0LL;
  if ( a3 != 1 )
  {
    Pool = (_BYTE *)RaidAllocatePool(512LL, 88LL, 1918067026LL, a1);
    v4 = Pool;
    if ( Pool )
      memset(Pool, 0, 0x58uLL);
    return v4;
  }
  if ( a2 > 0x17 )
  {
    if ( a2 != 32 )
    {
      if ( a2 == 37 )
        goto LABEL_16;
      if ( a2 <= 0x25 || a2 > 0x27 && (a2 <= 0x29 || a2 > 0x2B) )
        return v4;
    }
LABEL_18:
    v8 = 144;
    v9 = 0;
    goto LABEL_11;
  }
  if ( a2 == 23 )
  {
LABEL_16:
    v8 = 168;
    goto LABEL_10;
  }
  if ( a2 )
  {
    if ( a2 != 2 && a2 != 9 && a2 != 16 && a2 != 19 )
      return v4;
    goto LABEL_18;
  }
  if ( (a4 & 1) != 0 )
  {
    v8 = 184;
LABEL_10:
    v9 = 1;
LABEL_11:
    v10 = (_BYTE *)RaidAllocatePool(512LL, v8, 1918067026LL, a1);
    v4 = v10;
    if ( v10 )
    {
      memset(v10, 0, v8);
      v4[2] = 40;
      *(_WORD *)v4 = 8;
      *((_DWORD *)v4 + 2) = 1397899864;
      *((_DWORD *)v4 + 3) = 1;
      *((_DWORD *)v4 + 4) = v8;
      *((_DWORD *)v4 + 5) = a2;
      *((_WORD *)v4 + 18) = 2;
      *((_DWORD *)v4 + 13) = 128;
      *((_DWORD *)v4 + 14) = v9;
      *((_WORD *)v4 + 64) = 1;
      *((_DWORD *)v4 + 33) = 4;
      if ( v9 )
        *((_DWORD *)v4 + 30) = 144;
    }
    return v4;
  }
  return 0LL;
}
