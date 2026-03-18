/*
 * XREFs of MiRelinkStandbyPage @ 0x1400CBAFC
 * Callers:
 *     MmSetPfnListPriorities @ 0x1400139B0 (MmSetPfnListPriorities.c)
 *     MiEmptyDecayClusterTimers @ 0x140082E80 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400CDF50 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  char v7; // al

  if ( *(_WORD *)(a1 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    return 1LL;
  }
  if ( MiUnlinkPageFromList(a1, 0) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    MiInsertPageInList(a1, 4u);
    return 1LL;
  }
  MiRestoreTransitionPte(a1, 0LL, v4, v5);
  v6 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64((volatile signed __int64 *)(v6 + 4096));
  else
    _InterlockedDecrement64((volatile signed __int64 *)(v6 + 4800));
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  v7 = *(_BYTE *)(a1 + 34) & 0xFD;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 34) = v7 | 5;
  *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, 2);
  return 0LL;
}
