/*
 * XREFs of MiReplacePageTablePage @ 0x1400B97E0
 * Callers:
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x140143AFC (MmStealTopLevelPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  unsigned __int64 v3; // rdi
  int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // r10d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r9d
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  char v19; // r10
  __int64 v20; // rdi
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // r11
  __int64 v24; // rcx
  int v25; // eax
  volatile signed __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 result; // rax
  unsigned __int64 v29; // r14
  __int64 v30; // rsi
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int8 v38; // r11
  unsigned __int64 v39; // rcx
  __int64 v40; // r10
  int v41; // edi
  unsigned __int64 i; // rsi
  __int64 v43; // rbx
  unsigned __int8 v44; // r10
  unsigned __int64 v45; // rax
  __int64 v46; // r9
  char v47; // r10
  unsigned __int64 v48; // r11
  __int64 v49; // rdi
  int v50; // [rsp+28h] [rbp-E0h]
  int v51; // [rsp+28h] [rbp-E0h]
  __int64 v52; // [rsp+30h] [rbp-D8h] BYREF
  int v53; // [rsp+38h] [rbp-D0h]
  int v54; // [rsp+3Ch] [rbp-CCh]
  __int64 v55; // [rsp+40h] [rbp-C8h]
  __int64 v56; // [rsp+48h] [rbp-C0h]
  __int64 v57; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+58h] [rbp-B0h]
  __int64 v59; // [rsp+60h] [rbp-A8h]
  __int64 v60; // [rsp+68h] [rbp-A0h]
  __int64 v61; // [rsp+70h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  __int64 v63; // [rsp+80h] [rbp-88h]
  int v64; // [rsp+88h] [rbp-80h] BYREF
  __int16 v65; // [rsp+8Ch] [rbp-7Ch]
  __int64 v66; // [rsp+90h] [rbp-78h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  __int64 v68; // [rsp+A0h] [rbp-68h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  v63 = a1;
  v4 = 0;
  *(_DWORD *)(a1 + 56) = -1073741823;
  v5 = v1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 32);
  v57 = v6;
  v58 = v3;
  v59 = v1;
  v60 = v7;
  v8 = 48 * v1 - 0x58000000000LL;
  v9 = *(_DWORD *)(v2 + 60);
  v61 = 48 * v7 - 0x58000000000LL;
  if ( v9 == 1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 1544LL);
    if ( !v10 )
      return MiSetOriginalPtePfnFromFreeList(v61 + 16);
    v62 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62);
    if ( (v12 & (v11 >> 12)) != v1 )
      return MiSetOriginalPtePfnFromFreeList(v61 + 16);
  }
  v13 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v1 )
  {
    LODWORD(v55) = 1;
    if ( v9 == 1 )
      v5 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 40LL) >> 12;
  }
  else
  {
    LODWORD(v55) = 0;
    LeafVa = MiGetLeafVa(v3);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_1403CD100 || LeafVa > qword_1403CBB70)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v13 = 0;
      if ( SystemRegionType == 1 )
        v13 = 2;
    }
  }
  v65 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v56 = v6 - v3;
  v16 = v3;
  v66 = 20LL;
  v64 = v13;
  v50 = 0;
  v54 = 0;
  v53 = 0;
  do
  {
    while ( 1 )
    {
      v17 = MI_READ_PTE_LOCK_FREE(v16);
      v52 = v17;
      v18 = v17;
      if ( (v17 & 1) != 0 )
        break;
      v19 = v17;
      if ( (v17 & 0x400) != 0 || (v17 & 0x800) == 0 )
        goto LABEL_21;
      v20 = MiLockTransitionLeafPage(v16, (_BYTE *)(v4 != 0));
      if ( v20 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v16);
        v22 = (*(_BYTE *)(v20 + 34) & 0x20) == 0;
        v18 = v21;
        v19 = v21;
        v52 = v21;
        if ( !v22 )
        {
          v26 = (volatile signed __int64 *)(v20 + 24);
          goto LABEL_35;
        }
        ++v4;
LABEL_21:
        v23 = v56;
        goto LABEL_22;
      }
    }
    ++v50;
    v25 = v54 + 1;
    if ( (v18 & 0x80u) == 0LL )
      v25 = v54;
    v54 = v25;
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52) >> 12) & 0xFFFFFFFFFLL) == qword_1403CC408 )
      ++v53;
    v23 = v56;
    if ( v5 != v1 )
    {
      v18 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v2 + 64) + 8 * ((__int64)(v16 + v56 - v57) >> 3));
      v52 = v18;
      v19 = v18;
    }
LABEL_22:
    if ( v5 != v1 )
    {
      v18 &= -(__int64)((v19 & 1) != 0);
      v52 = v18;
    }
    *(_QWORD *)(v23 + v16) = v18;
    v16 += 8LL;
  }
  while ( (v16 & 0xFFF) != 0 );
  v24 = 48 * v1 - 0x58000000000LL;
  if ( v4 )
    MiLockNestedPageAtDpcInline(v24);
  else
    MiLockPageAtDpcInline(v24);
  v26 = (volatile signed __int64 *)(v8 + 24);
  v29 = *(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( ((_DWORD)v55 || *(unsigned __int16 *)(v8 + 24) == (unsigned __int64)(unsigned int)(v4 + v50 - v53 - v54 + 1))
    && *(_WORD *)(v8 + 32) == 1
    && v29 < 0x10000 )
  {
    v30 = v61;
    MiLockNestedPageAtDpcInline(v61);
    *(_QWORD *)(v30 + 24) = v29 | *(_QWORD *)(v30 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64(v26, 0x7FFFFFFFFFFFFFFFuLL);
    v31 = v58;
    v32 = v58;
    if ( v4 )
    {
      v33 = v60;
      do
      {
        v34 = MI_READ_PTE_LOCK_FREE(v32);
        if ( ((unsigned __int8)v34 & v38) == 0 && (v34 & 0x400) == 0 && (v34 & 0x800) != 0 )
        {
          v39 = 48 * (((unsigned __int64)MiReverseSwizzleInvalidPte(v34, v35, v36, v37) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000000LL;
          if ( (*(_QWORD *)(v39 + 40) & 0xFFFFFFFFFLL) == v5 && v5 == v40 )
            *(_QWORD *)(v39 + 40) ^= (v33 ^ *(_QWORD *)(v39 + 40)) & 0xFFFFFFFFFLL;
          --v4;
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v32 = v37 + 8;
      }
      while ( v4 );
      v2 = v63;
      v31 = v58;
    }
    v41 = v50;
    for ( i = v31; v41; i += 8LL )
    {
      v52 = MI_READ_PTE_LOCK_FREE(i);
      v43 = v52;
      if ( ((unsigned __int8)v52 & v44) != 0 )
      {
        v51 = --v41;
        v45 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52);
        if ( (unsigned int)MiIsPfnInline((v45 >> 12) & 0xFFFFFFFFFLL) && v46 != v5 )
        {
          v49 = 48 * v46 - 0x58000000000LL;
          MiLockPageAtDpcInline(v49);
          if ( (*(_QWORD *)(v49 + 40) & 0xFFFFFFFFFLL) == v5 && v5 == v59 )
            *(_QWORD *)(v49 + 40) ^= (v60 ^ *(_QWORD *)(v49 + 40)) & 0xFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v41 = v51;
          v47 = 1;
          v48 = v58;
        }
        if ( v5 != v59 )
          v43 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v2 + 64) + 8 * ((__int64)(i - v48) >> 3));
        if ( ((unsigned __int8)v43 & (unsigned __int8)v47) != 0 )
        {
          MiWriteValidPteNewProtection(v57, v43 | 0x20);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            MiInsertTbFlushEntry((__int64)&v64, (__int64)(i << 25) >> 16, 1LL, 0);
        }
      }
      v57 += 8LL;
    }
    result = MiFlushTbList(&v64);
    *(_DWORD *)(v2 + 56) = 0;
    return result;
  }
LABEL_35:
  _InterlockedAnd64(v26, 0x7FFFFFFFFFFFFFFFuLL);
  while ( v4 )
  {
    v16 -= 8LL;
    v27 = MI_READ_PTE_LOCK_FREE(v16);
    v52 = v27;
    if ( (v27 & 1) == 0 && (v27 & 0x400) == 0 && (v27 & 0x800) != 0 )
    {
      --v4;
      _InterlockedAnd64(
        (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v52) - 0x57FFFFFFFE8LL),
        0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return MiSetOriginalPtePfnFromFreeList(v61 + 16);
}
