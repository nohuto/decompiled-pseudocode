/*
 * XREFs of MiDeleteClusterSection @ 0x1400512C0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiTryLockLeafPage @ 0x1400518D8 (MiTryLockLeafPage.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiInsertLargePageInNodeList @ 0x140136628 (MiInsertLargePageInNodeList.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbp
  unsigned int v6; // r9d
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // rdi
  int v15; // r9d
  __int64 v16; // r10
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rsi
  __int64 v21; // rax
  ULONG_PTR v22; // rbx
  char v23; // dl
  __int64 v24; // rcx
  char v25; // cl
  __int64 v26; // rdx
  char v27; // al
  char v28; // al
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  ULONG_PTR v33; // rdi
  unsigned int v34; // esi
  _QWORD *v35; // rbx
  ULONG_PTR v37; // rax
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v39; // [rsp+70h] [rbp+8h]

  v2 = -1LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v39 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  while ( 1 )
  {
    if ( MiPteInShadowRange(a2 + 8LL * v6)
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8 * ((v8 >> 3) & 0x1FF));
        v8 = v7 | 0x20;
        if ( (v11 & 0x20) == 0 )
          v8 = v7;
        v7 = v8;
        if ( (v11 & 0x42) != 0 )
          v7 = v8 | 0x42;
      }
    }
    if ( !v7 )
      return 0LL;
    if ( (v7 & 0x800) == 0 )
      return 0LL;
    v12 = MiReverseSwizzleInvalidPte(v7, v7, v8, v9);
    v14 = v13 & (v12 >> 12);
    if ( !(unsigned int)MiIsPfnInline(v14) || v15 && v14 != v2 )
      return 0LL;
    v6 = v15 + 1;
    v2 = v14 + 1;
    if ( v6 >= 0x10 )
    {
      v17 = v14 - 15;
      v18 = 48 * v14 - 0x58000000000LL;
      v19 = 48 * v16 - 0x58000000000LL;
      v20 = (_QWORD *)(a2 + 120);
      while ( 1 )
      {
        if ( v14 == v17 )
        {
          v22 = 48 * v17 - 0x58000000000LL;
        }
        else
        {
          v21 = MiTryLockLeafPage(v20, 1LL);
          v22 = v21;
          if ( !v21 )
            goto LABEL_44;
          if ( v21 != v18 )
            goto LABEL_43;
        }
        if ( (_QWORD *)(*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) != v20 )
        {
          v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v20);
          KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v20, v37, BugCheckParameter4);
        }
        v23 = *(_BYTE *)(v22 + 34);
        if ( (v23 & 7) == 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            (__int64)(v22 + 0x58000000000LL) / 48,
            v23 & 7,
            *(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        if ( *(_WORD *)(v22 + 32) || (*(_BYTE *)(v22 + 35) & 0x40) != 0 )
          break;
        MiUnlinkPageFromList(v22);
        if ( ((*(_QWORD *)(v22 + 40) >> 54) & 7) == 3 )
          MiClearPfnImageVerified(v22);
        MiReleasePageFileSpace(v39, *(_QWORD *)(v22 + 16), 1LL);
        v24 = *(_QWORD *)(v22 + 16);
        if ( (v24 & 4) != 0 )
        {
          v24 &= ~4uLL;
          *(_QWORD *)(v22 + 16) = v24;
        }
        if ( (v24 & 2) != 0 )
          *(_QWORD *)(v22 + 16) = v24 & 0xFFFFFFFFFFFFFFFDuLL;
        v25 = *(_BYTE *)(v22 + 34);
        *(_QWORD *)(v22 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        *(_BYTE *)(v22 + 35) &= 0xF8u;
        v26 = *(_QWORD *)(v22 + 40);
        if ( (v25 & 0xC0) != 0x40 )
        {
          MiAbortCombineScan(v22);
          v26 = *(_QWORD *)(v22 + 40);
          v27 = *(_BYTE *)(v22 + 34) & 0x3F | 0x40;
          *(_BYTE *)(v22 + 34) = v27;
          v25 = v27;
        }
        *(_QWORD *)(v22 + 8) = 0LL;
        v28 = *(_BYTE *)(v22 + 35);
        *(_QWORD *)(v22 + 40) = v26 & 0xFDFFFFFFFFFFFFFFuLL;
        *(_BYTE *)(v22 + 34) = v25 & 0xC7;
        v29 = *(_BYTE *)(v22 + 34);
        *(_BYTE *)(v22 + 35) = v28 & 0xDF;
        v29 &= ~0x10u;
        v30 = *(_QWORD *)(v22 + 40);
        *(_BYTE *)(v22 + 34) = v29;
        *(_QWORD *)(v22 + 40) = v30 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
        *(_QWORD *)(v22 + 24) &= 0x8000000000000000uLL;
        *(_BYTE *)(v22 + 34) = v29 & 0xF8 | 1;
        *v20 = ZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v20) )
          MiWritePteShadow(v32, v31);
        ++v5;
        --v14;
        v18 -= 48LL;
        --v20;
        if ( v14 < v17 )
          goto LABEL_44;
      }
      if ( v14 == v17 )
        goto LABEL_44;
LABEL_43:
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_44:
      v33 = v17 + 15;
      v34 = 0;
      if ( v5 )
      {
        v35 = (_QWORD *)(48 * (v17 + 15) - 0x57FFFFFFFD8LL);
        do
        {
          if ( v33 == v17 )
            break;
          if ( v5 != 16 )
          {
            *v35 &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v33, 2);
          }
          _InterlockedAnd64(v35 - 2, 0x7FFFFFFFFFFFFFFFuLL);
          ++v34;
          --v33;
          v35 -= 6;
        }
        while ( v34 < v5 );
      }
      if ( v5 == 16 )
      {
        MiInsertLargePageInNodeList(v17, 16LL, 1LL);
        goto LABEL_53;
      }
      if ( v5 )
      {
LABEL_53:
        MiLockNestedPageAtDpcInline(v19);
        *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - v5)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LOBYTE(v4) = v5 == 16;
      return v4;
    }
  }
}
