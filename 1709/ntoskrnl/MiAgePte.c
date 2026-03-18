/*
 * XREFs of MiAgePte @ 0x14009DA30
 * Callers:
 *     <none>
 * Callees:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x14009EF20 (MiCanMergeTbFlushEntryBackwards.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiCompressTbFlushList @ 0x140112EA0 (MiCompressTbFlushList.c)
 *     MiComputeAgingAmount @ 0x140117450 (MiComputeAgingAmount.c)
 *     MiLockSetPfnPriority @ 0x14011AF94 (MiLockSetPfnPriority.c)
 *     MiVolunteerForTrimFirst @ 0x140125ACC (MiVolunteerForTrimFirst.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiInsertVmAccessedEntry @ 0x14021D7A0 (MiInsertVmAccessedEntry.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int *v5; // r12
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // r9
  unsigned __int64 v15; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v17; // rbp
  int v18; // r9d
  __int64 v19; // r10
  char v20; // r11
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r9
  char v28; // r15
  unsigned __int64 v29; // r10
  unsigned __int8 v30; // al
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  char v33; // al
  __int64 v34; // rsi
  int v35; // r15d
  char v36; // dl
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r9
  __int64 v40; // r10
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // rdx
  int v43; // edx
  __int64 v44; // rbp
  __int64 v45; // r15
  char v46; // cl
  unsigned __int64 v47; // rcx
  unsigned int v48; // ebx
  __int64 v49; // r9
  __int64 v50; // rax
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // rax
  unsigned __int64 v57; // r9
  volatile signed __int64 *v58; // r15
  unsigned __int8 v59; // al
  __int64 v60; // rax
  int v61; // ebx
  unsigned __int8 v62; // bp
  int v63; // r13d
  unsigned __int64 *v64; // rax
  char v65; // r10
  __int64 v66; // r11
  unsigned __int64 *v67; // r14
  char v68; // bl
  unsigned __int8 v69; // r9
  unsigned __int64 v70; // rax
  char v71; // r9
  __int64 *v72; // rcx
  __int64 v73; // rax
  __int64 *v74; // r8
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r10
  unsigned __int64 v77; // rcx
  __int64 v78; // rax
  volatile signed __int64 v79; // rax
  unsigned __int64 v80; // r9
  signed __int64 v81; // rax
  signed __int64 v82; // rtt
  __int64 *v83; // rcx
  __int64 v84; // rax
  unsigned __int64 *v85; // r8
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // r9
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rdi
  __int64 v91; // rax
  unsigned __int64 *v92; // r9
  unsigned __int64 v93; // r11
  __int64 v94; // r10
  unsigned __int64 v95; // rdi
  __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int8 v98; // al
  char v99; // cl
  int v100; // edx
  unsigned __int64 v101; // rdx
  char v102; // cl
  unsigned int v103; // ebx
  unsigned __int8 v104; // al
  __int64 v105; // rsi
  unsigned __int64 v106; // rcx
  unsigned __int8 v107; // al
  __int64 v108; // r9
  unsigned __int8 v109; // al
  __int64 v110; // rax
  unsigned int v111; // ecx
  char v112; // [rsp+20h] [rbp-A8h]
  __int64 v113; // [rsp+28h] [rbp-A0h]
  int v114; // [rsp+30h] [rbp-98h]
  unsigned __int64 v115; // [rsp+38h] [rbp-90h] BYREF
  __int64 v116; // [rsp+40h] [rbp-88h] BYREF
  __int64 v117; // [rsp+48h] [rbp-80h] BYREF
  __int64 v118; // [rsp+50h] [rbp-78h] BYREF
  __int64 v119; // [rsp+58h] [rbp-70h]
  _QWORD v120[4]; // [rsp+60h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int **)(a1 + 144);
  v113 = v3;
  v7 = *(_QWORD **)(v3 + 16);
  if ( *((_BYTE *)v5 + 6) == 1 )
  {
    *((_BYTE *)v5 + 6) = 0;
    v7 = *(_QWORD **)(v3 + 16);
    v8 = *(_QWORD *)(v3 + 136);
    v9 = v7[4];
    if ( v8 <= v9 )
      return 3LL;
    v11 = MiComputeAgingAmount(v3, v8 - v9, v5[4], v5[3]);
    *((_QWORD *)v5 + 7) = v11;
    if ( *((_QWORD *)v5 + 6) >= v11 )
      return 3LL;
  }
  v12 = 0xFFFFF68000000000uLL;
  v119 = 0LL;
  v13 = a2 << 25 >> 16;
  if ( v13 < 0xFFFFF68000000000uLL || (v14 = 0LL, v13 > 0xFFFFF6FFFFFFFFFFuLL) )
    v14 = 1LL;
  v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  PteShadow = *(_QWORD *)v15;
  if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v15, *(_QWORD *)v15);
  v115 = PteShadow;
  v17 = MI_GET_PFN_FROM_PTE(&v115, v12, a3, v14);
  if ( (*v5 & 2) != 0 )
  {
    if ( v18 == 1 )
    {
      v21 = v15 + 8;
      v7[2] = v15 + 8;
    }
    else
    {
      v21 = (__int64)((v15 << 25) + 0x10000000) >> 16;
      v22 = v21 << 25 >> 16;
      if ( v22 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v22 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v21 = v22;
          v22 = (__int64)(v22 << 25) >> 16;
        }
        while ( v22 >= 0xFFFFF68000000000uLL );
        v19 = v113;
      }
      v7[2] = v21;
    }
  }
  else
  {
    if ( v18 == 1 )
    {
      v21 = v15 + 8;
    }
    else
    {
      v21 = (__int64)((v15 << 25) + 0x10000000) >> 16;
      v23 = v21 << 25 >> 16;
      if ( v23 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v23 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v21 = v23;
          v23 = (__int64)(v23 << 25) >> 16;
        }
        while ( v23 >= 0xFFFFF68000000000uLL );
        v19 = v113;
      }
    }
    v7[1] = v21;
  }
  if ( !v18 && (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  v24 = *(_QWORD *)(v17 + 8);
  if ( v24 >= 0 )
  {
    if ( (unsigned int)MiDemoteCombinedPte(v19, v15, v24 | 0x8000000000000000uLL) == 1 )
    {
      PteShadow = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v15, *(_QWORD *)v15);
      v115 = PteShadow;
    }
    v20 = 0;
  }
  v25 = (PteShadow >> 5) & 1;
  if ( !(_DWORD)v25 || (v26 = *((_QWORD *)v5 + 32)) == 0 || v13 > 0x7FFFFFFEFFFFLL )
  {
    v27 = *v5;
    v28 = v25 | 2;
    v29 = 0xFFFFF68000000000uLL;
    if ( (*v5 & 3) == 0 )
      v28 = v25;
    if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v31 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
        v31 = MiReadPteShadow(v15, *(_QWORD *)v15);
      if ( (v31 & 1) != 0 )
        v32 = HIBYTE(v31);
      else
        LOBYTE(v32) = 10;
      v30 = v32 & 0xF;
    }
    else
    {
      v30 = (*(_BYTE *)MI_GET_PFN_FROM_PTE(v15, v21, v24, v27) >> 1) & 7;
    }
    if ( (v28 & 1) != 0 )
    {
      if ( (unsigned __int8)(v30 - 1) > 5u )
      {
        if ( v30 == 7 )
          goto LABEL_60;
      }
      else
      {
        MiSetVaAge(v113, v13, 0LL);
      }
      v33 = *(_BYTE *)(v17 + 35);
      if ( (v33 & 8) == 0 && (v33 & 7u) < 5 )
        MiLockSetPfnPriority(v17, 5LL);
LABEL_60:
      v34 = 0LL;
      if ( (v28 & 2) != 0 )
        v34 = *((_QWORD *)v5 + 8);
      v35 = 0;
      v114 = dword_140388C68;
      v36 = *(_BYTE *)(v113 + 192) & 7;
      if ( v36 )
      {
        v37 = (__int64)(v15 << 25) >> 16;
        if ( v37 >= 0xFFFFF68000000000uLL && v37 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_200;
      }
      if ( v36 )
      {
        if ( (v35 = 1, MiLockPageAtDpcInline(v17), (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1)
          && (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) == 0
          || (*(_BYTE *)(v113 + 192) & 7) != 0 && *(_WORD *)(v17 + 32) > 1u )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_200;
        }
      }
      v38 = (__int64)(v15 << 25) >> 16;
      if ( !v34 )
      {
        if ( v35 == 1 )
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_199;
      }
      v39 = *(_QWORD *)v15;
      v40 = *(_QWORD *)v15;
      v41 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
        v40 = MiReadPteShadow(v15, *(_QWORD *)v15);
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= v41 )
        v39 = MiReadPteShadow(v15, v39);
      v42 = v40 & 0x80FFFFFFFFFFFFDFuLL | ((HIBYTE(v39) & 0xF | (16 * ((v39 >> 60) & 7))) << 56);
      *(_QWORD *)v15 = v42;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= v41 )
        MiWritePteShadow(v15, v42);
      if ( v35 == 1 )
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v43 = *(_DWORD *)v34;
      v44 = 1LL;
      v45 = (__int64)(v15 << 25) >> 16;
      if ( *(_DWORD *)v34 != 1 )
      {
        v46 = *(_BYTE *)(v34 + 4);
        if ( (v46 & 8) == 0 && v38 >= 0xFFFFF68000000000uLL && v38 <= 0xFFFFF6FFFFFFFFFFuLL )
          *(_BYTE *)(v34 + 4) = v46 | 8;
        if ( v43 )
        {
          v47 = (__int64)(v15 << 25) >> 16;
          if ( v38 >= 0xFFFFF68000000000uLL )
          {
            do
            {
              if ( v47 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              v47 = (__int64)(v47 << 25) >> 16;
            }
            while ( v47 >= 0xFFFFF68000000000uLL );
          }
        }
      }
      v48 = *(_DWORD *)(v34 + 12);
      if ( !v48
        || (*(_BYTE *)(v34 + 4) & 4) != 0
        || (v49 = v34 + 8LL * (v48 - 1), v50 = *(_QWORD *)(v49 + 24), (v50 & 0xC00) != 0)
        || (v51 = *(_QWORD *)(v49 + 24) & 0x3FFLL, v52 = (v50 & 0xFFFFFFFFFFFFF000uLL) + ((v51 + 1) << 12), v52 != v38)
        || v51 + 1 < v51
        || v51 + 1 > 0x3FF )
      {
        if ( (unsigned int)MiCanMergeTbFlushEntryBackwards(v34, (__int64)(v15 << 25) >> 16, 1LL, 0LL) )
        {
          v52 = v34 + 8LL * (v48 - 1);
          v53 = *(_QWORD *)(v52 + 24);
          ++*(_QWORD *)(v34 + 16);
          *(_QWORD *)(v52 + 24) = (v53 - 4096) ^ ((unsigned __int16)(v53 - 4096) ^ (unsigned __int16)(v53 - 4096 + 1)) & 0x3FF;
        }
        else if ( v48 < *(_DWORD *)(v34 + 8) )
        {
          while ( 1 )
          {
            v52 = 1024LL;
            if ( (unsigned __int64)(v44 - 1) <= 0x3FF )
              v52 = v44;
            v44 -= v52;
            v54 = v45 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v52 - 1) & 0x3FF;
            v45 += v52 << 12;
            *(_QWORD *)(v34 + 8LL * (unsigned int)(*(_DWORD *)(v34 + 12))++ + 24) = v54;
            v55 = *(_DWORD *)(v34 + 12);
            *(_QWORD *)(v34 + 16) += v52;
            if ( v55 == *(_DWORD *)(v34 + 8) && (*(_BYTE *)(v34 + 4) & 4) == 0 )
            {
              qsort((void *)(v34 + 24), v55, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(v34);
              v56 = *(unsigned int *)(v34 + 12);
              if ( (_DWORD)v56 == *(_DWORD *)(v34 + 8) )
                break;
            }
            if ( !v44 )
              goto LABEL_115;
          }
          if ( v44 )
          {
            *(_BYTE *)(v34 + 5) = 1;
            *(_QWORD *)(v34 + 16) = v56;
          }
        }
        else
        {
          *(_BYTE *)(v34 + 5) = 1;
        }
      }
      else
      {
        ++*(_QWORD *)(v34 + 16);
        *(_QWORD *)(v49 + 24) = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)(v50 + 1)) & 0x3FF;
      }
LABEL_115:
      v57 = 0xFFFFF68000000000uLL;
      if ( v38 < 0xFFFFF68000000000uLL || v38 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v58 = (volatile signed __int64 *)(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v60 = *v58;
        if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL )
          v60 = MiReadPteShadow(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v58);
        if ( (v60 & 1) != 0 )
          v59 = HIBYTE(v60) & 0xF;
        else
          v59 = 10;
      }
      else
      {
        v58 = (volatile signed __int64 *)(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v59 = (*(_BYTE *)MI_GET_PFN_FROM_PTE(v58, v52, v51, 0xFFFFF68000000000uLL) >> 1) & 7;
      }
      v61 = v59;
      if ( v114 && v59 != 7 )
      {
        MiLogPageAccess(v113, v15, v51, v57);
        v57 = 0xFFFFF68000000000uLL;
      }
      if ( v61 )
        goto LABEL_199;
      v62 = 1;
      if ( v38 < v57 || v38 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v70 = *v58;
        v65 = 0;
        v67 = 0LL;
        v63 = 1;
        if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL )
          v70 = MiReadPteShadow(v58, *v58);
        if ( (v70 & 1) != 0 )
          v71 = HIBYTE(v70) & 0xF | (16 * ((v70 >> 60) & 7));
        else
          v71 = 10;
        v66 = v113;
        v68 = v71;
        v69 = v71 & 0xF;
        if ( v69 == 8 )
        {
LABEL_153:
          v79 = *v58;
          v80 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v79) = MiReadPteShadow(v58, *v58);
          if ( (v79 & 0x20) != 0
            && (v38 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(v66 + 192) & 7) != 0 || !*(_QWORD *)(v66 + 584)) )
          {
            v62 = 0;
          }
          if ( v67 )
          {
            *v67 = *v67 & 0xFFFFFFFFFFFFFFF1uLL | (2LL * v62);
          }
          else
          {
            v81 = *v58;
            do
            {
              v82 = v81;
              v81 = _InterlockedCompareExchange64(
                      v58,
                      ((unsigned __int64)(v62 & 0x7F | v68 & 0x70u) << 56) | v81 & 0x80FFFFFFFFFFFFFFuLL,
                      v81);
            }
            while ( v82 != v81 );
          }
          if ( v65 )
          {
LABEL_181:
            if ( v63 )
            {
              v90 = ((v38 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              v91 = *(_QWORD *)v90;
              if ( v90 >= 0xFFFFF6FB7DBED000uLL && v90 <= 0xFFFFF6FB7DBED7F8uLL )
                v91 = MiReadPteShadow(v90, *(_QWORD *)v90);
              v118 = v91;
              v92 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v118) - 0x58000000000LL);
              if ( ((*(_DWORD *)v92 >> 4) & 0x3FF) == 0 )
              {
                v94 = v119;
                v95 = (__int64)((v90 << 25) - v119) >> 16;
                memset(v120, 0, sizeof(v120));
                do
                {
                  v96 = *(_QWORD *)v95;
                  v97 = 0xFFFFF6FB7DBED000uLL;
                  if ( v95 >= 0xFFFFF6FB7DBED000uLL )
                  {
                    v97 = v93;
                    if ( v95 <= v93 )
                      LOBYTE(v96) = MiReadPteShadow(v95, *(_QWORD *)v95);
                  }
                  if ( (v96 & 1) != 0 )
                  {
                    v98 = MiGetWsleContents(v97, (__int64)((v95 << 25) - v94) >> 16) & 0xF;
                    if ( (unsigned __int8)(v98 - 8) > 2u )
                      ++*((_DWORD *)v120 + v98);
                  }
                  v95 += 8LL;
                }
                while ( (v95 & 0xFFF) != 0 );
                v99 = 8;
                while ( 1 )
                {
                  v100 = *((_DWORD *)v120 + (unsigned __int8)--v99);
                  if ( v100 )
                    break;
                  if ( !v99 )
                    goto LABEL_199;
                }
                *v92 = *v92 & 0xFFFFFFFFFFFE000FuLL | (16 * (v100 & 0x3FF | ((unsigned __int64)(v99 & 7) << 10)));
              }
            }
            goto LABEL_199;
          }
          if ( v63 || (*(_BYTE *)(v66 + 192) & 7) == 0 )
          {
            if ( v38 >= 0xFFFFF68000000000uLL && v38 <= 0xFFFFF6FFFFFFFFFFuLL )
              goto LABEL_179;
            v83 = (__int64 *)(((v38 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
            v84 = *v83;
            if ( (unsigned __int64)v83 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v83 <= v80 )
              v84 = MiReadPteShadow(v83, *v83);
            v117 = v84;
            v85 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v117) - 0x58000000000LL);
            v86 = *v85;
            v87 = *v85 >> 4;
            if ( (v87 & 0x3FF) == 0 )
              goto LABEL_179;
            v88 = (v86 >> 14) & 7;
            if ( v62 == v88 )
            {
              v89 = v86 ^ ((unsigned __int16)v86 ^ (unsigned __int16)(16 * (v87 + 1))) & 0x3FF0;
            }
            else
            {
              if ( v62 <= v88 )
                goto LABEL_179;
              v89 = v86 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)v62 << 14) | 0x10;
            }
            *v85 = v89;
LABEL_179:
            ++*(_QWORD *)(v66 + 8LL * v62 + 40);
            if ( v65 )
              MiVolunteerForTrimFirst(v66, 1LL);
            goto LABEL_181;
          }
LABEL_199:
          ++*((_QWORD *)v5 + 4);
LABEL_200:
          if ( v34 )
          {
            v101 = qword_140388568;
            if ( (*(_BYTE *)(v34 + 4) & 2) == 0
              && *(_DWORD *)v34 == 1
              && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] )
            {
              v101 = -1LL;
            }
            if ( (*(_DWORD *)(v34 + 12) >= *(_DWORD *)(v34 + 8) || *(_BYTE *)(v34 + 5) || *(_QWORD *)(v34 + 16) > v101)
              && v101 >= 0x400
              && !*(_BYTE *)(v34 + 5) )
            {
              MiFlushTbList(v34, (_KPROCESS *)v101);
            }
          }
          goto LABEL_244;
        }
      }
      else
      {
        v63 = 0;
        v64 = (unsigned __int64 *)MI_GET_PFN_FROM_PTE(v58, v52, v51, v57);
        v66 = v113;
        v67 = v64;
        v68 = v112;
        v69 = (*(_BYTE *)v64 >> 1) & 7;
        if ( (*(_BYTE *)(v113 + 192) & 7) != 0 )
          goto LABEL_153;
      }
      if ( v38 < 0xFFFFF68000000000uLL || v38 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v72 = (__int64 *)(((v38 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v73 = *v72;
        if ( (unsigned __int64)v72 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v72 <= 0xFFFFF6FB7DBED7F8uLL )
          v73 = MiReadPteShadow(v72, *v72);
        v116 = v73;
        v74 = (__int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v116) - 0x58000000000LL);
        v75 = *v74;
        v76 = (unsigned __int64)*v74 >> 4;
        if ( (v76 & 0x3FF) != 0 )
        {
          v77 = (v75 >> 14) & 7;
          if ( v69 == v77 )
          {
            v78 = v75 ^ ((unsigned __int16)v75 ^ (unsigned __int16)(16 * (v76 - 1))) & 0x3FF0;
LABEL_149:
            *v74 = v78;
            goto LABEL_150;
          }
          if ( v69 > v77 )
          {
            v78 = v75 ^ ((unsigned int)v75 ^ (v69 << 14)) & 0x1C000 | 0x3FF0;
            goto LABEL_149;
          }
        }
      }
LABEL_150:
      --*(_QWORD *)(v66 + 8LL * v69 + 40);
      if ( v69 == 7 )
      {
        MiVolunteerForTrimFirst(v66, -1LL);
        v66 = v113;
      }
      v65 = 0;
      goto LABEL_153;
    }
    v102 = *(_BYTE *)(v17 + 35);
    if ( (v102 & 8) != 0 )
      v103 = 5;
    else
      v103 = v102 & 7;
    if ( v30 < 6u )
    {
      if ( v103 < 5 )
      {
        v104 = 6;
LABEL_219:
        v105 = v113;
        MiSetVaAge(v113, v13, v104);
        ++*((_QWORD *)v5 + 3);
        v29 = 0xFFFFF68000000000uLL;
LABEL_221:
        v106 = *(_QWORD *)(v17 + 40);
        if ( (v106 & 0x200000000000000LL) != 0 )
          v107 = *((_BYTE *)v5 + 5);
        else
          v107 = *((_BYTE *)v5 + 4);
        v108 = v107;
        if ( !v107 )
          v108 = 7LL;
        if ( (*(_BYTE *)(v105 + 192) & 7) == 3
          && ((v106 >> 54) & 7) == 4
          && (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
          && *(_WORD *)(v17 + 32) == 1 )
        {
          goto LABEL_242;
        }
        if ( (*v5 & 3) != 0 )
        {
          if ( v13 < v29 || v13 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v110 = *(_QWORD *)v15;
            if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
              v110 = MiReadPteShadow(v15, *(_QWORD *)v15);
            v109 = (v110 & 1) != 0 ? HIBYTE(v110) & 0xF : 10;
          }
          else
          {
            v109 = (*(_BYTE *)MI_GET_PFN_FROM_PTE(v15, 7LL, v24, v108) >> 1) & 7;
          }
          if ( v109 >= (unsigned __int8)v108 || v103 < v5[2] )
          {
LABEL_242:
            ++*((_QWORD *)v5 + 5);
            MiInsertTbFlushEntry((int *)v5 + 18, v13, 1LL, 0);
            if ( v5[21] == v5[20] )
            {
              MiFreeWsleList(v105, (__int64)(v5 + 18), 0);
              v5[21] = 0;
            }
          }
        }
        goto LABEL_244;
      }
      if ( (v27 & 1) != 0 )
      {
        v104 = v30 + 1;
        if ( !v20 )
          goto LABEL_219;
      }
    }
    v105 = v113;
    goto LABEL_221;
  }
  if ( (unsigned int)MiInsertVmAccessedEntry(v26, v13) )
  {
    MiAgeWorkingSetTail(a1);
    return 1LL;
  }
LABEL_244:
  ++*((_QWORD *)v5 + 6);
  v111 = 0;
  if ( *((_QWORD *)v5 + 6) >= *((_QWORD *)v5 + 7) )
    return 3;
  return v111;
}
