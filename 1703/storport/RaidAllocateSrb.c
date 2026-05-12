/*
 * XREFs of RaidAllocateSrb @ 0x1C0005758
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003EE4 (RaUnitAtaPassThroughIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00111D4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00152E4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C00157C4 (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitAbortSrb @ 0x1C003C4E8 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003DA58 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003E240 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003E4F0 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003E800 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

_BYTE *__fastcall RaidAllocateSrb(__int64 a1, unsigned int a2, char a3, char a4)
{
  _BYTE *v4; // rdi
  _BYTE *Pool; // rax
  unsigned int v8; // esi
  int v9; // ebp
  _BYTE *v10; // rax
  bool v11; // zf

  v4 = 0LL;
  if ( a3 != 1 )
  {
    Pool = (_BYTE *)RaidAllocatePool(512LL, 88LL, 1918067026LL, a1);
    v4 = Pool;
    if ( Pool )
      memset(Pool, 0, 0x58uLL);
    return v4;
  }
  if ( a2 == 23 )
    goto LABEL_16;
  if ( a2 > 0x17 )
  {
    if ( a2 == 32 )
      goto LABEL_15;
    if ( a2 != 37 )
    {
      if ( a2 <= 0x25 )
        return v4;
      if ( a2 <= 0x27 )
      {
LABEL_15:
        v8 = 144;
        v9 = 0;
        goto LABEL_11;
      }
      v11 = a2 == 41;
LABEL_20:
      if ( !v11 )
        return v4;
      goto LABEL_15;
    }
LABEL_16:
    v8 = 168;
    goto LABEL_10;
  }
  if ( a2 )
  {
    if ( a2 == 2 || a2 == 9 || a2 == 16 )
      goto LABEL_15;
    v11 = a2 == 19;
    goto LABEL_20;
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
