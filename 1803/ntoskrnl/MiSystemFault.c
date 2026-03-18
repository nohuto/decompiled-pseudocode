/*
 * XREFs of MiSystemFault @ 0x140022C40
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiCheckVirtualAddress @ 0x14003E120 (MiCheckVirtualAddress.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiNoFaultFound @ 0x1400B53AC (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1400B545C (MiCheckSystemNxFault.c)
 *     KeInvalidAccessAllowed @ 0x1400B54F4 (KeInvalidAccessAllowed.c)
 *     MiIsWorkingSetTrimThread @ 0x1400C7D38 (MiIsWorkingSetTrimThread.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiUpdatePfnPriorityByPte @ 0x140128510 (MiUpdatePfnPriorityByPte.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiGenerateAccessViolation @ 0x140261A7C (MiGenerateAccessViolation.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiTransientPageListWriter @ 0x14026CCC0 (MiTransientPageListWriter.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemFault(__int64 a1)
{
  ULONG_PTR v3; // rdx
  unsigned __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // r15
  int v6; // eax
  __int64 PrototypePteDirect; // rsi
  ULONG_PTR v8; // r12
  KIRQL v9; // al
  _QWORD *v10; // r14
  KIRQL v11; // r13
  unsigned __int64 v12; // rcx
  ULONG_PTR v13; // r14
  _BYTE *v14; // rax
  __int16 v15; // ax
  void *v16; // rax
  char v17; // r13
  __int64 v18; // r12
  int v19; // edx
  int v20; // eax
  char *AnyMultiplexedVm; // r13
  unsigned __int64 v22; // r13
  _BYTE *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r11
  unsigned __int8 v26; // al
  unsigned __int8 CurrentIrql; // r15
  LONG *v28; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v31; // eax
  signed __int32 v32; // ett
  unsigned __int64 v33; // r15
  int v34; // eax
  unsigned __int64 Process; // rcx
  ULONG_PTR v36; // r8
  ULONG_PTR v37; // r14
  __int64 v38; // rdx
  unsigned __int64 v39; // r14
  __int64 valid; // rax
  __int64 v41; // r10
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 SystemCacheReverseMap; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r9
  ULONG_PTR **v49; // r8
  unsigned __int64 v50; // r11
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // rdx
  ULONG_PTR v53; // rbx
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // xmm1_8
  unsigned __int64 v57; // r14
  ULONG_PTR v58; // rbx
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  ULONG_PTR v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  int v65; // ebx
  ULONG_PTR v66; // r9
  __int64 v67; // rax
  __int64 v68; // xmm1_8
  char v69; // r14
  __int64 v70; // r10
  _BYTE *v71; // rax
  _BYTE *v72; // rax
  __int64 v73; // r14
  __int64 v74; // rax
  _BYTE *v75; // rax
  __int64 v76; // rax
  _BYTE *v77; // rax
  __int64 v78; // rbx
  ULONG_PTR v79; // r9
  _BYTE *v80; // rax
  ULONG_PTR v81; // rdx
  char v82; // [rsp+30h] [rbp-D0h]
  char v83; // [rsp+31h] [rbp-CFh]
  ULONG_PTR v84; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+40h] [rbp-C0h] BYREF
  char v86[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v87; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v88; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v89; // [rsp+60h] [rbp-A0h]
  __int64 v90; // [rsp+68h] [rbp-98h]
  char v91[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v92[16]; // [rsp+80h] [rbp-80h] BYREF

  if ( *(_BYTE *)(a1 + 80) == 1 )
    return 3221225477LL;
  v3 = *(_QWORD *)a1;
  for ( i = *(_QWORD *)a1; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL && i >= qword_1403CD100 && i <= qword_1403CBB70 )
    *(_QWORD *)(a1 + 8) |= 2uLL;
  v82 = 0;
  if ( (*(_QWORD *)(a1 + 8) & 0x100000000000000LL) != 0 )
  {
    if ( v3 < 0xFFFFF68000000000uLL
      || v3 > 0xFFFFF6FFFFFFFFFFuLL
      || i > 0x7FFFFFFEFFFFLL && (i < qword_1403CD100 || i > qword_1403CBB70) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( i < 0xFFFF800000000000uLL || i >= qword_1403CBB68 && i < qword_1403CBB68 + 276840448 )
    return 192LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v6 & 0x400) != 0
    || (v6 & 0x100) != 0
    && (unsigned int)MiTransientPageListWriter(CurrentThread, v3, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL) == 1 )
  {
    return 3221225477LL;
  }
  PrototypePteDirect = 0LL;
  v8 = *(_QWORD *)a1;
  if ( dword_1403CBD04 )
  {
    v9 = ExAcquireSpinLockShared(&dword_1403CBD00);
    v10 = (_QWORD *)qword_1403CBD08;
    v11 = v9;
    if ( qword_1403CBD08 )
    {
      do
      {
        v12 = v10[3];
        if ( (unsigned __int64)CurrentThread > v12 )
        {
          v10 = (_QWORD *)v10[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v12 )
            break;
          v10 = (_QWORD *)*v10;
        }
      }
      while ( v10 );
      if ( v10 && v10[5] != ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v10 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CBD00);
    __writecr8(v11);
    if ( v10 )
      return 3221225477LL;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v13 & 1) != 0 )
  {
    if ( *v14 != 1 && *v14 != 3 )
      goto LABEL_47;
LABEL_46:
    v17 = 1;
    goto LABEL_48;
  }
  if ( v13 )
  {
    v15 = *(_WORD *)(v13 + 368);
    if ( v15 == 16 )
    {
      v16 = &ExpInterlockedPopEntrySListFault;
    }
    else
    {
      if ( v15 != 51 )
        goto LABEL_47;
      v16 = (void *)KeUserPopEntrySListFault;
    }
    if ( *(void **)(v13 + 360) == v16 )
      goto LABEL_46;
  }
LABEL_47:
  v17 = 0;
LABEL_48:
  v83 = v17;
  memset(v92, 0, sizeof(v92));
  HIDWORD(v92[0]) = 1;
  v18 = 3LL;
  v19 = (unsigned __int8)byte_1403CCF90[((i >> 39) & 0x1FF) - 256];
  if ( (*(_DWORD *)(a1 + 84) & 0x10) != 0 )
  {
    if ( (unsigned int)(v19 - 6) > 1 )
      return 3221225477LL;
  }
  else if ( (v13 & 1) == 0 || *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    v20 = HIDWORD(v92[0]);
    if ( !v17 )
      v20 = 3;
    HIDWORD(v92[0]) = v20;
  }
  if ( v19 == 8 )
  {
    AnyMultiplexedVm = (char *)&unk_1403CFB40;
    goto LABEL_77;
  }
  if ( v19 != 1 )
  {
    if ( (unsigned int)(v19 - 6) <= 1 )
    {
      AnyMultiplexedVm = (char *)&unk_1403CC8E0;
      goto LABEL_77;
    }
    switch ( v19 )
    {
      case 3:
      case 12:
        AnyMultiplexedVm = (char *)&unk_1403CC7D0;
        goto LABEL_77;
      case 15:
        v23 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v13 & 1) != 0 && (*v23 == 1 || *v23 == 4) )
        {
          v24 = 4LL;
LABEL_72:
          AnyMultiplexedVm = (char *)MiGetAnyMultiplexedVm(v24);
          goto LABEL_77;
        }
        break;
      case 9:
        v24 = 3LL;
        goto LABEL_72;
    }
    if ( (v92[0] & 0x200000000LL) != 0 )
      KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), v13, 0xCuLL);
    return 3221225477LL;
  }
  v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( !v22 || (AnyMultiplexedVm = (char *)(v22 + 3008)) == 0LL )
  {
LABEL_120:
    if ( (v92[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 2uLL);
    return 3221225477LL;
  }
  v82 = 1;
LABEL_77:
  v25 = *(_QWORD *)a1;
  v84 = *(_QWORD *)a1;
  if ( !(_BYTE)v19 )
    goto LABEL_120;
  v26 = AnyMultiplexedVm[184] & 7;
  LODWORD(v92[2]) = 0;
  BYTE1(v92[4]) = 0;
  v92[3] = AnyMultiplexedVm;
  if ( v26 < 6u )
  {
    v28 = &dword_1403CCD40;
    if ( v26 != 2 )
      v28 = (LONG *)(AnyMultiplexedVm + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v28, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v31 = SchedulerAssist[5];
          SchedulerAssist[5] = v31 + 1;
          if ( v31 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v28);
      v32 = *v28 & 0x7FFFFFFF;
      if ( v32 == _InterlockedCompareExchange(v28, v32 + 1, v32) )
        goto LABEL_93;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      ExpWaitForSpinLockSharedAndAcquire(v28, CurrentIrql);
    }
    v25 = v84;
LABEL_93:
    if ( v28[1] )
      _InterlockedExchange(v28 + 1, 0);
    goto LABEL_95;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
LABEL_95:
  LOBYTE(v92[4]) = CurrentIrql;
  v85 = 0LL;
  v33 = 0LL;
  v34 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v25);
  v36 = v84;
  v37 = v84 >> 9;
  if ( v34 )
  {
    v87 = (v37 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v88 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v89 = ((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v90 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v38 = *(&v87 + v34);
    Process = v34 - 1;
    v33 = *(&v87 + Process);
    v85 = v33;
  }
  else
  {
    v38 = 0LL;
  }
  v39 = (v37 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v38 )
  {
    valid = MiLockLowestValidPageTable(AnyMultiplexedVm, v39, &v85);
    v36 = v84;
    v38 = valid;
    v33 = v85;
  }
  v92[5] = v38;
  if ( v33 == v39 )
  {
    if ( (AnyMultiplexedVm[184] & 7) == 2 )
    {
      if ( LODWORD(v92[6]) == 3 )
      {
        v43 = MiGetAnyMultiplexedVm(0LL);
      }
      else
      {
        SystemCacheReverseMap = MiGetSystemCacheReverseMap(v36, v38);
        if ( !SystemCacheReverseMap || !*(_QWORD *)(SystemCacheReverseMap + 16) )
          goto LABEL_119;
        v46 = *(_QWORD *)(MiGetSystemCacheReverseMap(v84, v45) + 24);
        v47 = v46 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v46 & 1) == 0 )
          v47 = v46;
        Process = *(_WORD *)(*(_QWORD *)v47 + 60LL) & 0x3FF;
        v43 = *(_QWORD *)(qword_1403CBD88 + 8 * Process) + 7168LL;
      }
      v92[3] = v43;
    }
  }
  else
  {
    if ( (v92[0] & 0x400000000LL) == 0 || (MI_READ_PTE_LOCK_FREE(v33) & 0x81) != 0x81 )
      goto LABEL_119;
    LODWORD(Process) = 0;
    do
    {
      v39 = v41 + (v42 & (v39 >> 9));
      Process = (unsigned int)(Process + 1);
    }
    while ( v39 != v33 );
    LODWORD(v92[2]) = Process;
  }
  v48 = BYTE4(v92[0]) & 2;
  if ( (v92[0] & 0x200000000LL) == 0
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
    && !(unsigned int)MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(i) == 1 )
  {
LABEL_119:
    MiUnlockSystemVa(v92);
    goto LABEL_120;
  }
  v49 = (ULONG_PTR **)(a1 + 48);
  v50 = 0xFFFFF6FB7DBED000uLL;
  v51 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v52 = (unsigned __int64)*v49;
    v53 = **v49;
    if ( (unsigned __int64)*v49 >= v50 && v52 <= v51 && (unsigned int)MiPteHasShadow(Process, v52, v49, v48) )
    {
      if ( (v53 & 1) == 0 )
        goto LABEL_259;
      if ( (v53 & 0x20) == 0 || (v53 & 0x42) == 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v54 = *(_QWORD *)(Process + 1544);
        if ( v54 )
        {
          v55 = *(_QWORD *)(v54 + 8 * ((v52 >> 3) & 0x1FF));
          v52 = v53 | 0x20;
          Process = (unsigned __int8)v55;
          LOBYTE(Process) = v55 & 0x20;
          if ( (v55 & 0x20) == 0 )
            v52 = v53;
          v53 = v52;
          if ( (v55 & 0x42) != 0 )
            v53 = v52 | 0x42;
        }
      }
    }
    if ( (v53 & 1) == 0 )
LABEL_259:
      KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0xDuLL);
    if ( (v53 & 0x80u) != 0LL )
    {
      if ( (*(_BYTE *)(a1 + 8) & 2) != 0 && (v53 & 0x800) == 0 )
      {
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0xBEu, *(_QWORD *)a1, v53, *(_QWORD *)(a1 + 16), 0x10uLL);
        goto LABEL_119;
      }
      MiCheckSystemNxFault(a1, v53, 6LL);
      v79 = *(_QWORD *)(a1 + 16);
      v80 = (_BYTE *)(v79 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (v79 & 1) != 0 )
      {
        if ( *v80 != 1 && *v80 != 3 )
        {
LABEL_245:
          v81 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v81 <= 0xFFFFF6FFFFFFFFFFuLL )
            KeBugCheckEx(0x50u, v81, *(_QWORD *)(a1 + 8), v79, 8uLL);
        }
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16)) != 1 )
      {
        goto LABEL_245;
      }
      MiUnlockSystemVa(v92);
      return 0LL;
    }
    --v49;
    --v18;
  }
  while ( v18 );
  v56 = v92[5];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v92[3];
  *(_QWORD *)(a1 + 72) = v56;
  v57 = *(_QWORD *)(a1 + 24);
  v58 = *(_QWORD *)v57;
  if ( v57 < v50 || v57 > v51 || !(unsigned int)MiPteHasShadow(Process, v52, v49, v48) )
    goto LABEL_149;
  if ( (v58 & 1) == 0 )
    goto LABEL_170;
  if ( (v58 & 0x20) == 0 || (v58 & 0x42) == 0 )
  {
    v59 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v59 )
    {
      v60 = *(_QWORD *)(v59 + 8 * ((v57 >> 3) & 0x1FF));
      v61 = v58 | 0x20;
      if ( (v60 & 0x20) == 0 )
        v61 = v58;
      v58 = v61;
      if ( (v60 & 0x42) != 0 )
        v58 = v61 | 0x42;
    }
  }
LABEL_149:
  if ( (v58 & 1) == 0 )
  {
LABEL_170:
    if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && *(_QWORD *)a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v83 )
        goto LABEL_228;
      v66 = *(_QWORD *)(a1 + 16);
      if ( (v66 & 1) == 0 || *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), v66, 9uLL);
      goto LABEL_229;
    }
    if ( (v58 & 0x400) != 0 )
    {
      if ( (v58 & 2) != 0 )
      {
        v67 = *(_QWORD *)(a1 + 16);
        if ( (v67 & 1) == 0 || *(_BYTE *)(v67 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          LODWORD(PrototypePteDirect) = MiResolveDemandZeroFault((unsigned __int64 *)a1, v57, 0LL, 0);
          v68 = *(_QWORD *)(a1 + 72);
          *(_OWORD *)&v92[3] = *(_OWORD *)(a1 + 56);
          v92[5] = v68;
        }
        goto LABEL_229;
      }
      v69 = v82;
      PrototypePteDirect = MiGetPrototypePteDirect(v58);
      if ( v82 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(v58) )
        {
          PrototypePteDirect = MiCheckVirtualAddress(v70, v86, v91);
          if ( !PrototypePteDirect )
          {
            v71 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
            if ( (*(_QWORD *)(a1 + 16) & 1LL) != 0 )
            {
              if ( *v71 == 1 || *v71 == 3 )
                goto LABEL_228;
            }
            else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16)) == 1 )
            {
              goto LABEL_228;
            }
            if ( (unsigned int)MiGenerateAccessViolation(a1) )
              goto LABEL_228;
            MiUnlockSystemVa(v92);
            return 3489660934LL;
          }
        }
      }
      goto LABEL_215;
    }
    if ( (v58 & 0x800) == 0 && ((v58 >> 5) & 0x1F) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 84) & 0x10) != 0 )
        goto LABEL_228;
      v72 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (*(_QWORD *)(a1 + 16) & 1LL) != 0 )
      {
        if ( *v72 == 1 || *v72 == 3 )
          goto LABEL_228;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16)) == 1 )
      {
        goto LABEL_228;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0LL);
      goto LABEL_228;
    }
    v73 = (v58 >> 5) & 0x1F;
    if ( v73 != 24 )
    {
      if ( v73 != 31 || (v74 = *(_QWORD *)(a1 + 16), (v74 & 1) != 0) && *(_BYTE *)(v74 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
LABEL_214:
        v69 = v82;
LABEL_215:
        if ( (*(_BYTE *)(a1 + 8) & 2) == 0 || PrototypePteDirect || v69 || ((v58 >> 5) & 4) != 0 )
        {
          *(_QWORD *)(a1 + 96) = PrototypePteDirect;
          return 3221225494LL;
        }
        if ( (*(_DWORD *)(a1 + 84) & 0x10) != 0 )
          goto LABEL_228;
        v77 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (*(_QWORD *)(a1 + 16) & 1LL) != 0 )
        {
          if ( *v77 == 1 || *v77 == 3 )
            goto LABEL_228;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16)) == 1 )
        {
          goto LABEL_228;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0xBEu, *(_QWORD *)a1, v58, *(_QWORD *)(a1 + 16), 0xEuLL);
LABEL_228:
        LODWORD(PrototypePteDirect) = -1073741819;
        goto LABEL_229;
      }
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      v75 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (*(_QWORD *)(a1 + 16) & 1LL) != 0 )
      {
        if ( *v75 == 1 || *v75 == 3 )
          goto LABEL_211;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16)) == 1 )
      {
        goto LABEL_211;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 1uLL);
    }
LABEL_211:
    if ( v73 == 24 )
      goto LABEL_228;
    v76 = *(_QWORD *)(a1 + 16);
    if ( (v76 & 1) == 0 || *(_BYTE *)(v76 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      goto LABEL_228;
    goto LABEL_214;
  }
  if ( (v58 & 0x80u) != 0LL )
  {
    v62 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v62 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( (_DWORD)v48 )
        KeBugCheckEx(0x50u, v62, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 8uLL);
      goto LABEL_228;
    }
  }
  v63 = *(_QWORD *)(a1 + 16);
  if ( (v63 & 1) != 0 )
  {
    v64 = v63 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v64 == 1 )
    {
      MiUpdatePfnPriorityByPte(v57, *(_DWORD *)(v64 + 80) & 7, v49);
      goto LABEL_229;
    }
  }
  if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
  {
    if ( (v58 & 0x800) == 0 )
    {
      if ( (v58 & 0x200) == 0 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
      {
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0xBEu, *(_QWORD *)a1, v58, *(_QWORD *)(a1 + 16), 0xBuLL);
        goto LABEL_228;
      }
      v65 = MiCopyOnWrite(*(_QWORD *)a1);
      MiUnlockSystemVa(v92);
      if ( v65 < 0 )
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v65);
      return 0LL;
    }
  }
  else
  {
    MiCheckSystemNxFault(a1, v58, 2LL);
  }
  MiNoFaultFound(a1, v57, *(_QWORD *)a1, v48, 1);
LABEL_229:
  v78 = v92[3];
  if ( v92[3] )
  {
    if ( v92[5] )
      MiUnlockPageTableInternal(v92[3], v92[5]);
    if ( BYTE1(v92[4]) )
    {
      MiUnlockWorkingSetExclusive(v78, LOBYTE(v92[4]));
      return (unsigned int)PrototypePteDirect;
    }
    MiUnlockWorkingSetShared(v78, v92[4], (__int64)v49);
  }
  return (unsigned int)PrototypePteDirect;
}
