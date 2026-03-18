/*
 * XREFs of MiResolvePageFileFault @ 0x140151874
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14004826C (MiReduceMdl.c)
 *     MiComputeFaultCluster @ 0x140056C60 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiAllocateInPageSupport @ 0x14005763C (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x1400577A4 (MiComputeFaultNode.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiLockSetPfnPriority @ 0x1400BB5D8 (MiLockSetPfnPriority.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiSetInPagePrefetchPriority @ 0x1400CC644 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x1400D2638 (MiFlowThroughInsertNode.c)
 *     MiIsStoreProcess @ 0x1400D5C14 (MiIsStoreProcess.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiFreePageChain @ 0x140152870 (MiFreePageChain.c)
 *     MiSharedVaToPartition @ 0x1401528B0 (MiSharedVaToPartition.c)
 *     MiKernelStackVaToStackNode @ 0x140152A98 (MiKernelStackVaToStackNode.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 a1, unsigned __int64 a2, ...)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  __int64 result; // rax
  ULONG_PTR v10; // r15
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 updated; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONG_PTR *v18; // rcx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r9
  __int64 v21; // r10
  int v22; // eax
  __int64 v23; // rax
  ULONG_PTR *v24; // rcx
  __int64 v25; // r11
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // r14d
  unsigned __int64 v31; // r11
  __int64 v32; // rax
  __int64 v33; // r9
  int v34; // eax
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // ecx
  BOOL IsPteInStore; // eax
  char v41; // r8
  unsigned __int64 v42; // r9
  unsigned int v43; // r10d
  ULONG_PTR *v44; // r11
  int v45; // edi
  bool v46; // r10
  unsigned int v47; // eax
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // r10d
  unsigned int v53; // r15d
  unsigned __int64 v54; // r8
  unsigned int v55; // r12d
  __int64 v56; // rcx
  unsigned __int64 v57; // r10
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // ecx
  unsigned int v61; // r15d
  unsigned __int64 v62; // rbx
  unsigned int v63; // r11d
  __int64 PagingFileOffset; // r12
  unsigned __int64 v65; // r10
  __int64 v66; // rax
  int v67; // r11d
  unsigned __int64 v68; // r12
  unsigned int v69; // r15d
  __int64 v70; // r9
  __int64 v71; // r10
  unsigned __int64 v72; // r11
  __int64 v73; // rax
  __int64 PteTimeStamp; // rax
  __int64 v75; // r8
  unsigned int v76; // r9d
  unsigned __int64 v77; // rsi
  __int64 v78; // r9
  unsigned __int64 v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // r10
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v88; // r8
  __int64 PageChain; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  _QWORD *v94; // rsi
  unsigned int v95; // r15d
  __int64 v96; // r12
  __int16 v97; // ax
  __int64 *v98; // r9
  __int64 v99; // r10
  unsigned __int64 v100; // r11
  int v101; // r8d
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r8
  int v106; // eax
  unsigned __int64 v107; // r10
  _QWORD *v108; // rbx
  unsigned int v109; // r12d
  unsigned int v110; // r11d
  int v111; // edx
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // r8d
  unsigned __int64 v116; // r15
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rax
  char v121; // r9
  int v122; // r11d
  __int64 *v123; // rbx
  char v124; // r12
  _QWORD *v125; // rbx
  ULONG_PTR v126; // rsi
  __int64 v127; // r9
  char v128; // dl
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  unsigned int v132; // ebx
  unsigned int v133; // eax
  ULONG_PTR v134; // rdx
  __int64 v135; // rax
  char v136; // cl
  __int64 v137; // rax
  __int64 v138; // rcx
  char v139; // [rsp+48h] [rbp-79h]
  char v140; // [rsp+48h] [rbp-79h]
  unsigned int v141; // [rsp+4Ch] [rbp-75h] BYREF
  int v142; // [rsp+50h] [rbp-71h]
  unsigned __int64 v143; // [rsp+58h] [rbp-69h]
  ULONG_PTR *v144; // [rsp+60h] [rbp-61h]
  __int64 *v145; // [rsp+68h] [rbp-59h] BYREF
  __int64 Process; // [rsp+70h] [rbp-51h]
  __int64 *v147; // [rsp+78h] [rbp-49h] BYREF
  int v148; // [rsp+80h] [rbp-41h]
  int v149; // [rsp+84h] [rbp-3Dh]
  unsigned __int64 v150; // [rsp+88h] [rbp-39h] BYREF
  int v151; // [rsp+90h] [rbp-31h]
  unsigned __int64 Address; // [rsp+98h] [rbp-29h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-21h]
  __int64 v154; // [rsp+A8h] [rbp-19h]
  unsigned __int64 v155; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v156; // [rsp+B8h] [rbp-9h]
  ULONG_PTR v159; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v161; // [rsp+130h] [rbp+6Fh]
  __int64 v162; // [rsp+138h] [rbp+77h]
  __int64 *v163; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v159 = va_arg(va1, _QWORD);
  v161 = va_arg(va1, _QWORD);
  v162 = va_arg(va1, _QWORD);
  v163 = va_arg(va1, __int64 *);
  v3 = 0;
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v145 = (__int64 *)v4;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v159 )
    {
      LOBYTE(v5) = 17;
      MiUnlockProtoPoolPage(v159, v5, v6, v7);
    }
    return 3221225633LL;
  }
  v10 = v159;
  v11 = v145;
  v12 = 0xFFFFFA8000000000uLL;
  if ( (v4 & 0x800) != 0 )
  {
    v13 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v145);
    v14 = v12 + 48 * v13;
    v3 = 16;
    updated = *(_QWORD *)(v14 + 16);
    v16 = (*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL;
LABEL_10:
    v18 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v16);
    goto LABEL_11;
  }
  v14 = 0LL;
  updated = (__int64)v145;
  if ( !v159 )
  {
    v16 = *(unsigned __int16 *)(v7 + 174);
    goto LABEL_10;
  }
  v17 = MiSharedVaToPartition(v7, v8, a2);
  v8 = a1;
  v18 = (ULONG_PTR *)v17;
LABEL_11:
  v19 = 0LL;
  v144 = v18;
  v20 = v162 & 0xFFFFFFFFFFFFFFFEuLL;
  LODWORD(v150) = 2;
  v21 = v162 & 1;
  if ( (v162 & 1) != 0 && *(_BYTE *)v20 == 5 )
  {
    v22 = *(_DWORD *)(v20 + 48);
    if ( (v22 & 4) != 0 && ((v22 & 0x10) != 0 || !MiIsPteInStore((__int64)v18, updated)) )
    {
      if ( v10 )
      {
        LOBYTE(v12) = 17;
        MiUnlockProtoPoolPage(v10, v12, v6, v20);
      }
      return 3221225495LL;
    }
  }
  else if ( (v162 & 1) != 0 )
  {
    if ( *(_BYTE *)v20 == 2 )
    {
      v19 = v162 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    else if ( *(_BYTE *)v20 == 1 )
    {
      v19 = v162 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( ((unsigned __int16)v11 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset((unsigned __int64)&v145) )
        return 0LL;
      LODWORD(v150) = 0;
      v3 |= 0x20u;
    }
  }
  v148 = 0;
  if ( v21 && *(_BYTE *)v20 == 4 )
  {
    v23 = *(_QWORD *)(v20 + 40);
    v19 = v20;
    v148 = 8;
    v24 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v23 + 544) + 1454LL));
LABEL_41:
    v144 = v24;
    goto LABEL_32;
  }
  if ( (unsigned int)MiGetSystemRegionType(v8) == 12 )
  {
    v148 = 8;
  }
  else if ( (((unsigned __int64)v11 >> 5) & 0x1F) == 0x1F )
  {
    v148 = 8;
    v29 = MiKernelStackVaToStackNode(v25);
    if ( v29 )
      v24 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v29 + 40));
    else
      v24 = &MiSystemPartition;
    goto LABEL_41;
  }
  v24 = v144;
LABEL_32:
  if ( v3 >= 0x20 && (*(_DWORD *)(v19 + 80) & 0x200) != 0 && MiIsPteInStore((__int64)v24, (unsigned __int16)v11) )
  {
    if ( v10 )
    {
      LOBYTE(v26) = 17;
      MiUnlockProtoPoolPage(v10, v26, v27, v28);
    }
    return 0LL;
  }
  v149 = 0;
  v143 = a2;
  v30 = 16;
  LODWORD(v147) = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v142 = 2;
  v141 = 16;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v31 = a1;
    v139 = v149;
    v156 = ((unsigned __int64)v11 >> 5) & 0x1F;
    goto LABEL_51;
  }
  v139 = 16;
  v32 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v32) )
  {
    v139 = 48;
LABEL_49:
    v30 = 1;
    v141 = 1;
    goto LABEL_50;
  }
  if ( *(_QWORD *)(v33 + 912) )
    goto LABEL_49;
LABEL_50:
  LODWORD(v156) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v145);
LABEL_51:
  v34 = MiComputeFaultNode(v161, v31, 0LL, v162, &Address);
  v35 = Address;
  v151 = v34;
  if ( Address )
    goto LABEL_62;
  if ( a2 > 0xFFFFF6BFFFFFFF78uLL )
  {
    v36 = Process;
  }
  else
  {
    v36 = Process;
    if ( a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process) )
      goto LABEL_61;
  }
  if ( (*(_BYTE *)(v161 + 184) & 7) != 0 )
    goto LABEL_64;
  if ( a1 >= 0xFFFF800000000000uLL )
    goto LABEL_64;
  v37 = *(_QWORD *)(v36 + 1296);
  if ( !*(_QWORD *)(v37 + 360) && !*(_QWORD *)(v37 + 368) )
    goto LABEL_64;
LABEL_61:
  Address = MiLocateAddress(a1);
  v35 = Address;
  if ( !Address )
  {
LABEL_64:
    v39 = v142;
    goto LABEL_65;
  }
LABEL_62:
  v38 = *(unsigned int *)(v35 + 52);
  LODWORD(v38) = v38 & 0x7FFFFFFF;
  if ( (v38 | ((unsigned __int64)*(unsigned __int8 *)(v35 + 34) << 31)) != 0x7FFFFFFFELL )
    goto LABEL_64;
  v39 = 7;
  v139 |= 0x80u;
  v142 = 7;
LABEL_65:
  v154 = ((unsigned __int64)v11 >> 11) & 1;
  if ( v154 )
  {
    v141 = 1;
    v142 = v39 | 1;
    v30 = 1;
  }
  IsPteInStore = MiIsPteInStore((__int64)v144, updated);
  v45 = v43 & IsPteInStore | v3;
  if ( v30 != v43 )
  {
    if ( dword_1403CC3E4 )
    {
      v141 = v43;
      --dword_1403CC3E4;
      v30 = v43;
    }
    else if ( v19 )
    {
      v46 = (v41 & 0x10) != 0;
      if ( (v41 & 0x10) != 0 && !v42 )
      {
        v42 = MiLocateAddress(a1);
        Address = v42;
      }
      v47 = MiComputeFaultCluster((__int64)v44, (_QWORD *)v19, v42 & -(__int64)v46, v45 & 1);
      v44 = v144;
      v30 = v47;
      v141 = v47;
      v43 = 1;
    }
    else if ( a1 > 0x7FFFFFFEFFFFLL )
    {
      v141 = v43;
      v30 = v43;
      if ( (v41 & 0x10) == 0 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v30 = 16;
        v45 |= 4u;
        v141 = 16;
      }
    }
  }
  LODWORD(Process) = v43 & v45;
  if ( (v43 & v45) != 0 )
  {
    if ( v30 > *((_DWORD *)v44 + 287) )
      v30 = *((_DWORD *)v44 + 287);
    v141 = v30;
  }
  v48 = MiAllocateInPageSupport(
          a2,
          (unsigned int)v150,
          &v141,
          (ULONG_PTR *)((unsigned __int64)va & -(__int64)(v10 != 0)));
  if ( !v48 )
  {
    result = 3221225626LL;
LABEL_238:
    if ( v19 )
      *(_BYTE *)(v19 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( (__int64 *)MI_READ_PTE_LOCK_FREE(a2) != v11
    || v154
    && ((*(_BYTE *)(v14 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v14 + 34) & 0x20) == 0
     || updated != *(_QWORD *)(v14 + 16)
     || (*(_BYTE *)(*(_QWORD *)v14 + 157LL) & 0x10) != 0) )
  {
    if ( v159 )
    {
      LOBYTE(v49) = 17;
      MiUnlockProtoPoolPage(v159, v49, v50, v51);
    }
    MiFreeInPageSupportBlock((char *)v48);
    result = 3221226548LL;
    goto LABEL_238;
  }
  v52 = 1;
  if ( v19 && *(_BYTE *)v19 == 1 )
    MiSetInPagePrefetchPriority(v19, v48);
  v53 = v141;
  if ( v141 <= v52 || !(unsigned int)MiSufficientAvailablePages((__int64)v144, 0x140uLL) )
    goto LABEL_137;
  v54 = a2;
  v55 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  v141 = ((unsigned int)a2 >> 3) & 0x1FF;
  if ( (v139 & 0x10) != 0 )
  {
    v56 = Address;
    v57 = a1;
    if ( (Address || (Address = MiLocateAddress(a1), (v56 = Address) != 0))
      && (*(_DWORD *)(v56 + 48) & 0x4000) == 0
      && (MiGetProtoPteAddress(v56, v57 >> 12, 4, &v155), v155)
      && (*(_BYTE *)(v155 + 34) & 2) == 0 )
    {
      v58 = *(_QWORD *)(v155 + 8);
      v54 = a2;
      v59 = (__int64)(a2 - v58) >> 3;
      v60 = ((__int64)(v58 + 8LL * *(unsigned int *)(v155 + 44) - a2) >> 3) - 1;
      if ( v60 >= v55 )
        v60 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
      v55 = v60;
      if ( (unsigned int)v59 >= v141 )
        LODWORD(v59) = v141;
      v141 = v59;
    }
    else
    {
      v54 = a2;
      v53 = 1;
    }
  }
  if ( v19 || (v45 & 4) != 0 )
  {
    v141 = 0;
    if ( !v55 )
      v53 = 1;
  }
  if ( v53 > 1 )
  {
    v61 = v53 - 1;
    v147 = v11;
    v62 = v54 + 8;
    PagingFileOffset = (unsigned int)MiGetPagingFileOffset((unsigned __int64)&v147);
    if ( PagingFileOffset + (unsigned __int64)v63 >= 0xFFFFFFFE )
      v63 = -3 - PagingFileOffset;
    if ( (_DWORD)Process || v19 )
      v45 |= 8u;
    v65 = (unsigned __int64)v11 & 0xFFFFFFFFFC00FF1DuLL;
    if ( v63 )
    {
      do
      {
        MiUpdatePageFileHighInPte(v65, ++PagingFileOffset);
        v66 = MI_READ_PTE_LOCK_FREE(v62);
        if ( (v66 & 0x3E0) != 0 && (v66 & 0xFFFFFFFFFC00FF1DuLL) == v65 )
        {
          v143 = v62;
        }
        else if ( (v45 & 8) != 0 )
        {
          break;
        }
        v62 += 8LL;
      }
      while ( v67 != 1 );
      v11 = v145;
    }
    v68 = a2;
    v147 = v11;
    v69 = v61 - ((__int64)(v143 - a2) >> 3);
    v143 = (__int64)(v143 - a2) >> 3;
    if ( v141 <= v69 )
      v69 = v141;
    v71 = (unsigned int)MiGetPagingFileOffset((unsigned __int64)&v147);
    if ( v69 > (unsigned __int64)(v71 - 1) )
      v69 = v71 - 1;
    if ( v69 )
    {
      do
      {
        MiUpdatePageFileHighInPte(v70, v71 - 1);
        v73 = MI_READ_PTE_LOCK_FREE(v72);
        if ( ((v73 & 0x3E0) == 0 || (v73 & 0xFFFFFFFFFC00FF1DuLL) != v70) && (v45 & 8) != 0 )
          break;
        --v69;
      }
      while ( v69 );
      v11 = v145;
    }
    PteTimeStamp = MiGetPteTimeStamp(v11);
    updated = MiUpdatePageFileHighInPte(v11, PteTimeStamp - v75);
    v77 = v76 + (_DWORD)v143 + 1;
    LODWORD(v147) = v76 + v143 + 1;
    v143 = a2 - 8LL * v76;
  }
  else
  {
LABEL_137:
    v77 = (unsigned int)v147;
    v68 = a2;
  }
  v79 = (unsigned int)MiObtainFaultCharges(v144, v77, v142);
  v80 = (unsigned int)v77;
  v155 = v79;
  if ( (unsigned int)v77 > v79 )
  {
    v81 = MiGetPteTimeStamp(updated);
    v82 = v143;
    v84 = v83 - v79;
    if ( v143 + 8 * v84 <= v68 )
    {
      v85 = v84 + v81;
      v143 += 8 * v84;
    }
    else
    {
      v143 = v68;
      v85 = ((__int64)(v68 - v82) >> 3) + v81;
    }
    updated = MiUpdatePageFileHighInPte(updated, v85);
    LODWORD(v147) = v79;
    v77 = v79;
  }
  v86 = 0LL;
  Process = 0LL;
  if ( !v19
    || *(_BYTE *)v19 != 1
    || (AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v144, ((*(_DWORD *)(v19 + 80) >> 3) & 7u) + 1),
        v86 = Process,
        v88 = AvailablePagesBelowPriority,
        v150 = AvailablePagesBelowPriority,
        AvailablePagesBelowPriority > v77) )
  {
    v150 = v77;
    v88 = v77;
  }
  if ( v88 )
  {
    PageChain = MiGetPageChain((__int64)v144, v161, v151, v156, v148, -1LL, &v150);
    v88 = v150;
    v86 = PageChain;
    Process = PageChain;
  }
  if ( !v86 )
  {
    if ( v159 )
    {
      LOBYTE(v80) = 17;
      MiUnlockProtoPoolPage(v159, v80, v88, v78);
    }
    MiFreeInPageSupportBlock((char *)v48);
    if ( v19 )
      *(_BYTE *)(v19 + 1) = 2;
    MiReturnFaultCharges((__int64)v144, v79, v142);
    return 3221225495LL;
  }
  if ( v88 != v77 )
  {
    if ( v143 + 8 * v88 <= v68 )
    {
      v90 = MiGetPteTimeStamp(updated);
      if ( v92 + 8 * (v77 - v91) > v68 )
      {
        v143 = v68;
        v93 = ((__int64)(v68 - v92) >> 3) + v90;
      }
      else
      {
        v93 = v77 - v91 + v90;
        v143 = v92 + 8 * (v77 - v91);
      }
      updated = MiUpdatePageFileHighInPte(updated, v93);
    }
    LODWORD(v147) = v88;
  }
  v94 = (_QWORD *)(v48 + 312);
  v95 = 0;
  v151 = *(unsigned __int8 *)(v48 + 190);
  v145 = (__int64 *)(v48 + 312);
  v141 = 0;
  v96 = v48 + 264;
  while ( 1 )
  {
    v97 = MI_READ_PTE_LOCK_FREE(v143);
    v101 = 1;
    if ( (v45 & 0x10) != 0
      || (v97 & 1) == 0
      && (v97 & 0x400) == 0
      && (v97 & 0x800) == 0
      && (MiGetPteTimeStamp(updated), v103 = MiGetPteTimeStamp(v102), v103 == v105)
      && (v104 & 4) != 0
      && ((updated ^ v104) & 0xF000) == 0
      && (v106 = MiIsPteInStore((__int64)v144, v104), v106 == (v101 & v45)) )
    {
      v141 += v101;
      *v98 = (v99 + 0x58000000000LL) / 48;
      if ( v100 == a2 )
        LOBYTE(v111) = v151;
      else
        v111 = *(unsigned __int8 *)(v48 + 190) >> 4;
      MiLockSetPfnPriority(v99, v111 & 7);
      v112 = *(_QWORD *)(Process + 24) & 0xFFFFFFFFFLL;
      MiSetPfnBlink(Process, 0LL, 0);
      if ( v112 == 0xFFFFFFFFFLL )
        Process = 0LL;
      else
        Process = 48 * v112 - 0x58000000000LL;
      v100 = v143;
      v94 = (_QWORD *)(v48 + 312);
      v98 = v145;
      goto LABEL_188;
    }
    if ( (v45 & 8) == 0 )
    {
      v45 |= 2u;
      *v98 = qword_1403CC418;
LABEL_188:
      v145 = v98 + 1;
      if ( v19 )
        MiAdvanceFaultList((_QWORD *)v19);
      v143 = v100 + 8;
      v113 = MiGetPteTimeStamp(updated);
      v114 = MiUpdatePageFileHighInPte(updated, v113 + 1);
      v110 = (unsigned int)v147;
      updated = v114;
      v107 = a2;
      v95 += v115;
      goto LABEL_191;
    }
    v107 = a2;
    if ( v100 > a2 )
      break;
    v108 = v94;
    if ( v95 )
    {
      v109 = v141;
      do
      {
        if ( *v108 != qword_1403CC418 )
        {
          MiReleaseFreshPage(48LL * *v108 - 0x58000000000LL);
          --v109;
        }
        ++v108;
        --v95;
      }
      while ( v95 );
      v107 = a2;
      v94 = (_QWORD *)(v48 + 312);
      v141 = v109;
      v96 = v48 + 264;
    }
    v45 &= ~2u;
    v145 = v94;
    v143 = v107;
    updated = MI_READ_PTE_LOCK_FREE(v107);
    v110 = 1;
    LODWORD(v147) = 1;
LABEL_191:
    if ( v95 >= v110 )
      goto LABEL_194;
  }
  v110 = v95;
LABEL_194:
  v116 = v143 - 8LL * v110;
  v154 = v94[(__int64)(v107 - v116) >> 3];
  if ( (v139 & 0x10) != 0 )
    v117 = 0LL;
  else
    v117 = (__int64)(v116 << 25) >> 16;
  *(_QWORD *)v96 = 0LL;
  v118 = v110 << 12;
  *(_DWORD *)(v96 + 40) = v118;
  *(_QWORD *)(v96 + 32) = v117 & 0xFFFFFFFFFFFFF000uLL;
  *(_WORD *)(v96 + 8) = 8 * (((v118 + (unsigned __int64)(v117 & 0xFFF) + 4095) >> 12) + 6);
  *(_DWORD *)(v96 + 44) = v117 & 0xFFF;
  *(_WORD *)(v96 + 10) = 66;
  if ( (v45 & 2) != 0 )
  {
    v119 = MiReduceMdl(v96);
    if ( v119 )
    {
      v116 += 8 * v119;
      if ( (v139 & 0x10) == 0 )
        *(_QWORD *)(v96 + 32) += v119 << 12;
    }
  }
  else
  {
    *(_WORD *)(v96 + 10) = 16450;
  }
  v120 = MI_READ_PTE_LOCK_FREE(v116);
  LOWORD(v123) = v120;
  v145 = (__int64 *)v120;
  if ( v122 == 1 )
  {
    v140 = v121 & 0xF8 | *(_BYTE *)(v48 + 190) & 7 | 8;
    v124 = v140;
    LOBYTE(v149) = v140;
  }
  else
  {
    v140 = v121 & 0xDF;
    v124 = v121 & 0xDF;
    LOBYTE(v149) = v121 & 0xDF;
  }
  MiInitializeReadInProgressPfn(a1, v94, v122, v116, v48, v149);
  if ( (v45 & 0x10) != 0 )
  {
    v125 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v145) - 0x58000000000LL);
    MiFlowThroughInsertNode(v48, v125);
    v123 = (__int64 *)v125[2];
    v145 = v123;
    if ( (v124 & 0x10) == 0 )
      *(_QWORD *)(48LL * *v94 - 0x58000000000LL + 16) ^= (*(_DWORD *)(48LL * *v94 - 0x58000000000LL + 16) ^ (WORD1(v123) << 16)) & 0x3FF0000;
  }
  v126 = v159;
  if ( (v124 & 0x10) != 0 )
    MiObtainProtoReference(v159, 0);
  *(_QWORD *)(v48 + 168) = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v48 + 224) = v127;
  if ( v19 )
  {
    if ( *(_BYTE *)v19 == 1 )
    {
      v128 = *(_BYTE *)(v48 + 189) | 4;
      *(_BYTE *)(v48 + 189) = v128;
      if ( (*(_DWORD *)(v19 + 80) & 0x2000) != 0 )
        *(_BYTE *)(v48 + 189) = v128 | 0x10;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_BYTE *)(v48 + 189) |= 0x40u;
  if ( Address && (*(_DWORD *)(Address + 48) & 0x20000) != 0 )
    *(_BYTE *)(v48 + 191) |= 8u;
  if ( v126 )
  {
    LOBYTE(v129) = 17;
    MiUnlockProtoPoolPage(v126, v129, v130, v131);
  }
  MiFreePageChain(Process);
  if ( v141 != v155 )
    MiReturnFaultCharges((__int64)v144, v155 - v141, v142);
  v132 = (unsigned __int16)v123 >> 12;
  *v163 = v48;
  v133 = MiGetPagingFileOffset((unsigned __int64)&v145);
  LODWORD(CurrentThread) = v133;
  v134 = v144[v132 + 860];
  if ( (v140 & 0x10) != 0 )
    *(_QWORD *)(v48 + 160) = v126;
  if ( (v45 & 1) != 0 )
  {
    *(_BYTE *)(v48 + 189) |= 0x80u;
    *(_QWORD *)(v48 + 96) = v133 | ((unsigned __int64)v132 << 60);
  }
  else
  {
    HIDWORD(CurrentThread) = 0;
    *(_QWORD *)(v48 + 96) = (unsigned __int64)(unsigned int)CurrentThread << 12;
  }
  v135 = *(_QWORD *)(v134 + 56);
  v136 = *(_BYTE *)(v48 + 191) | 0x10;
  *(_BYTE *)(v48 + 191) = v136;
  *(_QWORD *)(v48 + 192) = v135;
  if ( *(_QWORD *)(v134 + 216)
    && (!v19 || *(_BYTE *)v19 != 1 || (*(_DWORD *)(v19 + 80) & 0x1000) == 0 || (dword_14044B174 & 1) != 0) )
  {
    *(_BYTE *)(v48 + 191) = v136 | 0x20;
  }
  v137 = v154;
  *(_QWORD *)(v48 + 232) = v116;
  v138 = 48 * v137 - 0x58000000000LL;
  result = 3221435187LL;
  *(_QWORD *)(v48 + 240) = v138;
  return result;
}
