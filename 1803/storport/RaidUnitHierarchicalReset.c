/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C003CCD0
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002937C (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C003BE20 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     McTemplateK0qcj @ 0x1C003A10C (McTemplateK0qcj.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C003AD40 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C003D6E4 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003D990 (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C003E4E8 (StorIsEventQueueEmpty.c)
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
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    if ( v4 < 0 )
    {
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
