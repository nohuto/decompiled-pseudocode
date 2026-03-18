/*
 * XREFs of MiReturnFreeZeroPage @ 0x1400CABF0
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400CAD78 (MiGetPerfectColorHeadPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 */

void __fastcall MiReturnFreeZeroPage(__int64 a1, __int16 a2)
{
  char v4; // cl
  __int64 v5; // rcx
  __int64 PteTimeStamp; // rax
  __int16 v7; // r9
  __int64 v8; // r11
  __int16 v9; // dx

  v4 = *(_BYTE *)(a1 + 34);
  if ( (v4 & 7) == 6 )
    *(_BYTE *)(a1 + 34) = v4 & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= 0xCFu;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  v5 = *(_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 32) = 0;
  PteTimeStamp = MiGetPteTimeStamp(v5);
  v9 = v7 | 0x400;
  if ( PteTimeStamp != 4294967293LL )
    v9 = v7;
  MiInsertPageInFreeOrZeroedList(v8, a2 | v9);
}
