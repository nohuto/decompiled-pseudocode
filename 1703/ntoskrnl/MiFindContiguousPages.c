/*
 * XREFs of MiFindContiguousPages @ 0x1400B65D0
 * Callers:
 *     MiFindPagesForMdl @ 0x14007AE64 (MiFindPagesForMdl.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1406B44B0 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1406BE99C (MiFindLargePageMemory.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiSetPfnOwnedAndActive @ 0x1400269E4 (MiSetPfnOwnedAndActive.c)
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x14003C924 (MiEmptyKernelStackCache.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiConvertContiguousPages @ 0x14007A79C (MiConvertContiguousPages.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiCollapseRunTopDown @ 0x1400B6A50 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1400B6AD0 (MiPfnsWorthTrying.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiQueueWorkingSetRequest @ 0x1401400FC (MiQueueWorkingSetRequest.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 *a10)
{
  int v13; // r13d
  unsigned __int8 CurrentIrql; // bl
  unsigned int v15; // ecx
  __int64 v16; // rsi
  unsigned int *v17; // r9
  unsigned int *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned int v22; // ebx
  _BYTE *v23; // r11
  int v24; // r10d
  _BYTE *v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r14
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // cc
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rdi
  _BOOL8 v42; // r8
  unsigned int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 LargeNodePage; // rcx
  unsigned __int64 v47; // rcx
  unsigned int v48; // ecx
  unsigned __int8 v49; // al
  unsigned __int16 *v50; // r10
  void *KernelStack; // rcx
  int v52; // [rsp+40h] [rbp-C0h]
  BOOL v53; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v57; // [rsp+60h] [rbp-A0h]
  unsigned int *v58; // [rsp+68h] [rbp-98h]
  unsigned int *v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+78h] [rbp-88h] BYREF
  int v61; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+88h] [rbp-78h]
  int v64; // [rsp+8Ch] [rbp-74h]
  int v65; // [rsp+90h] [rbp-70h]
  _BYTE *v66; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 *v69; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v70; // [rsp+B8h] [rbp-48h]
  _QWORD v71[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v73; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v74; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  char v78[8]; // [rsp+108h] [rbp+8h] BYREF
  void *v79; // [rsp+110h] [rbp+10h] BYREF
  __int64 v80; // [rsp+118h] [rbp+18h]
  _QWORD v81[2]; // [rsp+120h] [rbp+20h] BYREF

  v13 = a9;
  v69 = a10;
  memset(v71, 0, sizeof(v71));
  v62 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( CurrentIrql == 2 )
    v13 = a9 | 8;
  v65 = v13 & 0x20000000;
  if ( (v13 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, a5, 1LL) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident(a1, a5, 0LL) )
    {
      MiReturnCommit(a1, a5);
      return 3221225626LL;
    }
  }
  if ( (v13 & 0x40) != 0 )
  {
    if ( a6 == 1 )
    {
      v16 = a1;
      if ( a5 == 0x40000 )
      {
        v56 = 0;
        LargeNodePage = MiFindLargeNodePage(a1, a7, (unsigned int)&v56, v13 | 0x4000u, 0);
        if ( !LargeNodePage )
        {
          v43 = -1073741801;
          goto LABEL_44;
        }
      }
      else
      {
        v56 = 1;
        LargeNodePage = MiFindLargeNodePage(a1, a7, (unsigned int)&v56, v13, 0);
        if ( !LargeNodePage )
        {
          v43 = -1073741801;
          goto LABEL_44;
        }
      }
      *v69 = (LargeNodePage + 0x58000000000LL) / 48;
      return 0LL;
    }
    v43 = -1073741811;
    v16 = a1;
LABEL_44:
    MiReleasePteCopyList((__int64)v71);
    if ( !v65 )
    {
      if ( (ULONG_PTR *)v16 == &MiSystemPartition )
        MiReturnResidentAvailable(a5, v44, v45);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 5824), a5);
      MiReturnCommit(v16, a5);
    }
    return v43;
  }
  if ( a5 > *(_QWORD *)(a1 + 5760) - 160LL )
  {
    v43 = -1073741670;
    v16 = a1;
    goto LABEL_44;
  }
  v63 = v13 & 0x10000000;
  if ( (v13 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 0x40uLL, (__int64)v71);
    if ( !HIDWORD(v71[0]) )
    {
      v43 = -1073741670;
      v16 = a1;
      goto LABEL_44;
    }
  }
  v53 = 0;
  if ( (v13 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v53 = CurrentIrql != 2;
  v15 = a7 | 0x80000000;
  v61 = 0;
  if ( a7 < (unsigned __int16)KeNumberNodes )
    v15 = a7;
  v16 = a1;
  v52 = v15;
  v17 = (unsigned int *)MiReferencePageRuns(a1, 1u);
  v59 = v17;
  v70 = 0LL;
  v67 = 0LL;
  v18 = &v17[4 * *v17 + 4];
  v19 = 0xFFFFFFFFLL;
  v54 = -1;
  v58 = v18;
  if ( ((a4 - 1) & a4) != 0 )
    a4 = 0LL;
  v20 = *(_QWORD *)(a1 + 48);
  v76 = a4;
  v21 = v62;
  v68 = v20;
  v74 = a2;
  v77 = a5;
LABEL_15:
  v22 = MmNumberOfChannels;
  v23 = 0LL;
  v57 = 0LL;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v24 = v52;
    if ( v52 >= 0 )
    {
      v19 = (unsigned int)v52;
    }
    else if ( (_DWORD)v19 == -1 )
    {
      v47 = *(_QWORD *)(v16 + 5576);
      if ( v21 <= v47 )
        v47 = v21;
      LODWORD(v19) = MiPageToNode(v47, 0LL);
      v17 = v59;
      v23 = 0LL;
      v24 = v52;
      v54 = v19;
      v19 = (unsigned int)v19;
      v67 = (unsigned __int16 *)((char *)qword_14036C1C0 + 2 * (unsigned __int16)KeNumberNodes * (unsigned int)v19);
      v18 = v58;
      v20 = v68;
      v70 = &v67[(unsigned __int16)KeNumberNodes];
    }
    if ( (*(_DWORD *)(2184 * v19 + v20 + 2136) & 1) != 0 )
    {
      v23 = (_BYTE *)(2184 * v19 + v20 + 2165);
      v57 = v23;
      if ( a8 >= 0 )
      {
        v48 = 0;
        if ( v22 )
        {
          do
          {
            if ( (unsigned __int8)*v23 == a8 )
              break;
            ++v23;
            ++v48;
          }
          while ( v48 < v22 );
          v57 = v23;
        }
        v22 = 1;
      }
    }
  }
  else
  {
    v24 = v52;
  }
  v25 = &v23[v22];
  v66 = v25;
  while ( 1 )
  {
    v26 = *v17;
    v75 = v21;
    if ( v26 )
      break;
LABEL_40:
    v42 = v53;
LABEL_41:
    if ( !v23 )
      goto LABEL_42;
    v57 = ++v23;
    if ( v23 >= v25 )
    {
      if ( v54 != -1 )
      {
        v50 = v67 + 1;
        v67 = v50;
        if ( v50 != v70 )
        {
          v19 = *v50;
          v20 = v68;
          v54 = *v50;
          goto LABEL_15;
        }
      }
LABEL_42:
      if ( v61 == 1 && v42 )
      {
        if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
        {
          v79 = 0LL;
          v80 = 0LL;
          v81[1] = 16LL;
          KernelStack = KeGetCurrentThread()[1].KernelStack;
          v80 = a5 << 12;
          v79 = KernelStack;
          v81[0] = &v79;
          EtwTraceKernelEvent((int)v81, 1, 0x20100000u, 625, 4200962);
          v18 = v58;
          v17 = v59;
        }
        if ( byte_14036CFD4 )
        {
          MiQueueWorkingSetRequest(v16, 32LL, v42, v17);
          v18 = v58;
          v17 = v59;
        }
        v20 = v68;
        v19 = 0xFFFFFFFFLL;
        v54 = -1;
        v53 = 0;
        goto LABEL_15;
      }
      v43 = -1073741801;
      MiDereferencePageRuns((__int64)v17);
      goto LABEL_44;
    }
  }
  while ( 1 )
  {
    v27 = (unsigned int)(v26 - 1);
    v28 = *((unsigned __int8 *)v18 + 2 * v27 + 1);
    v29 = (unsigned __int8 *)v18 + 2 * v27;
    v64 = v27;
    v27 *= 2LL;
    v30 = *(_QWORD *)&v17[2 * v27 + 4];
    v31 = *(_QWORD *)&v17[2 * v27 + 6];
    v72 = v30;
    v73 = v31 + v30;
    if ( v74 >= v31 + v30 )
    {
      v18 = v58;
LABEL_39:
      v21 = v62;
      v25 = v66;
      goto LABEL_40;
    }
    if ( (v24 < 0 || *v29 == v24) && (!v23 || (_BYTE)v28 == *v23) )
      break;
LABEL_38:
    v26 = v64;
    v18 = v58;
    if ( !v64 )
      goto LABEL_39;
  }
  while ( 1 )
  {
    if ( !(unsigned int)MiCollapseRunTopDown(&v72, v29, v28) )
      goto LABEL_37;
    v32 = v73;
    v61 = 1;
    v33 = v73 - v77;
    v60 = 0;
    v34 = 48 * (v73 - v77) - 0x58000000000LL;
    v35 = MiPfnsWorthTrying(v16, 48 * ((int)v73 - (int)v77), a5, v13, (__int64)&v60, (__int64)v78);
    if ( v35 )
      goto LABEL_24;
    if ( v60 == 1 )
      MiEmptyKernelStackCache();
    v35 = MiClaimPhysicalRun(a1, v33, a5, (unsigned int)v71, v13, -1, 0LL);
    if ( !v35 )
      break;
    if ( v63 )
    {
      v49 = MiLockPageInline(v34);
      v29 = (unsigned __int8 *)0x8000000000000000LL;
      if ( (*(_QWORD *)(v34 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v34 + 34) & 7) == 5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v49);
        v16 = a1;
        v42 = 0LL;
        v18 = v58;
        v17 = v59;
        v24 = v52;
        v23 = v57;
        v25 = v66;
        v21 = v62;
        v53 = 0;
        goto LABEL_41;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v49);
      v32 = v73;
    }
LABEL_24:
    v36 = v32 - v35;
    v37 = v35 <= v33 - v72;
    v16 = a1;
    if ( !v37 )
    {
      v75 = v36 - 1;
LABEL_37:
      v23 = v57;
      v24 = v52;
      v17 = v59;
      goto LABEL_38;
    }
    v73 = v36;
  }
  MiDereferencePageRuns((__int64)v59);
  MiReleasePteCopyList((__int64)v71);
  v38 = (v33 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v39 = (a5 + v33) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v38 < v39 )
    MiUpdateLargePageBitMap(a1, v38, v39 - v38, 1, 1);
  MiConvertContiguousPages((_QWORD *)v34, a5, a6);
  if ( (v13 & 0x40000000) == 0 )
  {
    v40 = v34 + 48 * a5;
    do
    {
      *(_QWORD *)(v34 + 40) &= ~0x200000000000000uLL;
      *(_QWORD *)v34 = 0LL;
      MiSetPfnOwnedAndActive(v34, 0, -8LL, a6, ((v13 & 0x100000) != 0) + 1);
      v34 += 48LL;
    }
    while ( v34 != v40 );
  }
  *v69 = v33;
  return 0LL;
}
