/*
 * XREFs of MiReturnFreeZeroPage @ 0x1400517A8
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiGetPerfectColorHeadPage @ 0x1400D4EA0 (MiGetPerfectColorHeadPage.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 */

void __fastcall MiReturnFreeZeroPage(__int64 a1, __int16 a2)
{
  char v4; // cl
  char v5; // al
  __int64 v6; // rcx
  __int64 PteTimeStamp; // rax
  __int16 v8; // r9
  ULONG_PTR v9; // r11
  __int16 v10; // dx

  v4 = *(_BYTE *)(a1 + 34);
  if ( (v4 & 7) == 6 )
  {
    *(_BYTE *)(a1 + 34) = v4 & 0xF8 | 5;
    v4 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v5 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 34) = v4 & 0xC7;
  v6 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 35) = v5;
  *(_BYTE *)(a1 + 35) = v5 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  PteTimeStamp = MiGetPteTimeStamp(v6);
  v10 = v8 | 0x400;
  if ( PteTimeStamp != 4294967293LL )
    v10 = v8;
  MiInsertPageInFreeOrZeroedList(v9, a2 | v10);
}
