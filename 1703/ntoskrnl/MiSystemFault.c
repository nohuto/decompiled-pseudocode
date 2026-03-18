/*
 * XREFs of MiSystemFault @ 0x1400B04A0
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140027A64 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x14003446C (MiCheckSystemNxFault.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSimpleAging @ 0x14007EAB8 (MiSimpleAging.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiInitializeTrimCriteria @ 0x140083AE4 (MiInitializeTrimCriteria.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiNoFaultFound @ 0x1400B0400 (MiNoFaultFound.c)
 *     MiRecheckVaWorkingSet @ 0x1400B1B38 (MiRecheckVaWorkingSet.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400CDF50 (MiUpdatePfnPriorityByPte.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiSystemCacheVaControlArea @ 0x140102068 (MiSystemCacheVaControlArea.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiComputeTrimAmount @ 0x140214C68 (MiComputeTrimAmount.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTransientPageListWriter @ 0x140225490 (MiTransientPageListWriter.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemFault(
        ULONG_PTR a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  __int64 *v6; // rbx
  unsigned int v9; // esi
  struct _KTHREAD *CurrentThread; // r13
  KIRQL v13; // al
  _QWORD *v14; // rbx
  KIRQL v15; // r12
  unsigned __int64 v16; // rcx
  ULONG_PTR v17; // rdx
  int v18; // eax
  void *v19; // rax
  KIRQL v20; // bl
  _QWORD *v21; // r10
  ULONG_PTR v22; // rax
  int v23; // r9d
  __int64 v24; // r10
  unsigned __int8 v25; // al
  __int64 v26; // r9
  unsigned int v27; // r11d
  unsigned __int8 v28; // bl
  int v29; // edi
  unsigned int v30; // edi
  __int64 AnyMultiplexedVm; // r13
  struct _KPROCESS *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rcx
  LONG *v35; // rbx
  KIRQL v36; // si
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rbp
  _QWORD *v40; // r10
  ULONG_PTR v41; // rax
  int v42; // r9d
  __int64 v43; // r10
  ULONG_PTR v44; // rdi
  __int64 v45; // r9
  int v46; // r11d
  __int64 v47; // rcx
  LONG *v48; // rax
  struct _KPROCESS *Process; // rax
  char *v50; // r13
  LONG *v51; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v53; // ebx
  signed __int32 v54; // edx
  signed __int32 v55; // eax
  __int64 v56; // rsi
  char v57; // r10
  bool v58; // zf
  LONG *SharedVm; // rax
  _QWORD *v60; // r10
  ULONG_PTR v61; // rax
  int v62; // r9d
  __int64 v63; // r10
  ULONG_PTR v64; // rbx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 PrototypePteDirect; // rdx
  unsigned int v68; // eax
  char v69; // cl
  unsigned int v70; // ebx
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // r8
  LONG *v73; // rax
  __int64 v74; // rax
  ULONG_PTR v75; // r8
  char v76; // al
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rbx
  unsigned int i; // edi
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rax
  bool v84; // cc
  LONG *v85; // rax
  __int64 v86; // rax
  __int64 *v87; // rax
  char v88; // al
  unsigned int v89; // edi
  __int64 v90; // r15
  _QWORD *v91; // r14
  __int64 v92; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v94; // rbx
  unsigned __int64 v95; // r12
  unsigned __int64 v96; // rbx
  unsigned __int64 v97; // r9
  unsigned __int8 v98; // r8
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // r14
  unsigned int v104; // ebx
  unsigned __int64 v105; // rdx
  unsigned __int64 j; // r14
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rbx
  unsigned __int64 k; // rdx
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rax
  LONG *v115; // rax
  unsigned __int64 v116; // rax
  unsigned __int8 v117; // [rsp+40h] [rbp-108h]
  int v119; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD *v120; // [rsp+60h] [rbp-E8h]
  __int64 v121; // [rsp+68h] [rbp-E0h]
  __int64 *v122; // [rsp+70h] [rbp-D8h]
  char v123[8]; // [rsp+78h] [rbp-D0h] BYREF
  char v124; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int8 v125; // [rsp+81h] [rbp-C7h]
  char v126; // [rsp+83h] [rbp-C5h]
  unsigned __int64 v127; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v128; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v129; // [rsp+E0h] [rbp-68h]
  void *retaddr; // [rsp+148h] [rbp+0h]

  v6 = a6;
  v120 = a5;
  v9 = 0;
  v122 = a6;
  if ( (a1 & 0x100000000000000LL) != 0 )
  {
    if ( a2 < 0xFFFFF68000000000uLL
      || a2 > 0xFFFFF6FFFFFFFFFFuLL
      || a4 > 0x7FFFFFFEFFFFLL && (a4 < qword_14036D870 || a4 > qword_14036C5D0) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( a4 >= qword_14036C5C8 && a4 < qword_14036C5C8 + 276840448 )
    return 192LL;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->Priority
    || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x100) != 0
    && (unsigned int)MiTransientPageListWriter(CurrentThread) == 1 )
  {
    return 3221225477LL;
  }
  if ( dword_14036C704 )
  {
    v13 = ExAcquireSpinLockShared(&dword_14036C700);
    v14 = (_QWORD *)qword_14036C708;
    v15 = v13;
    if ( qword_14036C708 )
    {
      do
      {
        v16 = v14[3];
        if ( (unsigned __int64)CurrentThread > v16 )
        {
          v14 = (_QWORD *)v14[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v16 )
            break;
          v14 = (_QWORD *)*v14;
        }
      }
      while ( v14 );
      if ( v14 && v14[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v14 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C700);
    __writecr8(v15);
    if ( v14 )
      return 3221225477LL;
    v6 = v122;
  }
  v17 = a3 & 1;
  if ( (a3 & 1) == 0 || ((*(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
  {
    if ( (a3 & 1) != 0 || !a3 )
      goto LABEL_39;
    v18 = *(unsigned __int16 *)(a3 + 368);
    if ( v18 == 16 )
    {
      v19 = &ExpInterlockedPopEntrySListFault;
    }
    else
    {
      if ( v18 != 51 )
        goto LABEL_39;
      v19 = (void *)KeUserPopEntrySListFault;
    }
    if ( *(_QWORD *)(a3 + 360) != (_QWORD)v19 )
      goto LABEL_39;
  }
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    && (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeBalanceSetManager
    && (unsigned int)MiGetSystemRegionType(a4) == 1 )
  {
    return 3221225477LL;
  }
  v9 = 32;
  *((_BYTE *)v6 + 17) = 1;
LABEL_39:
  if ( v17 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    if ( a4 < 0xFFFF800000000000uLL )
      return 192LL;
  }
  else if ( v9 < 0x20 )
  {
    v20 = 17;
    v117 = 17;
    goto LABEL_46;
  }
  v20 = ExAcquireSpinLockShared(&dword_14036C59C);
  v117 = v20;
LABEL_46:
  v21 = a5;
  do
  {
    v22 = MI_READ_PTE_LOCK_FREE(*v21);
    if ( (v22 & 1) == 0 )
    {
      if ( v20 == 17 )
        KeBugCheckEx(0x50u, a2, a1, a3, 2uLL);
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
      v116 = v20;
      goto LABEL_321;
    }
    if ( (v22 & 0x80u) != 0LL )
    {
      if ( (a1 & 2) != 0 && (v22 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, a2, v22, a3, 0xCuLL);
      MiCheckSystemNxFault(a1, a2, a3, v22, 4u);
      if ( v20 != 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
        __writecr8(v20);
        return 0LL;
      }
      if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
        KeBugCheckEx(0x50u, a2, a1, a3, 8uLL);
      return 0LL;
    }
    v21 = (_QWORD *)(v24 + 8);
  }
  while ( (unsigned int)(v23 + 1) < 3 );
  v121 = a5[3];
  v25 = MI_READ_PTE_LOCK_FREE(v121);
  v28 = v25;
  if ( a4 > 0x7FFFFFFEFFFFLL )
  {
    if ( a4 >= 0xFFFF800000000000uLL )
    {
      switch ( byte_14036D700[((a4 >> 39) & 0x1FF) - 256] )
      {
        case 1:
          v29 = 2;
          goto LABEL_61;
        case 8:
          v29 = 8;
          goto LABEL_61;
        case 6:
        case 7:
          v29 = 4;
          goto LABEL_61;
      }
    }
    v29 = 16;
    goto LABEL_61;
  }
  v29 = 1;
LABEL_61:
  v30 = v9 | v29;
  if ( (v25 & (unsigned __int8)a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriorityByPte(v26, *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0x140000000uLL);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    __writecr8(v117);
    return 0LL;
  }
  if ( v117 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    __writecr8(v117);
    v27 = 0;
  }
  if ( (v28 & 1) == 0 )
  {
    if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v30 < 0x20 )
      {
        if ( a4 <= 0x7FFFFFFEFFFFLL )
          return 192LL;
        if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, a2, a1, a3, 9uLL);
        return 0LL;
      }
      return 3221225477LL;
    }
    if ( (v30 & 2) != 0 )
    {
      Process = CurrentThread->ApcState.Process;
      if ( !Process[1].ActiveProcessors.Bitmap[2] || Process == PsInitialSystemProcess )
      {
        if ( v30 < 0x20 )
        {
          if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
            KeBugCheckEx(0x50u, a2, a1, a3, 3uLL);
          return 0LL;
        }
        return 3221225477LL;
      }
      v50 = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    }
    else if ( (v30 & 8) != 0 )
    {
      v50 = (char *)&unk_140381900;
    }
    else
    {
      v50 = (char *)&unk_14036D3A0;
      if ( (v30 & 4) == 0 )
        v50 = (char *)&unk_14036D290;
    }
    v51 = &dword_14036D4C0;
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
      v53 = v27;
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
    if ( v117 != 17 )
    {
      v30 |= 0x40u;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C59C);
    }
    v56 = (__int64)v50;
    v57 = v50[192] & 7;
    if ( v57 )
    {
      if ( a2 < 0xFFFF800000000000uLL )
        goto LABEL_163;
      if ( byte_14036D700[((a2 >> 39) & 0x1FF) - 256] == 1 )
      {
        v58 = v57 == 1;
        goto LABEL_170;
      }
      if ( byte_14036D700[((a2 >> 39) & 0x1FF) - 256] == 8 )
      {
        if ( v57 != 2 || !*(_QWORD *)(MiGetSystemCacheReverseMap(a2) + 16) )
          goto LABEL_165;
        v56 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(MiSystemCacheVaControlArea(a2) + 60) & 0x3FF)) + 5888LL;
        goto LABEL_171;
      }
      if ( byte_14036D700[((a2 >> 39) & 0x1FF) - 256] != 6 )
      {
LABEL_163:
        if ( (unsigned int)MiGetSystemRegionType(a2) != 7 )
        {
          if ( v57 != 4 )
            goto LABEL_165;
          goto LABEL_171;
        }
      }
      v58 = v57 == 3;
LABEL_170:
      if ( !v58 )
        goto LABEL_165;
    }
LABEL_171:
    if ( v56 && (*(_BYTE *)(v56 + 192) & 7) == v57 )
    {
      v60 = v120;
      do
      {
        v61 = MI_READ_PTE_LOCK_FREE(*v60);
        if ( (v61 & 1) == 0 )
        {
          if ( v30 >= 0x40 )
            ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
          goto LABEL_332;
        }
        if ( (v61 & 0x80u) != 0LL )
        {
          if ( (a1 & 2) != 0 && (v61 & 0x800) == 0 )
            KeBugCheckEx(0xBEu, a2, v61, a3, 0x10uLL);
          MiCheckSystemNxFault(a1, a2, a3, v61, 6u);
          if ( v30 >= 0x40 )
            ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
          MiPreUnlockWorkingSetExclusive(v56, CurrentIrql);
          SharedVm = MiGetSharedVm(v56);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
            goto LABEL_333;
          goto LABEL_168;
        }
        v60 = (_QWORD *)(v63 + 8);
      }
      while ( (unsigned int)(v62 + 1) < 3 );
      v64 = MI_READ_PTE_LOCK_FREE(v121);
      if ( v30 >= 0x40 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
      if ( (v64 & 1) != 0 )
        goto LABEL_332;
      PrototypePteDirect = 0LL;
      if ( (v64 & 0x400) != 0 )
      {
        if ( (v64 & 2) != 0 )
        {
          if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          {
            v68 = MiResolveDemandZeroFault(a2, v121, 0, v56, a3, 0LL, CurrentIrql);
            v69 = *(_BYTE *)(v56 + 195);
            v70 = v68;
            if ( (v69 & 0x10) == 0 )
            {
              if ( (v69 & 8) != 0 )
              {
                *(_BYTE *)(v56 + 195) = v69 & 0xE7 | 0x10;
                if ( ((MiForcedTrim(v56, CurrentIrql) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
                  && (*(_BYTE *)(v56 + 192) & 0x40) != 0 )
                {
                  v71 = *(_QWORD *)(v56 + 120);
                  if ( v71 > *(_QWORD *)(v56 + 152) )
                  {
                    if ( (*(_DWORD *)(v56 + 4) & 0xF) != 0 )
                      v72 = v71 - 1;
                    else
                      v72 = *(_QWORD *)(v56 + 152);
                    MiReduceWs(v56, CurrentIrql, v72);
                  }
                }
              }
              if ( (*(_BYTE *)(v56 + 195) & 4) != 0 )
              {
                *(_BYTE *)(v56 + 195) = *(_BYTE *)(v56 + 195) & 0xEB | 0x10;
                MiAgeWorkingSet(
                  v56,
                  CurrentIrql,
                  1LL,
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v56 + 172))
                                                  + 5544LL)
                                      + 2354LL));
              }
              if ( (*(_BYTE *)(v56 + 195) & 0x20) != 0 )
              {
                *(_BYTE *)(v56 + 195) = *(_BYTE *)(v56 + 195) & 0xCF | 0x10;
                MiReduceWs(v56, CurrentIrql, *(_QWORD *)(v56 + 152));
              }
              if ( (*(_BYTE *)(v56 + 195) & 0x10) != 0 )
                *(_BYTE *)(v56 + 195) &= ~0x10u;
            }
            v73 = MiGetSharedVm(v56);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v73, retaddr);
            else
              *v73 = 0;
            __writecr8(CurrentIrql);
            return v70;
          }
LABEL_332:
          MiPreUnlockWorkingSetExclusive(v56, CurrentIrql);
          SharedVm = MiGetSharedVm(v56);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          {
LABEL_333:
            *SharedVm = 0;
            __writecr8(CurrentIrql);
            return 0LL;
          }
LABEL_168:
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SharedVm, retaddr);
          __writecr8(CurrentIrql);
          return 0LL;
        }
        PrototypePteDirect = MiGetPrototypePteDirect(v64, 0LL, v65, v66);
        if ( (v30 & 2) != 0 && (unsigned int)MiIsPrototypePteVadLookup(v64) )
        {
          v74 = MiCheckVirtualAddress(a2, &v119, v123);
          v75 = a3 & 1;
          PrototypePteDirect = v74;
          if ( !v74 )
          {
            if ( (a3 & 1) != 0 )
            {
              if ( ((*(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
                goto LABEL_210;
            }
            else if ( !KeInvalidAccessAllowed(a3) )
            {
LABEL_210:
              v76 = *(_BYTE *)(v56 + 195);
              if ( (v76 & 0x10) == 0 )
              {
                if ( (v76 & 8) != 0 )
                {
                  *(_BYTE *)(v56 + 195) = v76 & 0xE7 | 0x10;
                  if ( ((MiForcedTrim(v56, CurrentIrql) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
                    && (*(_BYTE *)(v56 + 192) & 0x40) != 0 )
                  {
                    v77 = *(_QWORD *)(v56 + 120);
                    v78 = *(_QWORD *)(v56 + 152);
                    if ( v77 > v78 )
                    {
                      if ( (*(_DWORD *)(v56 + 4) & 0xF) != 0 )
                      {
                        v79 = *(_QWORD *)(v56 + 136);
                        v80 = v77 - 1;
                        for ( i = 7; v79 > v80; --i )
                        {
                          v82 = v79 - v80;
                          if ( i )
                          {
                            v83 = v82;
                            v84 = *(_QWORD *)(v56 + 8LL * i + 40) <= v82;
                            v82 = *(_QWORD *)(v56 + 8LL * i + 40);
                            if ( !v84 )
                              v82 = v83;
                          }
                          if ( v82 )
                          {
                            MiTrimWorkingSet(v56, v82, CurrentIrql, i, 0);
                            if ( !i )
                              break;
                          }
                          v79 = *(_QWORD *)(v56 + 136);
                        }
                        MiSimpleAging(v56, CurrentIrql);
                      }
                      else
                      {
                        MiReduceWs(v56, CurrentIrql, v78);
                      }
                    }
                  }
                }
                if ( (*(_BYTE *)(v56 + 195) & 4) != 0 )
                {
                  *(_BYTE *)(v56 + 195) = *(_BYTE *)(v56 + 195) & 0xEB | 0x10;
                  MiAgeWorkingSet(
                    v56,
                    CurrentIrql,
                    1LL,
                    *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8
                                                                + 8LL * *(unsigned __int16 *)(v56 + 172))
                                                    + 5544LL)
                                        + 2354LL));
                }
                if ( (*(_BYTE *)(v56 + 195) & 0x20) != 0 )
                {
                  *(_BYTE *)(v56 + 195) = *(_BYTE *)(v56 + 195) & 0xCF | 0x10;
                  MiReduceWs(v56, CurrentIrql, *(_QWORD *)(v56 + 152));
                }
                if ( (*(_BYTE *)(v56 + 195) & 0x10) != 0 )
                  *(_BYTE *)(v56 + 195) &= ~0x10u;
              }
              v85 = MiGetSharedVm(v56);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v85, retaddr);
              else
                *v85 = 0;
              __writecr8(CurrentIrql);
              return 3489660934LL;
            }
            goto LABEL_265;
          }
        }
        else
        {
          v75 = a3 & 1;
        }
LABEL_255:
        if ( (a1 & 2) == 0 || PrototypePteDirect || (v30 & 2) != 0 || (v119 = (v64 >> 5) & 0x1F, ((v64 >> 5) & 4) != 0) )
        {
          v87 = v122;
          *v122 = v56;
          *((_BYTE *)v87 + 16) = CurrentIrql;
          v87[1] = PrototypePteDirect;
          return 3221225494LL;
        }
        if ( v75 )
        {
          if ( ((*(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
            goto LABEL_352;
        }
        else if ( !KeInvalidAccessAllowed(a3) )
        {
LABEL_352:
          KeBugCheckEx(0xBEu, a2, v64, a3, 0xEuLL);
        }
LABEL_265:
        v88 = *(_BYTE *)(v56 + 195);
        if ( (v88 & 0x10) == 0 )
        {
          v89 = 7;
          if ( (v88 & 8) != 0 )
          {
            v90 = -1LL;
            *(_BYTE *)(v56 + 195) = v88 & 0xE7 | 0x10;
            v91 = *(_QWORD **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v56 + 172));
            v92 = v91[693];
            v129 = 0LL;
            AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v91, 6LL);
            v94 = *(_QWORD *)(v92 + 2408);
            v95 = AvailablePagesBelowPriority;
            if ( AvailablePagesBelowPriority < v94 )
            {
              v96 = v94 - AvailablePagesBelowPriority;
              if ( v96 < 0x10 )
                v96 = 16LL;
              MiInitializeTrimCriteria((__int64)&v124, (__int64)v91, v96, 4);
              v97 = v129;
              v128 = v96 - v129;
              if ( v96 != v129 )
              {
                if ( (v124 & 0x7F) != 0 )
                {
                  v126 = 0;
                  v125 = MiTrimPassToAge[v124 & 0x7F];
                  v100 = MiComputeTrimAmount(&v124, v56, 1LL);
                  v97 = v129;
                  v99 = v100;
                  v98 = v125;
                }
                else
                {
                  v98 = 6;
                  v99 = *(_QWORD *)(v56 + 88) + *(_QWORD *)(v56 + 96);
                  v125 = 6;
                }
                if ( v99 && v97 < v127 && (v98 >= 2u || v91[720] < 0xA0uLL) && v95 < v91[605] >> 1 )
                {
                  if ( v99 > v127 - v97 )
                    v99 = v127 - v97;
                  v101 = MiTrimWorkingSet(v56, v99, CurrentIrql, v98, 9);
                  v129 += v101;
                  v90 = v101;
                }
              }
            }
            if ( (*(_DWORD *)(v56 + 4) & 0x3FFF) == 0 )
              MiAgeWorkingSet(
                v56,
                CurrentIrql,
                1LL,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v56 + 172))
                                                + 5544LL)
                                    + 2354LL));
            if ( ((v90 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (*(_BYTE *)(v56 + 192) & 0x40) != 0 )
            {
              v102 = *(_QWORD *)(v56 + 120);
              v103 = *(_QWORD *)(v56 + 152);
              if ( v102 > v103 )
              {
                v104 = 7;
                v105 = *(_QWORD *)(v56 + 136);
                if ( (*(_DWORD *)(v56 + 4) & 0xF) != 0 )
                {
                  for ( j = v102 - 1; v105 > j; --v104 )
                  {
                    v107 = v105 - j;
                    if ( v104 )
                    {
                      v108 = v107;
                      v84 = *(_QWORD *)(v56 + 8LL * v104 + 40) <= v107;
                      v107 = *(_QWORD *)(v56 + 8LL * v104 + 40);
                      if ( !v84 )
                        v107 = v108;
                    }
                    if ( v107 )
                    {
                      MiTrimWorkingSet(v56, v107, CurrentIrql, v104, 0);
                      if ( !v104 )
                        break;
                    }
                    v105 = *(_QWORD *)(v56 + 136);
                  }
                }
                else
                {
                  for ( ; v105 > v103; --v104 )
                  {
                    v109 = v105 - v103;
                    if ( v104 )
                    {
                      v110 = v109;
                      v84 = *(_QWORD *)(v56 + 8LL * v104 + 40) <= v109;
                      v109 = *(_QWORD *)(v56 + 8LL * v104 + 40);
                      if ( !v84 )
                        v109 = v110;
                    }
                    if ( v109 )
                    {
                      MiTrimWorkingSet(v56, v109, CurrentIrql, v104, 0);
                      if ( !v104 )
                        break;
                    }
                    v105 = *(_QWORD *)(v56 + 136);
                  }
                }
                MiSimpleAging(v56, CurrentIrql);
              }
            }
          }
          if ( (*(_BYTE *)(v56 + 195) & 4) != 0 )
          {
            *(_BYTE *)(v56 + 195) = *(_BYTE *)(v56 + 195) & 0xEB | 0x10;
            MiAgeWorkingSet(
              v56,
              CurrentIrql,
              1LL,
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v56 + 172))
                                              + 5544LL)
                                  + 2354LL));
          }
          if ( (*(_BYTE *)(v56 + 195) & 0x20) != 0 )
          {
            *(_BYTE *)(v56 + 195) = *(_BYTE *)(v56 + 195) & 0xCF | 0x10;
            v111 = *(_QWORD *)(v56 + 152);
            for ( k = *(_QWORD *)(v56 + 136); k > v111; --v89 )
            {
              v113 = k - v111;
              if ( v89 )
              {
                v114 = v113;
                v84 = *(_QWORD *)(v56 + 8LL * v89 + 40) <= v113;
                v113 = *(_QWORD *)(v56 + 8LL * v89 + 40);
                if ( !v84 )
                  v113 = v114;
              }
              if ( v113 )
              {
                MiTrimWorkingSet(v56, v113, CurrentIrql, v89, 0);
                if ( !v89 )
                  break;
              }
              k = *(_QWORD *)(v56 + 136);
            }
            MiSimpleAging(v56, CurrentIrql);
          }
          if ( (*(_BYTE *)(v56 + 195) & 0x10) != 0 )
            *(_BYTE *)(v56 + 195) &= ~0x10u;
        }
        v115 = MiGetSharedVm(v56);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v115, retaddr);
        else
          *v115 = 0;
        v116 = CurrentIrql;
LABEL_321:
        __writecr8(v116);
        return 3221225477LL;
      }
      if ( (v64 & 0x800) == 0 && (v64 & 0x3E0) == 0 )
      {
        if ( (a3 & 1) != 0 )
        {
          if ( ((*(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0 )
            goto LABEL_265;
        }
        else if ( KeInvalidAccessAllowed(a3) )
        {
          goto LABEL_265;
        }
        KeBugCheckEx(0x50u, a2, a1, a3, 0LL);
      }
      v75 = a3 & 1;
      v86 = (v64 >> 5) & 0x1F;
      if ( v86 != 24 )
      {
        if ( v86 != 31 )
          goto LABEL_255;
        if ( (a3 & 1) == 0 )
          goto LABEL_249;
        if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
          goto LABEL_255;
      }
      if ( (a3 & 1) != 0 )
      {
        if ( ((*(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
LABEL_353:
          KeBugCheckEx(0x50u, a2, a1, a3, 1uLL);
LABEL_250:
        if ( (v64 & 0x3E0) == 0x300 || !v75 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          goto LABEL_265;
        goto LABEL_255;
      }
LABEL_249:
      if ( !KeInvalidAccessAllowed(a3) )
        goto LABEL_353;
      goto LABEL_250;
    }
LABEL_165:
    if ( v30 >= 0x40 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    MiPreUnlockWorkingSetExclusive(v50, CurrentIrql);
    SharedVm = MiGetSharedVm((__int64)v50);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      goto LABEL_168;
    *SharedVm = 0;
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( (v30 & 1) != 0 )
  {
    AnyMultiplexedVm = (__int64)&CurrentThread->ApcState.Process[1].IdealNode[12];
  }
  else if ( (v30 & 2) != 0 )
  {
    v32 = CurrentThread->ApcState.Process;
    if ( !v32[1].ActiveProcessors.Bitmap[2] || v32 == PsInitialSystemProcess )
    {
      v33 = -805306362;
      if ( v30 >= 0x20 )
        return (unsigned int)-1073741819;
      return v33;
    }
    AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
  }
  else
  {
    if ( (v30 & 8) != 0 )
    {
      v34 = 0LL;
    }
    else
    {
      v34 = 2LL;
      if ( (v30 & 4) == 0 )
        v34 = 1LL;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v34);
  }
  v35 = MiGetSharedVm(AnyMultiplexedVm);
  v36 = ExAcquireSpinLockExclusive(v35);
  v35[1] = 0;
  v37 = v30;
  if ( (v30 & 1) == 0 && v117 != 17 )
  {
    v37 = v30 | 0x40;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C59C);
  }
  v38 = MiRecheckVaWorkingSet(AnyMultiplexedVm, a4);
  v39 = v38;
  if ( v38 && ((*(_BYTE *)(AnyMultiplexedVm + 192) ^ *(_BYTE *)(v38 + 192)) & 7) == 0 )
  {
    v40 = v120;
    while ( 1 )
    {
      v41 = MI_READ_PTE_LOCK_FREE(*v40);
      if ( (v41 & 1) == 0 )
        goto LABEL_108;
      if ( (v41 & 0x80u) != 0LL )
        break;
      v40 = (_QWORD *)(v43 + 8);
      if ( (unsigned int)(v42 + 1) >= 3 )
      {
        v44 = MI_READ_PTE_LOCK_FREE(v121);
        if ( v37 >= 0x40 )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
          LOBYTE(v37) = v37 & 0xBF;
          v46 = 0;
        }
        if ( (v44 & 1) != 0 )
        {
          if ( (v37 & 0x20) == 0 && (v44 & 0x80u) != 0LL && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
            KeBugCheckEx(0x50u, a2, a1, a3, 8uLL);
          if ( (a1 & 2) != 0 )
          {
            if ( (v44 & 0x800) == 0 )
            {
              if ( (v44 & 0x200) == 0 )
                KeBugCheckEx(0xBEu, a2, v44, a3, 0xBuLL);
              MiCopyOnWriteEx(a2, v46);
              MiPreUnlockWorkingSetExclusive(v39, v36);
              v47 = v39;
              goto LABEL_114;
            }
          }
          else
          {
            MiCheckSystemNxFault(a1, a2, a3, v44, 2u);
          }
          MiNoFaultFound(a1, v121, a2, v45, v39, 1u, ZeroPte);
          MiPreUnlockWorkingSetExclusive(v39, v36);
          v47 = v39;
          goto LABEL_114;
        }
LABEL_110:
        MiPreUnlockWorkingSetExclusive(v39, v36);
        v47 = v39;
        goto LABEL_114;
      }
    }
    if ( (a1 & 2) != 0 && (v41 & 0x800) == 0 )
      KeBugCheckEx(0xBEu, a2, v41, a3, 0xDuLL);
    MiCheckSystemNxFault(a1, a2, a3, v41, 1u);
    if ( (v37 & 0x20) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, a2, a1, a3, 8uLL);
LABEL_108:
    if ( v37 >= 0x40 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    goto LABEL_110;
  }
  if ( v37 >= 0x40 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
  MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v36);
  v47 = AnyMultiplexedVm;
LABEL_114:
  v48 = MiGetSharedVm(v47);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v48, retaddr);
  else
    *v48 = 0;
  __writecr8(v36);
  return 0LL;
}
