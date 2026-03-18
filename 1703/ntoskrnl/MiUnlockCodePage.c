/*
 * XREFs of MiUnlockCodePage @ 0x14006D068
 * Callers:
 *     MiUnlockImageSection @ 0x14006CF8C (MiUnlockImageSection.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiHandleDriverNonPagedSections @ 0x1404B3378 (MiHandleDriverNonPagedSections.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     MiUnlockDriverCode @ 0x140583054 (MiUnlockDriverCode.c)
 *     MiUnlockHotPatchPages @ 0x1406B5D94 (MiUnlockHotPatchPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 <= a2 )
  {
    v3 = a1;
    do
    {
      v6 = MI_READ_PTE_LOCK_FREE(v3);
      v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v6) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v4);
      MiRemoveLockedPageChargeAndDecRef(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v3 += 8LL;
    }
    while ( v3 <= a2 );
  }
}
