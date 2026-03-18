/*
 * XREFs of MiSplitDirectMapPage @ 0x14025E808
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

ULONG_PTR __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  __int16 v6; // r8
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 i; // r14
  __int64 Page; // rax
  ULONG_PTR v11; // rdi
  __int64 v12; // rsi
  unsigned __int8 v13; // r14
  __m128i v14; // xmm2
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 updated; // rax
  __int64 *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // r10
  __int128 v33; // [rsp+20h] [rbp-30h] BYREF
  __int128 v34; // [rsp+30h] [rbp-20h] BYREF
  __int64 v35; // [rsp+40h] [rbp-10h]
  unsigned __int64 v36; // [rsp+48h] [rbp-8h]

  v5 = 48 * a3 - 0x58000000000LL;
  v6 = _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v7 = *(_QWORD *)a1;
  v8 = *(unsigned __int16 *)(a2 + 10) | (unsigned __int16)(v6 & *(_WORD *)(a2 + 8));
  for ( i = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i) )
  {
    Page = MiGetPage(i, v8, 0);
    v11 = Page;
    if ( Page != -1 )
      break;
  }
  v12 = 48 * Page - 0x58000000000LL;
  v13 = MiLockPageInline(v5);
  MiLockNestedPageAtDpcInline(v12);
  MiFinalizePageAttribute(v12, *(unsigned __int8 *)(v5 + 34) >> 6, 1u);
  v14 = *(__m128i *)(v5 + 32);
  v15 = *(_OWORD *)v5;
  v16 = *(_OWORD *)(v5 + 16);
  v17 = *(_QWORD *)(v12 + 40) >> 58 << 58;
  v35 = *(_QWORD *)(v5 + 32);
  v33 = v15;
  v34 = v16;
  v36 = _mm_srli_si128(v14, 8).m128i_u64[0] & 0x3FFFFFFFFFFFFFFLL | v17;
  LODWORD(v17) = a1[16];
  v36 &= ~0x10000000000000uLL;
  *(_QWORD *)&v34 = MiMakeDemandZeroPte(((unsigned int)v17 >> 1) & 0x1F);
  if ( MiPteInShadowRange((unsigned __int64)&v34) )
    MiWritePteShadow((__int64)&v34, v18, v19);
  MiCopyPfnEntry(v12, (__int64)&v33);
  v20 = *(_BYTE *)(v12 + 34) | 0x10;
  *(_WORD *)(v12 + 32) = 0;
  *(_BYTE *)(v12 + 34) = v20;
  MiAddLockedPageCharge(v21, 1);
  MiDereferenceControlAreaPfnList(v7, 0LL, v22, 2);
  MiCopyPage(v11, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v24 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v23);
  v25 = MI_READ_PTE_LOCK_FREE(v24 + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  updated = MiUpdateTransitionPteFrame(v25);
  *v27 = updated;
  if ( MiPteInShadowRange((unsigned __int64)v27) )
    MiWritePteShadow(v29, v28, v30);
  MiUnmapPageInHyperSpaceWorker(v31, 0x11u, 0x80000000);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  return v11;
}
