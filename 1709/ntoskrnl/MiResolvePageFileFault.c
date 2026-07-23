/*
 * XREFs of MiResolvePageFileFault @ 0x140234CE8
 * Callers:
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 * Callees:
 *     MiInitializeReadInProgressPfn @ 0x140026A90 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x140026F8C (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiAllocateInPageSupport @ 0x14002A89C (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x14002AC68 (MiComputeFaultNode.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     MiComputeFaultCluster @ 0x140109A10 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiLockSetPfnPriority @ 0x14011AF94 (MiLockSetPfnPriority.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFreePageChain @ 0x14012903C (MiFreePageChain.c)
 *     MiSetInPagePrefetchPriority @ 0x14012EF60 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x1401303B8 (MiFlowThroughInsertNode.c)
 *     MiSharedVaToPartition @ 0x140132CC0 (MiSharedVaToPartition.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiKernelStackVaToStackNode @ 0x14021980C (MiKernelStackVaToStackNode.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 a1, unsigned __int64 *a2, ...)
{
  unsigned __int64 PteShadow; // rbx
  __int64 v3; // r10
  __int64 *v4; // r13
  unsigned __int64 v5; // r9
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // r11
  __int64 v11; // r14
  char v12; // cl
  int v13; // r8d
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  ULONG_PTR *v16; // rax
  __int64 v17; // rax
  ULONG_PTR *v18; // rcx
  unsigned __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned int v21; // r14d
  __int64 Process; // r12
  __int64 *v23; // rcx
  __int64 v24; // rax
  bool v25; // al
  unsigned int v26; // r10d
  unsigned __int8 v27; // r9
  int v28; // ecx
  int v29; // eax
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edx
  int v36; // eax
  __int64 v37; // r12
  ULONG_PTR *v38; // r11
  int v39; // ecx
  int v40; // esi
  _QWORD *v41; // r15
  bool v42; // r10
  unsigned __int64 v43; // rdx
  __int64 v44; // r14
  __int64 v45; // rax
  unsigned int v46; // r10d
  unsigned int v47; // r12d
  unsigned int v48; // r15d
  __int64 v49; // rcx
  unsigned __int64 v50; // r10
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r12d
  __int64 PagingFileOffset; // rdi
  __int64 v55; // r9
  __int64 updated; // r9
  __int64 *v57; // r11
  __int64 v58; // rax
  __int64 *v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // r10
  unsigned int v63; // r11d
  __int64 *v64; // r9
  int v65; // r11d
  __int64 v66; // rax
  unsigned __int64 PteTimeStamp; // rax
  __int64 v68; // r8
  __int64 v69; // rax
  int v70; // r9d
  unsigned __int64 v71; // rbx
  unsigned int v72; // eax
  unsigned int v73; // r8d
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  ULONG_PTR *v81; // rcx
  unsigned int v82; // r8d
  __int64 v83; // rbx
  __int64 v84; // r10
  unsigned int v85; // r8d
  unsigned __int64 v86; // rax
  __int64 v87; // r9
  __int64 v88; // r8
  __int64 v89; // rbx
  __int64 v90; // rdx
  _QWORD *v91; // r11
  unsigned __int64 *v92; // r8
  __int64 v93; // r15
  int v94; // ebx
  unsigned int v95; // r12d
  _QWORD *v96; // r9
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rax
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // r8
  _QWORD *v102; // rbx
  unsigned int v103; // r15d
  unsigned int v104; // r10d
  int v105; // edx
  __int64 v106; // rbx
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  int v109; // r10d
  char v110; // r9
  unsigned __int64 v111; // rdi
  __int64 v112; // r12
  bool v113; // bl
  __int64 v114; // r8
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rbx
  _QWORD *v118; // rbx
  char v119; // r9
  bool v120; // zf
  __int64 v121; // r15
  __int64 v122; // rax
  _QWORD *v123; // r13
  char v124; // dl
  unsigned int v125; // ebx
  unsigned int v126; // eax
  ULONG_PTR v127; // rdx
  __int64 v128; // rax
  char v129; // cl
  unsigned int v130; // [rsp+48h] [rbp-89h] BYREF
  int v131; // [rsp+4Ch] [rbp-85h]
  int v132; // [rsp+50h] [rbp-81h]
  ULONG_PTR *v133; // [rsp+58h] [rbp-79h]
  unsigned __int64 v134; // [rsp+60h] [rbp-71h]
  unsigned int v135; // [rsp+68h] [rbp-69h]
  __int64 v136; // [rsp+70h] [rbp-61h] BYREF
  __int64 PageChain; // [rsp+78h] [rbp-59h] BYREF
  _QWORD *v138; // [rsp+80h] [rbp-51h]
  unsigned __int64 v139; // [rsp+88h] [rbp-49h] BYREF
  int v140; // [rsp+90h] [rbp-41h]
  int v141; // [rsp+94h] [rbp-3Dh]
  unsigned __int64 Address; // [rsp+98h] [rbp-39h]
  __int64 v143; // [rsp+A0h] [rbp-31h] BYREF
  unsigned __int64 v144; // [rsp+A8h] [rbp-29h]
  __int64 v145; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v146; // [rsp+B8h] [rbp-19h]
  __int64 v147; // [rsp+C0h] [rbp-11h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-9h]
  __int64 v151; // [rsp+138h] [rbp+67h] BYREF
  va_list va; // [rsp+138h] [rbp+67h]
  __int64 v153; // [rsp+140h] [rbp+6Fh]
  __int64 v154; // [rsp+148h] [rbp+77h]
  __int64 *v155; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v151 = va_arg(va1, _QWORD);
  v153 = va_arg(va1, _QWORD);
  v154 = va_arg(va1, _QWORD);
  v155 = va_arg(va1, __int64 *);
  PteShadow = *a2;
  v3 = v153;
  v144 = *a2;
  v4 = (__int64 *)a2;
  v5 = a1;
  v6 = 0;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    PteShadow = MiReadPteShadow();
    v144 = PteShadow;
  }
  CurrentThread = KeGetCurrentThread();
  v139 = PteShadow;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v151 )
      MiUnlockProtoPoolPage(v151, 0x11u);
    return 3221225633LL;
  }
  v8 = v154;
  v9 = 0LL;
  v138 = 0LL;
  LODWORD(PageChain) = 2;
  v10 = 1LL;
  v11 = v154 & 1;
  if ( (v154 & 1) != 0 )
  {
    v12 = *(_BYTE *)(v154 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v12 == 5 )
    {
      if ( (*(_DWORD *)((v154 & 0xFFFFFFFFFFFFFFFEuLL) + 48) & 4) != 0 )
      {
        if ( v151 )
          MiUnlockProtoPoolPage(v151, 0x11u);
        return 3221225495LL;
      }
      v138 = 0LL;
      goto LABEL_15;
    }
    if ( v12 == 2 )
    {
      v9 = v154 & 0xFFFFFFFFFFFFFFFEuLL;
      v138 = (_QWORD *)(v154 & 0xFFFFFFFFFFFFFFFEuLL);
      goto LABEL_15;
    }
  }
  if ( (v154 & 1) != 0 && *(_BYTE *)(v154 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v138 = (_QWORD *)(v154 & 0xFFFFFFFFFFFFFFFEuLL);
    v9 = v154 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (PteShadow & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset((__int64 *)&v139) )
      return 0LL;
    LODWORD(PageChain) = 0;
    v6 = 32;
  }
LABEL_15:
  v13 = 16;
  v136 = v10 & (PteShadow >> 11);
  if ( v136 )
  {
    v146 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE((__int64 *)&v139) - 0x58000000000LL;
    v14 = *(_QWORD *)(v146 + 16);
    v15 = (*(_QWORD *)(v146 + 40) >> 40) & 0x3FFLL;
    v6 |= v13;
LABEL_27:
    v16 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v15);
    goto LABEL_28;
  }
  v146 = 0LL;
  v14 = PteShadow;
  if ( !v151 )
  {
    v15 = *(unsigned __int16 *)(v3 + 172);
    goto LABEL_27;
  }
  v16 = MiSharedVaToPartition(v3, v5);
  v5 = a1;
LABEL_28:
  v140 = 0;
  v133 = v16;
  if ( !v11 || *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
  {
    if ( (unsigned int)MiGetSystemRegionType(v5) == 12
      || PsNtosImageBase
      && (v19 >= (unsigned __int64)PsNtosImageBase && v19 < PsNtosImageEnd
       || v19 >= (unsigned __int64)PsHalImageBase && v19 < PsHalImageEnd) )
    {
      v140 = 8;
    }
    else if ( ((PteShadow >> 5) & 0x1F) == 0x1F )
    {
      v140 = 8;
      v20 = MiKernelStackVaToStackNode(v19);
      if ( v20 )
        v18 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)v20 + 20));
      else
        v18 = &MiSystemPartition;
      goto LABEL_40;
    }
    v18 = v133;
    goto LABEL_44;
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
  v138 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
  v17 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
  v140 = 8;
  v18 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v17 + 544) + 1452LL));
LABEL_40:
  v133 = v18;
LABEL_44:
  if ( v6 >= 0x20
    && (*(_DWORD *)(v9 + 80) & 0x200) != 0
    && (PteShadow & 4) != 0
    && (unsigned __int16)PteShadow >> 12 == *((_DWORD *)v18 + 285) )
  {
    if ( v151 )
      MiUnlockProtoPoolPage(v151, 0x11u);
    return 0LL;
  }
  v141 = 0;
  v21 = 16;
  v135 = 1;
  v134 = (unsigned __int64)v4;
  Process = (__int64)CurrentThread->ApcState.Process;
  v132 = 2;
  v130 = 16;
  if ( (unsigned __int64)v4 < 0xFFFFF68000000000uLL || (unsigned __int64)v4 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v23 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v24 = *v23;
    if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
      v24 = MiReadPteShadow();
    v25 = MI_PROTO_FORMAT_COMBINED(v24);
    v28 = v27;
    if ( v25 )
      v28 = 48;
    v131 = v28;
    if ( (v28 & 0x20) != 0 || *(_QWORD *)(Process + 912) )
    {
      v21 = v26;
      v130 = v26;
    }
    LODWORD(v147) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v139);
  }
  else
  {
    LOBYTE(v13) = v141;
    v131 = v13;
    v147 = (PteShadow >> 5) & 0x1F;
  }
  v29 = MiComputeFaultNode(v153, a1, 0LL, v8, &v143);
  v30 = v143;
  LODWORD(v139) = v29;
  Address = v143;
  if ( !v143 )
  {
    if ( (unsigned __int64)v4 <= 0xFFFFF6BFFFFFFF78uLL
      && (unsigned __int64)v4 >= 0xFFFFF68000000000uLL
      && (unsigned int)MiIsStoreProcess(Process) )
    {
      v31 = a1;
    }
    else
    {
      v32 = a1;
      if ( (*(_BYTE *)(v153 + 192) & 7) != 0 )
        goto LABEL_77;
      if ( a1 >= 0xFFFF800000000000uLL )
        goto LABEL_77;
      v33 = *(_QWORD *)(Process + 1296);
      if ( !*(_QWORD *)(v33 + 256) && !*(_QWORD *)(v33 + 264) )
        goto LABEL_77;
      v31 = a1;
    }
    Address = MiLocateAddress(v31);
    v30 = Address;
    if ( Address )
      goto LABEL_74;
    v32 = a1;
LABEL_77:
    LOBYTE(v35) = v131;
    goto LABEL_78;
  }
LABEL_74:
  v34 = *(unsigned int *)(v30 + 52);
  LODWORD(v34) = v34 & 0x7FFFFFFF;
  v35 = v131;
  v32 = a1;
  if ( (v34 | ((unsigned __int64)*(unsigned __int8 *)(v30 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    LOBYTE(v35) = v131 | 0x80;
    v36 = 7;
    v131 = v35;
    v132 = 7;
    goto LABEL_79;
  }
LABEL_78:
  v36 = v132;
LABEL_79:
  v37 = v136;
  if ( v136 )
  {
    v130 = 1;
    v132 = v36 | 1;
    v21 = 1;
  }
  v38 = v133;
  v39 = 0;
  if ( (v14 & 4) != 0 )
    LOBYTE(v39) = (unsigned __int16)v14 >> 12 == *((_DWORD *)v133 + 285);
  v40 = v39 | v6;
  v41 = v138;
  if ( v21 != 1 )
  {
    if ( dword_140389164 )
    {
      v130 = 1;
      --dword_140389164;
      v21 = 1;
    }
    else if ( v138 )
    {
      v42 = (v35 & 0x10) != 0;
      if ( (v35 & 0x10) != 0 && !v30 )
      {
        v30 = MiLocateAddress(v32);
        Address = v30;
      }
      v21 = MiComputeFaultCluster((__int64)v38, v138, v30 & -(__int64)v42, v40 & 1);
      v130 = v21;
    }
    else if ( v32 > 0x7FFFFFFEFFFFLL )
    {
      v130 = 1;
      v21 = 1;
      if ( (v35 & 0x10) == 0 && (v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v40 |= 4u;
        v130 = 16;
        v21 = 16;
      }
    }
  }
  LODWORD(v136) = v40 & 1;
  if ( (v40 & 1) != 0 )
  {
    if ( v21 > *((_DWORD *)v133 + 287) )
      v21 = *((_DWORD *)v133 + 287);
    v130 = v21;
  }
  v143 = MiAllocateInPageSupport(
           (__int64)v4,
           (unsigned int)PageChain,
           &v130,
           (__int64 *)((unsigned __int64)va & -(__int64)(v151 != 0)));
  v44 = v143;
  if ( !v143 )
  {
    result = 3221225626LL;
LABEL_279:
    if ( v41 )
      *((_BYTE *)v41 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  v45 = *v4;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
    v45 = MiReadPteShadow();
  if ( v45 != PteShadow
    || v37
    && ((v43 = v146, (*(_BYTE *)(v146 + 34) & 0x28) == 0x28)
     || (*(_BYTE *)(v146 + 34) & 0x20) == 0
     || v14 != *(_QWORD *)(v146 + 16)
     || (*(_BYTE *)(*(_QWORD *)v146 + 157LL) & 0x10) != 0) )
  {
    if ( v151 )
      MiUnlockProtoPoolPage(v151, 0x11u);
    MiFreeInPageSupportBlock((char *)v44, v43);
    result = 3221226548LL;
    goto LABEL_279;
  }
  v46 = 1;
  if ( v41 && *(_BYTE *)v41 == 1 )
    MiSetInPagePrefetchPriority((__int64)v41, v44);
  v47 = v130;
  if ( v130 <= v46 || !(unsigned int)MiSufficientAvailablePages((__int64)v133, 0x140uLL) )
    goto LABEL_164;
  v48 = 511 - (((unsigned int)v4 >> 3) & 0x1FF);
  v130 = ((unsigned int)v4 >> 3) & 0x1FF;
  if ( (v131 & 0x10) != 0 )
  {
    v49 = Address;
    v50 = a1;
    if ( (Address || (Address = MiLocateAddress(a1), (v49 = Address) != 0))
      && (*(_DWORD *)(v49 + 48) & 0x8000) == 0
      && (MiGetProtoPteAddress(v49, v50 >> 12, 8u, &v145), v145)
      && (*(_BYTE *)(v145 + 34) & 2) == 0 )
    {
      v51 = *(_QWORD *)(v145 + 8);
      if ( (unsigned int)((v51 + 8LL * *(unsigned int *)(v145 + 44) - (__int64)v4) >> 3) - 1 < v48 )
        v48 = ((v51 + 8LL * *(unsigned int *)(v145 + 44) - (__int64)v4) >> 3) - 1;
      v52 = ((__int64)v4 - v51) >> 3;
      if ( (unsigned int)v52 >= v130 )
        LODWORD(v52) = v130;
      v130 = v52;
    }
    else
    {
      v47 = 1;
    }
  }
  if ( v138 || (v40 & 4) != 0 )
  {
    v130 = 0;
    if ( !v48 )
      v47 = 1;
  }
  if ( v47 <= 1 )
  {
    v41 = v138;
LABEL_164:
    v71 = (unsigned __int64)v4;
    goto LABEL_165;
  }
  v53 = v47 - 1;
  PageChain = PteShadow;
  if ( v48 > v53 )
    v48 = v53;
  PagingFileOffset = (unsigned int)MiGetPagingFileOffset(&PageChain);
  if ( PagingFileOffset + (unsigned __int64)v48 >= 0xFFFFFFFE )
    v48 = -3 - PagingFileOffset;
  if ( (_DWORD)v136 || v55 )
    v40 |= 8u;
  updated = PteShadow & 0xFFFFFFFFFC00FF1DuLL;
  if ( v48 )
  {
    do
    {
      updated = MiUpdatePageFileHighInPte(updated, ++PagingFileOffset);
      v58 = *v57;
      if ( (unsigned __int64)v57 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v57 <= 0xFFFFF6FB7DBED7F8uLL )
        v58 = MiReadPteShadow();
      if ( (v58 & 0x3E0) != 0 && (v58 & 0xFFFFFFFFFC00FF1DuLL) == updated )
      {
        v134 = (unsigned __int64)v57;
      }
      else if ( (v40 & 8) != 0 )
      {
        break;
      }
      --v48;
    }
    while ( v48 );
    PteShadow = v144;
    v44 = v143;
    v4 = (__int64 *)a2;
  }
  v59 = v4;
  v134 = (__int64)(v134 - (_QWORD)v4) >> 3;
  PageChain = PteShadow;
  v61 = (unsigned int)MiGetPagingFileOffset(&PageChain);
  if ( v63 > (unsigned __int64)(v61 - 1) )
    v63 = v61 - 1;
  if ( v63 )
  {
    do
    {
      v62 = MiUpdatePageFileHighInPte(v62, --v61);
      v66 = *v64;
      if ( (unsigned __int64)v64 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v64 <= 0xFFFFF6FB7DBED7F8uLL )
        v66 = MiReadPteShadow();
      if ( (v66 & 0x3E0) != 0 && (v66 & 0xFFFFFFFFFC00FF1DuLL) == v62 )
      {
        v59 = v64;
      }
      else if ( (v40 & 8) != 0 )
      {
        break;
      }
    }
    while ( v65 != 1 );
    PteShadow = v144;
    v44 = v143;
    v4 = (__int64 *)a2;
  }
  PteTimeStamp = MiGetPteTimeStamp(PteShadow, v60, (unsigned int)(v4 - v59));
  v69 = MiUpdatePageFileHighInPte(PteShadow, PteTimeStamp - v68);
  v41 = v138;
  v14 = v69;
  v135 = v70 + v134 + 1;
  v71 = (unsigned __int64)&v4[-v70];
  v134 = v71;
LABEL_165:
  v72 = MiObtainFaultCharges(v133, v135, v132);
  v73 = v135;
  v74 = v72;
  v75 = v135;
  v145 = v72;
  if ( v135 > (unsigned __int64)v72 )
  {
    v76 = MiGetPteTimeStamp(v14, v135, v135);
    v78 = v77 - v74;
    if ( v71 + 8 * v78 <= (unsigned __int64)v4 )
    {
      v79 = v78 + v76;
      v134 = v71 + 8 * v78;
    }
    else
    {
      v134 = (unsigned __int64)v4;
      v79 = ((__int64)((__int64)v4 - v71) >> 3) + v76;
    }
    v14 = MiUpdatePageFileHighInPte(v14, v79);
    v135 = v74;
    v73 = v74;
  }
  if ( v41 && *(_BYTE *)v41 == 1 )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v133, ((*((_DWORD *)v41 + 20) >> 3) & 7u) + 1);
    v83 = v82;
    v136 = AvailablePagesBelowPriority;
    if ( AvailablePagesBelowPriority <= v82 )
      goto LABEL_176;
    AvailablePagesBelowPriority = v82;
  }
  else
  {
    v81 = v133;
    v83 = v73;
    AvailablePagesBelowPriority = v73;
  }
  v136 = v83;
LABEL_176:
  if ( !AvailablePagesBelowPriority
    || (PageChain = MiGetPageChain((__int64)v81, v153, v139, v147, v140, -1LL, (unsigned __int64 *)&v136),
        (v84 = PageChain) == 0) )
  {
    if ( v151 )
      MiUnlockProtoPoolPage(v151, 0x11u);
    MiFreeInPageSupportBlock((char *)v44, v75);
    if ( v41 )
      *((_BYTE *)v41 + 1) = 2;
    MiReturnFaultCharges((__int64)v133, v74, v132);
    return 3221225495LL;
  }
  v85 = v136;
  if ( v136 != v83 )
  {
    if ( v134 + 8 * v136 <= (unsigned __int64)v4 )
    {
      v86 = MiGetPteTimeStamp(v14, v75, v136);
      v89 = v83 - v88;
      if ( v87 + 8 * v89 > (unsigned __int64)v4 )
      {
        v134 = (unsigned __int64)v4;
        v90 = (((__int64)v4 - v87) >> 3) + v86;
      }
      else
      {
        v90 = v89 + v86;
        v134 = v87 + 8 * v89;
      }
      v14 = MiUpdatePageFileHighInPte(v14, v90);
    }
    v135 = v85;
  }
  v91 = (_QWORD *)(v44 + 304);
  v92 = (unsigned __int64 *)v134;
  v93 = v44 + 256;
  v94 = *(_BYTE *)(v44 + 190) & 7;
  v136 = v44 + 304;
  v95 = 0;
  LODWORD(v139) = v94;
  v96 = (_QWORD *)(v44 + 304);
  v130 = 0;
  while ( 1 )
  {
    v97 = *v92;
    if ( (unsigned __int64)v92 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v92 <= 0xFFFFF6FB7DBED7F8uLL )
      v97 = MiReadPteShadow();
    if ( (v40 & 0x10) != 0
      || (v97 & 1) == 0
      && (v97 & 0x400) == 0
      && (v97 & 0x800) == 0
      && (v98 = MiGetPteTimeStamp(v97, v97, 1LL), v100 = MiGetPteTimeStamp(v14, v99, v98), v101 == v100)
      && (v97 & 4) != 0
      && (v97 >>= 12, (((unsigned __int8)v97 ^ (unsigned __int8)(v14 >> 12)) & 0xF) == 0)
      && (v97 &= 0xFu, ((_DWORD)v97 == *((_DWORD *)v133 + 285)) == (v40 & 1)) )
    {
      ++v130;
      *v96 = (v84 + 0x58000000000LL) / 48;
      if ( (__int64 *)v134 == v4 )
        LOBYTE(v105) = v94;
      else
        v105 = (*(unsigned __int8 *)(v44 + 190) >> 4) & 7;
      MiLockSetPfnPriority(v84, v105);
      v106 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
      MiSetPfnBlink(PageChain, 0LL, 0);
      if ( v106 == 0xFFFFFFFFFLL )
        PageChain = 0LL;
      else
        PageChain = 48 * v106 - 0x58000000000LL;
      v96 = (_QWORD *)v136;
      goto LABEL_217;
    }
    if ( (v40 & 8) != 0 )
      break;
    v40 |= 2u;
    *v96 = qword_140389198;
LABEL_217:
    v136 = (__int64)(v96 + 1);
    if ( v138 )
      MiAdvanceFaultList(v138);
    v134 += 8LL;
    v107 = MiGetPteTimeStamp(v14, v97, v134);
    v108 = MiUpdatePageFileHighInPte(v14, v107 + 1);
    v95 += v109;
    v14 = v108;
    v104 = v135;
LABEL_220:
    if ( v95 >= v104 )
      goto LABEL_223;
    v84 = PageChain;
    LOBYTE(v94) = v139;
  }
  v92 = (unsigned __int64 *)v134;
  if ( v134 <= (unsigned __int64)v4 )
  {
    v102 = v91;
    if ( v95 )
    {
      v103 = v130;
      do
      {
        if ( *v102 != qword_140389198 )
        {
          MiReleaseFreshPage(48LL * *v102 - 0x58000000000LL);
          --v103;
        }
        ++v102;
        --v95;
      }
      while ( v95 );
      v4 = (__int64 *)a2;
      v91 = (_QWORD *)(v44 + 304);
      v130 = v103;
      v93 = v44 + 256;
    }
    v14 = *v4;
    v40 &= ~2u;
    v96 = v91;
    v136 = (__int64)v91;
    v92 = (unsigned __int64 *)v4;
    v134 = (unsigned __int64)v4;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v14 = MiReadPteShadow();
      v92 = (unsigned __int64 *)v4;
    }
    v104 = 1;
    v135 = 1;
    goto LABEL_220;
  }
  v104 = v95;
LABEL_223:
  v110 = v131;
  v111 = (unsigned __int64)&v92[-v104];
  v112 = v91[(__int64)((__int64)v4 - v111) >> 3];
  v113 = (v131 & 0x10) != 0;
  if ( (v131 & 0x10) != 0 )
    v114 = 0LL;
  else
    v114 = (__int64)(v111 << 25) >> 16;
  *(_QWORD *)v93 = 0LL;
  v115 = v104 << 12;
  *(_DWORD *)(v93 + 40) = v115;
  *(_QWORD *)(v93 + 32) = v114 & 0xFFFFFFFFFFFFF000uLL;
  *(_WORD *)(v93 + 8) = 8 * (((v115 + (unsigned __int64)(v114 & 0xFFF) + 4095) >> 12) + 6);
  *(_DWORD *)(v93 + 44) = v114 & 0xFFF;
  *(_WORD *)(v93 + 10) = 66;
  if ( (v40 & 2) != 0 )
  {
    v116 = MiReduceMdl(v93);
    if ( v116 )
    {
      v111 += 8 * v116;
      if ( !v113 )
        *(_QWORD *)(v93 + 32) += v116 << 12;
    }
    v91 = (_QWORD *)(v44 + 304);
    v110 = v131;
    v104 = *(_DWORD *)(v93 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v93 + 10) = 16450;
  }
  v117 = *(_QWORD *)v111;
  if ( v111 >= 0xFFFFF6FB7DBED000uLL && v111 <= 0xFFFFF6FB7DBED7F8uLL )
    v117 = MiReadPteShadow();
  v139 = v117;
  if ( v104 == 1 )
  {
    LOBYTE(v93) = v110 & 0xF8 | *(_BYTE *)(v44 + 190) & 7 | 8;
    LOBYTE(v141) = v93;
  }
  else
  {
    LODWORD(v93) = v131;
    LOBYTE(v93) = v131 & 0xDF;
    LOBYTE(v141) = v131 & 0xDF;
  }
  MiInitializeReadInProgressPfn(a1, v91, v104, (_QWORD *)v111, v44, v141);
  if ( (v40 & 0x10) != 0 )
  {
    v118 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE((__int64 *)&v139) - 0x58000000000LL);
    MiFlowThroughInsertNode(v44, v118);
    v117 = v118[2];
    v139 = v117;
    if ( (v93 & 0x10) == 0 )
      *(_QWORD *)(48LL * *(_QWORD *)(v44 + 304) - 0x58000000000LL + 16) ^= (*(_DWORD *)(48LL * *(_QWORD *)(v44 + 304)
                                                                                      - 0x58000000000LL
                                                                                      + 16) ^ (WORD1(v117) << 16)) & 0x3FF0000;
  }
  LOBYTE(v93) = (unsigned __int8)v93 >> 4;
  v119 = 1;
  v131 = v93;
  v120 = (v93 & 1) == 0;
  LOBYTE(v131) = v93 & 1;
  v121 = v151;
  if ( !v120 )
  {
    MiObtainProtoReference(v151, 0);
    v119 = 1;
  }
  v122 = *v4;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
    v122 = MiReadPteShadow();
  *(_QWORD *)(v44 + 224) = v4;
  v123 = v138;
  *(_QWORD *)(v44 + 168) = v122;
  if ( v123 )
  {
    if ( *(_BYTE *)v123 == v119 )
    {
      v124 = *(_BYTE *)(v44 + 189) | 4;
      *(_BYTE *)(v44 + 189) = v124;
      if ( (v123[10] & 0x2000) != 0 )
        *(_BYTE *)(v44 + 189) = v124 | 0x10;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_BYTE *)(v44 + 189) |= 0x40u;
  if ( Address && (*(_DWORD *)(Address + 48) & 0x100000) != 0 )
    *(_BYTE *)(v44 + 191) |= 8u;
  if ( v121 )
    MiUnlockProtoPoolPage(v121, 0x11u);
  MiFreePageChain(PageChain);
  if ( v130 != v145 )
    MiReturnFaultCharges((__int64)v133, v145 - v130, v132);
  v125 = (unsigned __int16)v117 >> 12;
  *v155 = v44;
  v126 = MiGetPagingFileOffset((__int64 *)&v139);
  v127 = v133[v125 + 724];
  if ( (_BYTE)v131 )
    *(_QWORD *)(v44 + 160) = v121;
  if ( (v40 & 1) != 0 )
  {
    *(_BYTE *)(v44 + 189) |= 0x80u;
    *(_QWORD *)(v44 + 96) = v126 | ((unsigned __int64)v125 << 60);
  }
  else
  {
    *(_QWORD *)(v44 + 96) = (unsigned __int64)v126 << 12;
  }
  v128 = *(_QWORD *)(v127 + 56);
  *(_BYTE *)(v44 + 191) |= 0x10u;
  v129 = *(_BYTE *)(v44 + 191);
  *(_QWORD *)(v44 + 192) = v128;
  if ( *(_QWORD *)(v127 + 216)
    && (!v123 || *(_BYTE *)v123 != 1 || (v123[10] & 0x1000) == 0 || (dword_140400114 & 1) != 0) )
  {
    *(_BYTE *)(v44 + 191) = v129 | 0x20;
  }
  *(_QWORD *)(v44 + 232) = v111;
  result = 3221435187LL;
  *(_QWORD *)(v44 + 240) = 48 * v112 - 0x58000000000LL;
  return result;
}
