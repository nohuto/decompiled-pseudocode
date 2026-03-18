/*
 * XREFs of MiRelinkStandbyPage @ 0x1400810F8
 * Callers:
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x140080EE0 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriorityByPte @ 0x140128510 (MiUpdatePfnPriorityByPte.c)
 *     MmSetPfnListInfo @ 0x140147CE0 (MmSetPfnListInfo.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    return 1LL;
  }
  if ( (unsigned int)MiUnlinkPageFromList(BugCheckParameter2) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (a2 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    MiInsertPageInList(BugCheckParameter2, 4u);
    return 1LL;
  }
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1403CBD88
                                                                + 8
                                                                * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                                    + (-(__int64)((*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                                    + 4992));
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 2);
  return 0LL;
}
