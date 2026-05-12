/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C0005900
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitAllocateResources @ 0x1C0017048 (RaidUnitAllocateResources.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaInitializePower @ 0x1C0019718 (RaInitializePower.c)
 *     RaInitializeRaidResources @ 0x1C0019758 (RaInitializeRaidResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003F380 (RaidUnitSubmitResetRequest.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003FFC0 (RaAttemptHighWaterMarkIncrease.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r10d
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 result; // rax

  v3 = a3[549];
  v4 = a1 + 24;
  v6 = a3[550];
  if ( !a3[712] )
    v4 = a1;
  v7 = v4;
  result = MmAllocateContiguousNodeMemory(v4, v3, v6, a3[548], 4, 0x80000000);
  if ( result )
  {
    if ( a3[712] )
      *(_QWORD *)(result + 800) = result + v7 - 24;
    else
      *(_QWORD *)(result + 800) = 0LL;
  }
  return result;
}
