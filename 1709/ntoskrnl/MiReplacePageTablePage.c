/*
 * XREFs of MiReplacePageTablePage @ 0x1400D0B4C
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x1400D08FC (MmStealTopLevelPage.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1400D131C (MiGetLeafVa.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

void __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  ULONG_PTR v3; // r11
  int v4; // r15d
  int v5; // r14d
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // r10d
  __int64 v10; // r13
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 PteShadow; // rax
  int v15; // r9d
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  ULONG_PTR v18; // rdi
  char *v19; // rbx
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // r11
  bool v23; // zf
  int v24; // eax
  unsigned __int64 v25; // r10
  __int64 *v26; // rcx
  char v27; // r10
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  char v30; // r11
  __int64 *v31; // r9
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r10
  unsigned __int64 v36; // r13
  int v37; // esi
  unsigned __int64 v38; // rdi
  __int64 v39; // r9
  __int64 v40; // rax
  int IsPfnInline; // eax
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // [rsp+28h] [rbp-E0h]
  int v50; // [rsp+28h] [rbp-E0h]
  __int64 v51; // [rsp+30h] [rbp-D8h] BYREF
  int v52; // [rsp+38h] [rbp-D0h]
  int v53; // [rsp+3Ch] [rbp-CCh]
  __int64 v54; // [rsp+40h] [rbp-C8h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  char *v56; // [rsp+50h] [rbp-B8h]
  __int64 *v57; // [rsp+58h] [rbp-B0h]
  __int64 v58; // [rsp+60h] [rbp-A8h]
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-98h]
  __int64 v61; // [rsp+78h] [rbp-90h]
  int v62; // [rsp+88h] [rbp-80h] BYREF
  __int16 v63; // [rsp+8Ch] [rbp-7Ch]
  __int64 v64; // [rsp+90h] [rbp-78h]
  __int64 v65; // [rsp+98h] [rbp-70h]
  __int64 v66; // [rsp+A0h] [rbp-68h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v60 = a1;
  v5 = 0;
  *(_DWORD *)(a1 + 64) = -1073741823;
  v6 = *(unsigned __int64 **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 32);
  v56 = (char *)v6;
  v57 = (__int64 *)v3;
  v55 = v1;
  v58 = v7;
  v54 = v1;
  v8 = 48 * v1 - 0x58000000000LL;
  v9 = *(_DWORD *)(v2 + 68);
  v10 = 48 * v7 - 0x58000000000LL;
  v61 = v10;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v9 == 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 1544LL);
    if ( !v12 )
      goto LABEL_102;
    v13 = (__int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v13;
    if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v13, *v13);
    v59 = PteShadow;
    if ( MI_GET_PAGE_FRAME_FROM_PTE(&v59) != v1 )
      goto LABEL_102;
  }
  v15 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v1 )
  {
    v53 = 1;
    if ( v9 == 1 )
      v54 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 40LL) >> 12;
  }
  else
  {
    v53 = 0;
    LeafVa = MiGetLeafVa(v3, 1LL, v11, 1LL);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_140389B40 || LeafVa > qword_140388958)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v15 = 0;
      if ( SystemRegionType == 1 )
        v15 = 2;
    }
  }
  v18 = v3;
  v19 = &v56[-v3];
  v64 = 20LL;
  v62 = v15;
  v63 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v49 = 0;
  v52 = 0;
  while ( 1 )
  {
    v20 = *(_QWORD *)v18;
    if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
      v20 = MiReadPteShadow(v18, *(_QWORD *)v18);
    v51 = v20;
    if ( (v20 & 1) != 0 )
    {
      ++v49;
      v24 = v52 + 1;
      if ( (v20 & 0x80u) == 0LL )
        v24 = v52;
      v52 = v24;
      if ( MI_GET_PAGE_FRAME_FROM_PTE(&v51) == qword_140389188 )
      {
        ++v4;
        v25 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( v54 != v55 )
      {
        v26 = (__int64 *)(*(_QWORD *)(v2 + 72) + 8 * ((__int64)(v18 + v19 - v56) >> 3));
        v20 = *v26;
        if ( (unsigned __int64)v26 >= v25 && (unsigned __int64)v26 <= 0xFFFFF6FB7DBED7F8uLL )
          v20 = MiReadPteShadow(v26, *v26);
        v51 = v20;
      }
      goto LABEL_39;
    }
    if ( (v20 & 0x400) != 0 || (v20 & 0x800) == 0 )
      goto LABEL_39;
    v21 = MiLockTransitionLeafPage(v18);
    if ( v21 )
    {
      v20 = *(_QWORD *)v18;
      v22 = 0xFFFFF6FB7DBED000uLL;
      if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
        v20 = MiReadPteShadow(v18, *(_QWORD *)v18);
      v23 = (*(_BYTE *)(v21 + 34) & 0x20) == 0;
      v51 = v20;
      if ( !v23 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v5 )
          goto LABEL_102;
        v27 = 1;
        goto LABEL_93;
      }
      ++v5;
LABEL_39:
      if ( v54 != v55 )
      {
        v20 &= -(__int64)((v20 & 1) != 0);
        v51 = v20;
      }
      *(_QWORD *)&v19[v18] = v20;
      v18 += 8LL;
      if ( (v18 & 0xFFF) == 0 )
        break;
    }
  }
  if ( v5 )
    MiLockNestedPageAtDpcInline(v8);
  else
    MiLockPageAtDpcInline(v8);
  v28 = *(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v53 || *(unsigned __int16 *)(v8 + 24) == (unsigned __int64)(unsigned int)(v5 + v49 - v4 - v52 + 1) )
  {
    v27 = 1;
    if ( *(_WORD *)(v8 + 32) == 1 && v28 < 0x10000 )
    {
      MiLockNestedPageAtDpcInline(v10);
      *(_QWORD *)(v10 + 24) = v28 | *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v30 = 1;
      if ( v5 )
      {
        v31 = v57;
        v32 = v54;
        do
        {
          v33 = *v31;
          if ( (unsigned __int64)v31 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v31 <= 0xFFFFF6FB7DBED7F8uLL )
            v33 = MiReadPteShadow(v31, *v31);
          v51 = v33;
          if ( ((unsigned __int8)v33 & (unsigned __int8)v30) == 0 && (v33 & 0x400) == 0 && (v33 & 0x800) != 0 )
          {
            v34 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v51) - 0x58000000000LL;
            v29 = *(_QWORD *)(v34 + 40);
            if ( (v29 & 0xFFFFFFFFFLL) == v32 && v32 == v55 )
              *(_QWORD *)(v34 + 40) = v29 ^ (v35 ^ v29) & 0xFFFFFFFFFLL;
            --v5;
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          ++v31;
        }
        while ( v5 );
        v2 = v60;
      }
      v36 = (unsigned __int64)v57;
      v37 = v49;
      v38 = (unsigned __int64)v57;
      while ( v37 )
      {
        v39 = *(_QWORD *)v38;
        if ( v38 >= 0xFFFFF6FB7DBED000uLL && v38 <= 0xFFFFF6FB7DBED7F8uLL )
          v39 = MiReadPteShadow(v38, *(_QWORD *)v38);
        v51 = v39;
        if ( ((unsigned __int8)v39 & (unsigned __int8)v30) != 0 )
        {
          v50 = --v37;
          v40 = MI_GET_PAGE_FRAME_FROM_PTE(&v51);
          IsPfnInline = MiIsPfnInline(v40);
          v44 = v54;
          if ( IsPfnInline && v43 != v54 )
          {
            v45 = 48 * v43 - 0x58000000000LL;
            MiLockPageAtDpcInline(v45);
            v29 = 0xFFFFFFFFFLL;
            if ( (*(_QWORD *)(v45 + 40) & 0xFFFFFFFFFLL) == v44 && v44 == v55 )
              *(_QWORD *)(v45 + 40) ^= (v58 ^ *(_QWORD *)(v45 + 40)) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v42 = v51;
            v30 = 1;
            v37 = v50;
          }
          if ( v44 != v55 )
          {
            v46 = (__int64 *)(*(_QWORD *)(v2 + 72) + 8 * ((__int64)(v38 - v36) >> 3));
            v42 = *v46;
            if ( (unsigned __int64)v46 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v46 <= 0xFFFFF6FB7DBED7F8uLL )
              v42 = MiReadPteShadow(v46, *v46);
          }
          if ( ((unsigned __int8)v42 & (unsigned __int8)v30) != 0 )
          {
            MiWriteValidPteNewPage((unsigned __int64 *)v56, v42 | 0x20);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiInsertTbFlushEntry(&v62, (__int64)(v38 << 25) >> 16, 1LL, 0);
            v30 = 1;
          }
        }
        v38 += 8LL;
        v56 += 8;
      }
      MiFlushTbList((__int64)&v62, (_KPROCESS *)v29);
      if ( v53 == 1 )
        MiInsertTbFlushEntry(*(int **)(v2 + 40), v36, 1LL, 0);
      *(_DWORD *)(v2 + 64) = 0;
      return;
    }
  }
  else
  {
    v27 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v5 )
    goto LABEL_102;
  v22 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    do
    {
LABEL_93:
      v18 -= 8LL;
      v47 = *(_QWORD *)v18;
      if ( v18 >= v22 && v18 <= 0xFFFFF6FB7DBED7F8uLL )
        v47 = MiReadPteShadow(v18, *(_QWORD *)v18);
      v51 = v47;
    }
    while ( ((unsigned __int8)v47 & (unsigned __int8)v27) != 0 || (v47 & 0x400) != 0 || (v47 & 0x800) == 0 );
    v48 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v51) - 0x58000000000LL;
    if ( !--v5 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v10 = v61;
LABEL_102:
  MiSetOriginalPtePfnFromFreeList(v10 + 16);
}
