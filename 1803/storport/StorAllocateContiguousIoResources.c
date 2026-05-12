/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C0007318
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C000FDA0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     RaidUnitAllocateResources @ 0x1C00150DC (RaidUnitAllocateResources.c)
 *     RaInitializePower @ 0x1C0024D7C (RaInitializePower.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00281D4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028680 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003E128 (RaidUnitSubmitResetRequest.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003F5F4 (RaAttemptHighWaterMarkIncrease.c)
 *     RaInitializeRaidResources @ 0x1C003F9FC (RaInitializeRaidResources.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005EFC0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0063B84 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0063E98 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  _QWORD *v10; // rcx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v12 = a2;
  v3 = *(_QWORD *)(a3 + 4392);
  v4 = a1 + 24;
  v5 = *(_QWORD *)(a3 + 696);
  v7 = *(_QWORD *)(a3 + 4400);
  v13 = 0LL;
  v12 = 1;
  v8 = *(_QWORD *)(a3 + 4384);
  if ( !*(_QWORD *)(a3 + 5696) )
    v4 = a1;
  v11[0] = v3;
  v14 = v7;
  if ( *(_BYTE *)(a3 + 704) && *(_DWORD *)(a3 + 724) == 3 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, int *, unsigned int, __int64 *))(*(_QWORD *)(v5 + 8) + 272LL))(
               v5,
               v11,
               &v14,
               v4,
               0,
               &v12,
               0x80000000,
               &v13);
  else
    result = MmAllocateContiguousNodeMemory(v4, v3, v7, v8, 4, 0x80000000);
  if ( result )
  {
    if ( *(_QWORD *)(a3 + 5696) )
    {
      v10 = (_QWORD *)(result + v4 - 24LL);
      *(_QWORD *)(result + 816) = v10;
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[2] = 0LL;
    }
    else
    {
      *(_QWORD *)(result + 816) = 0LL;
    }
    *(_QWORD *)(result + 24) = v13;
    *(_DWORD *)(result + 16) = v4;
  }
  return result;
}
