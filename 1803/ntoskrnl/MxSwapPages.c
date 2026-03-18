/*
 * XREFs of MxSwapPages @ 0x14089B798
 * Callers:
 *     MxRelocatePageTables @ 0x1408998F4 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x14089B144 (MxMovePageTables.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140002750 (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MxGetPhase0Mapping @ 0x14089BB44 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  BOOL v16; // r10d
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // r11
  unsigned __int8 v24; // al
  char v25; // dl
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+60h] [rbp+18h] BYREF

  v29 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v6 = result;
  if ( result )
  {
    result = MiGetPage(
               (__int64)&MiSystemPartition,
               *(unsigned __int16 *)(a1 + 10) | (unsigned int)(unsigned __int16)(_InterlockedExchangeAdd(
                                                                                   *(volatile signed __int32 **)a1,
                                                                                   1u) & *(_WORD *)(a1 + 8)),
               8u);
    v7 = result;
    if ( result != -1 )
    {
      v8 = 48 * result - 0x58000000000LL;
      v9 = 48 * v4 - 0x58000000000LL;
      v10 = (unsigned __int8)MiLockPageInline(v9);
      MiLockNestedPageAtDpcInline(v8);
      MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v9 + 34) >> 6, 1u);
      MiCopyPfnEntry(v8, v9);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      v11 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)v11 = MiMakeValidPte(v11, v7, 2684354564LL, v12);
      v16 = MiPteInShadowRange(v11);
      if ( v16 )
        MiWritePteShadow(v14, v13, v15);
      v17 = 32LL;
      v18 = (_OWORD *)v6;
      v19 = (__int64)(a2 << 25) >> 16;
      v20 = 128LL;
      do
      {
        *v18 = *(_OWORD *)v19;
        v18[1] = *(_OWORD *)(v19 + 16);
        v18[2] = *(_OWORD *)(v19 + 32);
        v18[3] = *(_OWORD *)(v19 + 48);
        v18[4] = *(_OWORD *)(v19 + 64);
        v18[5] = *(_OWORD *)(v19 + 80);
        v18[6] = *(_OWORD *)(v19 + 96);
        v18 += 8;
        v21 = *(_OWORD *)(v19 + 112);
        v19 += 128LL;
        *(v18 - 1) = v21;
        --v17;
      }
      while ( v17 );
      v22 = ZeroPte;
      if ( ((((__int64)(a2 << 25) >> 16) ^ v11) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        *(_QWORD *)v11 = ZeroPte;
        if ( !v16 )
        {
LABEL_9:
          v29 = v29 ^ (v29 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20;
          MiWriteValidPteNewPage(a2);
          KeFlushSingleTb(v23, 0, 1u);
          KeFlushSingleTb(v6, 0, 1u);
          v24 = MiLockPageInline(48 * v4 - 0x58000000000LL);
          v25 = *(_BYTE *)(v9 + 34) & 0xDF;
          *(_WORD *)(v9 + 32) = 0;
          v26 = v24;
          *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
          *(_BYTE *)(v9 + 34) = v25;
          *(_BYTE *)(v9 + 34) = v25 & 0xF7;
          MiInsertPageInFreeOrZeroedList(v4, 2);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v26);
          return result;
        }
        v28 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v27 = (_QWORD *)(v6 + 8 * ((v11 >> 3) & 0x1FF));
        *v27 = ZeroPte;
        if ( !MiPteInShadowRange((unsigned __int64)v27) )
          goto LABEL_9;
      }
      MiWritePteShadow(v28, v22, v20);
      goto LABEL_9;
    }
  }
  return result;
}
