/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C00060F8
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaidUnitAllocateResources @ 0x1C0016F34 (RaidUnitAllocateResources.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaInitializePower @ 0x1C0018B0C (RaInitializePower.c)
 *     RaInitializeRaidResources @ 0x1C0018B4C (RaInitializeRaidResources.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003FBC4 (RaidUnitSubmitResetRequest.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00407B4 (RaAttemptHighWaterMarkIncrease.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
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
  _QWORD *v9; // rdx

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
    {
      v9 = (_QWORD *)(result + v7 - 24);
      *(_QWORD *)(result + 800) = v9;
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
    }
    else
    {
      *(_QWORD *)(result + 800) = 0LL;
    }
  }
  return result;
}
