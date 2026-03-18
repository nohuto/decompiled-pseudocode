/*
 * XREFs of MiSystemFault @ 0x140032BA0
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUpdatePfnPriorityByPte @ 0x140036670 (MiUpdatePfnPriorityByPte.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiGetMultiplexedVm @ 0x1400A344C (MiGetMultiplexedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 *     MiRecheckVaWorkingSet @ 0x1400A4950 (MiRecheckVaWorkingSet.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     MiNoFaultFound @ 0x140116D14 (MiNoFaultFound.c)
 *     KeInvalidAccessAllowed @ 0x14011D0D8 (KeInvalidAccessAllowed.c)
 *     MiIsWorkingSetTrimThread @ 0x140126894 (MiIsWorkingSetTrimThread.c)
 *     MiCheckSystemNxFault @ 0x14012C034 (MiCheckSystemNxFault.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MiTransientPageListWriter @ 0x140234404 (MiTransientPageListWriter.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rbx
  unsigned int v11; // esi
  struct _KTHREAD *CurrentThread; // r13
  int v14; // eax
  KIRQL v15; // al
  KIRQL v16; // r12
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // rdx
  int v19; // eax
  void *v20; // rax
  KIRQL v21; // r11
  ULONG_PTR **v22; // r12
  unsigned int v23; // r9d
  ULONG_PTR **v24; // r10
  ULONG_PTR *v25; // rcx
  ULONG_PTR PteShadow; // rax
  struct _KTHREAD *v27; // rcx
  __int64 v28; // rdi
  char v29; // al
  int v30; // ebx
  unsigned int v31; // ebx
  unsigned __int16 *AnyMultiplexedVm; // r13
  _KPROCESS *Process; // rax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 SharedVm; // rdi
  KIRQL v37; // si
  char v38; // di
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned __int64 v41; // r10
  unsigned int v42; // r9d
  unsigned __int64 v43; // r11
  ULONG_PTR *v44; // rcx
  ULONG_PTR v45; // rax
  __int64 v46; // rbx
  unsigned __int16 *v47; // rcx
  _DWORD *v48; // rax
  _KPROCESS *v49; // rax
  char *v50; // r13
  LONG *v51; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v53; // esi
  signed __int32 v54; // edx
  signed __int32 v55; // eax
  __int64 MultiplexedVm; // rsi
  char v57; // r11
  bool v58; // zf
  __int64 v59; // rcx
  char *v60; // rcx
  _DWORD *v61; // rax
  unsigned __int64 v62; // r10
  __int64 v63; // r9
  unsigned __int64 v64; // r11
  ULONG_PTR *v65; // rcx
  ULONG_PTR v66; // rax
  ULONG_PTR v67; // rdi
  struct _KTHREAD *v68; // rbx
  int v69; // eax
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // r8
  __int64 PrototypePteDirect; // r8
  _DWORD *v73; // rax
  unsigned int v74; // eax
  struct _KTHREAD *v75; // rbx
  unsigned int v76; // edi
  int v77; // ecx
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // r8
  _DWORD *v80; // rax
  __int64 v81; // rax
  ULONG_PTR v82; // rdx
  struct _KTHREAD *v83; // r14
  int v84; // eax
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rdi
  unsigned int i; // ebx
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rax
  bool v92; // cc
  _DWORD *v93; // rax
  __int64 v94; // rax
  struct _KTHREAD *v95; // r15
  unsigned int v96; // eax
  unsigned int v97; // eax
  unsigned int v98; // ebx
  _QWORD *v99; // r13
  __int64 v100; // rdi
  unsigned __int64 AvailablePagesBelowPriority; // r12
  unsigned __int64 v102; // r9
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // rdx
  ULONG_PTR v105; // r8
  unsigned int v106; // ecx
  ULONG_PTR v107; // r9
  __int64 v108; // rdx
  _QWORD *v109; // rax
  unsigned __int64 v110; // r14
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rdi
  char v113; // r11
  unsigned __int64 v114; // r10
  ULONG_PTR v115; // rcx
  unsigned __int64 v116; // r8
  unsigned __int64 v117; // r10
  unsigned int v118; // r9d
  __int64 v119; // r12
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // r14
  unsigned int v122; // edi
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // r14
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rdx
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rdi
  unsigned __int64 v130; // rdx
  unsigned __int64 v131; // rdx
  unsigned __int64 v132; // rax
  _DWORD *v133; // rax
  unsigned __int64 v134; // rax
  unsigned __int8 v135; // [rsp+40h] [rbp-58h]
  int v136; // [rsp+44h] [rbp-54h] BYREF
  ULONG_PTR v137; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *v138; // [rsp+50h] [rbp-48h]
  __int64 v139; // [rsp+58h] [rbp-40h]
  char v140[56]; // [rsp+60h] [rbp-38h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  LODWORD(v6) = 0;
  v11 = 0;
  if ( (BugCheckParameter2 & 0x100000000000000LL) != 0 )
  {
    if ( BugCheckParameter1 < 0xFFFFF68000000000uLL
      || BugCheckParameter1 > 0xFFFFF6FFFFFFFFFFuLL
      || a4 > 0x7FFFFFFEFFFFLL && (a4 < qword_140389B40 || a4 > qword_140388958) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( a4 >= qword_140388950 && a4 < qword_140388950 + 276840448 )
    return 192LL;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->Priority )
    return 3221225477LL;
  v14 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v14 & 0x400) != 0 || (v14 & 0x100) != 0 && (unsigned int)MiTransientPageListWriter(CurrentThread) == 1 )
    return 3221225477LL;
  if ( dword_140388A84 )
  {
    v15 = ExAcquireSpinLockShared(&dword_140388A80);
    v6 = (_QWORD *)qword_140388A88;
    v16 = v15;
    if ( qword_140388A88 )
    {
      do
      {
        v17 = v6[3];
        if ( (unsigned __int64)CurrentThread > v17 )
        {
          v6 = (_QWORD *)v6[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v17 )
            break;
          v6 = (_QWORD *)*v6;
        }
      }
      while ( v6 );
      if ( v6 && v6[5] != ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v6 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388A80);
    __writecr8(v16);
    if ( v6 )
      return 3221225477LL;
  }
  v18 = BugCheckParameter3 & 1;
  v137 = v18;
  if ( (BugCheckParameter3 & 1) == 0 || ((*(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
  {
    if ( (BugCheckParameter3 & 1) != 0 || !BugCheckParameter3 )
      goto LABEL_39;
    v19 = *(unsigned __int16 *)(BugCheckParameter3 + 368);
    if ( v19 == 16 )
    {
      v20 = &ExpInterlockedPopEntrySListFault;
    }
    else
    {
      if ( v19 != 51 )
        goto LABEL_39;
      v20 = (void *)KeUserPopEntrySListFault;
    }
    if ( *(void **)(BugCheckParameter3 + 360) != v20 )
      goto LABEL_39;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
    && !(unsigned int)MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(a4) == 1 )
  {
    return 3221225477LL;
  }
  v11 = 32;
  *(_BYTE *)(a6 + 17) = 1;
LABEL_39:
  if ( v18 && *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    if ( a4 < 0xFFFF800000000000uLL )
      return 192LL;
  }
  else if ( v11 < 0x20 )
  {
    v21 = 17;
    v135 = 17;
    goto LABEL_46;
  }
  v21 = ExAcquireSpinLockShared(&dword_140388924);
  v135 = v21;
LABEL_46:
  v22 = (ULONG_PTR **)a5;
  v23 = (unsigned int)v6;
  v24 = (ULONG_PTR **)a5;
  do
  {
    v25 = *v24;
    PteShadow = **v24;
    if ( (unsigned __int64)*v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v25, **v24);
    if ( (PteShadow & 1) == 0 )
    {
      if ( v21 == 17 )
        KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 2uLL);
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      v134 = v135;
      goto LABEL_374;
    }
    if ( (PteShadow & 0x80u) != 0LL )
    {
      if ( (BugCheckParameter2 & 2) != 0 && (PteShadow & 0x800) == 0 )
        KeBugCheckEx(0xBEu, BugCheckParameter1, PteShadow, BugCheckParameter3, 0xCuLL);
      MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, PteShadow, 4);
      if ( v135 != 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
        __writecr8(v135);
        return 0LL;
      }
      if ( BugCheckParameter1 >= 0xFFFFF68000000000uLL && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL )
        KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 8uLL);
      return 0LL;
    }
    ++v23;
    ++v24;
  }
  while ( v23 < 3 );
  v27 = *(struct _KTHREAD **)(a5 + 24);
  v138 = v27;
  v28 = *(_QWORD *)&v27->Header.Lock;
  if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v29 = MiReadPteShadow(v27, *(_QWORD *)&v27->Header.Lock);
    v27 = v138;
    LOBYTE(v28) = v29;
  }
  if ( a4 > 0x7FFFFFFEFFFFLL )
  {
    if ( a4 >= 0xFFFF800000000000uLL )
    {
      switch ( *((_BYTE *)&MiState[794] + ((a4 >> 39) & 0x1FF)) )
      {
        case 1:
          v30 = 2;
          goto LABEL_67;
        case 8:
          v30 = 8;
          goto LABEL_67;
        case 6:
        case 7:
          v30 = 4;
          goto LABEL_67;
      }
    }
    v30 = 16;
    goto LABEL_67;
  }
  v30 = 1;
LABEL_67:
  v31 = v11 | v30;
  if ( ((unsigned __int8)BugCheckParameter3 & (unsigned __int8)v28 & 1) != 0
    && *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriorityByPte(v27, *(_DWORD *)((BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 2LL, 16LL);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
    __writecr8(v135);
    return 0LL;
  }
  if ( v21 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
    __writecr8(v135);
  }
  if ( (v28 & 1) != 0 )
  {
    LODWORD(v137) = v31 & 1;
    if ( (v31 & 1) != 0 )
    {
      AnyMultiplexedVm = &CurrentThread->ApcState.Process[1].IdealNode[12];
    }
    else if ( (v31 & 2) != 0 )
    {
      Process = CurrentThread->ApcState.Process;
      if ( !Process[1].ActiveProcessors.Bitmap[2] || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v34 = -805306362;
        if ( v31 >= 0x20 )
          return (unsigned int)-1073741819;
        return v34;
      }
      AnyMultiplexedVm = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    }
    else if ( (v31 & 8) != 0 )
    {
      AnyMultiplexedVm = (unsigned __int16 *)&unk_14038B880;
    }
    else
    {
      v35 = 2LL;
      if ( (v31 & 4) == 0 )
        v35 = 1LL;
      AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(v35);
    }
    SharedVm = MiGetSharedVm(AnyMultiplexedVm);
    v37 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v38 = v31;
    if ( !(_DWORD)v137 && v135 != 17 )
    {
      v38 = v31 | 0x40;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_140388924);
    }
    v39 = MiRecheckVaWorkingSet(AnyMultiplexedVm, a4);
    v40 = v39;
    if ( !v39 || ((*((_BYTE *)AnyMultiplexedVm + 192) ^ *(_BYTE *)(v39 + 192)) & 7) != 0 )
    {
      if ( (v38 & 0x40) != 0 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v37);
      v47 = AnyMultiplexedVm;
LABEL_130:
      v48 = (_DWORD *)MiGetSharedVm(v47);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        goto LABEL_124;
      *v48 = 0;
    }
    else
    {
      v41 = 0xFFFFF6FB7DBED000uLL;
      v42 = 0;
      v43 = 0xFFFFF6FB7DBED7F8uLL;
      while ( 1 )
      {
        v44 = *v22;
        v45 = **v22;
        if ( (unsigned __int64)*v22 >= v41 && (unsigned __int64)v44 <= v43 )
          v45 = MiReadPteShadow(v44, **v22);
        if ( (v45 & 1) == 0 )
          goto LABEL_121;
        if ( (v45 & 0x80u) != 0LL )
          break;
        ++v42;
        ++v22;
        if ( v42 >= 3 )
        {
          v46 = *(_QWORD *)&v138->Header.Lock;
          if ( (unsigned __int64)v138 >= v41 && (unsigned __int64)v138 <= v43 )
            v46 = MiReadPteShadow(v138, *(_QWORD *)&v138->Header.Lock);
          if ( (v38 & 0x40) != 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
            v38 &= ~0x40u;
          }
          if ( (v46 & 1) == 0 )
          {
            MiPreUnlockWorkingSetExclusive(v40, v37);
            v47 = (unsigned __int16 *)v40;
            goto LABEL_130;
          }
          if ( (v38 & 0x20) == 0
            && (v46 & 0x80u) != 0LL
            && BugCheckParameter1 >= 0xFFFFF68000000000uLL
            && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 8uLL);
          }
          if ( (BugCheckParameter2 & 2) != 0 )
          {
            if ( (v46 & 0x800) == 0 )
            {
              if ( (v46 & 0x200) == 0 )
                KeBugCheckEx(0xBEu, BugCheckParameter1, v46, BugCheckParameter3, 0xBuLL);
              MiCopyOnWriteEx(BugCheckParameter1, (_DWORD)v138, -1, v37, 0);
              goto LABEL_123;
            }
          }
          else
          {
            MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v46, 2);
          }
          MiNoFaultFound(BugCheckParameter2, (_DWORD)v138, BugCheckParameter1, v42, v40, 1, v46);
          MiPreUnlockWorkingSetExclusive(v40, v37);
          v47 = (unsigned __int16 *)v40;
          goto LABEL_130;
        }
      }
      if ( (BugCheckParameter2 & 2) != 0 && (v45 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, BugCheckParameter1, v45, BugCheckParameter3, 0xDuLL);
      MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v45, 1);
      if ( (v38 & 0x20) == 0
        && BugCheckParameter1 >= 0xFFFFF68000000000uLL
        && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 8uLL);
      }
LABEL_121:
      if ( (v38 & 0x40) != 0 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
LABEL_123:
      MiPreUnlockWorkingSetExclusive(v40, v37);
      v48 = (_DWORD *)MiGetSharedVm(v40);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
LABEL_124:
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v48, retaddr);
      else
        *v48 = 0;
    }
    __writecr8(v37);
    return 0LL;
  }
  if ( BugCheckParameter1 >= 0xFFFFF68000000000uLL && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v31 < 0x20 )
    {
      if ( a4 > 0x7FFFFFFEFFFFLL )
      {
        if ( !v137 || *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 9uLL);
        return 0LL;
      }
      return 192LL;
    }
    return 3221225477LL;
  }
  if ( (v31 & 2) != 0 )
  {
    v49 = CurrentThread->ApcState.Process;
    if ( !v49[1].ActiveProcessors.Bitmap[2] || (v49[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      if ( v31 < 0x20 )
      {
        if ( !v137 || *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 3uLL);
        return 0LL;
      }
      return 3221225477LL;
    }
    v50 = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  else if ( (v31 & 8) != 0 )
  {
    v50 = (char *)&unk_14038B880;
  }
  else
  {
    v50 = (char *)&unk_140389660;
    if ( (v31 & 4) == 0 )
      v50 = (char *)&unk_140389550;
  }
  v51 = &dword_140389780;
  if ( (v50[192] & 7) != 2 )
    v51 = (LONG *)(v50 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v51, CurrentIrql);
  }
  else
  {
    v53 = 0;
    if ( _interlockedbittestandset(v51, 0x1Fu) )
      v53 = ExpWaitForSpinLockExclusiveAndAcquire(v51, CurrentIrql);
    v54 = *v51;
    while ( (v54 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v54 & 0x40000000) == 0 )
      {
        v55 = _InterlockedCompareExchange(v51, v54 | 0x40000000, v54);
        v58 = v54 == v55;
        v54 = v55;
        if ( !v58 )
          continue;
      }
      if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v53);
      v54 = *v51;
    }
  }
  v51[1] = 0;
  if ( v135 != 17 )
  {
    LOBYTE(v31) = v31 | 0x40;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140388924);
  }
  MultiplexedVm = (__int64)v50;
  v57 = v50[192] & 7;
  if ( v57 )
  {
    if ( BugCheckParameter1 < 0xFFFF800000000000uLL )
      goto LABEL_177;
    if ( *((_BYTE *)&MiState[794] + ((BugCheckParameter1 >> 39) & 0x1FF)) == 1 )
    {
      v58 = v57 == 1;
      goto LABEL_185;
    }
    if ( *((_BYTE *)&MiState[794] + ((BugCheckParameter1 >> 39) & 0x1FF)) == 8 )
    {
      if ( v57 == 2 && *(_QWORD *)(MiGetSystemCacheReverseMap(BugCheckParameter1) + 16) )
      {
        MultiplexedVm = MiGetMultiplexedVm(v59, BugCheckParameter1);
        goto LABEL_186;
      }
LABEL_179:
      if ( (v31 & 0x40) != 0 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      MiPreUnlockWorkingSetExclusive(v50, CurrentIrql);
      v60 = v50;
LABEL_182:
      v61 = (_DWORD *)MiGetSharedVm(v60);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v61, retaddr);
        __writecr8(CurrentIrql);
        return 0LL;
      }
      *v61 = 0;
      __writecr8(CurrentIrql);
      return 0LL;
    }
    if ( *((_BYTE *)&MiState[794] + ((BugCheckParameter1 >> 39) & 0x1FF)) != 6 )
    {
LABEL_177:
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter1) != 7 )
      {
        if ( v57 == 4 )
          goto LABEL_186;
        goto LABEL_179;
      }
    }
    v58 = v57 == 3;
LABEL_185:
    if ( !v58 )
      goto LABEL_179;
  }
LABEL_186:
  if ( !MultiplexedVm || (*(_BYTE *)(MultiplexedVm + 192) & 7) != v57 )
    goto LABEL_179;
  v62 = 0xFFFFF6FB7DBED000uLL;
  LODWORD(v63) = 0;
  v64 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v65 = *v22;
    v66 = **v22;
    if ( (unsigned __int64)*v22 >= v62 && (unsigned __int64)v65 <= v64 )
      v66 = MiReadPteShadow(v65, **v22);
    if ( (v66 & 1) == 0 )
      goto LABEL_379;
    if ( (v66 & 0x80u) != 0LL )
    {
      if ( (BugCheckParameter2 & 2) != 0 && (v66 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, BugCheckParameter1, v66, BugCheckParameter3, 0x10uLL);
      MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v66, 6);
LABEL_379:
      if ( (v31 & 0x40) != 0 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      MiPreUnlockWorkingSetExclusive(MultiplexedVm, CurrentIrql);
      v73 = (_DWORD *)MiGetSharedVm(MultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
LABEL_222:
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v73, retaddr);
      else
        *v73 = 0;
LABEL_223:
      __writecr8(CurrentIrql);
      return 0LL;
    }
    v63 = (unsigned int)(v63 + 1);
    ++v22;
  }
  while ( (unsigned int)v63 < 3 );
  v67 = *(_QWORD *)&v138->Header.Lock;
  if ( (unsigned __int64)v138 >= v62 && (unsigned __int64)v138 <= v64 )
    v67 = MiReadPteShadow(v138, *(_QWORD *)&v138->Header.Lock);
  if ( (v31 & 0x40) != 0 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
  if ( (v67 & 1) != 0 )
  {
    v68 = KeGetCurrentThread();
    if ( (*(_DWORD *)(&v68[1].SwapListEntry + 1) & 0x400000) == 0 )
    {
      v69 = HIBYTE(*(_DWORD *)(MultiplexedVm + 192));
      if ( (v69 & 8) != 0 )
      {
        *(_BYTE *)(MultiplexedVm + 195) = v69 & 0xF7;
        _interlockedbittestandset((volatile signed __int32 *)&v68[1].SwapListEntry + 2, 0x16u);
        if ( !MiForcedTrim(MultiplexedVm, CurrentIrql) && (*(_BYTE *)(MultiplexedVm + 192) & 0x40) != 0 )
        {
          v70 = *(_QWORD *)(MultiplexedVm + 120);
          if ( v70 > *(_QWORD *)(MultiplexedVm + 152) )
          {
            if ( (*(_DWORD *)(MultiplexedVm + 4) & 0xF) != 0 )
              v71 = v70 - 1;
            else
              v71 = *(_QWORD *)(MultiplexedVm + 152);
            MiReduceWs(MultiplexedVm, CurrentIrql, v71);
          }
        }
      }
      if ( (*(_BYTE *)(MultiplexedVm + 195) & 4) != 0 )
      {
        *(_BYTE *)(MultiplexedVm + 195) &= ~4u;
        _interlockedbittestandset((volatile signed __int32 *)&v68[1].SwapListEntry + 2, 0x16u);
        MiAgeWorkingSet(
          MultiplexedVm,
          CurrentIrql,
          1LL,
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0
                                                      + 8LL * *(unsigned __int16 *)(MultiplexedVm + 172))
                                          + 5680LL)
                              + 2354LL));
      }
      if ( (*(_BYTE *)(MultiplexedVm + 195) & 0x10) != 0 )
      {
        *(_BYTE *)(MultiplexedVm + 195) &= ~0x10u;
        _interlockedbittestandset((volatile signed __int32 *)&v68[1].SwapListEntry + 2, 0x16u);
        MiReduceWs(MultiplexedVm, CurrentIrql, *(_QWORD *)(MultiplexedVm + 152));
      }
      if ( (*(_DWORD *)(&v68[1].SwapListEntry + 1) & 0x400000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v68[1].SwapListEntry + 2, 0x16u);
    }
    v60 = (char *)MultiplexedVm;
    goto LABEL_182;
  }
  PrototypePteDirect = 0LL;
  if ( (v67 & 0x400) == 0 )
  {
    if ( (v67 & 0x800) == 0 && (v67 & 0x3E0) == 0 )
    {
      if ( v137 )
      {
        if ( ((*(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0 )
          goto LABEL_306;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter3, 0LL, 0LL, v63) == 1 )
      {
        goto LABEL_306;
      }
      KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 0LL);
    }
    v82 = v137;
    v94 = (v67 >> 5) & 0x1F;
    if ( v94 != 24 )
    {
      if ( v94 != 31 )
        goto LABEL_296;
      if ( !v137 )
        goto LABEL_290;
      if ( *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        goto LABEL_296;
    }
    if ( v137 )
    {
      if ( ((*(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
LABEL_403:
        KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 1uLL);
LABEL_291:
      if ( (v67 & 0x3E0) == 0x300 || !v82 || *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        goto LABEL_306;
      goto LABEL_296;
    }
LABEL_290:
    if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter3, v137, 0LL, v63) != 1 )
      goto LABEL_403;
    goto LABEL_291;
  }
  if ( (v67 & 2) == 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v67);
    if ( (v31 & 2) != 0 && (unsigned int)MiIsPrototypePteVadLookup(v67) )
    {
      v81 = MiCheckVirtualAddress(BugCheckParameter1, &v136, v140);
      v82 = v137;
      PrototypePteDirect = v81;
      if ( !v81 )
      {
        if ( v137 )
        {
          if ( ((*(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
            goto LABEL_251;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter3, v137, 0LL, v63) != 1 )
        {
LABEL_251:
          v83 = KeGetCurrentThread();
          if ( (*(_DWORD *)(&v83[1].SwapListEntry + 1) & 0x400000) == 0 )
          {
            v84 = HIBYTE(*(_DWORD *)(MultiplexedVm + 192));
            if ( (v84 & 8) != 0 )
            {
              *(_BYTE *)(MultiplexedVm + 195) = v84 & 0xF7;
              _interlockedbittestandset((volatile signed __int32 *)&v83[1].SwapListEntry + 2, 0x16u);
              if ( !MiForcedTrim(MultiplexedVm, CurrentIrql) && (*(_BYTE *)(MultiplexedVm + 192) & 0x40) != 0 )
              {
                v85 = *(_QWORD *)(MultiplexedVm + 120);
                v86 = *(_QWORD *)(MultiplexedVm + 152);
                if ( v85 > v86 )
                {
                  if ( (*(_DWORD *)(MultiplexedVm + 4) & 0xF) != 0 )
                  {
                    v87 = *(_QWORD *)(MultiplexedVm + 136);
                    v88 = v85 - 1;
                    for ( i = 7; v87 > v88; --i )
                    {
                      v90 = v87 - v88;
                      if ( i )
                      {
                        v91 = v90;
                        v92 = *(_QWORD *)(MultiplexedVm + 8LL * i + 40) <= v90;
                        v90 = *(_QWORD *)(MultiplexedVm + 8LL * i + 40);
                        if ( !v92 )
                          v90 = v91;
                      }
                      if ( v90 )
                      {
                        MiTrimWorkingSet(MultiplexedVm, v90, CurrentIrql, i, 16);
                        if ( !i )
                          break;
                      }
                      v87 = *(_QWORD *)(MultiplexedVm + 136);
                    }
                    MiSimpleAging(MultiplexedVm, CurrentIrql);
                  }
                  else
                  {
                    MiReduceWs(MultiplexedVm, CurrentIrql, v86);
                  }
                }
              }
            }
            if ( (*(_BYTE *)(MultiplexedVm + 195) & 4) != 0 )
            {
              *(_BYTE *)(MultiplexedVm + 195) &= ~4u;
              _interlockedbittestandset((volatile signed __int32 *)&v83[1].SwapListEntry + 2, 0x16u);
              MiAgeWorkingSet(
                MultiplexedVm,
                CurrentIrql,
                1LL,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0
                                                            + 8LL * *(unsigned __int16 *)(MultiplexedVm + 172))
                                                + 5680LL)
                                    + 2354LL));
            }
            if ( (*(_BYTE *)(MultiplexedVm + 195) & 0x10) != 0 )
            {
              *(_BYTE *)(MultiplexedVm + 195) &= ~0x10u;
              _interlockedbittestandset((volatile signed __int32 *)&v83[1].SwapListEntry + 2, 0x16u);
              MiReduceWs(MultiplexedVm, CurrentIrql, *(_QWORD *)(MultiplexedVm + 152));
            }
            if ( (*(_DWORD *)(&v83[1].SwapListEntry + 1) & 0x400000) != 0 )
              _interlockedbittestandreset((volatile signed __int32 *)&v83[1].SwapListEntry + 2, 0x16u);
          }
          v93 = (_DWORD *)MiGetSharedVm(MultiplexedVm);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v93, retaddr);
          else
            *v93 = 0;
          __writecr8(CurrentIrql);
          return 3489660934LL;
        }
LABEL_306:
        v95 = KeGetCurrentThread();
        v96 = *(_DWORD *)(MultiplexedVm + 192);
        v138 = v95;
        if ( (*(_DWORD *)(&v95[1].SwapListEntry + 1) & 0x400000) != 0 )
        {
LABEL_370:
          v133 = (_DWORD *)MiGetSharedVm(MultiplexedVm);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v133, retaddr);
          else
            *v133 = 0;
          v134 = CurrentIrql;
LABEL_374:
          __writecr8(v134);
          return 3221225477LL;
        }
        v97 = HIBYTE(v96);
        v98 = 7;
        if ( (v97 & 8) == 0 )
          goto LABEL_356;
        *(_BYTE *)(MultiplexedVm + 195) = v97 & 0xF7;
        _interlockedbittestandset((volatile signed __int32 *)&v95[1].SwapListEntry + 2, 0x16u);
        v99 = *(_QWORD **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(MultiplexedVm + 172));
        v139 = v99[710];
        v100 = v139;
        AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v99, 6LL);
        v102 = *(_QWORD *)(MultiplexedVm + 136);
        v103 = *(_QWORD *)(v100 + 2408);
        v104 = *(_QWORD *)(*(_QWORD *)(MultiplexedVm + 16) + 32LL);
        if ( v102 > v104 )
        {
          v105 = v99[722];
          v106 = 1;
          v107 = v102 - v104;
          v137 = v105;
          v108 = (15 * v107 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
          v109 = (_QWORD *)(MultiplexedVm + 48);
          v110 = (v108 + ((15 * v107 - v108) >> 1)) >> 6;
          v111 = 0LL;
          v112 = 0LL;
          do
          {
            v112 += *v109;
            if ( v112 >= v110 )
              break;
            ++v106;
            ++v109;
          }
          while ( v106 < 8 );
          v113 = *(_BYTE *)(MultiplexedVm + 192) & 7;
          if ( v113 )
          {
            v114 = 16 * v103;
            v115 = v107;
            v116 = v105 / 0xA;
            if ( v114 <= v116 )
              v116 = v114;
            if ( v107 >= v137 )
              v115 = v137;
            v103 = v116 * (100 * v115 / v137) / 0x64;
            if ( v103 > v107 / 0xA )
              v103 = v107 / 0xA;
            v111 = 0LL;
          }
          if ( AvailablePagesBelowPriority >= v103 )
            goto LABEL_331;
          v117 = v103 - AvailablePagesBelowPriority;
          v118 = 7;
          if ( v117 < 0x10 )
            v117 = 16LL;
          while ( 1 )
          {
            v111 += *(_QWORD *)(MultiplexedVm + 8LL * v118 + 40);
            if ( v111 >= v117 )
              break;
            if ( --v118 == 1 )
              goto LABEL_327;
          }
          v111 = v117;
LABEL_327:
          if ( v111 && (v113 || AvailablePagesBelowPriority < v99[621] >> 1) )
          {
            v119 = MiTrimWorkingSet(MultiplexedVm, v111, CurrentIrql, v118, 57);
            *(_QWORD *)(v139 + 2488) += v119;
          }
          else
          {
LABEL_331:
            v119 = 0LL;
          }
          if ( v112 < v110 || (*(_DWORD *)(MultiplexedVm + 4) & 0x3FFF) == 0 )
            MiAgeWorkingSet(
              MultiplexedVm,
              CurrentIrql,
              1LL,
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0
                                                          + 8LL * *(unsigned __int16 *)(MultiplexedVm + 172))
                                              + 5680LL)
                                  + 2354LL));
          if ( v119 )
            goto LABEL_356;
        }
        if ( (*(_BYTE *)(MultiplexedVm + 192) & 0x40) == 0
          || (v120 = *(_QWORD *)(MultiplexedVm + 120), v121 = *(_QWORD *)(MultiplexedVm + 152), v120 <= v121) )
        {
LABEL_356:
          if ( (*(_BYTE *)(MultiplexedVm + 195) & 4) != 0 )
          {
            *(_BYTE *)(MultiplexedVm + 195) &= ~4u;
            _interlockedbittestandset((volatile signed __int32 *)&v95[1].SwapListEntry + 2, 0x16u);
            MiAgeWorkingSet(
              MultiplexedVm,
              CurrentIrql,
              1LL,
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0
                                                          + 8LL * *(unsigned __int16 *)(MultiplexedVm + 172))
                                              + 5680LL)
                                  + 2354LL));
          }
          if ( (*(_BYTE *)(MultiplexedVm + 195) & 0x10) != 0 )
          {
            *(_BYTE *)(MultiplexedVm + 195) &= ~0x10u;
            _interlockedbittestandset((volatile signed __int32 *)&v95[1].SwapListEntry + 2, 0x16u);
            v129 = *(_QWORD *)(MultiplexedVm + 152);
            v130 = *(_QWORD *)(MultiplexedVm + 136);
            if ( v130 > v129 )
            {
              do
              {
                v131 = v130 - v129;
                if ( v98 )
                {
                  v132 = v131;
                  v92 = *(_QWORD *)(MultiplexedVm + 8LL * v98 + 40) <= v131;
                  v131 = *(_QWORD *)(MultiplexedVm + 8LL * v98 + 40);
                  if ( !v92 )
                    v131 = v132;
                }
                if ( v131 )
                {
                  MiTrimWorkingSet(MultiplexedVm, v131, CurrentIrql, v98, 16);
                  if ( !v98 )
                    break;
                }
                v130 = *(_QWORD *)(MultiplexedVm + 136);
                --v98;
              }
              while ( v130 > v129 );
              v95 = v138;
            }
            MiSimpleAging(MultiplexedVm, CurrentIrql);
          }
          if ( (*(_DWORD *)(&v95[1].SwapListEntry + 1) & 0x400000) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&v95[1].SwapListEntry + 2, 0x16u);
          goto LABEL_370;
        }
        v122 = 7;
        v123 = *(_QWORD *)(MultiplexedVm + 136);
        if ( (*(_DWORD *)(MultiplexedVm + 4) & 0xF) != 0 )
        {
          v124 = v120 - 1;
          if ( v123 > v120 - 1 )
          {
            do
            {
              v125 = v123 - v124;
              if ( v122 )
              {
                v126 = v125;
                v92 = *(_QWORD *)(MultiplexedVm + 8LL * v122 + 40) <= v125;
                v125 = *(_QWORD *)(MultiplexedVm + 8LL * v122 + 40);
                if ( !v92 )
                  v125 = v126;
              }
              if ( v125 )
              {
                MiTrimWorkingSet(MultiplexedVm, v125, CurrentIrql, v122, 16);
                if ( !v122 )
                  break;
              }
              v123 = *(_QWORD *)(MultiplexedVm + 136);
              --v122;
            }
            while ( v123 > v124 );
LABEL_354:
            v95 = v138;
          }
        }
        else if ( v123 > v121 )
        {
          do
          {
            v127 = v123 - v121;
            if ( v122 )
            {
              v128 = v127;
              v92 = *(_QWORD *)(MultiplexedVm + 8LL * v122 + 40) <= v127;
              v127 = *(_QWORD *)(MultiplexedVm + 8LL * v122 + 40);
              if ( !v92 )
                v127 = v128;
            }
            if ( v127 )
            {
              MiTrimWorkingSet(MultiplexedVm, v127, CurrentIrql, v122, 16);
              if ( !v122 )
                break;
            }
            v123 = *(_QWORD *)(MultiplexedVm + 136);
            --v122;
          }
          while ( v123 > v121 );
          goto LABEL_354;
        }
        MiSimpleAging(MultiplexedVm, CurrentIrql);
        goto LABEL_356;
      }
    }
    else
    {
      v82 = v137;
    }
LABEL_296:
    if ( (BugCheckParameter2 & 2) == 0
      || PrototypePteDirect
      || (v31 & 2) != 0
      || (v136 = (v67 >> 5) & 0x1F, ((v67 >> 5) & 4) != 0) )
    {
      *(_QWORD *)a6 = MultiplexedVm;
      *(_BYTE *)(a6 + 16) = CurrentIrql;
      *(_QWORD *)(a6 + 8) = PrototypePteDirect;
      return 3221225494LL;
    }
    if ( v82 )
    {
      if ( ((*(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0 )
        goto LABEL_306;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter3, 0LL, 0LL, v63) == 1 )
    {
      goto LABEL_306;
    }
    KeBugCheckEx(0xBEu, BugCheckParameter1, v67, BugCheckParameter3, 0xEuLL);
  }
  if ( v137 && *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiPreUnlockWorkingSetExclusive(MultiplexedVm, CurrentIrql);
    v73 = (_DWORD *)MiGetSharedVm(MultiplexedVm);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      goto LABEL_222;
    *v73 = 0;
    goto LABEL_223;
  }
  v74 = MiResolveDemandZeroFault(
          BugCheckParameter1,
          (_DWORD)v138,
          0,
          MultiplexedVm,
          BugCheckParameter3,
          0LL,
          CurrentIrql);
  v75 = KeGetCurrentThread();
  v76 = v74;
  if ( (*(_DWORD *)(&v75[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v77 = HIBYTE(*(_DWORD *)(MultiplexedVm + 192));
    if ( (v77 & 8) != 0 )
    {
      *(_BYTE *)(MultiplexedVm + 195) = v77 & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&v75[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(MultiplexedVm, CurrentIrql) && (*(_BYTE *)(MultiplexedVm + 192) & 0x40) != 0 )
      {
        v78 = *(_QWORD *)(MultiplexedVm + 120);
        if ( v78 > *(_QWORD *)(MultiplexedVm + 152) )
        {
          if ( (*(_DWORD *)(MultiplexedVm + 4) & 0xF) != 0 )
            v79 = v78 - 1;
          else
            v79 = *(_QWORD *)(MultiplexedVm + 152);
          MiReduceWs(MultiplexedVm, CurrentIrql, v79);
        }
      }
    }
    if ( (*(_BYTE *)(MultiplexedVm + 195) & 4) != 0 )
    {
      *(_BYTE *)(MultiplexedVm + 195) &= ~4u;
      _interlockedbittestandset((volatile signed __int32 *)&v75[1].SwapListEntry + 2, 0x16u);
      MiAgeWorkingSet(
        MultiplexedVm,
        CurrentIrql,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(MultiplexedVm + 172))
                                        + 5680LL)
                            + 2354LL));
    }
    if ( (*(_BYTE *)(MultiplexedVm + 195) & 0x10) != 0 )
    {
      *(_BYTE *)(MultiplexedVm + 195) &= ~0x10u;
      _interlockedbittestandset((volatile signed __int32 *)&v75[1].SwapListEntry + 2, 0x16u);
      MiReduceWs(MultiplexedVm, CurrentIrql, *(_QWORD *)(MultiplexedVm + 152));
    }
    if ( (*(_DWORD *)(&v75[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v75[1].SwapListEntry + 2, 0x16u);
  }
  v80 = (_DWORD *)MiGetSharedVm(MultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v80, retaddr);
  else
    *v80 = 0;
  __writecr8(CurrentIrql);
  return v76;
}
