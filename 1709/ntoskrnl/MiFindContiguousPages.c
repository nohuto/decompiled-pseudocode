/*
 * XREFs of MiFindContiguousPages @ 0x140078120
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiFindPagesForMdl @ 0x1400CBBA0 (MiFindPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1406E04A0 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1406EBD0C (MiFindLargePageMemory.c)
 * Callees:
 *     MiEmptyKernelStackCache @ 0x14000F458 (MiEmptyKernelStackCache.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C7EB8 (MiSetPfnOwnedAndActive.c)
 *     MiConvertContiguousPages @ 0x1400CA4C4 (MiConvertContiguousPages.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDereferencePageRunsEx @ 0x14011CA98 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140125EF4 (MiReleasePteCopyList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiFindLargeNodePage @ 0x140216B0C (MiFindLargeNodePage.c)
 *     MiQueueWorkingSetRequest @ 0x14021DD3C (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v12; // r14
  int v13; // r13d
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v17; // r12
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  unsigned int v20; // r9d
  int *v21; // r11
  unsigned int *v22; // rdx
  unsigned __int64 v23; // rdi
  bool v24; // r10
  unsigned int v25; // ebx
  unsigned __int64 v26; // r13
  unsigned __int16 *v27; // r8
  _BYTE *v28; // r12
  _BYTE *v29; // r9
  int v30; // eax
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  char *v33; // rcx
  char v34; // dl
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r14
  int v40; // edi
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r9
  unsigned __int64 v47; // r8
  int v48; // ecx
  unsigned __int64 v49; // r15
  int v50; // eax
  BOOL v51; // ecx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rbx
  __int64 v57; // rdx
  unsigned __int64 v58; // rbx
  unsigned int v59; // ebx
  unsigned __int64 v60; // rax
  __int64 LargeNodePage; // rax
  __int64 v62; // rdx
  _QWORD *v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // ecx
  unsigned __int64 v69; // r14
  unsigned __int8 v70; // al
  unsigned __int64 v71; // rbx
  __int64 v72; // rcx
  bool v73; // [rsp+30h] [rbp-D0h]
  unsigned int v74; // [rsp+34h] [rbp-CCh]
  BOOL v75; // [rsp+38h] [rbp-C8h]
  int v76; // [rsp+3Ch] [rbp-C4h]
  int v77; // [rsp+40h] [rbp-C0h]
  _BYTE *v79; // [rsp+58h] [rbp-A8h]
  int *v80; // [rsp+60h] [rbp-A0h]
  int v81; // [rsp+68h] [rbp-98h] BYREF
  int v82; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v83; // [rsp+70h] [rbp-90h]
  unsigned int *v84; // [rsp+78h] [rbp-88h]
  int v85; // [rsp+80h] [rbp-80h] BYREF
  int v86; // [rsp+84h] [rbp-7Ch]
  int v87; // [rsp+88h] [rbp-78h]
  unsigned __int64 v88; // [rsp+90h] [rbp-70h]
  __int64 v89; // [rsp+98h] [rbp-68h]
  unsigned __int64 v90; // [rsp+A0h] [rbp-60h]
  int v91; // [rsp+A8h] [rbp-58h]
  int v92; // [rsp+ACh] [rbp-54h]
  __int64 v93; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v94; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v95; // [rsp+C0h] [rbp-40h]
  _BYTE *v96; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v97; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v99; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v100; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v101; // [rsp+F0h] [rbp-10h]
  unsigned __int16 *v102; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v103; // [rsp+100h] [rbp+0h]
  __int64 *v104; // [rsp+108h] [rbp+8h]
  _QWORD v105[3]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v106; // [rsp+128h] [rbp+28h]
  _QWORD v107[2]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v108; // [rsp+140h] [rbp+40h]
  int v109; // [rsp+148h] [rbp+48h]
  int v110; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v111; // [rsp+150h] [rbp+50h]
  __int64 v112; // [rsp+158h] [rbp+58h]
  unsigned __int64 v113; // [rsp+160h] [rbp+60h]
  unsigned __int64 v114; // [rsp+168h] [rbp+68h]
  __int64 v115; // [rsp+170h] [rbp+70h]
  char v116[8]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v117; // [rsp+188h] [rbp+88h] BYREF
  __int64 v118; // [rsp+190h] [rbp+90h]
  _QWORD v119[2]; // [rsp+198h] [rbp+98h] BYREF

  v12 = a4;
  v13 = a9;
  v14 = a2;
  v104 = a11;
  v15 = a5;
  memset(v105, 0, sizeof(v105));
  v89 = a4;
  v83 = a3;
  v95 = a2;
  v77 = a9;
  v93 = a10;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( CurrentIrql == 2 )
  {
    v13 = a9 | 8;
    v77 = a9 | 8;
  }
  if ( (v13 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, a5, 1LL, a4) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, a5) )
    {
      MiReturnCommit(a1, a5);
      return 3221225626LL;
    }
    v15 = a5;
  }
  if ( a10 )
    v86 = v15 + (*(_DWORD *)(a10 + 40) >> 12);
  else
    v86 = 0;
  if ( (v13 & 0x40) != 0 )
  {
    if ( a6 != 1 )
    {
      v59 = -1073741811;
      goto LABEL_103;
    }
    v81 = 1;
    if ( v15 == 0x40000 )
    {
      v81 = 0;
      v13 |= 0x4000u;
    }
    LargeNodePage = MiFindLargeNodePage(a1, a7, (unsigned int)&v81, v13, 0);
    if ( !LargeNodePage )
    {
      v59 = -1073741801;
      goto LABEL_103;
    }
    v62 = (LargeNodePage + 0x58000000000LL) / 48;
    *v104 = v62;
    if ( a10 )
    {
      v63 = (_QWORD *)(a10 + 8 * (((unsigned __int64)*(unsigned int *)(a10 + 40) >> 12) + 6));
      v64 = MiLargePageSizes[v81];
      if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
        *(_QWORD *)(a10 + 24) = 1LL;
      if ( v64 )
      {
        v65 = v64;
        do
        {
          *v63++ = v62++;
          --v65;
        }
        while ( v65 );
      }
      *(_DWORD *)(a10 + 40) += (_DWORD)v64 << 12;
    }
    return 0LL;
  }
  v17 = a1;
  if ( (*(_DWORD *)(a1 + 4) & 8) == 0 && !(unsigned int)MiSufficientAvailablePages(a1, v15 + 160) )
  {
    v59 = -1073741670;
    goto LABEL_104;
  }
  v91 = v13 & 0x10000000;
  if ( (v13 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 64LL, v105);
    if ( !HIDWORD(v105[0]) )
    {
      v59 = -1073741670;
      goto LABEL_104;
    }
  }
  v75 = 0;
  if ( (v13 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v75 = CurrentIrql != 2;
  v18 = a7 | 0x80000000;
  v87 = 0;
  if ( a7 < (unsigned __int16)KeNumberNodes )
    v18 = a7;
  v74 = v18;
  v19 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
  v20 = -1;
  v80 = (int *)v19;
  v76 = -1;
  v21 = (int *)v19;
  v102 = 0LL;
  v22 = &v19[4 * *v19];
  v97 = 0LL;
  v84 = v22;
  if ( ((v12 - 1) & v12) != 0 )
  {
    v12 = 0LL;
    v89 = 0LL;
  }
  v23 = a5;
  v101 = a5;
  v82 = v13 & 0x2000;
  v24 = v82 != 0;
  v73 = v82 != 0;
  v106 = *(_QWORD *)(a1 + 16);
  while ( 2 )
  {
    while ( 2 )
    {
      v25 = MmNumberOfChannels;
      v26 = v83;
      v79 = 0LL;
      if ( (unsigned int)MmNumberOfChannels > 1 )
      {
        v27 = (unsigned __int16 *)v74;
        if ( (v74 & 0x80000000) == 0 )
        {
          v67 = v74;
        }
        else
        {
          if ( v20 == -1 )
          {
            v66 = *(_QWORD *)(v17 + 5768);
            if ( v83 <= v66 )
              v66 = v83;
            v20 = MiPageToNode(v66, 0LL);
            v24 = v73;
            v27 = (unsigned __int16 *)v74;
            v21 = v80;
            v76 = v20;
            v97 = (unsigned __int16 *)((char *)qword_140388508 + 2 * v20 * (unsigned __int16)KeNumberNodes);
            v22 = v84;
            v102 = &v97[(unsigned __int16)KeNumberNodes];
          }
          v67 = v20;
        }
        if ( (*(_DWORD *)(8256 * v67 + v106 + 8160) & 1) != 0 )
        {
          v28 = (_BYTE *)(8256 * v67 + v106 + 8189);
          v79 = v28;
          if ( a8 >= 0 )
          {
            v68 = 0;
            if ( v25 )
            {
              do
              {
                if ( (unsigned __int8)*v28 == a8 )
                  break;
                ++v28;
                ++v68;
              }
              while ( v68 < v25 );
              v79 = v28;
            }
            v25 = 1;
          }
          goto LABEL_21;
        }
      }
      else
      {
        v27 = (unsigned __int16 *)v74;
      }
      v28 = 0LL;
LABEL_21:
      v29 = &v28[v25];
      v96 = v29;
      do
      {
        v30 = *v21;
        v31 = v26;
        v88 = v26;
        if ( !v30 )
        {
          v51 = v75;
          goto LABEL_100;
        }
        while ( 1 )
        {
          v32 = (unsigned int)(v30 - 1);
          v92 = v32;
          v33 = (char *)v22 + 2 * v32;
          v32 *= 2LL;
          v34 = v33[17];
          v35 = *(_QWORD *)&v21[2 * v32 + 4];
          v36 = v35 + *(_QWORD *)&v21[2 * v32 + 6];
          v94 = v35;
          v90 = v36;
          if ( v14 >= v36 )
            break;
          if ( (int)v27 >= 0 && (unsigned __int8)v33[16] != (_DWORD)v27 || v28 && v34 != *v28 )
            goto LABEL_63;
          while ( 2 )
          {
            if ( v36 - 1 > v31 )
            {
              v36 = v31 + 1;
              v90 = v31 + 1;
            }
            if ( v35 < v14 )
            {
              v35 = v14;
              v94 = v14;
            }
            if ( v35 < v36 )
            {
              while ( 1 )
              {
                if ( !v24 && v23 > v36 - v35 )
                  goto LABEL_62;
                if ( !v12 )
                  break;
                v57 = ~(v12 - 1);
                if ( (((v36 - 1) ^ (v36 - v23)) & v57) == 0 )
                  break;
                if ( (v36 & v57) != v36 )
                  v36 &= v57;
                v90 = v36;
                if ( (v35 & v57) != v35 )
                {
                  v35 = v57 & (v12 - 1 + v35);
                  v94 = v35;
                  if ( !v35 )
                    goto LABEL_62;
                }
                if ( v35 >= v36 )
                  goto LABEL_62;
              }
              v85 = 0;
              v37 = v36 - v23;
              v87 = 1;
              v103 = v36 - v23;
              if ( v24 && v36 - v35 < v23 )
              {
                v37 = v35;
                v103 = v35;
              }
              v38 = 48 * v37 - 0x58000000000LL;
              v99 = v23;
              v98 = v38;
              v39 = v23;
              if ( v24 )
              {
                if ( v23 > v36 - v35 )
                {
                  v39 = v36 - v35;
                  v99 = v36 - v35;
                }
LABEL_39:
                v40 = 0;
                v115 = v93;
                v41 = v37;
                v107[0] = a1;
                v107[1] = v105;
                v111 = a6;
                v42 = v38 + 48 * v39;
                v109 = v77;
                v36 = v90;
                v108 = v39;
                v100 = v39;
                v43 = v37 + v39;
                v114 = v88;
                v110 = -1;
                v112 = -1LL;
                while ( 1 )
                {
                  v44 = MiTradePage(v107, v41);
                  v46 = v44;
                  if ( v44 )
                  {
                    v48 = v82;
                    v47 = v44;
                  }
                  else
                  {
                    v47 = 1LL;
                    if ( v113 > 1 )
                    {
                      v45 = ~(v113 - 1);
                      if ( v41 == (v41 & v45) )
                        v47 = v113;
                      else
                        v47 = (v45 & (v41 + v113 - 1)) - v41;
                    }
                    if ( !v40 )
                    {
                      if ( v113 )
                        v100 = v43 - (v41 & ~(v113 - 1));
                      v40 = 1;
                    }
                    v48 = v82;
                    if ( !v82 )
                      goto LABEL_91;
                    if ( v47 >= v43 - v41 )
                      goto LABEL_47;
                  }
                  v41 += v47;
                  v38 += 48 * v47;
                  v108 -= v44;
                  if ( !v108 )
                    break;
                  if ( v38 >= v42 )
                  {
LABEL_47:
                    if ( !v48 )
                    {
LABEL_91:
                      v58 = v99 - v108;
                      if ( v93 )
                        *(_DWORD *)(v93 + 40) += -4096 * v58;
                      for ( ; v58; --v58 )
                      {
                        v38 -= 48LL;
                        MiReleaseFreshPage(v38, v45);
                      }
                    }
                    v49 = v100;
                    goto LABEL_49;
                  }
                }
                v49 = 0LL;
LABEL_49:
                if ( v93 )
                {
                  v50 = *(_DWORD *)(v93 + 40) >> 12;
                  if ( v50 == v86 )
                    goto LABEL_70;
                  v23 = (unsigned int)(v86 - v50);
                  v101 = v23;
                }
                else
                {
                  if ( !v49 )
                  {
LABEL_70:
                    MiDereferencePageRunsEx(v80, 1LL, v47, v46);
                    MiReleasePteCopyList(v105);
                    if ( v82 )
                    {
                      v54 = v98;
                    }
                    else
                    {
                      v52 = (v37 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                      v53 = (a5 + v37) & 0xFFFFFFFFFFFFFE00uLL;
                      if ( v52 < v53 )
                        MiUpdateLargePageBitMap(a1, v52, v53 - v52, 1, 1);
                      v54 = v98;
                      MiConvertContiguousPages(v98, a5, a6);
                    }
                    if ( (v77 & 0x40000000) == 0 )
                    {
                      v55 = v54 + 48 * a5;
                      do
                      {
                        MiSetPfnOwnedAndActive(v54, 0, -8, a6, ((v77 & 0x100000) != 0) + 1);
                        v54 += 48LL;
                      }
                      while ( v54 != v55 );
                      v37 = v103;
                    }
                    *v104 = v37;
                    return 0LL;
                  }
                  v23 = v101;
                }
                if ( v91 )
                {
                  v69 = v98;
                  v70 = MiLockPageInline(v98);
                  if ( (*(_QWORD *)(v69 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                    && (*(_BYTE *)(v69 + 34) & 7) == 5 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    __writecr8(v70);
                    v24 = v73;
                    v12 = v89;
                    v51 = 0;
                    v14 = v95;
                    v27 = (unsigned __int16 *)v74;
                    v21 = v80;
                    v28 = v79;
                    v75 = 0;
                    goto LABEL_98;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  __writecr8(v70);
                }
                v31 = v88;
              }
              else
              {
                v49 = MiPfnsWorthTrying(a1, 48 * (int)v37, v23, v77, (__int64)&v85, (__int64)v116);
                if ( !v49 )
                {
                  if ( v85 == 1 )
                    MiEmptyKernelStackCache();
                  goto LABEL_39;
                }
              }
              v35 = v94;
              v24 = v73;
              v12 = v89;
              if ( v49 <= v37 - v94 )
              {
                v36 -= v49;
                v14 = v95;
                v90 = v36;
                continue;
              }
              v71 = v36 - v49;
              v14 = v95;
              v31 = v71 - 1;
              v88 = v31;
            }
            break;
          }
LABEL_62:
          v27 = (unsigned __int16 *)v74;
          v21 = v80;
          v28 = v79;
LABEL_63:
          v30 = v92;
          v22 = v84;
          if ( !v92 )
          {
            v51 = v75;
            goto LABEL_99;
          }
        }
        v51 = v75;
LABEL_98:
        v22 = v84;
LABEL_99:
        v29 = v96;
        v26 = v83;
LABEL_100:
        if ( !v28 )
          goto LABEL_101;
        v79 = ++v28;
      }
      while ( v28 < v29 );
      if ( v76 != -1 )
      {
        v27 = v97 + 1;
        v97 = v27;
        if ( v27 != v102 )
        {
          v20 = *v27;
          v17 = a1;
          v76 = v20;
          continue;
        }
      }
      break;
    }
LABEL_101:
    if ( v87 == 1 && v51 )
    {
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v117 = 0LL;
        v118 = 0LL;
        v119[1] = 16LL;
        v72 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v118 = a5 << 12;
        v117 = v72;
        v119[0] = &v117;
        EtwTraceKernelEvent((unsigned int)v119, 1, 537919488, 625, 4200962);
        v24 = v73;
        v21 = v80;
        v22 = v84;
      }
      v17 = a1;
      if ( byte_140389294 )
      {
        MiQueueWorkingSetRequest(a1, 32LL, v27, v29);
        v24 = v73;
        v21 = v80;
        v22 = v84;
      }
      v20 = -1;
      v75 = 0;
      v76 = -1;
      continue;
    }
    break;
  }
  v59 = -1073741801;
  MiDereferencePageRunsEx(v21, 1LL, v27, v29);
  v13 = v77;
LABEL_103:
  v17 = a1;
LABEL_104:
  MiReleasePteCopyList(v105);
  if ( (v13 & 0x20000000) == 0 )
  {
    if ( (ULONG_PTR *)v17 == &MiSystemPartition )
    {
      MiReturnResidentAvailable(a5);
      v60 = a5;
    }
    else
    {
      v60 = a5;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 6016), a5);
    }
    MiReturnCommit(v17, v60);
  }
  return v59;
}
