/*
 * XREFs of MiSwapStackPageNoDpc @ 0x1400CE7A0
 * Callers:
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 * Callees:
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v7; // r9
  ULONG_PTR v8; // r15
  __int64 v9; // rbx
  signed __int64 PteShadow; // rax
  unsigned __int64 v11; // rdi

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (__int64)(v3 << 25) >> 16;
  v8 = (a2 + 0x58000000000LL) / 48;
  v9 = (a3 + 0x58000000000LL) / 48;
  PteShadow = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v3, *(_QWORD *)v3);
  v11 = PteShadow & 0xFFFFFFFFFFFFFFDFuLL;
  if ( PteShadow != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v3,
                      PteShadow & 0xFFFFFFFFFFFFFFDFuLL,
                      PteShadow) )
    return 0LL;
  KeFlushSingleTb(v7, 0, 2u);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntry(a3, a2);
  MiCopyPage((a3 + 0x58000000000LL) / 48, v8, a1, 4);
  if ( v11 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)v3,
                v11 ^ (v11 ^ (v9 << 12)) & 0xFFFFFFFFF000LL | 0x20,
                v11) )
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
