/*
 * XREFs of MiDeleteClusterSection @ 0x14010A950
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiTryLockLeafPage @ 0x14010AED8 (MiTryLockLeafPage.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // ebx
  unsigned __int64 v5; // rbp
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // r10
  unsigned __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  _QWORD *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int v25; // r14d
  _QWORD *v26; // rdi
  ULONG_PTR v28; // rax
  __int64 v29; // [rsp+70h] [rbp+8h]

  v2 = -1LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v29 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  while ( 1 )
  {
    v7 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v6);
    if ( !v7 )
      return 0LL;
    if ( (v7 & 0x800) == 0 )
      return 0LL;
    v11 = MiReverseSwizzleInvalidPte(v7, v8, v9, v10);
    v13 = v12 & (v11 >> 12);
    if ( !MiIsPfnInline(v13) || v14 && v13 != v2 )
      return 0LL;
    v6 = v14 + 1;
    v2 = v13 + 1;
    if ( v6 >= 0x10 )
    {
      v16 = v13 - 15;
      v17 = 48 * v13 - 0x58000000000LL;
      v18 = 48 * v15 - 0x58000000000LL;
      v19 = (_QWORD *)(a2 + 120);
      while ( 1 )
      {
        if ( v13 == v16 )
        {
          v21 = 48 * v16 - 0x58000000000LL;
        }
        else
        {
          v20 = MiTryLockLeafPage(v19, 1LL);
          v21 = v20;
          if ( !v20 )
            goto LABEL_29;
          if ( v20 != v17 )
            goto LABEL_28;
        }
        if ( (_QWORD *)(*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) != v19 )
        {
          v28 = MI_READ_PTE_LOCK_FREE(v19);
          KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v19, v28, *(_QWORD *)(v21 + 8));
        }
        if ( (*(_BYTE *)(v21 + 34) & 7) == 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            (v21 + 0x58000000000LL) / 48,
            *(_BYTE *)(v21 + 34) & 7,
            *(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        if ( *(_WORD *)(v21 + 32) || (*(_BYTE *)(v21 + 35) & 0x40) != 0 )
          break;
        MiUnlinkPageFromList(v21, 0);
        if ( ((*(_QWORD *)(v21 + 40) >> 54) & 7) == 3 )
          MiClearPfnImageVerified(v21, 12);
        MiReleasePageFileSpace(v29, *(_QWORD *)(v21 + 16), 1LL);
        *(_BYTE *)(v21 + 35) &= 0xF8u;
        *(_QWORD *)(v21 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        if ( (*(_BYTE *)(v21 + 34) & 0xC0) != 0x40 )
        {
          MiAbortCombineScan(v21);
          *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0x3F | 0x40;
        }
        *(_QWORD *)(v21 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(v21 + 34) &= 0xC7u;
        *(_BYTE *)(v21 + 35) &= ~0x20u;
        *(_BYTE *)(v21 + 34) &= ~0x10u;
        v22 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 40) = v22 | 0xFFFFFFFFCLL;
        *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0xF8 | 1;
        *(_QWORD *)(v21 + 24) &= 0x8000000000000000uLL;
        *v19 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v19) )
          MiWritePteShadow(v23);
        ++v5;
        --v13;
        v17 -= 48LL;
        --v19;
        if ( v13 < v16 )
          goto LABEL_29;
      }
      if ( v13 == v16 )
        goto LABEL_29;
LABEL_28:
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
      v24 = v16 + 15;
      v25 = 0;
      if ( v5 )
      {
        v26 = (_QWORD *)(48 * (v16 + 15) - 0x57FFFFFFFD8LL);
        do
        {
          if ( v24 == v16 )
            break;
          if ( v5 != 16 )
          {
            *v26 &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v24, 2);
          }
          _InterlockedAnd64(v26 - 2, 0x7FFFFFFFFFFFFFFFuLL);
          ++v25;
          --v24;
          v26 -= 6;
        }
        while ( v25 < v5 );
      }
      if ( v5 == 16 )
      {
        MiInsertLargePageInNodeListHelper(v16, 0x10uLL, 1, 0);
        goto LABEL_38;
      }
      if ( v5 )
      {
LABEL_38:
        MiLockNestedPageAtDpcInline(v18);
        *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - v5)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LOBYTE(v4) = v5 == 16;
      return v4;
    }
  }
}
