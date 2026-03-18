/*
 * XREFs of MiDecommitPages @ 0x14000C050
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x1400CFD8C (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x1404AE180 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405749A8 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400B8750 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1400BB318 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402AF2A8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecommitPages(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  _QWORD *v6; // r14
  __int64 DemandZeroPte; // rdi
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  ULONG_PTR v12; // r11
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r15
  unsigned __int64 SchedulerAssist; // rcx
  __int64 v17; // rdx
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // r12
  int v20; // r8d
  unsigned __int8 v21; // al
  LONG *v22; // rbx
  unsigned __int8 v23; // si
  struct _KPRCB *CurrentPrcb; // r10
  int v25; // eax
  signed __int32 v26; // eax
  unsigned __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned __int16 *AnyMultiplexedVm; // rbx
  int v32; // eax
  unsigned __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r11
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r10
  __int64 v39; // rax
  __int64 UsedPtesHandle; // rax
  __int64 v41; // rcx
  BOOL v42; // r15d
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r12d
  unsigned __int8 WsleContents; // si
  char v52; // r8
  __int64 v53; // rsi
  unsigned __int64 v54; // r14
  unsigned int v55; // r9d
  char v56; // r8
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r10
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  bool v69; // zf
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // r8
  __int64 v72; // rax
  unsigned __int64 Process; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  unsigned __int64 *v78; // r11
  __int64 v79; // r10
  unsigned __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int8 v83; // al
  char v84; // cl
  int v85; // edx
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // eax
  __int64 v96; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v98; // rdx
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rsi
  BOOL v104; // r12d
  unsigned __int64 v105; // rcx
  __int64 v106; // rcx
  unsigned __int16 v107; // r14
  __int64 v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // rdx
  unsigned int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rbx
  LONG *v116; // rax
  int v117; // r8d
  unsigned int v118; // esi
  unsigned int v119; // r14d
  unsigned int v120; // ebx
  __int16 v121; // ax
  __int64 v122; // r8
  int v123; // r14d
  __int64 v124; // r9
  __int64 v125; // r10
  int v126; // r11d
  unsigned int PageFileReservationOffset; // eax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rax
  struct _LIST_ENTRY *v131; // rax
  unsigned __int64 v133; // [rsp+30h] [rbp-D0h]
  __int64 v134; // [rsp+38h] [rbp-C8h]
  int v135; // [rsp+40h] [rbp-C0h]
  __int64 v137; // [rsp+58h] [rbp-A8h]
  int v138; // [rsp+60h] [rbp-A0h]
  __int64 v139; // [rsp+68h] [rbp-98h]
  unsigned __int8 CurrentIrql; // [rsp+78h] [rbp-88h]
  int v142; // [rsp+80h] [rbp-80h]
  unsigned __int64 v143; // [rsp+88h] [rbp-78h]
  unsigned __int64 v144; // [rsp+90h] [rbp-70h] BYREF
  __int64 v145; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v146; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v147; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v148; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v149; // [rsp+B8h] [rbp-48h]
  __int64 v150; // [rsp+C0h] [rbp-40h]
  __int64 v151; // [rsp+C8h] [rbp-38h]
  __int64 v152; // [rsp+D0h] [rbp-30h]
  _QWORD v153[22]; // [rsp+E0h] [rbp-20h] BYREF
  int v154; // [rsp+190h] [rbp+90h] BYREF
  __int16 v155; // [rsp+194h] [rbp+94h]
  __int64 v156; // [rsp+198h] [rbp+98h]
  __int64 v157; // [rsp+1A0h] [rbp+A0h]
  _QWORD Base[257]; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD v159[4]; // [rsp+9B0h] [rbp+8B0h] BYREF

  v6 = a6;
  v150 = a4;
  v156 = 256LL;
  v154 = 1;
  v155 = 0;
  v157 = 0LL;
  Base[0] = 0LL;
  v138 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(16LL);
  v13 = *(unsigned int *)(v10 + 52);
  LODWORD(v13) = v13 & 0x7FFFFFFF;
  if ( (v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    DemandZeroPte = MiMakeDemandZeroPte((*(_DWORD *)(v10 + 48) >> 3) & 0x1F);
LABEL_4:
    v143 = 8
         * ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) & 0xFFFFFFFFFLL)
         - 0x98000000000LL;
    goto LABEL_6;
  }
  if ( *(int *)(v10 + 52) < 0 )
    goto LABEL_4;
  v143 = v9;
  v138 = MiVadPureReserve(v10);
LABEL_6:
  v14 = 2;
  v137 = v9;
  if ( a5 != (_DWORD)v9 )
    v14 = v9;
  v142 = v14;
  v15 = v9;
  SchedulerAssist = *(unsigned __int16 *)(v11 + 1454);
  v17 = v11 + 1280;
  v18 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v134 = v11 + 1280;
  v19 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v20 = 1;
  v133 = v19;
  v135 = 1;
  v21 = *(_BYTE *)(v11 + 1464) & 7;
  v139 = *(_QWORD *)(qword_1403CBD88 + 8 * SchedulerAssist);
  if ( v21 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    goto LABEL_26;
  }
  v22 = &dword_1403CCD40;
  if ( v21 != 2 )
    v22 = (LONG *)(v11 + 1472);
  v23 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v22, v23);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v25 + 1;
        if ( v25 == -1 && !*(_BYTE *)(SchedulerAssist + 25) && !*(_BYTE *)(SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    _m_prefetchw(v22);
    v26 = *v22 & 0x7FFFFFFF;
    v17 = (unsigned int)(v26 + 1);
    if ( v26 == _InterlockedCompareExchange(v22, v17, v26) )
      goto LABEL_23;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    ExpWaitForSpinLockSharedAndAcquire(v22, v23);
  }
  v12 = a2;
LABEL_23:
  if ( v22[1] != (_DWORD)v15 )
    _InterlockedExchange(v22 + 1, 0);
  v11 = a3;
  v20 = 1;
  CurrentIrql = v23;
LABEL_26:
  if ( v18 > v12 )
    goto LABEL_274;
  while ( 1 )
  {
    v27 = 0xFFFFF6FB7DBED7F8uLL;
    v28 = v15;
    v29 = v15;
    if ( v20 == 1 || (v18 & 0xFFF) == 0 )
      break;
    v36 = 0LL;
    v35 = 0x7FFFFFFFF8LL;
LABEL_49:
    v37 = *(_QWORD *)v18;
    v152 = v15;
    v151 = v15;
    v38 = 0xFFFFF6FB7DBED000uLL;
    if ( v18 >= 0xFFFFF6FB7DBED000uLL
      && v18 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(SchedulerAssist, v17, 0x7FFFFFFFF8LL, 0xFFFFF6FB7DBED7F8uLL)
      && (v37 & 1) != 0
      && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
    {
      SchedulerAssist = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v17 = *(_QWORD *)(SchedulerAssist + 1544);
      if ( v17 )
      {
        v39 = *(_QWORD *)(v17 + 8 * ((v18 >> 3) & 0x1FF));
        v17 = v37 | 0x20;
        SchedulerAssist = (unsigned __int8)v39;
        LOBYTE(SchedulerAssist) = v39 & 0x20;
        if ( (v39 & 0x20) == 0 )
          v17 = v37;
        v37 = v17;
        if ( (v39 & 0x42) != 0 )
          v37 = v17 | 0x42;
      }
    }
    v146 = v37;
    if ( v37 )
    {
      if ( (v37 & 1) != 0 )
      {
        v42 = 1;
        v43 = (v35 & (v19 >> 9)) - 0x98000000000LL;
        v44 = *(_QWORD *)v43;
        if ( v43 >= v38
          && v43 <= v27
          && (unsigned int)MiPteHasShadow(SchedulerAssist, v17, v44, v27)
          && (v44 & 1) != 0
          && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
        {
          SchedulerAssist = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v45 = *(_QWORD *)(SchedulerAssist + 1544);
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 8 * ((v43 >> 3) & 0x1FF));
            v47 = v44 | 0x20;
            SchedulerAssist = (unsigned __int8)v46;
            LOBYTE(SchedulerAssist) = v46 & 0x20;
            if ( (v46 & 0x20) == 0 )
              v47 = v44;
            v44 = v47;
            if ( (v46 & 0x42) != 0 )
              v44 = v47 | 0x42;
          }
        }
        v48 = (v44 >> 12) & 0xFFFFFFFFFLL;
        v49 = 48 * v48 - 0x58000000000LL;
        if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v59 = *(_QWORD *)v43;
          v50 = 1;
          if ( v43 >= v38
            && v43 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(SchedulerAssist, v59, v48, v49)
            && (v59 & 1) != 0
            && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
          {
            v60 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v60 )
            {
              v61 = *(_QWORD *)(v60 + 8 * ((v43 >> 3) & 0x1FF));
              v62 = v59 | 0x20;
              if ( (v61 & 0x20) == 0 )
                v62 = v59;
              v59 = v62;
              if ( (v61 & 0x42) != 0 )
                v59 = v62 | 0x42;
            }
          }
          WsleContents = HIBYTE(v59) & 0xF | (16 * ((v59 >> 60) & 7));
          v42 = (*(_QWORD *)(v49 + 40) & 0x200000000000000LL) == 0;
          if ( (HIBYTE(v59) & 0xF) == 8 )
          {
            MiUnlockWsle(v134, v133, v49);
            WsleContents = MiGetWsleContents(v63, v133);
            v38 = 0xFFFFF6FB7DBED000uLL;
          }
          v64 = ZeroPte;
          v65 = *(_QWORD *)v43;
          v66 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v43 >= v38
            && v43 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v65, ZeroPte, 0xFFFFF6FB7DBED7F8uLL) )
          {
            LOBYTE(v65) = v65 | 0x20;
          }
          if ( (MiFlags & 0x800) != 0 )
          {
            LOBYTE(v65) = 32;
          }
          else if ( (MiFlags & 0x4000000) != 0 )
          {
            _mm_lfence();
          }
          if ( (v65 & 0x20) != 0 )
          {
            *(_QWORD *)v43 = v64;
            if ( v43 >= v38 && v43 <= v66 )
              MiWritePteShadow(v43, v64);
          }
          else
          {
            MI_INTERLOCKED_EXCHANGE_PTE(v43, v64);
          }
        }
        else
        {
          v50 = v36;
          WsleContents = (*(_BYTE *)v49 >> 1) & 7;
          if ( !(unsigned int)MiEvictPageTableLock(v134, v43, ZeroPte, 0LL) )
          {
            v19 = v133;
            goto LABEL_81;
          }
        }
        MiRemoveWsle(v134, v133, WsleContents, 10, v42);
        v69 = v50 == 0;
        v19 = v133;
        if ( !v69 )
        {
          v70 = ((v133 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v71 = *(_QWORD *)v70;
          if ( v70 >= 0xFFFFF6FB7DBED000uLL
            && v70 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v68, v67, v71, v70)
            && (v71 & 1) != 0
            && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
          {
            v67 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v67 )
            {
              v72 = *(_QWORD *)(v67 + 8 * ((v70 >> 3) & 0x1FF));
              v67 = v71 | 0x20;
              if ( (v72 & 0x20) == 0 )
                v67 = v71;
              v71 = v67;
              if ( (v72 & 0x42) != 0 )
                v71 = v67 | 0x42;
            }
          }
          v144 = v71;
          Process = (unsigned __int64)&v144;
          if ( (unsigned __int64)&v144 >= 0xFFFFF6FB7DBED000uLL )
          {
            Process = (unsigned __int64)&v144;
            if ( (unsigned __int64)&v144 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(&v144, v67, v71, v70)
              && (v71 & 1) != 0
              && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v74 = *(_QWORD *)(Process + 1544);
              if ( v74 )
              {
                v75 = *(_QWORD *)(v74 + 8 * (((unsigned __int64)&v144 >> 3) & 0x1FF));
                v76 = v71 | 0x20;
                Process = (unsigned __int8)v75;
                LOBYTE(Process) = v75 & 0x20;
                if ( (v75 & 0x20) == 0 )
                  v76 = v71;
                v71 = v76;
                if ( (v75 & 0x42) != 0 )
                  v71 = v76 | 0x42;
              }
            }
          }
          v77 = (v71 >> 12) & 0xFFFFFFFFFLL;
          v78 = (unsigned __int64 *)(48 * v77 - 0x58000000000LL);
          if ( ((*(_DWORD *)v78 >> 4) & 0x3FF) == 0 )
          {
            v79 = 0LL;
            v80 = (__int64)(v70 << 25) >> 16;
            memset(v159, 0, sizeof(v159));
            while ( 1 )
            {
              v81 = *(_QWORD *)v80;
              if ( v80 < 0xFFFFF6FB7DBED000uLL
                || v80 > 0xFFFFF6FB7DBED7F8uLL
                || !(unsigned int)MiPteHasShadow(Process, v81, v77, v80) )
              {
                goto LABEL_155;
              }
              if ( (v81 & 1) != 0 )
                break;
LABEL_160:
              v80 += 8LL;
              if ( (v80 & 0xFFF) == 0 )
              {
                v84 = 8;
                while ( 1 )
                {
                  v85 = *((_DWORD *)v159 + (unsigned __int8)--v84);
                  if ( v85 )
                    break;
                  if ( !v84 )
                    goto LABEL_81;
                }
                *v78 = *v78 & 0xFFFFFFFFFFFE000FuLL | (16 * (v85 & 0x3FF | ((unsigned __int64)(v84 & 7) << 10)));
                goto LABEL_81;
              }
            }
            if ( (v81 & 0x20) == 0 || (v81 & 0x42) == 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v77 = *(_QWORD *)(Process + 1544);
              if ( v77 )
              {
                v82 = *(_QWORD *)(v77 + 8 * ((v80 >> 3) & 0x1FF));
                v77 = v81 | 0x20;
                Process = (unsigned __int8)v82;
                LOBYTE(Process) = v82 & 0x20;
                if ( (v82 & 0x20) == 0 )
                  v77 = v81;
                LOBYTE(v81) = v77;
                if ( (v82 & 0x42) != 0 )
                  LOBYTE(v81) = v77 | 0x42;
              }
            }
LABEL_155:
            if ( (v81 & 1) != 0 )
            {
              v83 = MiGetWsleContents(Process, (__int64)((v80 << 25) - v79) >> 16) & 0xF;
              if ( v83 != 10 && v83 != 9 && v83 != 8 )
                ++*((_DWORD *)v159 + v83);
            }
            goto LABEL_160;
          }
        }
LABEL_81:
        v52 = v155;
        v53 = 1LL;
        v54 = v19;
        if ( v154 != 1 && (v155 & 8) == 0 && v19 >= 0xFFFFF68000000000uLL && v19 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v52 = v155 | 8;
          LOBYTE(v155) = v155 | 8;
        }
        v55 = HIDWORD(v156);
        if ( HIDWORD(v156) )
        {
          v56 = v52 & 4;
          if ( !v56 )
          {
            v57 = Base[HIDWORD(v156) - 1];
            if ( (v57 & 0xC00) == 0 )
            {
              v58 = Base[HIDWORD(v156) - 1] & 0x3FFLL;
              if ( (v57 & 0xFFFFFFFFFFFFF000uLL) + ((v58 + 1) << 12) == v19 && v58 + 1 >= v58 && v58 + 1 <= 0x3FF )
              {
                ++v157;
                Base[HIDWORD(v156) - 1] = ((unsigned __int16)v57 ^ (unsigned __int16)(v57 + 1)) & 0x3FF ^ v57;
                goto LABEL_183;
              }
            }
          }
          if ( !v56 )
          {
            v86 = Base[HIDWORD(v156) - 1];
            if ( (v86 & 0xC00) == 0 && (v86 & 0xFFFFFFFFFFFFF000uLL) == v19 + 4096 )
            {
              v87 = Base[HIDWORD(v156) - 1] & 0x3FFLL;
              if ( v87 + 1 >= v87 && v87 + 1 <= 0x3FF )
              {
                ++v157;
                Base[HIDWORD(v156) - 1] = ((unsigned __int16)(v86 - 4096) ^ (unsigned __int16)(v86 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v86 - 4096);
                goto LABEL_183;
              }
            }
          }
        }
        if ( HIDWORD(v156) < (unsigned int)v156 )
        {
          while ( 1 )
          {
            v88 = 1024LL;
            if ( (unsigned __int64)(v53 - 1) <= 0x3FF )
              v88 = v53;
            v53 -= v88;
            v89 = v54 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v88 - 1) & 0x3FF;
            v54 += v88 << 12;
            Base[v55] = v89;
            v157 += v88;
            v55 = HIDWORD(v156) + 1;
            HIDWORD(v156) = v55;
            if ( v55 == (_DWORD)v156 && (v155 & 4) == 0 )
            {
              qsort(Base, v55, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v154);
              v55 = HIDWORD(v156);
              if ( HIDWORD(v156) == (_DWORD)v156 )
                break;
            }
            if ( !v53 )
              goto LABEL_183;
          }
          if ( v53 )
          {
            HIBYTE(v155) = 1;
            v157 = HIDWORD(v156);
          }
        }
        else
        {
          HIBYTE(v155) = 1;
        }
LABEL_183:
        v90 = v37 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v146 = v90;
        *(_QWORD *)v18 = v90;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v18, v90);
        if ( HIDWORD(v156) == (_DWORD)v156 - 1 )
          MiDeletePteList(&v154, a3, DemandZeroPte, a6);
LABEL_215:
        v15 = v137;
        goto LABEL_216;
      }
      if ( (v37 & 0x400) == 0 )
      {
        if ( (v37 & 0x800) == 0 )
        {
          if ( ((v37 >> 5) & 0x1F) == 0x10 )
            ++v6[3];
          v121 = MiReverseSwizzleInvalidPte(v37, v17, v35, v27);
          if ( (v121 & 0x400) != 0 || (v121 & 0x800) != 0 || (v121 & 4) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v123 = 1;
          v124 = DemandZeroPte;
          v125 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v134 + 174));
          v139 = v125;
          if ( ((v37 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v125, &v146, v122, DemandZeroPte) )
          {
            v123 = v126;
            PageFileReservationOffset = MiGetPageFileReservationOffset(
                                          &v146,
                                          *(_QWORD *)(v125 + 8LL * ((unsigned __int16)v37 >> 12) + 6880));
            v129 = MiTransferSoftwarePte(DemandZeroPte, v128, PageFileReservationOffset, 2LL);
            v125 = v139;
            v124 = v129;
          }
          *(_QWORD *)v18 = v124;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v18, v124);
          v147 = v37;
          if ( (v37 & 4) != 0 )
          {
            v130 = MI_READ_PTE_LOCK_FREE(&v147);
            if ( !v123 )
              v130 &= ~2uLL;
          }
          else if ( v123 && ((v37 >> 1) & 1) != 0 )
          {
            v130 = MI_READ_PTE_LOCK_FREE(&v147);
          }
          else
          {
            v130 = 0LL;
          }
          v147 = v130;
          if ( v130 )
            MiReleasePageFileInfo(v125, v130, 0LL);
          goto LABEL_216;
        }
        v99 = v36;
        v145 = v36;
        v100 = MiLockTransitionLeafPage(v18);
        if ( !v100 )
          goto LABEL_271;
        v103 = 0LL;
        v104 = 1;
        if ( !*(_WORD *)(v100 + 32) )
        {
          v99 = *(_QWORD *)(v100 + 16);
          v105 = *(_QWORD *)(v100 + 40);
          v103 = v99;
          v145 = v99;
          v106 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v105 >> 40) & 0x3FF));
          v139 = v106;
          if ( (v99 & 2) != 0 )
            v104 = MI_IS_PTE_IN_WS_SWAP_SET(v106, &v145, v101, v102) != 0;
        }
        v107 = v103;
        if ( (unsigned int)MiDeleteTransitionPte(v18) == 3 )
          ++a6[1];
        if ( v103 )
        {
          v108 = v99;
          v109 = v139;
          MiReleasePageFileSpace(v139, v108, v104);
          v107 = v103;
        }
        else
        {
          v109 = v139;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        v110 = DemandZeroPte;
        if ( !v104 )
        {
          v111 = MiGetPageFileReservationOffset(&v145, *(_QWORD *)(v109 + 8LL * (v107 >> 12) + 6880));
          v110 = MiTransferSoftwarePte(DemandZeroPte, v112, v111, 2LL);
        }
        *(_QWORD *)v18 = v110;
        if ( (unsigned int)MiPteInShadowRange(v18) )
          MiWritePteShadow(v114, v113);
        v19 = v133;
        goto LABEL_215;
      }
      PrototypePteDirect = MiGetPrototypePteDirect(v37);
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v37, v92, v93, PrototypePteDirect) )
      {
        v95 = MiDecrementCombinedPte(v134, v94);
LABEL_194:
        if ( v95 == 3 )
        {
          ++v6[1];
        }
        else if ( v95 == 5 )
        {
          ++v6[2];
        }
      }
      else if ( !(unsigned int)MiIsPrototypePteVadLookup(v37) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v96);
        if ( CloneAddress )
        {
          v95 = MiDecrementCloneBlockReference(CloneAddress, v98);
          goto LABEL_194;
        }
      }
      *(_QWORD *)v18 = DemandZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(v18) )
        goto LABEL_216;
LABEL_64:
      MiWritePteShadow(v41, DemandZeroPte);
      goto LABEL_216;
    }
    UsedPtesHandle = MiGetUsedPtesHandle(v19, v17, v35, v27);
    MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
    if ( v18 > v143 )
      ++v6[3];
    *(_QWORD *)v18 = DemandZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v18) )
      goto LABEL_64;
LABEL_216:
    v18 += 8LL;
    if ( (v18 & 0x78) == 0 )
    {
      v115 = v134;
      v116 = &dword_1403CCD40;
      if ( (*(_BYTE *)(v134 + 184) & 7) != 2 )
        v116 = (LONG *)(v134 + 192);
      if ( (*v116 & 0x40000000) != 0 )
        goto LABEL_263;
    }
    SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb();
    v117 = *(_DWORD *)(SchedulerAssist + 11884);
    v118 = *(_DWORD *)(SchedulerAssist + 22764);
    v119 = *(_DWORD *)(SchedulerAssist + 23452);
    if ( (v117 & 1) != 0 )
    {
      v17 = 1LL;
      if ( v119 > 7 )
      {
        if ( *(_BYTE *)(SchedulerAssist + 11881) )
        {
          v120 = 1;
LABEL_259:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            EtwTraceShouldYieldProcessor(v120, v118, v119);
          if ( !v120 )
            goto LABEL_270;
          v115 = v134;
LABEL_263:
          if ( HIDWORD(v156) )
            MiDeletePteList(&v154, a3, DemandZeroPte, a6);
          if ( v15 )
            MiUnlockPageTableInternal(v115, v15);
          MiUnlockWorkingSetShared(v115, CurrentIrql);
          v135 = 1;
          MiLockWorkingSetShared(v115);
          v15 = 0LL;
          if ( !v151 )
            v15 = v152;
          v137 = v15;
          goto LABEL_270;
        }
LABEL_254:
        if ( (v117 & 0x1E) != 0 )
        {
          v120 = 5;
          goto LABEL_259;
        }
        if ( *(_QWORD *)(SchedulerAssist + 8) != *(_QWORD *)(SchedulerAssist + 24) )
        {
          v120 = 6;
          goto LABEL_259;
        }
LABEL_258:
        _disable();
        v120 = 0;
        *(_DWORD *)(SchedulerAssist + 22764) = 0;
        *(_DWORD *)(SchedulerAssist + 23452) = 0;
        KiResetGlobalDpcWatchdogProfiler();
        _enable();
        goto LABEL_259;
      }
    }
    else
    {
      v17 = 0LL;
      if ( (v117 & 0x1E) != 0 )
      {
        v120 = 2;
        goto LABEL_259;
      }
      if ( *(_BYTE *)(SchedulerAssist + 11881) )
      {
        v120 = 3;
        goto LABEL_259;
      }
      v131 = *(struct _LIST_ENTRY **)(SchedulerAssist + 16);
      if ( v131 && v131 != *(struct _LIST_ENTRY **)(SchedulerAssist + 8) )
      {
        v120 = 4;
        goto LABEL_259;
      }
    }
    if ( v118 > 7 )
    {
      if ( !(_DWORD)v17 )
        goto LABEL_258;
      goto LABEL_254;
    }
LABEL_270:
    v19 += 4096LL;
    v133 = v19;
LABEL_271:
    v6 = a6;
    if ( v18 > a2 )
      goto LABEL_274;
    v11 = a3;
    v20 = v135;
  }
  if ( HIDWORD(v156) )
    MiDeletePteList(&v154, v11, DemandZeroPte, v6);
  if ( v15 )
    MiUnlockPageTableInternal(v134, v15);
  v15 = 0LL;
  if ( !v29 )
    v15 = v28;
  if ( !v138 )
  {
    MiMakeSystemAddressValid(v18, v142);
    goto LABEL_47;
  }
  v148 = 0LL;
  v149 = 0LL;
  memset(v153, 0, sizeof(v153));
  LODWORD(v153[0]) = 2145;
  LeafVa = MiGetLeafVa((__int64)(v18 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_1403CD100 && LeafVa <= qword_1403CBB70 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  else
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
  v32 = MiFastLockLeafPageTable(AnyMultiplexedVm, (__int64)(v18 << 25) >> 16);
  if ( v32 )
  {
    LODWORD(v148) = v32 - 1;
    v33 = (((unsigned __int64)((__int64)(v18 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v149 = v33;
  }
  else
  {
    LODWORD(v153[0]) |= 4u;
    v153[21] = &v148;
    v153[2] = 0LL;
    v153[20] = MiGetNextPageTableTail;
    BYTE4(v153[0]) = CurrentIrql;
    BYTE2(v153[1]) = 1;
    v153[3] = AnyMultiplexedVm;
    v153[4] = (__int64)(v18 << 25) >> 16;
    v153[5] = (__int64)(a2 << 25) >> 16;
    MiWalkPageTables(v153);
    v33 = v149;
  }
  v17 = (__int64)a6;
  SchedulerAssist = a6[3];
  if ( v33 )
  {
    v34 = v33 - v18;
    v18 = v33;
    a6[3] = SchedulerAssist + (v34 >> 3);
    v19 = (__int64)(v33 << 25) >> 16;
    v6 = a6;
    v133 = v19;
LABEL_47:
    v35 = 0x7FFFFFFFF8LL;
    v15 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v27 = 0xFFFFF6FB7DBED7F8uLL;
    v36 = 0LL;
    v137 = v15;
    v135 = 0;
    goto LABEL_49;
  }
  v6 = a6;
  a6[3] = SchedulerAssist + ((__int64)(a2 - v18) >> 3) + 1;
LABEL_274:
  if ( HIDWORD(v156) )
    MiDeletePteList(&v154, a3, DemandZeroPte, v6);
  if ( v15 )
    MiUnlockPageTableInternal(v134, v15);
  return MiUnlockWorkingSetShared(v134, CurrentIrql);
}
