/*
 * XREFs of MiReplacePageTablePage @ 0x140023E74
 * Callers:
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x14013497C (MmStealTopLevelPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x14017CE14 (MiGetLeafVa.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r13
  ULONG_PTR v3; // rbx
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r9d
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  __int64 v19; // r11
  ULONG_PTR v20; // rsi
  ULONG_PTR v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r10
  bool v26; // zf
  int v27; // eax
  unsigned __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // r11
  __int64 v31; // r9
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r10
  __int64 result; // rax
  int v38; // edi
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int8 v49; // r10
  __int64 v50; // rcx
  __int64 v51; // [rsp+20h] [rbp-49h] BYREF
  int v52; // [rsp+28h] [rbp-41h]
  __int64 v53; // [rsp+30h] [rbp-39h]
  __int64 v54; // [rsp+38h] [rbp-31h]
  __int64 v55; // [rsp+40h] [rbp-29h]
  __int64 v56; // [rsp+48h] [rbp-21h]
  __int64 v57; // [rsp+50h] [rbp-19h]
  __int64 v58; // [rsp+58h] [rbp-11h]
  __int64 v59; // [rsp+60h] [rbp-9h] BYREF
  __int64 v60; // [rsp+68h] [rbp-1h]
  __int64 v61; // [rsp+70h] [rbp+7h]
  int v63; // [rsp+D8h] [rbp+6Fh]
  int v64; // [rsp+D8h] [rbp+6Fh]
  int v65; // [rsp+E0h] [rbp+77h]
  int v66; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v1;
  *(_DWORD *)(a1 + 64) = -1073741823;
  v7 = *(_QWORD *)(a1 + 40);
  v54 = *(_QWORD *)(a1 + 16);
  v58 = v7;
  v55 = v3;
  v53 = v1;
  v57 = v5;
  v56 = v1;
  v8 = 48 * v1 - 0x58000000000LL;
  v9 = 48 * v5;
  v10 = *(_DWORD *)(a1 + 68);
  v11 = 1LL;
  v12 = v9 - 0x58000000000LL;
  v13 = 0xFFFFF68000000000uLL;
  v61 = v12;
  if ( v10 == 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1544LL);
    if ( !v14 )
      return MiSetOriginalPtePfnFromFreeList(v12 + 16, v11, v13);
    v59 = MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v15 = MI_GET_PAGE_FRAME_FROM_PTE(&v59);
    if ( v15 != v1 )
      return MiSetOriginalPtePfnFromFreeList(v12 + 16, v11, v13);
    LODWORD(v11) = 1;
  }
  v16 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v1 )
  {
    v52 = 1;
    if ( v10 == 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 40LL) >> 12;
      v56 = v6;
    }
  }
  else
  {
    v52 = 0;
    LeafVa = MiGetLeafVa(v3, 1LL, v13, (unsigned int)v11);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_14036D870 || LeafVa > qword_14036C5D0)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v16 = 0;
      if ( SystemRegionType == 1 )
        v16 = 2;
    }
  }
  *(_DWORD *)(v7 + 12) = 0;
  *(_QWORD *)(v7 + 16) = 0LL;
  v19 = v54;
  *(_DWORD *)v7 = v16;
  *(_WORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 20;
  *(_QWORD *)(v7 + 24) = 0LL;
  v20 = v3;
  v21 = v54 - v3;
  v63 = 0;
  v66 = 0;
  v65 = 0;
  v60 = -v19;
  while ( 1 )
  {
    v22 = MI_READ_PTE_LOCK_FREE(v20);
    v51 = v22;
    v23 = v22;
    if ( (v22 & 1) != 0 )
    {
      ++v63;
      v26 = (v22 & 0x80u) == 0LL;
      v27 = v66 + 1;
      if ( v26 )
        v27 = v66;
      v66 = v27;
      if ( MI_GET_PAGE_FRAME_FROM_PTE(&v51) == qword_14036CEC8 )
        ++v65;
      if ( v6 != v53 )
      {
        v23 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v2 + 72) + 8 * ((__int64)(v20 + v21 + v60) >> 3));
        v51 = v23;
      }
      goto LABEL_28;
    }
    if ( (v22 & 0x400) != 0 || (v22 & 0x800) == 0 )
      goto LABEL_28;
    if ( MiLockTransitionLeafPage(v20) )
    {
      v24 = MI_READ_PTE_LOCK_FREE(v20);
      v26 = (*(_BYTE *)(v25 + 34) & 0x20) == 0;
      v23 = v24;
      v51 = v24;
      if ( !v26 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v4 )
          return MiSetOriginalPtePfnFromFreeList(v12 + 16, v11, v13);
        while ( 1 )
        {
          do
          {
            do
            {
LABEL_73:
              v20 -= 8LL;
              v48 = MI_READ_PTE_LOCK_FREE(v20);
              v51 = v48;
            }
            while ( ((unsigned __int8)v48 & v49) != 0 );
          }
          while ( (v48 & 0x400) != 0 || (v48 & 0x800) == 0 );
          v50 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v51) - 0x58000000000LL;
          if ( !--v4 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = v61;
        return MiSetOriginalPtePfnFromFreeList(v12 + 16, v11, v13);
      }
      ++v4;
LABEL_28:
      if ( v6 != v53 )
      {
        v23 &= -(__int64)((v23 & 1) != 0);
        v51 = v23;
      }
      *(_QWORD *)(v21 + v20) = v23;
      v20 += 8LL;
      if ( (v20 & 0xFFF) == 0 )
        break;
    }
  }
  if ( v4 )
    MiLockNestedPageAtDpcInline(v8);
  else
    MiLockPageAtDpcInline(v8);
  v28 = *(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v52 && *(unsigned __int16 *)(v8 + 24) != (unsigned __int64)(unsigned int)(v4 + v63 - v65 - v66 + 1)
    || *(_WORD *)(v8 + 32) != 1
    || v28 >= 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v4 )
      return MiSetOriginalPtePfnFromFreeList(v12 + 16, v11, v13);
    goto LABEL_73;
  }
  MiLockNestedPageAtDpcInline(v12);
  *(_QWORD *)(v12 + 24) ^= (v28 ^ *(_QWORD *)(v12 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v29 = v56;
  v30 = 1LL;
  if ( v4 )
  {
    v31 = v55;
    v32 = v53;
    do
    {
      v33 = MI_READ_PTE_LOCK_FREE(v31);
      v51 = v33;
      if ( ((unsigned __int8)v33 & (unsigned __int8)v30) == 0 && (v33 & 0x400) == 0 && (v33 & 0x800) != 0 )
      {
        v35 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v51) - 0x58000000000LL;
        if ( (*(_QWORD *)(v35 + 40) & 0xFFFFFFFFFLL) == v29 && v29 == v32 )
          *(_QWORD *)(v35 + 40) ^= (v36 ^ *(_QWORD *)(v35 + 40)) & 0xFFFFFFFFFLL;
        --v4;
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v31 = v34 + 8;
    }
    while ( v4 );
    v2 = a1;
  }
  result = v55;
  v38 = v63;
  v39 = v55;
  if ( v63 )
  {
    v40 = -v55;
    do
    {
      v51 = MI_READ_PTE_LOCK_FREE(v39);
      if ( ((unsigned __int8)v51 & (unsigned __int8)v30) != 0 )
      {
        v64 = --v38;
        v41 = MI_GET_PAGE_FRAME_FROM_PTE(&v51);
        if ( (unsigned int)MiIsPfnInline(v41, v42, v43, v44) && v46 != v29 )
        {
          v47 = 48 * v46 - 0x58000000000LL;
          MiLockPageAtDpcInline(v47);
          if ( (*(_QWORD *)(v47 + 40) & 0xFFFFFFFFFLL) == v29 && v29 == v53 )
            *(_QWORD *)(v47 + 40) ^= (v57 ^ *(_QWORD *)(v47 + 40)) & 0xFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v45 = v51;
          v30 = 1LL;
          v38 = v64;
        }
        if ( v29 != v53 )
          v45 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v2 + 72) + 8 * ((v40 + v39) >> 3));
        if ( ((unsigned __int8)v45 & (unsigned __int8)v30) != 0 )
        {
          MiWriteValidPteNewProtection(v54, v45 | 0x20);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            MiInsertTbFlushEntry(v58, v39 << 25 >> 16, 1LL, 0LL);
          v30 = 1LL;
        }
      }
      v54 += 8LL;
      v39 += 8LL;
    }
    while ( v38 );
    result = v55;
  }
  if ( v52 == (_DWORD)v30 )
    result = MiInsertTbFlushEntry(v58, result, v30, 0LL);
  *(_DWORD *)(v2 + 64) = 0;
  return result;
}
