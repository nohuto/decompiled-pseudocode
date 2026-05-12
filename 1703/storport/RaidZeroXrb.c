/*
 * XREFs of RaidZeroXrb @ 0x1C000597C
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorRemoveIoGatewayItem @ 0x1C0009840 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C000EC8C (RaAdapterStartPowerIo.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidUnitAllocateResources @ 0x1C0017048 (RaidUnitAllocateResources.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003F380 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidZeroXrb(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 16) &= 0x9Cu;
  v4 = *(_QWORD *)(a1 + 784);
  result = 0xFFFFLL;
  *(_DWORD *)a1 = 523124044;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 18) = -1;
  *(_BYTE *)(a1 + 20) = -1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_DWORD *)(a1 + 744) = a3;
  *(_QWORD *)(a1 + 760) = a4;
  if ( a4 )
    result = (__int64)memset(a4, 0, a3);
  *(_BYTE *)(a1 + 16) &= ~0x80u;
  *(_BYTE *)(a1 + 17) &= 0xF0u;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_DWORD *)(a1 + 748) = 0;
  *(_DWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 784) = v4;
  return result;
}
