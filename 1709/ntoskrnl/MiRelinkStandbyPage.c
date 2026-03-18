/*
 * XREFs of MiRelinkStandbyPage @ 0x1400F0F68
 * Callers:
 *     MmSetPfnListPriorities @ 0x1400010A4 (MmSetPfnListPriorities.c)
 *     MiUpdatePfnPriorityByPte @ 0x140036670 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F0D10 (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2)
{
  __int64 v5; // r8

  if ( *(_WORD *)(a1 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    return 1LL;
  }
  if ( MiUnlinkPageFromList(a1, 0LL) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    MiInsertPageInList(a1, 4);
    return 1LL;
  }
  MiRestoreTransitionPte(a1, 0);
  v5 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 4224));
  else
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 4928));
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, 2);
  return 0LL;
}
