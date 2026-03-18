/*
 * XREFs of MiAgePte @ 0x1400D5440
 * Callers:
 *     <none>
 * Callees:
 *     MiCompressTbFlushList @ 0x1400182F0 (MiCompressTbFlushList.c)
 *     MiComputeAgingAmount @ 0x140022754 (MiComputeAgingAmount.c)
 *     MiVolunteerForTrimFirst @ 0x1400331E0 (MiVolunteerForTrimFirst.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  int v11; // r15d
  unsigned __int64 *v12; // r14
  char v13; // bl
  __int64 v14; // rdi
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rcx
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // r11
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int8 v28; // si
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r10
  int v31; // r11d
  unsigned __int64 v32; // rax
  char v33; // al
  __int64 v34; // r9
  int v35; // ebp
  char v36; // bl
  unsigned __int64 v37; // r10
  _DWORD *v38; // r15
  unsigned __int8 v39; // cl
  char v40; // r9
  unsigned __int64 v41; // rax
  signed __int64 v42; // rax
  signed __int64 v43; // rtt
  char v44; // al
  int v45; // esi
  __int64 v46; // rbx
  char v47; // dl
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // rdi
  volatile signed __int64 *v56; // r15
  __int64 v57; // rdx
  unsigned __int8 v58; // cl
  __int64 v59; // r8
  unsigned __int64 v60; // r9
  int v61; // r10d
  unsigned __int64 v62; // rax
  char v63; // cl
  int v64; // esi
  int v65; // ebp
  char v66; // si
  _DWORD *v67; // r14
  unsigned __int8 v68; // dl
  unsigned __int64 v69; // rax
  bool v70; // dl
  signed __int64 v71; // rax
  signed __int64 v72; // rtt
  __int64 v73; // rsi
  int v74; // edx
  char v75; // cl
  unsigned __int64 k; // rcx
  unsigned int v77; // r8d
  __int64 v78; // r10
  __int64 v79; // rax
  unsigned __int64 v80; // r9
  __int64 v81; // r9
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  unsigned int v86; // ecx
  __int64 v87; // rdx
  unsigned __int64 v88; // r8
  char v89; // al
  unsigned int v90; // r12d
  unsigned __int8 v91; // si
  __int64 v92; // r10
  char v93; // bl
  _DWORD *v94; // r15
  unsigned __int8 v95; // cl
  char v96; // r9
  unsigned __int64 v97; // rax
  signed __int64 v98; // rax
  signed __int64 v99; // rtt
  unsigned __int64 v100; // rcx
  unsigned __int8 v101; // al
  __int64 v102; // r9
  unsigned __int8 v103; // cl
  unsigned __int8 v104; // r9
  __int64 v105; // r10
  unsigned __int64 v106; // rax
  char v107; // cl
  unsigned int v108; // ecx
  __int64 v109; // [rsp+28h] [rbp-50h]
  __int64 v110; // [rsp+30h] [rbp-48h] BYREF
  char v111; // [rsp+80h] [rbp+8h]
  char v112; // [rsp+80h] [rbp+8h]
  int v113; // [rsp+80h] [rbp+8h]
  int v114; // [rsp+90h] [rbp+18h] BYREF
  int v115; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v4 = *(_QWORD *)(a1 + 8);
  v109 = v2;
  v5 = *(_QWORD **)(v4 + 16);
  if ( *(_BYTE *)(v2 + 6) == 1 )
  {
    *(_BYTE *)(v2 + 6) = 0;
    v5 = *(_QWORD **)(v4 + 16);
    v6 = *(_QWORD *)(v4 + 136);
    v7 = v5[4];
    if ( v6 <= v7 )
      return 3LL;
    v9 = MiComputeAgingAmount(v4, v6 - v7, *(_DWORD *)(v2 + 16), *(_DWORD *)(v2 + 12));
    *(_QWORD *)(v2 + 56) = v9;
    if ( *(_QWORD *)(v2 + 48) >= v9 )
      return 3LL;
  }
  v10 = a2 << 25 >> 16;
  v11 = v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL;
  v12 = (unsigned __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v110 = MI_READ_PTE_LOCK_FREE(v12);
  v13 = v110;
  v14 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v110) - 0x58000000000LL;
  if ( (*(_DWORD *)v2 & 2) != 0 )
  {
    if ( v11 == (_DWORD)v17 )
    {
      v18 = (__int64)(v12 + 1);
      v5[2] = v12 + 1;
    }
    else
    {
      v18 = (((_QWORD)v12 << 25) - v15 + 0x10000000) >> 16;
      for ( i = ((v18 << 25) - v15) >> 16; i >= v16; i = (__int64)((i << 25) - v15) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v18 = i;
      }
      v5[2] = v18;
    }
  }
  else
  {
    if ( v11 == (_DWORD)v17 )
    {
      v18 = (__int64)(v12 + 1);
    }
    else
    {
      v18 = (((_QWORD)v12 << 25) - v15 + 0x10000000) >> 16;
      for ( j = ((v18 << 25) - v15) >> 16; j >= v16; j = (__int64)((j << 25) - v15) >> 16 )
      {
        if ( j > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v18 = j;
      }
    }
    v5[1] = v18;
  }
  v21 = *(unsigned __int8 *)(v4 + 192);
  LOBYTE(v21) = v21 & 7;
  if ( (_BYTE)v21 == 2 )
  {
    v18 = qword_14036C8F8;
    if ( *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v4 + 172)) != *(_QWORD *)(qword_14036C8F8
                                                                                           + 8
                                                                                           * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)) )
      goto LABEL_216;
  }
  if ( v11 )
  {
    v22 = MI_READ_PTE_LOCK_FREE(v12);
    if ( ((unsigned __int8)v22 & v23) != 0 )
      v24 = HIBYTE(v22) & 0xF ^ (HIBYTE(v22) & 0xF ^ (16 * (v22 >> 60))) & 0x70;
    else
      v24 = 10;
    if ( (unsigned __int8)((v24 & 0xF) - 8) <= v23 )
      return 0LL;
  }
  else if ( (_BYTE)v21 || (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v17 )
  {
    return 0LL;
  }
  v25 = *(_QWORD *)(v14 + 8);
  if ( v25 >= 0 )
  {
    if ( (unsigned int)MiDemoteCombinedPte(v4, v12, v25 | 0x8000000000000000uLL) == 1 )
    {
      v26 = MI_READ_PTE_LOCK_FREE(v12);
      v13 = v26;
      v110 = v26;
    }
    v16 = 0xFFFFF68000000000uLL;
  }
  if ( v10 < v16 || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v32 = MI_READ_PTE_LOCK_FREE(v12);
    v33 = (v32 & 1) != 0 ? HIBYTE(v32) & 0xF ^ (HIBYTE(v32) & 0xF ^ (16 * (v32 >> 60))) & 0x70 : 10;
    v28 = v33 & 0xF;
  }
  else
  {
    v28 = (*(_DWORD *)MI_GET_PFN_FROM_PTE(v12, v18, v25, v21) >> 2) & 7;
  }
  v34 = *(unsigned __int8 *)(v4 + 192);
  LOBYTE(v34) = v34 & 7;
  if ( (_BYTE)v34 )
  {
    if ( !v11 )
      goto LABEL_216;
  }
  if ( (v13 & 0x20) == 0 )
  {
    v89 = *(_BYTE *)(v14 + 35);
    if ( (v89 & 8) != 0 )
      v90 = 5;
    else
      v90 = v89 & 7;
    if ( v28 >= 6u )
    {
      v92 = v109;
    }
    else
    {
      if ( v90 < 5 )
      {
        v91 = 6;
LABEL_170:
        if ( v10 < v30 || v10 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v113 = v31;
          v94 = 0LL;
          v97 = MI_READ_PTE_LOCK_FREE(v12);
          if ( (v97 & 1) != 0 )
            v93 = HIBYTE(v97) & 0xF | (16 * ((v97 >> 60) & 7));
          else
            v93 = 10;
          v95 = v93 & 0xF;
          if ( (v93 & 0xF) != 8 )
          {
LABEL_178:
            --*(_QWORD *)(v4 + 8LL * v95 + 40);
            if ( v95 == 7 )
              MiVolunteerForTrimFirst(v4, -1LL);
          }
        }
        else
        {
          v113 = 0;
          v93 = 0;
          v94 = (_DWORD *)MI_GET_PFN_FROM_PTE(v12, v27, v29, v34);
          v95 = (*v94 >> 2) & 7;
          if ( !v96 )
            goto LABEL_178;
        }
        if ( (unsigned __int8)(v91 - 1) <= 5u && (MI_READ_PTE_LOCK_FREE(v12) & 0x20) != 0 )
          v91 = 0;
        if ( v94 )
        {
          *v94 ^= (*v94 ^ (4 * v91)) & 0x1C;
        }
        else
        {
          v29 = 0x80FFFFFFFFFFFFFFuLL;
          v98 = *v12;
          do
          {
            v99 = v98;
            v98 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v12,
                    ((unsigned __int64)(((v91 ^ (unsigned __int8)v93) & 0xF ^ (unsigned __int8)v93) & 0x7F) << 56) | v98 & 0x80FFFFFFFFFFFFFFuLL,
                    v98);
          }
          while ( v99 != v98 );
        }
        if ( v91 < 8u && (v113 || (*(_BYTE *)(v4 + 192) & 7) == 0) )
        {
          ++*(_QWORD *)(v4 + 8LL * v91 + 40);
          if ( v91 == 7 )
            MiVolunteerForTrimFirst(v4, 1LL);
        }
        v92 = v109;
        ++*(_QWORD *)(v109 + 24);
        goto LABEL_194;
      }
      v92 = v109;
      if ( (*(_DWORD *)v109 & 1) != 0 )
      {
        v91 = v28 + 1;
        if ( v91 != 0xFF )
        {
          v30 = 0xFFFFF68000000000uLL;
          goto LABEL_170;
        }
      }
    }
LABEL_194:
    v100 = *(_QWORD *)(v14 + 40);
    if ( (v100 & 0x200000000000000LL) != 0 )
      v101 = *(_BYTE *)(v92 + 5);
    else
      v101 = *(_BYTE *)(v92 + 4);
    v102 = v101;
    if ( !v101 )
      v102 = 7LL;
    if ( (*(_BYTE *)(v4 + 192) & 7) == 3
      && ((v100 >> 54) & 7) == 4
      && (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v14 + 32) == 1
      || (*(_DWORD *)v92 & 3) != 0
      && (v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL
        ? ((v106 = MI_READ_PTE_LOCK_FREE(v12), (v106 & 1) != 0)
         ? (v107 = HIBYTE(v106) & 0xF | (16 * ((v106 >> 60) & 7)))
         : (v107 = 10),
           v103 = v107 & 0xF)
        : (v103 = (*(_DWORD *)MI_GET_PFN_FROM_PTE(v12, 7LL, v29, v102) >> 2) & 7),
          v103 >= v104 || v90 < *(_DWORD *)(v105 + 8)) )
    {
      v2 = v109;
      ++*(_QWORD *)(v109 + 40);
      MiInsertTbFlushEntry(v109 + 72, v10, 1LL, 0LL);
      if ( *(_DWORD *)(v2 + 84) == *(_DWORD *)(v2 + 80) )
      {
        MiFreeWsleList(v4, v109 + 72, 0LL);
        *(_DWORD *)(v109 + 84) = 0;
      }
    }
    else
    {
      v2 = v109;
    }
    goto LABEL_216;
  }
  if ( (unsigned __int8)(v28 - 1) > 5u )
    goto LABEL_64;
  v28 = 0;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v35 = v31;
    v38 = 0LL;
    v41 = MI_READ_PTE_LOCK_FREE(v12);
    if ( (v41 & 1) != 0 )
      v36 = HIBYTE(v41) & 0xF | (16 * ((v41 >> 60) & 7));
    else
      v36 = 10;
    v39 = v36 & 0xF;
    if ( (v36 & 0xF) == 8 )
      goto LABEL_59;
  }
  else
  {
    v35 = 0;
    v36 = v111;
    v38 = (_DWORD *)MI_GET_PFN_FROM_PTE(v12, v27, v29, v34);
    v39 = (*v38 >> 2) & 7;
    if ( v40 )
      goto LABEL_57;
  }
  --*(_QWORD *)(v4 + 8LL * v39 + 40);
  if ( v39 == 7 )
  {
    MiVolunteerForTrimFirst(v4, -1LL);
    v37 = 0x80FFFFFFFFFFFFFFuLL;
  }
LABEL_57:
  if ( v38 )
  {
    *v38 &= 0xFFFFFFE3;
    goto LABEL_61;
  }
LABEL_59:
  v42 = *v12;
  do
  {
    v43 = v42;
    v42 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)v12,
            ((unsigned __int64)(v36 & 0x70) << 56) | v37 & v42,
            v42);
  }
  while ( v43 != v42 );
LABEL_61:
  if ( v35 || (*(_BYTE *)(v4 + 192) & 7) == 0 )
    ++*(_QWORD *)(v4 + 40);
LABEL_64:
  if ( (*(_DWORD *)v2 & 3) != 0 )
  {
    if ( v28 != 7 )
    {
      v44 = *(_BYTE *)(v14 + 35);
      if ( (v44 & 8) == 0 && (v44 & 7u) < 5 )
      {
        v114 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v114);
          while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0 );
        }
        *(_BYTE *)(v14 + 35) = *(_BYTE *)(v14 + 35) & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v45 = 0;
    v46 = *(_QWORD *)(v2 + 64);
    v112 = dword_14036CA68;
    v47 = *(_BYTE *)(v4 + 192) & 7;
    if ( v47 )
    {
      v48 = (__int64)((_QWORD)v12 << 25) >> 16;
      if ( v48 >= 0xFFFFF68000000000uLL && v48 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_152;
    }
    if ( !v47 )
      goto LABEL_83;
    v115 = 0;
    v45 = 1;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v115);
      while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0 );
    }
    if ( ((*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) != 0)
      && ((*(_BYTE *)(v4 + 192) & 7) == 0 || *(_WORD *)(v14 + 32) <= 1u) )
    {
LABEL_83:
      if ( v46 )
      {
        MI_READ_PTE_LOCK_FREE(v12);
        v49 = MI_READ_PTE_LOCK_FREE(v12);
        *v12 = ((HIBYTE(v50) & 0xF | (16 * ((v50 >> 60) & 7))) << 56) | v49 & 0x80FFFFFFFFFFFFDFuLL;
        if ( (unsigned int)MiPteInShadowRange(v12) )
          MiWritePteShadow(v52);
        if ( v45 == 1 )
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v54);
        v55 = (__int64)((_QWORD)v12 << 25) >> 16;
        if ( v55 < 0xFFFFF68000000000uLL || v55 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v56 = (volatile signed __int64 *)(((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v62 = MI_READ_PTE_LOCK_FREE(v56);
          if ( (v62 & 1) != 0 )
            v63 = HIBYTE(v62) & 0xF | (16 * ((v62 >> 60) & 7));
          else
            v63 = 10;
          v58 = v63 & 0xF;
        }
        else
        {
          v56 = (volatile signed __int64 *)(((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v58 = (*(_DWORD *)MI_GET_PFN_FROM_PTE(v56, v51, v53, 0xFFFFF68000000000uLL) >> 2) & 7;
        }
        v64 = v58;
        if ( v61 && v58 != 7 )
        {
          MiLogPageAccess(v4, v12);
          v60 = 0xFFFFF68000000000uLL;
        }
        if ( v64 )
          goto LABEL_116;
        if ( v55 < v60 || v55 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v65 = 1;
          v67 = 0LL;
          v69 = MI_READ_PTE_LOCK_FREE(v56);
          if ( (v69 & 1) != 0 )
            v66 = HIBYTE(v69) & 0xF | (16 * ((v69 >> 60) & 7));
          else
            v66 = 10;
          v68 = v66 & 0xF;
          if ( (v66 & 0xF) == 8 )
            goto LABEL_109;
        }
        else
        {
          v65 = 0;
          v66 = v112;
          v67 = (_DWORD *)MI_GET_PFN_FROM_PTE(v56, v57, v59, v60);
          v68 = (*v67 >> 2) & 7;
          if ( (*(_BYTE *)(v4 + 192) & 7) != 0 )
            goto LABEL_109;
        }
        --*(_QWORD *)(v4 + 8LL * v68 + 40);
        if ( v68 == 7 )
          MiVolunteerForTrimFirst(v4, -1LL);
LABEL_109:
        v70 = (MI_READ_PTE_LOCK_FREE(v56) & 0x20) == 0;
        if ( v67 )
        {
          *v67 ^= (*v67 ^ (4 * v70)) & 0x1C;
        }
        else
        {
          v71 = *v56;
          do
          {
            v72 = v71;
            v71 = _InterlockedCompareExchange64(
                    v56,
                    ((unsigned __int64)(((v70 ^ (unsigned __int8)v66) & 0xF ^ (unsigned __int8)v66) & 0x7F) << 56) | v71 & 0x80FFFFFFFFFFFFFFuLL,
                    v71);
          }
          while ( v72 != v71 );
        }
        if ( v65 || (*(_BYTE *)(v4 + 192) & 7) == 0 )
        {
          v73 = 1LL;
          ++*(_QWORD *)(v4 + 8LL * v70 + 40);
          goto LABEL_117;
        }
LABEL_116:
        v73 = 1LL;
LABEL_117:
        v74 = *(_DWORD *)v46;
        if ( *(_DWORD *)v46 != 1 )
        {
          v75 = *(_BYTE *)(v46 + 4);
          if ( (v75 & 8) == 0 && v55 >= 0xFFFFF68000000000uLL && v55 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(v46 + 4) = v75 | 8;
          if ( v74 )
          {
            for ( k = v55; k >= 0xFFFFF68000000000uLL; k = (__int64)(k << 25) >> 16 )
            {
              if ( k > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
          }
        }
        v77 = *(_DWORD *)(v46 + 12);
        if ( !v77 )
          goto LABEL_139;
        if ( (*(_BYTE *)(v46 + 4) & 4) == 0 )
        {
          v78 = v46 + 8LL * (v77 - 1);
          v79 = *(_QWORD *)(v78 + 24);
          if ( (v79 & 0xC00) == 0 )
          {
            v80 = *(_QWORD *)(v78 + 24) & 0x3FFLL;
            if ( (v79 & 0xFFFFFFFFFFFFF000uLL) + ((v80 + 1) << 12) == v55 && v80 + 1 >= v80 && v80 + 1 <= 0x3FF )
            {
              ++*(_QWORD *)(v46 + 16);
              *(_QWORD *)(v78 + 24) = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)(v79 + 1)) & 0x3FF;
              goto LABEL_152;
            }
          }
        }
        if ( (*(_BYTE *)(v46 + 4) & 4) != 0
          || (v81 = v46 + 8LL * (v77 - 1), v82 = *(_QWORD *)(v81 + 24), (v82 & 0xC00) != 0)
          || (v82 & 0xFFFFFFFFFFFFF000uLL) != v55 + 4096
          || (v83 = *(_QWORD *)(v81 + 24) & 0x3FFLL, v83 + 1 < v83)
          || v83 + 1 > 0x3FF )
        {
LABEL_139:
          if ( v77 < *(_DWORD *)(v46 + 8) )
          {
            while ( 1 )
            {
              v84 = 1024LL;
              if ( (unsigned __int64)(v73 - 1) <= 0x3FF )
                v84 = v73;
              v73 -= v84;
              v85 = v55 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v84 - 1) & 0x3FF;
              v55 += v84 << 12;
              *(_QWORD *)(v46 + 8LL * (unsigned int)(*(_DWORD *)(v46 + 12))++ + 24) = v85;
              v86 = *(_DWORD *)(v46 + 12);
              *(_QWORD *)(v46 + 16) += v84;
              if ( v86 == *(_DWORD *)(v46 + 8) && (*(_BYTE *)(v46 + 4) & 4) == 0 )
              {
                qsort((void *)(v46 + 24), v86, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                MiCompressTbFlushList(v46);
                if ( *(_DWORD *)(v46 + 12) == *(_DWORD *)(v46 + 8) )
                  break;
              }
              if ( !v73 )
                goto LABEL_152;
            }
            if ( v73 )
            {
              *(_QWORD *)(v46 + 16) = *(unsigned int *)(v46 + 12);
              *(_BYTE *)(v46 + 5) = 1;
            }
          }
          else
          {
            *(_BYTE *)(v46 + 5) = 1;
          }
          goto LABEL_152;
        }
        ++*(_QWORD *)(v46 + 16);
        *(_QWORD *)(v81 + 24) = (v82 - 4096) ^ ((unsigned __int16)(v82 - 4096) ^ (unsigned __int16)(v82 - 4096 + 1)) & 0x3FF;
LABEL_152:
        ++*(_QWORD *)(v2 + 32);
        v87 = *(_QWORD *)(v2 + 64);
        v88 = qword_14036C218;
        if ( (*(_BYTE *)(v87 + 4) & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[13] )
          v88 = -1LL;
        if ( (*(_DWORD *)(v87 + 12) >= *(_DWORD *)(v87 + 8) || *(_BYTE *)(v87 + 5) || *(_QWORD *)(v87 + 16) > v88)
          && v88 >= 0x400
          && !*(_BYTE *)(v87 + 5) )
        {
          MiFlushTbList(*(_QWORD *)(v2 + 64));
        }
        goto LABEL_216;
      }
      if ( v45 != 1 )
        goto LABEL_152;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_152;
  }
LABEL_216:
  ++*(_QWORD *)(v2 + 48);
  v108 = 0;
  if ( *(_QWORD *)(v2 + 48) >= *(_QWORD *)(v2 + 56) )
    return 3;
  return v108;
}
