/*
 * XREFs of MiDeleteClusterSection @ 0x1400CB53C
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiTryLockLeafPage @ 0x1400CC170 (MiTryLockLeafPage.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiDeleteClusterSection(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 *v4; // r9
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rbp
  __int64 PteShadow; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // r11
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  ULONG_PTR *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r14d
  _QWORD *v22; // rdi
  ULONG_PTR v24; // rax
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h]

  v2 = -1LL;
  v4 = a2;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  v26 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v6 = 0;
  v7 = 0LL;
  do
  {
    PteShadow = *v4;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= v5 )
      PteShadow = MiReadPteShadow(v4, *v4);
    v25 = PteShadow;
    if ( !PteShadow )
      return 0LL;
    if ( (PteShadow & 0x800) == 0 )
      return 0LL;
    v9 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v25);
    if ( !(unsigned int)MiIsPfnInline(v9) || v11 && v9 != v2 )
      return 0LL;
    v2 = v9 + 1;
    v4 = (__int64 *)(v10 + 8);
  }
  while ( (unsigned int)(v11 + 1) < 0x10 );
  v13 = v9 - 15;
  v14 = 48 * v9 - 0x58000000000LL;
  v15 = 48 * v12 - 0x58000000000LL;
  v16 = a2 + 15;
  while ( 1 )
  {
    if ( v9 == v13 )
    {
      v18 = 48 * v13 - 0x58000000000LL;
    }
    else
    {
      v17 = MiTryLockLeafPage(v16, 1LL);
      v18 = v17;
      if ( !v17 )
        goto LABEL_33;
      if ( v17 != v14 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_33;
      }
    }
    if ( (ULONG_PTR *)(*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v16 )
    {
      v24 = *v16;
      if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
        v24 = MiReadPteShadow(v16, *v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v24, *(_QWORD *)(v18 + 8));
    }
    if ( (*(_BYTE *)(v18 + 34) & 7) == 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v18 + 0x58000000000LL) / 48,
        *(_BYTE *)(v18 + 34) & 7,
        *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( *(_WORD *)(v18 + 32) || (*(_BYTE *)(v18 + 35) & 0x40) != 0 )
      break;
    MiUnlinkPageFromList(v18, 0LL);
    if ( ((*(_QWORD *)(v18 + 40) >> 54) & 7) == 3 )
      MiClearPfnImageVerified(v18, 12);
    MiReleasePageFileSpace(v26, *(_QWORD *)(v18 + 16), 1LL);
    *(_BYTE *)(v18 + 35) &= 0xF8u;
    *(_QWORD *)(v18 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( (*(_BYTE *)(v18 + 34) & 0xC0) != 0x40 )
    {
      MiAbortCombineScan(v18);
      *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0x3F | 0x40;
    }
    *(_QWORD *)(v18 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v18 + 34) &= 0xC7u;
    *(_BYTE *)(v18 + 35) &= ~0x20u;
    *(_BYTE *)(v18 + 34) &= ~0x10u;
    v19 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 40) = v19 | 0xFFFFFFFFCLL;
    *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 1;
    *(_QWORD *)(v18 + 24) &= 0x8000000000000000uLL;
    *v16 = 0LL;
    if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v16, 0LL);
    ++v7;
    --v9;
    v14 -= 48LL;
    --v16;
    if ( v9 < v13 )
      goto LABEL_33;
  }
  if ( v9 != v13 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_33:
  v20 = v13 + 15;
  v21 = 0;
  if ( v7 )
  {
    v22 = (_QWORD *)(48 * (v13 + 15) - 0x57FFFFFFFD8LL);
    do
    {
      if ( v20 == v13 )
        break;
      if ( v7 != 16 )
      {
        *v22 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v20, 2);
      }
      _InterlockedAnd64(v22 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v21;
      --v20;
      v22 -= 6;
    }
    while ( v21 < v7 );
  }
  if ( v7 == 16 )
    MiInsertLargePageInNodeListHelper(v13, 0x10uLL, 1, 0);
  if ( v7 )
  {
    MiLockNestedPageAtDpcInline(v15);
    *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - v7)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  LOBYTE(v6) = v7 == 16;
  return v6;
}
