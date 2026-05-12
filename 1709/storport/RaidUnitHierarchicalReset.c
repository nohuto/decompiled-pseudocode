/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C003E6E0
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002F4D0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C003D960 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     McTemplateK0qcj @ 0x1C003B86C (McTemplateK0qcj.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C003C714 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C003F17C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003F428 (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C0040044 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // esi
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( *(_BYTE *)(a1 + 2624) )
  {
    v2 = *(_DWORD *)(a1 + 2644);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 1032);
    if ( v2 < 0x1E )
      v2 = 30;
  }
  v3 = 2 * v2;
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 2 * v2);
  v4 = RaidUnitResetUnit(a1);
  if ( v4 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v3);
    v4 = RaidUnitResetTarget(a1);
    if ( v4 < 0 )
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40000000) != 0 )
        McTemplateK0qcj(
          *(_QWORD *)(a1 + 24),
          v5,
          v6,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          a1 + 1720);
      if ( *(_BYTE *)(a1 + 2624) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 208)) )
      {
        v4 = 0;
      }
      else
      {
        v4 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
        if ( v4 >= 0 )
          ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4768LL);
      }
    }
    else
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4772LL);
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4776LL);
  }
  *(_QWORD *)(a1 + 2672) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v4;
}
