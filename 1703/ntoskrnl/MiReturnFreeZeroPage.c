/*
 * XREFs of MiReturnFreeZeroPage @ 0x14010AE0C
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall MiReturnFreeZeroPage(__int64 a1, __int16 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int16 v4; // r9

  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= 0xCFu;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  v2 = *(_DWORD *)(a1 + 16);
  v3 = (a1 + 0x58000000000LL) / 48;
  if ( (v2 & 0x3E0) != 0 )
    v4 = a2 | 2;
  else
    v4 = a2 | 1;
  return MiInsertPageInFreeOrZeroedList(v3, v4);
}
