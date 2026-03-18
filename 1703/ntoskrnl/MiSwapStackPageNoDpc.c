/*
 * XREFs of MiSwapStackPageNoDpc @ 0x14002C2E0
 * Callers:
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (a3 + 0x58000000000LL) / 48;
  v8 = MI_READ_PTE_LOCK_FREE(v3);
  v9 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8) )
    return 0LL;
  KeFlushSingleTb((__int64)(v3 << 25) >> 16, 0LL, 2LL);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntry(a3, a2);
  MiCopyPage(v7, (a2 + 0x58000000000LL) / 48, a1, 4LL);
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)v3,
               v9 ^ (v9 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20,
               v9) )
  {
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    MiSetFreshPfnFromFreeList(a3);
    *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  return 1LL;
}
