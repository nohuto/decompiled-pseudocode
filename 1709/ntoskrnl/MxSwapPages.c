/*
 * XREFs of MxSwapPages @ 0x14082C2BC
 * Callers:
 *     MxRelocatePageTables @ 0x14082A08C (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x14082BBDC (MxMovePageTables.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MxGetPhase0Mapping @ 0x14082C6D4 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  __int64 PteShadow; // rsi
  __int64 v5; // rbp
  __int64 result; // rax
  unsigned __int64 v7; // r12
  _WORD *v8; // rcx
  __int16 v9; // dx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  _OWORD *v18; // rax
  unsigned __int64 v19; // rbp
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  _QWORD *v22; // rcx
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+70h] [rbp+18h]

  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v26 = PteShadow;
  v5 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v26);
  v27 = v5;
  result = MxGetPhase0Mapping();
  v7 = result;
  if ( result )
  {
    v8 = *(_WORD **)a1;
    v9 = *(_WORD *)(a1 + 8);
    result = MiGetPage(
               (__int64)&MiSystemPartition,
               *(unsigned __int16 *)(a1 + 10) | (unsigned int)(unsigned __int16)(++*v8 & v9),
               8u);
    v10 = result;
    if ( result != -1 )
    {
      v11 = 48 * result - 0x58000000000LL;
      v12 = 48 * v5 - 0x58000000000LL;
      v13 = (unsigned __int8)MiLockPageInline(v12);
      MiLockNestedPageAtDpcInline(v11);
      MiFinalizePageAttribute(v11, *(unsigned __int8 *)(v12 + 34) >> 6, 1u);
      MiCopyPfnEntry(v11, v12);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
      v14 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)v14 = MiMakeValidPte(v14, v10, -1610612732);
      v15 = 0xFFFFF6FB7DBED000uLL;
      v16 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      v17 = 32LL;
      v18 = (_OWORD *)v7;
      v19 = (__int64)(a2 << 25) >> 16;
      v20 = (_OWORD *)v19;
      do
      {
        *v18 = *v20;
        v18[1] = v20[1];
        v18[2] = v20[2];
        v18[3] = v20[3];
        v18[4] = v20[4];
        v18[5] = v20[5];
        v18[6] = v20[6];
        v18 += 8;
        v21 = v20[7];
        v20 += 8;
        *(v18 - 1) = v21;
        --v17;
      }
      while ( v17 );
      if ( ((v14 ^ v19) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        *(_QWORD *)v14 = 0LL;
        if ( v14 < v15 || v14 > v16 )
          goto LABEL_18;
      }
      else
      {
        v22 = (_QWORD *)(v7 + 8 * ((v14 >> 3) & 0x1FF));
        *v22 = 0LL;
        if ( (unsigned __int64)v22 < v15 || (unsigned __int64)v22 > v16 )
          goto LABEL_18;
      }
      MiWritePteShadow();
LABEL_18:
      v26 = PteShadow ^ (PteShadow ^ (v10 << 12)) & 0xFFFFFFFFF000LL | 0x20;
      MiWriteValidPteNewPage((unsigned __int64 *)a2, v26);
      KeFlushSingleTb(v19, 0, 1u);
      KeFlushSingleTb(v7, 0, 1u);
      v23 = MiLockPageInline(v12);
      v24 = v27;
      v25 = v23;
      *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v12 + 32) = 0;
      *(_BYTE *)(v12 + 34) &= 0xD7u;
      MiInsertPageInFreeOrZeroedList(v24, 2);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v25);
    }
  }
  return result;
}
