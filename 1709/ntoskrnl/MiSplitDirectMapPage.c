/*
 * XREFs of MiSplitDirectMapPage @ 0x140223AD4
 * Callers:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 */

ULONG_PTR __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3)
{
  __int16 v5; // si
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int64 v8; // r13
  unsigned int v9; // esi
  __int64 i; // r14
  __int64 Page; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // rsi
  unsigned __int8 v14; // r14
  __m128i v15; // xmm2
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 *v22; // r10
  __int64 PteShadow; // rax
  __int64 updated; // rax
  __int64 *v25; // r10
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  __int128 v29; // [rsp+20h] [rbp-30h] BYREF
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h]
  unsigned __int64 v32; // [rsp+48h] [rbp-8h]

  v5 = *(_WORD *)(a2 + 8);
  v6 = 48 * a3 - 0x58000000000LL;
  v7 = *(_WORD **)a2;
  ++*v7;
  v8 = *(_QWORD *)a1;
  v9 = *(unsigned __int16 *)(a2 + 10) | (unsigned __int16)(*v7 & v5);
  for ( i = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i) )
  {
    Page = MiGetPage(i, v9, 0);
    v12 = Page;
    if ( Page != -1 )
      break;
  }
  v13 = 48 * Page - 0x58000000000LL;
  v14 = MiLockPageInline(v6);
  MiLockNestedPageAtDpcInline(v13);
  MiFinalizePageAttribute(v13, *(unsigned __int8 *)(v6 + 34) >> 6, 1u);
  v15 = *(__m128i *)(v6 + 32);
  v16 = *(_OWORD *)v6;
  v17 = *(_OWORD *)(v6 + 16);
  v18 = *(_QWORD *)(v13 + 40) >> 58 << 58;
  v31 = *(_QWORD *)(v6 + 32);
  v29 = v16;
  v30 = v17;
  v32 = _mm_srli_si128(v15, 8).m128i_u64[0] & 0x3FFFFFFFFFFFFFFLL | v18;
  LODWORD(v18) = a1[16];
  v32 &= ~0x10000000000000uLL;
  *(_QWORD *)&v30 = MiMakeDemandZeroPte(((unsigned int)v18 >> 1) & 0x1F);
  if ( (unsigned __int64)&v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v30 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  MiCopyPfnEntry(v13, (__int64)&v29);
  *(_BYTE *)(v13 + 34) |= 0x10u;
  *(_WORD *)(v13 + 32) = 0;
  MiAddLockedPageCharge(v19, 1LL, v20);
  MiDereferenceControlAreaPfnList(v8, 0LL, v21, 2);
  MiCopyPage(v12, a3, 0LL, 6);
  *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 5;
  v22 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(v6 + 8) >> 3) & 0x1FF));
  PteShadow = *v22;
  if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  updated = MiUpdateTransitionPteFrame(PteShadow);
  *v25 = updated;
  v27 = v26;
  if ( (unsigned __int64)v25 >= v26 )
  {
    v27 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
  }
  LOBYTE(v27) = 17;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v25, v27, 0x80000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v14);
  return v12;
}
