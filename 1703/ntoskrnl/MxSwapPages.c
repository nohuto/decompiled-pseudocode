/*
 * XREFs of MxSwapPages @ 0x140802304
 * Callers:
 *     MxRelocatePageTables @ 0x1408000CC (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140801BC8 (MxMovePageTables.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x14002820C (MiWriteValidPteNewPage.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MxGetPhase0Mapping @ 0x1408026BC (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // r12
  _WORD *v7; // rcx
  __int16 v8; // dx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  BOOL v14; // r10d
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  _QWORD *v19; // rcx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rdi
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  v22 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v6 = result;
  if ( result )
  {
    v7 = *(_WORD **)a1;
    v8 = *(_WORD *)(a1 + 8);
    result = MiGetPage(
               (__int64)&MiSystemPartition,
               *(unsigned __int16 *)(a1 + 10) | (unsigned int)(unsigned __int16)(++*v7 & v8),
               8u);
    v9 = result;
    if ( result != -1 )
    {
      v10 = 48 * result - 0x58000000000LL;
      v11 = 48 * v4 - 0x58000000000LL;
      v12 = (unsigned __int8)MiLockPageInline(v11);
      MiLockNestedPageAtDpcInline(v10);
      MiFinalizePageAttribute(v10, *(unsigned __int8 *)(v11 + 34) >> 6, 1);
      MiCopyPfnEntry(v10, v11);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
      v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)v13 = MiMakeValidPte(v13, v9, -1610612732);
      v14 = MiPteInShadowRange(v13);
      if ( v14 )
        MiWritePteShadow();
      v15 = 32LL;
      v16 = (_OWORD *)v6;
      v17 = (__int64)(a2 << 25) >> 16;
      do
      {
        *v16 = *(_OWORD *)v17;
        v16[1] = *(_OWORD *)(v17 + 16);
        v16[2] = *(_OWORD *)(v17 + 32);
        v16[3] = *(_OWORD *)(v17 + 48);
        v16[4] = *(_OWORD *)(v17 + 64);
        v16[5] = *(_OWORD *)(v17 + 80);
        v16[6] = *(_OWORD *)(v17 + 96);
        v16 += 8;
        v18 = *(_OWORD *)(v17 + 112);
        v17 += 128LL;
        *(v16 - 1) = v18;
        --v15;
      }
      while ( v15 );
      if ( ((v13 ^ ((__int64)(a2 << 25) >> 16)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        *(_QWORD *)v13 = 0LL;
        if ( v14 )
LABEL_11:
          MiWritePteShadow();
      }
      else
      {
        v19 = (_QWORD *)(v6 + 8 * ((v13 >> 3) & 0x1FF));
        *v19 = 0LL;
        if ( MiPteInShadowRange((unsigned __int64)v19) )
          goto LABEL_11;
      }
      v22 = v22 ^ (v22 ^ (v9 << 12)) & 0xFFFFFFFFF000LL | 0x20;
      MiWriteValidPteNewPage(a2);
      KeFlushSingleTb(v20, 0, 1u);
      KeFlushSingleTb(v6, 0, 1u);
      v21 = (unsigned __int8)MiLockPageInline(48 * v4 - 0x58000000000LL);
      *(_WORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
      *(_BYTE *)(v11 + 34) &= 0xD7u;
      MiInsertPageInFreeOrZeroedList(v4, 2);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v21);
    }
  }
  return result;
}
