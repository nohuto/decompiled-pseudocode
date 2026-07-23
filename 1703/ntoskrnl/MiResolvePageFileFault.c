/*
 * XREFs of MiResolvePageFileFault @ 0x140073C40
 * Callers:
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 * Callees:
 *     MiSetInPagePrefetchPriority @ 0x1400334E0 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x14003B434 (MiFlowThroughInsertNode.c)
 *     MiSharedVaToPartition @ 0x1400739A4 (MiSharedVaToPartition.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsStoreProcess @ 0x140073C0C (MiIsStoreProcess.c)
 *     MiIsPteInStore @ 0x140074CBC (MiIsPteInStore.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiLockSetPfnPriority @ 0x140075EE0 (MiLockSetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiAllocateInPageSupport @ 0x1401067C4 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x140106888 (MiComputeFaultNode.c)
 *     MiComputeFaultCluster @ 0x140107E44 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1401096B4 (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiKernelStackVaToStackNode @ 0x14013D064 (MiKernelStackVaToStackNode.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 a1, unsigned __int64 a2, ...)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 result; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  char v12; // cl
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 updated; // rdi
  __int64 v17; // rax
  int v18; // r8d
  ULONG_PTR *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  ULONG_PTR *v22; // rcx
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 Process; // r13
  unsigned int v27; // r14d
  int v28; // r8d
  __int64 v29; // rax
  bool v30; // al
  unsigned int v31; // r9d
  unsigned __int8 v32; // r10
  int v33; // ecx
  int v34; // eax
  __int64 v35; // r11
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r8d
  int v40; // eax
  __int64 v41; // r15
  __int64 v42; // r13
  int v43; // esi
  char v44; // r8
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r10
  __int64 v47; // r11
  bool v48; // r10
  __int64 v49; // r14
  unsigned int v50; // ebx
  unsigned __int64 v51; // rdx
  unsigned int v52; // r10d
  unsigned int v53; // r12d
  unsigned int v54; // r13d
  unsigned int v55; // r15d
  __int64 v56; // rcx
  unsigned __int64 v57; // r11
  __int64 v58; // rdx
  unsigned int v59; // r12d
  __int64 PagingFileOffset; // rdi
  __int64 v61; // r9
  unsigned __int64 v62; // r9
  __int64 v63; // r11
  __int64 v64; // rax
  unsigned __int64 v65; // r11
  __int64 v66; // r15
  unsigned int v67; // r12d
  unsigned __int64 v68; // r12
  __int64 v69; // r9
  __int64 v70; // r10
  __int64 v71; // r11
  __int64 v72; // rax
  __int64 PteTimeStamp; // rax
  __int64 v74; // r8
  unsigned int v75; // r9d
  unsigned __int64 v76; // rbx
  unsigned __int64 v77; // r13
  unsigned __int64 v78; // r15
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned __int64 v84; // r13
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 PageChain; // r15
  unsigned int v87; // r8d
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // rbx
  __int64 v92; // rdx
  int v93; // r11d
  unsigned int v94; // r12d
  unsigned int v95; // ebx
  __int64 v96; // rax
  _QWORD *v97; // r9
  _QWORD *v98; // r10
  unsigned int v99; // r11d
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rax
  int IsPteInStore; // eax
  unsigned __int64 v105; // rdi
  _QWORD *v106; // rbx
  unsigned int v107; // r13d
  unsigned int v108; // ebx
  unsigned __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // r8d
  unsigned int v115; // r11d
  int v116; // r12d
  unsigned __int64 v117; // r13
  bool v118; // bl
  __int64 v119; // r8
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rbx
  int v123; // r10d
  int v124; // r11d
  _QWORD *v125; // rbx
  bool v126; // zf
  __int64 v127; // r12
  __int64 v128; // rax
  char v129; // r10
  unsigned __int64 v130; // rdi
  __int64 v131; // r9
  char v132; // dl
  __int64 v133; // rdx
  __int64 v134; // rdi
  unsigned int v135; // ebx
  unsigned int v136; // eax
  ULONG_PTR v137; // rdx
  __int64 v138; // rax
  char v139; // cl
  __int64 v140; // rax
  __int64 v141; // rcx
  unsigned int i; // [rsp+48h] [rbp-89h] BYREF
  int v143; // [rsp+4Ch] [rbp-85h]
  unsigned int v144; // [rsp+50h] [rbp-81h]
  unsigned int v145; // [rsp+54h] [rbp-7Dh]
  unsigned __int64 v146; // [rsp+58h] [rbp-79h]
  int v147; // [rsp+60h] [rbp-71h]
  __int64 v148; // [rsp+68h] [rbp-69h] BYREF
  ULONG_PTR *v149; // [rsp+70h] [rbp-61h]
  int v150; // [rsp+78h] [rbp-59h]
  unsigned __int64 v151; // [rsp+80h] [rbp-51h]
  __int64 v152; // [rsp+88h] [rbp-49h] BYREF
  __int64 Address; // [rsp+90h] [rbp-41h] BYREF
  unsigned __int64 v154; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v155; // [rsp+A0h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-29h]
  int v157; // [rsp+B0h] [rbp-21h]
  __int64 v158; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v159; // [rsp+C0h] [rbp-11h]
  __int64 v160; // [rsp+C8h] [rbp-9h]
  __int64 v163; // [rsp+138h] [rbp+67h] BYREF
  va_list va; // [rsp+138h] [rbp+67h]
  __int64 v165; // [rsp+140h] [rbp+6Fh]
  __int64 v166; // [rsp+148h] [rbp+77h]
  __int64 *v167; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v163 = va_arg(va1, _QWORD);
  v165 = va_arg(va1, _QWORD);
  v166 = va_arg(va1, _QWORD);
  v167 = va_arg(va1, __int64 *);
  v2 = 0;
  v148 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v163 )
    {
      LOBYTE(v3) = 17;
      MiUnlockProtoPoolPage(v163, v3);
    }
    return 3221225633LL;
  }
  v8 = v166;
  v9 = 0LL;
  v10 = v148;
  v151 = 0LL;
  LODWORD(v154) = 2;
  v11 = v166 & 1;
  if ( (v166 & 1) != 0 )
  {
    v12 = *(_BYTE *)(v166 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v12 == 5 )
    {
      if ( (*(_DWORD *)((v166 & 0xFFFFFFFFFFFFFFFEuLL) + 48) & 4) != 0 )
      {
        if ( v163 )
        {
          LOBYTE(v3) = 17;
          MiUnlockProtoPoolPage(v163, v3);
        }
        return 3221225495LL;
      }
      v151 = 0LL;
      goto LABEL_11;
    }
    if ( v12 == 2 )
    {
      v9 = v166 & 0xFFFFFFFFFFFFFFFEuLL;
      v151 = v166 & 0xFFFFFFFFFFFFFFFEuLL;
      goto LABEL_11;
    }
  }
  if ( (v166 & 1) != 0 && *(_BYTE *)(v166 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v151 = v166 & 0xFFFFFFFFFFFFFFFEuLL;
    v9 = v166 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v148 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(&v148) )
      return 0LL;
    LODWORD(v154) = 0;
    v2 = 32;
  }
LABEL_11:
  v13 = v163;
  v152 = (v10 >> 11) & 1;
  if ( v152 )
  {
    v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v148);
    v155 = v15 + 48 * v14;
    updated = *(_QWORD *)(v155 + 16);
    v17 = (*(_QWORD *)(v155 + 40) >> 40) & 0x3FFLL;
    v2 |= v18;
LABEL_23:
    v20 = qword_14036C8F8;
    v19 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v17);
    goto LABEL_24;
  }
  v155 = 0LL;
  updated = v10;
  if ( !v163 )
  {
    v17 = *(unsigned __int16 *)(v6 + 172);
    goto LABEL_23;
  }
  v19 = MiSharedVaToPartition(v6, v5, v4);
  v20 = qword_14036C8F8;
  v5 = a1;
LABEL_24:
  v147 = 0;
  v149 = v19;
  if ( v11 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
    v151 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
    v21 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    v147 = 8;
    v22 = *(ULONG_PTR **)(v20 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v21 + 544) + 1452LL));
LABEL_36:
    v149 = v22;
    goto LABEL_40;
  }
  if ( (unsigned int)MiGetSystemRegionType(v5) == 12
    || PsNtosImageBase
    && (v23 >= (unsigned __int64)PsNtosImageBase && v23 < PsNtosImageEnd
     || v23 >= (unsigned __int64)PsHalImageBase && v23 < PsHalImageEnd) )
  {
    v147 = 8;
  }
  else if ( ((v10 >> 5) & 0x1F) == 0x1F )
  {
    v147 = 8;
    v24 = MiKernelStackVaToStackNode(v23);
    if ( v24 )
      v22 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v24 + 40));
    else
      v22 = &MiSystemPartition;
    goto LABEL_36;
  }
  v22 = v149;
LABEL_40:
  if ( v2 >= 0x20 && (*(_DWORD *)(v9 + 80) & 0x200) != 0 && (unsigned int)MiIsPteInStore(v22, v10) )
  {
    if ( v13 )
    {
      LOBYTE(v25) = 17;
      MiUnlockProtoPoolPage(v13, v25);
    }
    return 0LL;
  }
  v150 = 0;
  v145 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v27 = 16;
  i = 16;
  v146 = a2;
  v144 = 2;
  v28 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v29 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v30 = MI_PROTO_FORMAT_COMBINED(v29);
    v33 = v32;
    if ( v30 )
      v33 = 48;
    v143 = v33;
    if ( (v33 & 0x20) != 0 || *(_QWORD *)(Process + 912) )
    {
      v27 = v31;
      i = v31;
    }
    LODWORD(v159) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v148);
  }
  else
  {
    LOBYTE(v28) = v150;
    v143 = v28;
    v159 = (v10 >> 5) & 0x1F;
  }
  v34 = MiComputeFaultNode(v165, a1, 0, v8, (__int64)&Address);
  v35 = Address;
  v157 = v34;
  if ( Address )
    goto LABEL_66;
  if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process) )
  {
    v36 = a1;
  }
  else
  {
    if ( (*(_BYTE *)(v165 + 192) & 7) != 0 )
      goto LABEL_68;
    if ( a1 >= 0xFFFF800000000000uLL )
      goto LABEL_68;
    v37 = *(_QWORD *)(Process + 1296);
    if ( !*(_QWORD *)(v37 + 256) && !*(_QWORD *)(v37 + 264) )
      goto LABEL_68;
    v36 = a1;
  }
  Address = MiLocateAddress(v36);
  v35 = Address;
  if ( Address )
  {
LABEL_66:
    v38 = *(unsigned int *)(v35 + 52);
    LODWORD(v38) = v38 & 0x7FFFFFFF;
    v39 = v143;
    if ( (v38 | ((unsigned __int64)*(unsigned __int8 *)(v35 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      LOBYTE(v39) = v143 | 0x80;
      v40 = 7;
      v143 = v39;
      v144 = 7;
      goto LABEL_69;
    }
  }
LABEL_68:
  v40 = v144;
LABEL_69:
  v41 = v152;
  if ( v152 )
  {
    i = 1;
    v144 = v40 | 1;
    v27 = 1;
  }
  v42 = (__int64)v149;
  v43 = MiIsPteInStore(v149, updated) & 1 | v2;
  if ( v27 != 1 )
  {
    if ( dword_14036CEA4 )
    {
      i = 1;
      --dword_14036CEA4;
      v27 = 1;
    }
    else if ( v9 )
    {
      v48 = (v44 & 0x10) != 0;
      if ( (v44 & 0x10) != 0 && !v47 )
      {
        v47 = MiLocateAddress(v45);
        Address = v47;
      }
      v27 = MiComputeFaultCluster(v42, v9, v47 & -(__int64)v48, v43 & 1);
      i = v27;
    }
    else if ( v45 > 0x7FFFFFFEFFFFLL )
    {
      i = 1;
      v27 = 1;
      if ( (v44 & 0x10) == 0 && (v45 < v46 || v45 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v43 |= 4u;
        i = 16;
        v27 = 16;
      }
    }
  }
  LODWORD(v152) = v43 & 1;
  if ( (v43 & 1) != 0 )
  {
    if ( v27 > *(_DWORD *)(v42 + 1196) )
      v27 = *(_DWORD *)(v42 + 1196);
    i = v27;
  }
  v160 = MiAllocateInPageSupport(a2, (unsigned int)v154, &i, (unsigned __int64)va & -(__int64)(v163 != 0));
  v49 = v160;
  if ( !v160 )
  {
    v50 = -1073741670;
LABEL_99:
    if ( v9 )
      *(_BYTE *)(v9 + 1) = (v50 == -1073741670) + 1;
    return v50;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v10
    || v41
    && ((v51 = v155, (*(_BYTE *)(v155 + 34) & 0x28) == 0x28)
     || (*(_BYTE *)(v155 + 34) & 0x20) == 0
     || updated != *(_QWORD *)(v155 + 16)
     || (*(_BYTE *)(*(_QWORD *)v155 + 157LL) & 0x10) != 0) )
  {
    v50 = -1073740748;
    if ( v163 )
    {
      LOBYTE(v51) = 17;
      MiUnlockProtoPoolPage(v163, v51);
    }
    MiFreeInPageSupportBlock((PVOID)v49);
    goto LABEL_99;
  }
  if ( v9 && *(_BYTE *)v9 == 1 )
    MiSetInPagePrefetchPriority(v9, v49);
  v53 = i;
  if ( i <= 1 || *(_QWORD *)(v42 + 5760) <= 0x140uLL )
    goto LABEL_149;
  v54 = (v52 >> 3) & 0x1FF;
  v55 = 511 - v54;
  if ( (v143 & 0x10) != 0 )
  {
    v56 = Address;
    v57 = a1;
    if ( (Address || (Address = MiLocateAddress(a1), (v56 = Address) != 0)) && (*(_DWORD *)(v56 + 48) & 0x8000) == 0 )
    {
      MiGetProtoPteAddress(v56, v57 >> 12, 8LL, &v158);
      if ( !v158 || (*(_BYTE *)(v158 + 34) & 2) != 0 )
      {
        v53 = 1;
      }
      else
      {
        v58 = *(_QWORD *)(v158 + 8);
        if ( (unsigned int)((__int64)(v58 + 8LL * *(unsigned int *)(v158 + 44) - a2) >> 3) - 1 < v55 )
          v55 = ((__int64)(v58 + 8LL * *(unsigned int *)(v158 + 44) - a2) >> 3) - 1;
        if ( (unsigned int)((__int64)(a2 - v58) >> 3) < v54 )
          v54 = (__int64)(a2 - v58) >> 3;
      }
    }
    else
    {
      v53 = 1;
    }
  }
  if ( v151 || (v43 & 4) != 0 )
  {
    v54 = 0;
    if ( !v55 )
      v53 = 1;
  }
  if ( v53 <= 1 )
  {
LABEL_149:
    v76 = v145;
    v68 = a2;
    v77 = v146;
  }
  else
  {
    v59 = v53 - 1;
    v154 = v10;
    if ( v55 > v59 )
      v55 = v59;
    PagingFileOffset = (unsigned int)MiGetPagingFileOffset(&v154);
    if ( PagingFileOffset + (unsigned __int64)v55 >= 0xFFFFFFFE )
      v55 = -3 - PagingFileOffset;
    if ( (_DWORD)v152 || v61 )
      v43 |= 8u;
    v62 = v10 & 0xFFFFFFFFFC00FF1DuLL;
    if ( v55 )
    {
      do
      {
        MiUpdatePageFileHighInPte(v62, ++PagingFileOffset);
        v64 = MI_READ_PTE_LOCK_FREE(v63);
        if ( (v64 & 0x3E0) != 0 && (v64 & 0xFFFFFFFFFC00FF1DuLL) == v62 )
        {
          v146 = v65;
        }
        else if ( (v43 & 8) != 0 )
        {
          break;
        }
        --v55;
      }
      while ( v55 );
      v10 = v148;
    }
    v66 = (__int64)(v146 - a2) >> 3;
    v67 = v59 - v66;
    v154 = v10;
    if ( v54 > v67 )
      v54 = v67;
    v68 = a2;
    v69 = (unsigned int)MiGetPagingFileOffset(&v154);
    if ( v54 > (unsigned __int64)(v69 - 1) )
      v54 = v69 - 1;
    if ( v54 )
    {
      do
      {
        MiUpdatePageFileHighInPte(v70, v69 - 1);
        v72 = MI_READ_PTE_LOCK_FREE(v71);
        if ( ((v72 & 0x3E0) == 0 || (v72 & 0xFFFFFFFFFC00FF1DuLL) != v70) && (v43 & 8) != 0 )
          break;
        --v54;
      }
      while ( v54 );
      v10 = v148;
    }
    PteTimeStamp = MiGetPteTimeStamp(v10);
    updated = MiUpdatePageFileHighInPte(v10, PteTimeStamp - v74);
    v76 = v75 + (_DWORD)v66 + 1;
    v77 = a2 - 8LL * v75;
    v145 = v75 + v66 + 1;
    v146 = v77;
  }
  v78 = (unsigned int)MiObtainFaultCharges(v149, (unsigned int)v76, v144);
  v79 = (unsigned int)v76;
  v155 = v78;
  if ( (unsigned int)v76 > v78 )
  {
    v80 = MiGetPteTimeStamp(updated);
    v82 = v81 - v78;
    if ( v77 + 8 * v82 <= v68 )
    {
      v83 = v82 + v80;
      v146 = v77 + 8 * v82;
    }
    else
    {
      v146 = v68;
      v83 = ((__int64)(v68 - v77) >> 3) + v80;
    }
    v76 = v78;
    updated = MiUpdatePageFileHighInPte(updated, v83);
    v145 = v78;
  }
  v84 = v151;
  if ( !v151
    || *(_BYTE *)v151 != 1
    || (AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v149, ((*(_DWORD *)(v151 + 80) >> 3) & 7u) + 1),
        v152 = AvailablePagesBelowPriority,
        AvailablePagesBelowPriority > v76) )
  {
    v152 = v76;
    AvailablePagesBelowPriority = v76;
  }
  if ( !AvailablePagesBelowPriority )
  {
LABEL_247:
    if ( v163 )
    {
      LOBYTE(v79) = 17;
      MiUnlockProtoPoolPage(v163, v79);
    }
    MiFreeInPageSupportBlock((PVOID)v49);
    if ( v84 )
      *(_BYTE *)(v84 + 1) = 2;
    MiReturnFaultCharges((__int64)v149, v78, v144);
    return 3221225495LL;
  }
  PageChain = MiGetPageChain((_DWORD)v149, v165, v157, v159, v147, -1LL, (__int64)&v152);
  if ( !PageChain )
  {
    v78 = v155;
    goto LABEL_247;
  }
  v87 = v152;
  if ( v152 != v76 )
  {
    if ( v146 + 8 * v152 <= v68 )
    {
      v88 = MiGetPteTimeStamp(updated);
      v91 = v76 - v90;
      if ( v89 + 8 * v91 > v68 )
      {
        v146 = v68;
        v92 = ((__int64)(v68 - v89) >> 3) + v88;
      }
      else
      {
        v92 = v91 + v88;
        v146 = v89 + 8 * v91;
      }
      updated = MiUpdatePageFileHighInPte(updated, v92);
    }
    v145 = v87;
  }
  v93 = *(_BYTE *)(v49 + 190) & 7;
  v148 = v49 + 304;
  v94 = 0;
  v147 = v93;
  v95 = 0;
  for ( i = 0; ; v95 = i )
  {
    v96 = MI_READ_PTE_LOCK_FREE(v146);
    v100 = v96;
    v101 = 1LL;
    if ( (v43 & 0x10) != 0
      || (v96 & 1) == 0
      && (v96 & 0x400) == 0
      && (v96 & 0x800) == 0
      && (MiGetPteTimeStamp(updated), v103 = MiGetPteTimeStamp(v102), v103 == v101)
      && (v101 = 1LL, (v100 & 4) != 0)
      && ((v100 ^ updated) & 0xF000) == 0
      && (IsPteInStore = MiIsPteInStore(v149, v100), IsPteInStore == ((unsigned int)v101 & v43)) )
    {
      i = v101 + v95;
      v109 = v146;
      *v97 = (PageChain + 0x58000000000LL) / 48;
      if ( v109 == a2 )
        v110 = v99;
      else
        v110 = (*(unsigned __int8 *)(v49 + 190) >> 4) & 7;
      MiLockSetPfnPriority(PageChain, v110);
      v111 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
      MiSetPfnBlink(PageChain, 0LL, 0LL);
      if ( v111 == 0xFFFFFFFFFLL )
        PageChain = 0LL;
      else
        PageChain = 48 * v111 - 0x58000000000LL;
      v97 = (_QWORD *)v148;
      goto LABEL_194;
    }
    if ( (v43 & 8) == 0 )
    {
      v43 |= 2u;
      *v97 = qword_14036CED8;
LABEL_194:
      v148 = (__int64)(v97 + 1);
      if ( v84 )
        MiAdvanceFaultList(v84, v100, v101);
      v146 += 8LL;
      v112 = MiGetPteTimeStamp(updated);
      v113 = MiUpdatePageFileHighInPte(updated, v112 + 1);
      v108 = v145;
      v98 = (_QWORD *)(v49 + 304);
      updated = v113;
      v94 += v114;
      goto LABEL_197;
    }
    v105 = a2;
    if ( v146 > a2 )
    {
      v115 = v94;
      goto LABEL_201;
    }
    v106 = v98;
    if ( v94 )
    {
      v107 = i;
      do
      {
        if ( *v106 != qword_14036CED8 )
        {
          MiReleaseFreshPage(48LL * *v106 - 0x58000000000LL);
          --v107;
        }
        ++v106;
        --v94;
      }
      while ( v94 );
      v98 = (_QWORD *)(v49 + 304);
      v105 = a2;
      i = v107;
      v84 = v151;
    }
    v43 &= ~2u;
    v148 = (__int64)v98;
    v146 = v105;
    updated = MI_READ_PTE_LOCK_FREE(v105);
    v108 = 1;
    v145 = 1;
LABEL_197:
    if ( v94 >= v108 )
      break;
  }
  v115 = v145;
  v105 = a2;
LABEL_201:
  v116 = v143;
  v117 = v146 - 8LL * v115;
  v158 = v98[(__int64)(v105 - v117) >> 3];
  v118 = (v143 & 0x10) != 0;
  if ( (v143 & 0x10) != 0 )
    v119 = 0LL;
  else
    v119 = (__int64)(v117 << 25) >> 16;
  *(_QWORD *)(v49 + 256) = 0LL;
  v120 = v115 << 12;
  *(_DWORD *)(v49 + 296) = v120;
  *(_QWORD *)(v49 + 288) = v119 & 0xFFFFFFFFFFFFF000uLL;
  *(_WORD *)(v49 + 264) = 8 * (((v120 + (unsigned __int64)(v119 & 0xFFF) + 4095) >> 12) + 6);
  *(_DWORD *)(v49 + 300) = v119 & 0xFFF;
  *(_WORD *)(v49 + 266) = 66;
  if ( (v43 & 2) != 0 )
  {
    v121 = MiReduceMdl(v49 + 256);
    if ( v121 )
    {
      v117 += 8 * v121;
      if ( !v118 )
        *(_QWORD *)(v49 + 288) += v121 << 12;
    }
  }
  else
  {
    *(_WORD *)(v49 + 266) = 16450;
  }
  v122 = MI_READ_PTE_LOCK_FREE(v117);
  v148 = v122;
  if ( v124 == 1 )
    LOBYTE(v116) = v116 & 0xF8 | *(_BYTE *)(v49 + 190) & 7 | 8;
  else
    LOBYTE(v116) = v116 & 0xDF;
  LOBYTE(v150) = v116;
  MiInitializeReadInProgressPfn(a1, v123, v124, v117, v49 + 32, v150);
  if ( (v43 & 0x10) != 0 )
  {
    v125 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v148) - 0x58000000000LL);
    MiFlowThroughInsertNode(v49, v125);
    v122 = v125[2];
    v148 = v122;
    if ( (v116 & 0x10) == 0 )
      *(_QWORD *)(48LL * *(_QWORD *)(v49 + 304) - 0x58000000000LL + 16) ^= (*(_DWORD *)(48LL * *(_QWORD *)(v49 + 304)
                                                                                      - 0x58000000000LL
                                                                                      + 16) ^ (WORD1(v122) << 16)) & 0x3FF0000;
  }
  LOBYTE(v116) = (unsigned __int8)v116 >> 4;
  v143 = v116;
  v126 = (v116 & 1) == 0;
  LOBYTE(v143) = v116 & 1;
  v127 = v163;
  if ( !v126 )
    MiObtainProtoReference(v163, 0LL);
  v128 = MI_READ_PTE_LOCK_FREE(a2);
  v130 = v151;
  *(_QWORD *)(v49 + 168) = v128;
  *(_QWORD *)(v49 + 224) = v131;
  if ( v130 )
  {
    if ( *(_BYTE *)v130 == v129 )
    {
      v132 = *(_BYTE *)(v49 + 189) | 4;
      *(_BYTE *)(v49 + 189) = v132;
      if ( (*(_DWORD *)(v130 + 80) & 0x2000) != 0 )
        *(_BYTE *)(v49 + 189) = v132 | 0x10;
    }
  }
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
    *(_BYTE *)(v49 + 189) |= 0x40u;
  if ( Address && (*(_DWORD *)(Address + 48) & 0x100000) != 0 )
    *(_BYTE *)(v49 + 191) |= 8u;
  if ( v127 )
  {
    LOBYTE(v133) = 17;
    MiUnlockProtoPoolPage(v127, v133);
  }
  if ( PageChain )
  {
    do
    {
      v134 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
      MiReleaseFreshPage(PageChain);
      if ( v134 == 0xFFFFFFFFFLL )
        break;
      PageChain = 48 * v134 - 0x58000000000LL;
    }
    while ( 48 * v134 != 0x58000000000LL );
    v49 = v160;
    v127 = v163;
    v130 = v151;
  }
  if ( i != v155 )
    MiReturnFaultCharges((__int64)v149, v155 - i, v144);
  v135 = (unsigned __int16)v122 >> 12;
  *v167 = v49;
  v136 = MiGetPagingFileOffset(&v148);
  LODWORD(CurrentThread) = v136;
  v137 = v149[v135 + 700];
  if ( (_BYTE)v143 )
    *(_QWORD *)(v49 + 160) = v127;
  if ( (v43 & 1) != 0 )
  {
    *(_BYTE *)(v49 + 189) |= 0x80u;
    *(_QWORD *)(v49 + 96) = v136 | ((unsigned __int64)v135 << 60);
  }
  else
  {
    HIDWORD(CurrentThread) = 0;
    *(_QWORD *)(v49 + 96) = (unsigned __int64)(unsigned int)CurrentThread << 12;
  }
  v138 = *(_QWORD *)(v137 + 56);
  *(_BYTE *)(v49 + 191) |= 0x10u;
  v139 = *(_BYTE *)(v49 + 191);
  *(_QWORD *)(v49 + 192) = v138;
  if ( *(_QWORD *)(v137 + 216)
    && (!v130 || *(_BYTE *)v130 != 1 || (*(_DWORD *)(v130 + 80) & 0x1000) == 0 || (dword_1403E3114 & 1) != 0) )
  {
    *(_BYTE *)(v49 + 191) = v139 | 0x20;
  }
  v140 = v158;
  *(_QWORD *)(v49 + 232) = v117;
  v141 = 48 * v140 - 0x58000000000LL;
  result = 3221435187LL;
  *(_QWORD *)(v49 + 240) = v141;
  return result;
}
