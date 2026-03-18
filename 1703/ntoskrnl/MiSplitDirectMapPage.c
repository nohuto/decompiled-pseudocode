/*
 * XREFs of MiSplitDirectMapPage @ 0x1402191C4
 * Callers:
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
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
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 updated; // rax
  __int64 *v24; // r10
  __int64 v25; // r10
  __int128 v27; // [rsp+20h] [rbp-30h] BYREF
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+40h] [rbp-10h]
  unsigned __int64 v30; // [rsp+48h] [rbp-8h]

  v5 = *(_WORD *)(a2 + 8);
  v6 = 48 * a3 - 0x58000000000LL;
  v7 = *(_WORD **)a2;
  ++*v7;
  v8 = *(_QWORD *)a1;
  v9 = *(unsigned __int16 *)(a2 + 10) | (unsigned __int16)(*v7 & v5);
  for ( i = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i) )
  {
    Page = MiGetPage(i, v9, 0);
    v12 = Page;
    if ( Page != -1 )
      break;
  }
  v13 = 48 * Page - 0x58000000000LL;
  v14 = MiLockPageInline(v6);
  MiLockNestedPageAtDpcInline(v13);
  MiFinalizePageAttribute(v13, *(unsigned __int8 *)(v6 + 34) >> 6, 1);
  v15 = *(__m128i *)(v6 + 32);
  v16 = *(_OWORD *)v6;
  v17 = *(_OWORD *)(v6 + 16);
  v18 = *(_QWORD *)(v13 + 40) >> 58 << 58;
  v29 = *(_QWORD *)(v6 + 32);
  v27 = v16;
  v28 = v17;
  v30 = _mm_srli_si128(v15, 8).m128i_u64[0] & 0x3FFFFFFFFFFFFFFLL | v18;
  LODWORD(v18) = a1[16];
  v30 &= ~0x10000000000000uLL;
  *(_QWORD *)&v28 = MiMakeDemandZeroPte(((unsigned int)v18 >> 1) & 0x1F);
  if ( MiPteInShadowRange((unsigned __int64)&v28) )
    MiWritePteShadow();
  MiCopyPfnEntry(v13, (__int64)&v27);
  *(_BYTE *)(v13 + 34) |= 0x10u;
  *(_WORD *)(v13 + 32) = 0;
  MiAddLockedPageCharge(v19, 1);
  MiDereferenceControlAreaPfnList(v8, 0LL, v20, 2);
  MiCopyPage(v12, a3, 0LL, 6);
  *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 5;
  v21 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000);
  v22 = MI_READ_PTE_LOCK_FREE(v21 + 8LL * ((*(_DWORD *)(v6 + 8) >> 3) & 0x1FF));
  updated = MiUpdateTransitionPteFrame(v22);
  *v24 = updated;
  if ( MiPteInShadowRange((unsigned __int64)v24) )
    MiWritePteShadow();
  MiUnmapPageInHyperSpaceWorker(v25, 0x11u);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v14);
  return v12;
}
