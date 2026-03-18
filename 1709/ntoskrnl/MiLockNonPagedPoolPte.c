/*
 * XREFs of MiLockNonPagedPoolPte @ 0x14002F5F4
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x14002EE40 (MiInsertNonPagedPoolOnSlist.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockNonPagedPoolPte(__int64 *a1, unsigned __int8 *a2)
{
  __int64 PteShadow; // rbx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    PteShadow = *a1;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a1, *a1);
    v9 = PteShadow;
    v5 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v9) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiLockPageAtDpcInline(v5);
    v7 = *a1;
    *a2 = CurrentIrql;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
      v7 = MiReadPteShadow(a1, v7);
    if ( PteShadow == v7 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  return v5;
}
