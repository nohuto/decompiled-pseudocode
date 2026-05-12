/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C003D818
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C002E794 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C003C050 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C003A9D0 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C003E240 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003E4F0 (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C003F870 (StorIsEventQueueEmpty.c)
 *     Template_qcj @ 0x1C003FACC (Template_qcj.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edx
  int v6; // r8d

  if ( *(_BYTE *)(a1 + 2576) )
  {
    v2 = *(_DWORD *)(a1 + 2596);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 1000);
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
        Template_qcj(
          *(_QWORD *)(a1 + 24),
          v5,
          v6,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          a1 + 1688);
      if ( *(_BYTE *)(a1 + 2576) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 208)) )
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
  *(_QWORD *)(a1 + 2624) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v4;
}
