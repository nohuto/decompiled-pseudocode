/*
 * XREFs of MiFindContiguousPages @ 0x140123CF0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiFindPagesForMdl @ 0x1400B38D4 (MiFindPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x14026D668 (MiRebuildLargePage.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x14074B3E0 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x140755784 (MiFindLargePageMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiConvertContiguousPages @ 0x14004D90C (MiConvertContiguousPages.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C2954 (MiSetPfnOwnedAndActive.c)
 *     MiDereferencePageRunsEx @ 0x1400C4510 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400C8214 (MiReleasePteCopyList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiClaimPhysicalRun @ 0x140121080 (MiClaimPhysicalRun.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiCollapseRunTopDown @ 0x1401242C4 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x140124360 (MiPfnsWorthTrying.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiQueueWorkingSetRequest @ 0x14016D3A0 (MiQueueWorkingSetRequest.c)
 *     MiEmptyKernelStackCache @ 0x140186CB0 (MiEmptyKernelStackCache.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
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
  unsigned __int64 v12; // rdx
  __int64 v14; // rcx
  int v16; // r12d
  unsigned __int8 CurrentIrql; // di
  signed int v18; // r12d
  unsigned int *v19; // rax
  int v20; // r11d
  int *v21; // r8
  __int64 v22; // rdx
  unsigned int *v23; // rdx
  int v24; // esi
  __int64 v25; // r10
  unsigned int v26; // ebx
  _BYTE *v27; // r9
  __int64 v28; // rdi
  _BYTE *v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rbx
  __int64 v40; // r14
  unsigned __int64 v41; // rsi
  __int64 v42; // rdi
  bool v43; // cc
  int v44; // ecx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  unsigned int v47; // r15d
  unsigned __int64 v48; // rdi
  BOOL v50; // r10d
  unsigned int v51; // ebx
  __int64 v52; // rdx
  __int64 LargeNodePage; // rax
  __int64 v54; // r11
  __int64 v55; // rdx
  unsigned int v56; // r9d
  _QWORD *v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned int v61; // ecx
  __int64 v62; // rcx
  unsigned int v63; // ecx
  unsigned __int8 v64; // al
  unsigned __int16 *v65; // rax
  __int64 v66; // rcx
  int v67; // [rsp+50h] [rbp-B0h]
  BOOL v68; // [rsp+54h] [rbp-ACh]
  signed int v69; // [rsp+58h] [rbp-A8h]
  int v70; // [rsp+5Ch] [rbp-A4h]
  _BYTE *v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  int v73; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-80h]
  unsigned int *v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  int v77; // [rsp+98h] [rbp-68h] BYREF
  int v78; // [rsp+9Ch] [rbp-64h]
  int v79; // [rsp+A0h] [rbp-60h]
  int v80; // [rsp+A4h] [rbp-5Ch]
  unsigned int v81; // [rsp+A8h] [rbp-58h]
  int v82; // [rsp+ACh] [rbp-54h]
  int v83; // [rsp+B0h] [rbp-50h]
  _BYTE *v84; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v85; // [rsp+C0h] [rbp-40h]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v87; // [rsp+D0h] [rbp-30h]
  __int64 *v88; // [rsp+D8h] [rbp-28h]
  __int64 v89; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v90; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  __int64 v93; // [rsp+100h] [rbp+0h]
  unsigned __int64 v94; // [rsp+108h] [rbp+8h]
  bool v95; // [rsp+110h] [rbp+10h]
  _QWORD v96[3]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v97; // [rsp+130h] [rbp+30h] BYREF
  __int64 v98; // [rsp+138h] [rbp+38h]
  _QWORD v99[2]; // [rsp+140h] [rbp+40h] BYREF

  v12 = a5;
  v14 = a10;
  v16 = a9;
  v88 = a11;
  memset(v96, 0, sizeof(v96));
  v74 = a3;
  v76 = a10;
  v67 = a9;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( a7 < (unsigned __int16)KeNumberNodes && (a7 & 0x80000000) == 0 )
  {
    if ( !*(_QWORD *)(1984LL * a7 + *(_QWORD *)(a1 + 16) + 1808) && (_DWORD)InitializationPhase )
      return 3221225495LL;
    v14 = v76;
  }
  if ( CurrentIrql == 2 )
  {
    v16 = a9 | 8;
    v67 = a9 | 8;
  }
  if ( (v16 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, a5, 1u) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident(a1, a5, 0LL) )
    {
      MiReturnCommit(a1, a5);
      return 3221225626LL;
    }
    v14 = v76;
    v12 = a5;
  }
  if ( v14 )
    v78 = v12 + (*(_DWORD *)(v14 + 40) >> 12);
  else
    v78 = 0;
  if ( (v16 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 4) & 8) != 0 || (unsigned int)MiSufficientAvailablePages(a1, v12 + 160) )
    {
      v80 = v16 & 0x10000000;
      if ( (v16 & 0x10000000) != 0 || (MiCreatePteCopyList(a5, 0x40uLL, (__int64)v96), HIDWORD(v96[0])) )
      {
        v68 = 0;
        if ( (v16 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
          v68 = CurrentIrql != 2;
        v18 = a7 | 0x80000000;
        v79 = 0;
        if ( a7 < (unsigned __int16)KeNumberNodes )
          v18 = a7;
        v69 = v18;
        v19 = (unsigned int *)MiReferencePageRuns(a1, 1u);
        v20 = -1;
        v72 = (__int64)v19;
        v70 = -1;
        v21 = (int *)v19;
        v87 = 0LL;
        v22 = *v19 + 1LL;
        v85 = 0LL;
        v23 = &v19[4 * v22];
        v75 = v23;
        if ( ((a4 - 1) & a4) != 0 )
          a4 = 0LL;
        v93 = a4;
        v24 = v67;
        v91 = a2;
        v83 = v67 & 0x2000;
        v94 = a5;
        v95 = (v67 & 0x2000) != 0;
        v25 = *(_QWORD *)(a1 + 16);
        v86 = v25;
        while ( 1 )
        {
          while ( 1 )
          {
            v26 = MmNumberOfChannels;
            v27 = 0LL;
            v28 = v74;
            v71 = 0LL;
            if ( (unsigned int)MmNumberOfChannels > 1 )
            {
              if ( v18 >= 0 )
              {
                v61 = v18;
              }
              else
              {
                if ( v20 == -1 )
                {
                  v60 = *(_QWORD *)(a1 + 6856);
                  if ( v74 <= v60 )
                    v60 = v74;
                  v20 = MiPageToNode(v60, 0);
                  v25 = v86;
                  v27 = 0LL;
                  v70 = v20;
                  v23 = v75;
                  v85 = (unsigned __int16 *)((char *)qword_1403CB6A0
                                           + 2 * v20 * (unsigned int)(unsigned __int16)KeNumberNodes);
                  v21 = (int *)v72;
                  v87 = &v85[(unsigned __int16)KeNumberNodes];
                }
                v61 = v20;
              }
              v62 = 1984LL * v61;
              if ( (*(_DWORD *)(v62 + v25 + 1888) & 1) != 0 )
              {
                v27 = (_BYTE *)(v62 + v25 + 1918);
                v71 = v27;
                if ( a8 >= 0 )
                {
                  v63 = 0;
                  if ( v26 )
                  {
                    do
                    {
                      if ( (unsigned __int8)*v27 == a8 )
                        break;
                      ++v27;
                      ++v63;
                    }
                    while ( v63 < v26 );
                    v71 = v27;
                  }
                  v26 = 1;
                }
              }
            }
            v29 = &v27[v26];
            v84 = v29;
            do
            {
              v30 = *v21;
              v92 = v28;
              if ( v30 )
              {
                while ( 1 )
                {
                  v31 = (unsigned int)(v30 - 1);
                  v82 = v31;
                  v32 = *((unsigned __int8 *)v23 + 2 * v31);
                  v33 = *((unsigned __int8 *)v23 + 2 * v31 + 1);
                  v31 *= 2LL;
                  v81 = v32;
                  v34 = *(_QWORD *)&v21[2 * v31 + 4];
                  v35 = *(_QWORD *)&v21[2 * v31 + 6];
                  v89 = v34;
                  v90 = v35 + v34;
                  if ( v91 >= v35 + v34 )
                    break;
                  if ( (v18 < 0 || v32 == v18) && (!v27 || (_BYTE)v33 == *v27) )
                  {
                    while ( 1 )
                    {
                      if ( !(unsigned int)MiCollapseRunTopDown(&v89, v33)
                        || !*(_QWORD *)(1984LL * v32 + *(_QWORD *)(a1 + 16) + 1808) && (_DWORD)InitializationPhase )
                      {
                        goto LABEL_57;
                      }
                      v36 = v90;
                      v37 = v89;
                      v77 = 0;
                      v38 = v94;
                      v39 = v90 - v94;
                      v79 = 1;
                      if ( v95 && v90 - v89 < v94 )
                        v39 = v89;
                      v40 = 48 * v39 - 0x58000000000LL;
                      if ( v95 )
                      {
                        if ( v94 > v90 - v89 )
                          v38 = v90 - v89;
                      }
                      else
                      {
                        v41 = MiPfnsWorthTrying(a1, 48 * (int)v39, v94, v24, (__int64)&v77);
                        if ( v41 )
                          goto LABEL_30;
                        if ( v77 == 1 )
                          MiEmptyKernelStackCache();
                      }
                      v41 = MiClaimPhysicalRun(a1, v39, v38, v92, (__int64)v96, v67, -1, v76, a6, 0LL);
                      if ( v76 )
                      {
                        v44 = *(_DWORD *)(v76 + 40) >> 12;
                        if ( v44 == v78 )
                          goto LABEL_44;
                        v94 = (unsigned int)(v78 - v44);
                      }
                      else if ( !v41 )
                      {
LABEL_44:
                        MiDereferencePageRunsEx(v72, 1);
                        MiReleasePteCopyList((__int64)v96);
                        if ( v83 )
                        {
                          v47 = a6;
                        }
                        else
                        {
                          v45 = (v39 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                          v46 = (a5 + v39) & 0xFFFFFFFFFFFFFE00uLL;
                          if ( v45 < v46 )
                            MiUpdateLargePageBitMap(a1, v45, v46 - v45, 1, 1);
                          v47 = a6;
                          MiConvertContiguousPages((unsigned __int64 *)(48 * v39 - 0x58000000000LL), a5, a6);
                        }
                        if ( (v67 & 0x40000000) == 0 )
                        {
                          v48 = v40 + 48 * a5;
                          do
                          {
                            MiSetPfnOwnedAndActive(v40, 0, -8LL, v47, ((v67 & 0x100000) != 0) + 1);
                            v40 += 48LL;
                          }
                          while ( v40 != v48 );
                        }
                        *v88 = v39;
                        return 0LL;
                      }
                      if ( v80 )
                      {
                        v64 = MiLockPageInline(48 * v39 - 0x58000000000LL);
                        v33 = 0x8000000000000000uLL;
                        if ( (*(_QWORD *)(v40 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                          && (*(_BYTE *)(v40 + 34) & 7) == 5 )
                        {
                          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          __writecr8(v64);
                          v24 = v67;
                          v23 = v75;
                          v50 = 0;
                          v21 = (int *)v72;
                          v18 = v69;
                          v27 = v71;
                          v29 = v84;
                          v28 = v74;
                          v68 = 0;
                          goto LABEL_61;
                        }
                        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        __writecr8(v64);
                        v36 = v90;
                        v37 = v89;
                      }
LABEL_30:
                      v42 = v36 - v41;
                      v43 = v41 <= v39 - v37;
                      v24 = v67;
                      if ( !v43 )
                      {
                        v92 = v42 - 1;
LABEL_57:
                        v21 = (int *)v72;
                        v18 = v69;
                        v27 = v71;
                        break;
                      }
                      v32 = v81;
                      v90 = v42;
                    }
                  }
                  v30 = v82;
                  v23 = v75;
                  if ( !v82 )
                    goto LABEL_59;
                }
                v23 = v75;
LABEL_59:
                v28 = v74;
                v29 = v84;
              }
              v50 = v68;
LABEL_61:
              if ( !v27 )
                goto LABEL_62;
              v71 = ++v27;
            }
            while ( v27 < v29 );
            if ( v70 == -1 )
              break;
            v65 = v85 + 1;
            v85 = v65;
            if ( v65 == v87 )
              break;
            v20 = *v65;
            v25 = v86;
            v70 = v20;
          }
LABEL_62:
          if ( v79 != 1 || !v50 )
            break;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
          {
            v97 = 0LL;
            v98 = 0LL;
            v99[1] = 16LL;
            v66 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            v98 = a5 << 12;
            v97 = v66;
            v99[0] = &v97;
            EtwTraceKernelEvent((int)v99, 1, 0x20100000u, 625, 4200962);
            v23 = v75;
            v21 = (int *)v72;
          }
          if ( byte_1403CC514 )
          {
            MiQueueWorkingSetRequest(a1, 32LL, v21);
            v23 = v75;
            v21 = (int *)v72;
          }
          v25 = v86;
          v20 = -1;
          v70 = -1;
          v68 = 0;
        }
        v51 = -1073741801;
        MiDereferencePageRunsEx((__int64)v21, 1);
      }
      else
      {
        v24 = v67;
        v51 = -1073741670;
      }
    }
    else
    {
      v24 = v67;
      v51 = -1073741670;
    }
LABEL_64:
    MiReleasePteCopyList((__int64)v96);
    if ( (v24 & 0x20000000) == 0 )
    {
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        MiReturnResidentAvailable(a5, v52);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a5);
      MiReturnCommit(a1, a5);
    }
    return v51;
  }
  v24 = v67;
  if ( a6 != 1 )
  {
    v51 = -1073741811;
    goto LABEL_64;
  }
  v73 = 1;
  if ( v12 == 0x40000 )
  {
    v73 = 0;
    v24 = v67 | 0x4000;
  }
  LargeNodePage = MiFindLargeNodePage(a1, a7, (unsigned int)&v73, v24, 0);
  if ( !LargeNodePage )
  {
    v51 = -1073741801;
    goto LABEL_64;
  }
  v54 = v76;
  v55 = (LargeNodePage + 0x58000000000LL) / 48;
  *v88 = v55;
  if ( v54 )
  {
    v56 = *(_DWORD *)(v54 + 40);
    v57 = (_QWORD *)(v54 + 8 * (((unsigned __int64)v56 >> 12) + 6));
    v58 = MiLargePageSizes[v73];
    if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
      *(_QWORD *)(v54 + 24) = 1LL;
    if ( v58 )
    {
      v59 = v58;
      do
      {
        *v57++ = v55++;
        --v59;
      }
      while ( v59 );
      v56 = *(_DWORD *)(v54 + 40);
    }
    *(_DWORD *)(v54 + 40) = v56 + ((_DWORD)v58 << 12);
  }
  return 0LL;
}
