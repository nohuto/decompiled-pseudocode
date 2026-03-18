/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14000F720
 * Callers:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x140010E80 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x140011270 (MiGetNextPageTablePte.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiYieldPageTableWalk @ 0x1400B5D28 (MiYieldPageTableWalk.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140242594 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402AF2A8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(unsigned int *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 DpcTimeCount; // r9
  int v5; // ebx
  unsigned int *v6; // rdi
  int v7; // r11d
  unsigned __int64 Process; // rdx
  unsigned __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  struct _KPRCB *v12; // rcx
  unsigned int DpcWatchdogCount; // ebx
  int v14; // r8d
  _KTHREAD *NextThread; // rax
  int NextPageTablePte; // eax
  __int64 v17; // r8
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 *v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 PteShadow; // rax
  LONG *v35; // rax
  unsigned __int64 v36; // r10
  char v37; // cl
  unsigned __int64 v38; // rcx
  bool v39; // zf
  __int64 (__fastcall *v40)(__int64); // rax
  __int64 v41; // rcx
  __int64 (__fastcall *v43)(__int64); // rax
  int v44; // eax
  char v45; // cl
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r10
  char v49; // cl
  signed __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r9
  char v53; // cl
  signed __int64 v54; // rdx
  signed __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // r8
  __int64 v58; // rcx
  char v59; // al
  int v60; // edx
  unsigned __int64 v61; // r11
  unsigned __int64 v62; // rbx
  char v63; // cl
  signed __int64 v64; // rdx
  int v65; // eax
  char v66; // cl
  signed __int64 v67; // rdx
  signed __int64 v68; // rax
  _KLOCK_QUEUE_HANDLE *v69; // rbx
  __int64 Next; // rax
  struct _KPRCB *v71; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 (__fastcall *v73)(unsigned int *, _QWORD, __int64, unsigned __int64); // rdx
  int v74; // eax
  __int64 v75; // r10
  volatile signed __int64 *v76; // r9
  char v77; // cl
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  __int64 v80; // r9
  __int64 v81; // r8
  unsigned __int8 v82; // al
  LONG *v83; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v85; // r10
  _DWORD *v86; // rcx
  signed __int32 v87; // ett
  _KPROCESS *v88; // rcx
  unsigned __int64 v89; // rsi
  __int64 i; // rdi
  unsigned __int64 v91; // rbx
  __int64 v92; // r8
  __int64 v93; // rax
  unsigned __int64 v94; // rcx
  __int64 v95; // r8
  unsigned __int64 v96; // rax
  unsigned __int64 *v97; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _KLOCK_QUEUE_HANDLE *v99; // rax
  _KLOCK_QUEUE_HANDLE *v100; // rsi
  __int64 v101; // rax
  struct _KPRCB *v102; // rcx
  _DWORD *v103; // rdx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 *v105; // r10
  _KLOCK_QUEUE_HANDLE *v106; // r11
  struct _KPRCB *v107; // r8
  _DWORD *v108; // rcx
  __int64 v109; // rcx
  __int64 (__fastcall *v110)(unsigned int *); // rax
  __int64 v111; // rdx
  __int64 v112; // rbx
  volatile signed __int32 *v113; // rbx
  char v114; // cl
  unsigned __int32 v115; // eax
  volatile signed __int32 *v116; // r8
  signed __int32 v117; // eax
  int v118; // edx
  signed __int32 v119; // ett
  volatile signed __int32 *v120; // r8
  signed __int32 v121; // eax
  int v122; // edx
  signed __int32 v123; // ett
  unsigned int v124; // ebx
  volatile signed __int32 *v125; // r10
  signed __int32 v126; // eax
  struct _KPRCB *v127; // rbx
  struct _KPRCB *v128; // rsi
  struct _KPRCB *v129; // r11
  __int64 SharedVm; // rbx
  int v131; // eax
  unsigned __int64 v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rdx
  unsigned __int16 **v135; // r11
  int v136; // eax
  __int64 v137; // rbx
  unsigned __int16 *v138; // r9
  unsigned int v139; // r10d
  __int64 v140; // rax
  __int64 v141; // r8
  __int64 v142; // rax
  struct _KPRCB *v143; // rax
  unsigned __int64 *v144; // rdx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  __int64 v146; // rax
  int v147; // eax
  unsigned __int64 v148; // r8
  __int64 v149; // rax
  __int64 v150; // r8
  int v151; // eax
  unsigned __int64 v152; // r8
  __int64 v153; // rax
  __int64 v154; // r8
  struct _KPRCB *v155; // rax
  struct _KLOCK_QUEUE_HANDLE *v156; // rcx
  unsigned __int64 v157; // r8
  __int64 v158; // rax
  __int64 v159; // r8
  __int64 v160; // rbx
  int v161; // eax
  volatile signed __int32 *v162; // r8
  signed __int32 v163; // eax
  int v164; // edx
  signed __int32 v165; // ett
  int v166; // [rsp+20h] [rbp-59h]
  __int64 v167; // [rsp+28h] [rbp-51h]
  int v168; // [rsp+28h] [rbp-51h]
  int v169; // [rsp+28h] [rbp-51h]
  unsigned int v170; // [rsp+30h] [rbp-49h]
  __int64 v171; // [rsp+30h] [rbp-49h]
  __int64 v172; // [rsp+30h] [rbp-49h]
  unsigned __int8 v173; // [rsp+30h] [rbp-49h]
  unsigned __int64 v174; // [rsp+38h] [rbp-41h]
  unsigned __int64 v175; // [rsp+40h] [rbp-39h]
  unsigned __int8 v176; // [rsp+40h] [rbp-39h]
  struct _KPRCB *v177; // [rsp+40h] [rbp-39h]
  unsigned __int64 v178; // [rsp+40h] [rbp-39h]
  int v179; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 *v180; // [rsp+50h] [rbp-29h]
  __int64 v181; // [rsp+58h] [rbp-21h]
  int v182; // [rsp+60h] [rbp-19h] BYREF
  int v183; // [rsp+64h] [rbp-15h] BYREF
  int v184; // [rsp+68h] [rbp-11h] BYREF
  int v185; // [rsp+6Ch] [rbp-Dh] BYREF
  int v186; // [rsp+70h] [rbp-9h] BYREF
  int v187; // [rsp+74h] [rbp-5h] BYREF
  unsigned __int64 v188; // [rsp+78h] [rbp-1h]
  __int64 (__fastcall *v189)(unsigned int *, unsigned __int64); // [rsp+80h] [rbp+7h]
  unsigned __int64 v190; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v191; // [rsp+90h] [rbp+17h]
  unsigned __int64 v192; // [rsp+98h] [rbp+1Fh]
  __int64 v193; // [rsp+A0h] [rbp+27h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned __int64 v196; // [rsp+E8h] [rbp+6Fh]
  unsigned int v197; // [rsp+F0h] [rbp+77h]
  unsigned int v198; // [rsp+F8h] [rbp+7Fh]

  v197 = a3;
  DpcTimeCount = *((_QWORD *)a1 + 3);
  v5 = 0;
  v189 = (__int64 (__fastcall *)(unsigned int *, unsigned __int64))*((_QWORD *)a1 + 19);
  v6 = a1;
  v7 = 0;
  Process = (unsigned __int64)&a1[4 * (int)a3 + 20];
  v181 = 16LL * (int)a3;
  v174 = DpcTimeCount;
  v198 = 0;
  v180 = (unsigned __int64 *)Process;
  if ( a2 < *(_QWORD *)Process )
    a2 = *(_QWORD *)Process;
  v196 = a2;
  if ( (_DWORD)a3 == 3 )
  {
    v9 = *((_QWORD *)a1 + 17);
  }
  else
  {
    v9 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v9 > *(_QWORD *)(Process + 8) )
      v9 = *(_QWORD *)(Process + 8);
  }
  v188 = v9;
  v10 = 0;
  v166 = 0;
  if ( a2 <= v9 )
  {
    while ( 1 )
    {
      Process = 0xFFFFF68000000000uLL;
      if ( v10 )
      {
        v166 = 0;
        if ( v7 >= 3 )
        {
LABEL_71:
          DpcTimeCount = v174;
          goto LABEL_72;
        }
        if ( *((_BYTE *)v6 + 8) == 1 )
          break;
      }
LABEL_8:
      v11 = ++*((_QWORD *)v6 + 18);
      Process = *v6;
      if ( (v11 & 0xF) == 0 && (Process & 8) != 0 )
      {
        v24 = *((_QWORD *)v6 + 9);
        v25 = *(_QWORD *)(v24 + 7040);
        if ( v25 < 0x420 )
        {
          v135 = (unsigned __int16 **)(v24 + 4136);
          v136 = dword_1403CB6DC;
          v137 = 0LL;
          while ( 1 )
          {
            v138 = *v135;
            v139 = 0;
            if ( v136 )
              break;
LABEL_408:
            ++v137;
            ++v135;
            if ( v137 > 1 )
            {
              a3 = v197;
              v7 = 4;
              v198 = 4;
              v5 = 0;
              goto LABEL_71;
            }
          }
          while ( 1 )
          {
            v25 += *v138;
            if ( v25 >= 0x420 )
              break;
            v136 = dword_1403CB6DC;
            ++v139;
            v138 += 8;
            if ( v139 >= dword_1403CB6DC )
              goto LABEL_408;
          }
        }
      }
      if ( (Process & 2) == 0 )
        goto LABEL_17;
      DpcTimeCount = *((_QWORD *)v6 + 3);
      if ( ((unsigned __int8)v11 & *((_BYTE *)v6 + 6)) == 0 )
      {
        if ( (*(_BYTE *)(DpcTimeCount + 184) & 7) == 2 )
          v35 = &dword_1403CCD40;
        else
          v35 = (LONG *)(DpcTimeCount + 192);
        if ( (*v35 & 0x40000000) != 0 )
          goto LABEL_265;
        if ( (*v6 & 4) == 0 )
          goto LABEL_68;
        v36 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v37 = *(_BYTE *)(DpcTimeCount + 184) & 7;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
        {
          if ( v37 && v36 >= 0xFFFFF6FB7DBED000uLL && v36 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(*((_QWORD *)v6 + 3), v36, &v182);
            Process = (unsigned int)(*PageTableLockBuffer >> v182);
            if ( (Process & 2) != 0 )
              goto LABEL_265;
LABEL_68:
            if ( (*v6 & 0x400) != 0 && (dword_1403CBB24 & 0x40000000) != 0 )
              goto LABEL_265;
            goto LABEL_11;
          }
          v38 = *(_QWORD *)v36;
          if ( v36 >= 0xFFFFF6FB7DBED000uLL && v36 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 640) != 1 && (v38 & 1) != 0 && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v140 = *(_QWORD *)(Process + 1544);
              if ( v140 )
              {
                v141 = v38 | 0x20;
                v142 = *(_QWORD *)(v140 + 8 * ((v36 >> 3) & 0x1FF));
                Process = (unsigned __int8)v142;
                LOBYTE(Process) = v142 & 0x20;
                if ( (v142 & 0x20) == 0 )
                  v141 = *(_QWORD *)v36;
                v38 = v141;
                if ( (v142 & 0x42) != 0 )
                  v38 = v141 | 0x42;
              }
            }
          }
          v39 = ((v38 >> 60) & 2) == 0;
LABEL_67:
          if ( !v39 )
            goto LABEL_265;
          goto LABEL_68;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v37 )
        {
          if ( v37 == 7 )
          {
            v39 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
            goto LABEL_67;
          }
          if ( v37 == 5 )
          {
            v39 = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next == 0LL;
            goto LABEL_67;
          }
          v99 = &CurrentPrcb->SelfmapLockHandle[3];
        }
        else
        {
          v99 = &CurrentPrcb->SelfmapLockHandle[2];
        }
        v39 = v99->LockQueue.Next == 0LL;
        goto LABEL_67;
      }
LABEL_11:
      if ( *((_BYTE *)v6 + 4) >= 2u )
        goto LABEL_17;
      v12 = KeGetCurrentPrcb();
      Process = (unsigned int)v12->DpcRequestSummary;
      DpcTimeCount = v12->DpcTimeCount;
      DpcWatchdogCount = v12->DpcWatchdogCount;
      v170 = v12->DpcTimeCount;
      if ( (Process & 1) != 0 )
      {
        v14 = 1;
        if ( (unsigned int)DpcTimeCount <= 7 )
        {
LABEL_16:
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_17;
          if ( v14 )
            goto LABEL_421;
        }
        else
        {
          if ( v12->QuantumEnd )
          {
            v109 = 1LL;
            goto LABEL_323;
          }
LABEL_421:
          if ( (Process & 0x1E) != 0 )
          {
            v109 = 5LL;
            goto LABEL_323;
          }
          if ( v12->CurrentThread != v12->IdleThread )
          {
            v109 = 6LL;
            goto LABEL_323;
          }
        }
        _disable();
        v12->DpcWatchdogCount = 0;
        v12->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler();
        _enable();
        DpcTimeCount = v170;
        v109 = 0LL;
        goto LABEL_323;
      }
      v14 = 0;
      if ( (Process & 0x1E) != 0 )
      {
        v109 = 2LL;
        v168 = 2;
        goto LABEL_262;
      }
      if ( v12->QuantumEnd )
      {
        v109 = 3LL;
LABEL_323:
        v168 = v109;
        goto LABEL_262;
      }
      NextThread = v12->NextThread;
      if ( !NextThread || NextThread == v12->CurrentThread )
        goto LABEL_16;
      v109 = 4LL;
      v168 = 4;
LABEL_262:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      {
        EtwTraceShouldYieldProcessor(v109, DpcWatchdogCount, (unsigned int)DpcTimeCount);
        LODWORD(v109) = v168;
      }
      if ( (_DWORD)v109 )
      {
LABEL_265:
        v110 = (__int64 (__fastcall *)(unsigned int *))*((_QWORD *)v6 + 20);
        *((_BYTE *)v6 + 5) = 1;
        if ( v110 )
        {
          LODWORD(v110) = v110(v6);
          v169 = (int)v110;
          goto LABEL_267;
        }
        v169 = 0;
        if ( *((_BYTE *)v6 + 4) == 17 )
        {
          *((_BYTE *)v6 + 5) = 0;
          goto LABEL_275;
        }
LABEL_267:
        v39 = *((_BYTE *)v6 + 8) == 1;
        *((_BYTE *)v6 + 5) = 0;
        if ( v39 )
        {
LABEL_274:
          if ( (int)v110 < 3 )
          {
LABEL_275:
            v7 = v198;
            v10 = 1;
            v166 = 1;
            goto LABEL_31;
          }
        }
        else if ( (int)v110 < 3 )
        {
          v111 = *((_QWORD *)v6 + 6);
          v112 = *((_QWORD *)v6 + 3);
          if ( v111 )
          {
            MiUnlockPageTableInternal(*((_QWORD *)v6 + 3), v111);
            *((_QWORD *)v6 + 6) = 0LL;
          }
          if ( (*v6 & 4) != 0 )
          {
            MiUnlockWorkingSetShared(v112, *((unsigned __int8 *)v6 + 4));
          }
          else
          {
            if ( (*v6 & 0x400) != 0 )
              ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CBB24);
            MiUnlockWorkingSetExclusive(v112, *((unsigned __int8 *)v6 + 4));
          }
          LODWORD(v110) = v169;
          *((_BYTE *)v6 + 8) = 1;
          goto LABEL_274;
        }
        v198 = (unsigned int)v110;
        goto LABEL_275;
      }
LABEL_17:
      if ( (*v6 & 0x20) == 0 )
      {
        NextPageTablePte = MiComputePxeWalkAction(v6, a2, v197);
LABEL_19:
        if ( !NextPageTablePte )
        {
          v7 = 0;
          v198 = 0;
          goto LABEL_21;
        }
        v17 = v197;
        if ( NextPageTablePte == 1 || (int)v197 <= *((unsigned __int8 *)v6 + 10) )
          goto LABEL_36;
        v43 = (__int64 (__fastcall *)(__int64))*((_QWORD *)v6 + 20);
        *((_BYTE *)v6 + 5) = 1;
        if ( v43 )
        {
          if ( v43 == MiGetNextPageTableTail )
          {
            v58 = *((_QWORD *)v6 + 2);
            if ( v58 )
              MiFlushTbList(v58);
            v44 = 0;
          }
          else
          {
            v44 = v43((__int64)v6);
          }
LABEL_84:
          v45 = *((_BYTE *)v6 + 8);
          *((_BYTE *)v6 + 5) = 0;
          if ( v44 < 3 )
          {
            v17 = v197;
            goto LABEL_86;
          }
          goto LABEL_477;
        }
        v44 = 0;
        if ( *((_BYTE *)v6 + 4) != 17 )
          goto LABEL_84;
        v45 = *((_BYTE *)v6 + 8);
        *((_BYTE *)v6 + 5) = 0;
LABEL_86:
        if ( v45 == 1 )
        {
LABEL_477:
          v7 = v198;
          if ( v44 == 4 )
            v7 = 4;
          v198 = v7;
          goto LABEL_108;
        }
        v46 = 4LL * (int)v17;
        v47 = (__int64)(a2 << 25) >> 16;
        v175 = v47;
        v171 = v46 * 4;
        if ( v47 < *(_QWORD *)&v6[v46 + 16] )
          v47 = *(_QWORD *)&v6[v46 + 16];
        if ( v47 > *(_QWORD *)&v6[v46 + 18] )
          goto LABEL_36;
        if ( (*v6 & 4) == 0 )
          goto LABEL_106;
        v48 = v174;
        v49 = *(_BYTE *)(v174 + 184) & 7;
        if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v143 = KeGetCurrentPrcb();
          if ( v49 )
          {
            if ( v49 == 7 )
            {
              v144 = (unsigned __int64 *)&unk_1403CBCE8;
              SelfmapLockHandle = &v143->SelfmapLockHandle[1];
            }
            else if ( v49 == 5 )
            {
              v144 = (unsigned __int64 *)&unk_1403CBCE0;
              SelfmapLockHandle = v143->SelfmapLockHandle;
            }
            else
            {
              v144 = (unsigned __int64 *)&unk_1403CBCF8;
              SelfmapLockHandle = &v143->SelfmapLockHandle[3];
            }
          }
          else
          {
            v144 = (unsigned __int64 *)(v174 + 176);
            SelfmapLockHandle = &v143->SelfmapLockHandle[2];
          }
          SelfmapLockHandle->LockQueue.Lock = v144;
          SelfmapLockHandle->LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock(SelfmapLockHandle, v144);
          goto LABEL_99;
        }
        if ( v49 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v113 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v174, a2, &v179);
          LODWORD(v17) = *v113;
          do
          {
LABEL_284:
            v114 = v179;
            while ( (((unsigned int)v17 >> v114) & 1) != 0 )
            {
              if ( (((unsigned int)v17 >> v114) & 2) == 0 )
              {
                LODWORD(v17) = _InterlockedCompareExchange(v113, v17 | (2 << v114), v17);
                goto LABEL_284;
              }
              v183 = 0;
              do
              {
                KeYieldProcessorEx(&v183);
                LODWORD(v17) = *v113;
                v114 = v179;
              }
              while ( (((unsigned __int32)*v113 >> v179) & 1) != 0 );
            }
            v115 = _InterlockedCompareExchange(v113, ~(2 << v114) & (v17 | (1 << v114)), v17);
            v39 = (_DWORD)v17 == v115;
            v17 = v115;
          }
          while ( !v39 );
          goto LABEL_99;
        }
        v50 = *(_QWORD *)a2;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v50 & 1) != 0
          && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
        {
          v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v17 )
          {
            v146 = *(_QWORD *)(v17 + 8 * ((a2 >> 3) & 0x1FF));
            v17 = v50 | 0x20;
            if ( (v146 & 0x20) == 0 )
              v17 = *(_QWORD *)a2;
            v50 = v17;
            if ( (v146 & 0x42) != 0 )
              v50 = v17 | 0x42;
          }
        }
        v51 = v50;
        if ( (v50 & 1) != 0 )
        {
          v17 = v50;
          do
          {
            if ( (v51 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v51 >> 60) & 2) != 0 )
              {
                v124 = 0;
                do
                {
                  if ( (++v124 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v124);
                  v50 = *(_QWORD *)a2;
                }
                while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                v50 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v51 | 0x2000000000000000LL, v50);
              }
            }
            else
            {
              v50 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)a2,
                      v51 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                      v50);
              if ( v50 == v17 )
                break;
            }
            v51 = v50;
            v17 = v50;
          }
          while ( (v50 & 1) != 0 );
          v6 = a1;
LABEL_99:
          v48 = v174;
        }
        v52 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v53 = *(_BYTE *)(v48 + 184) & 7;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
        {
          if ( v53 && v52 >= 0xFFFFF6FB7DBED000uLL && v52 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v116 = (volatile signed __int32 *)MiGetPageTableLockBuffer(
                                                v48,
                                                ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                                &v184);
            v117 = *v116;
            v118 = ~(3 << v184);
            do
            {
              v119 = v117;
              v117 = _InterlockedCompareExchange(v116, v117 & v118, v117);
            }
            while ( v119 != v117 );
          }
          else
          {
            v54 = *(_QWORD *)v52;
            if ( v52 >= 0xFFFFF6FB7DBED000uLL
              && v52 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v54 & 1) != 0
              && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
            {
              v148 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v148 )
              {
                v149 = *(_QWORD *)(v148 + 8 * ((v52 >> 3) & 0x1FF));
                v150 = v54 | 0x20;
                if ( (v149 & 0x20) == 0 )
                  v150 = *(_QWORD *)v52;
                v54 = v150;
                if ( (v149 & 0x42) != 0 )
                  v54 = v150 | 0x42;
              }
            }
            do
            {
              v55 = _InterlockedCompareExchange64((volatile signed __int64 *)v52, v54 & 0xCFFFFFFFFFFFFFFFuLL, v54);
              v39 = v54 == v55;
              v54 = v55;
            }
            while ( !v39 );
            v6 = a1;
          }
          goto LABEL_105;
        }
        if ( v53 )
        {
          if ( v53 == 7 )
          {
            v69 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
          }
          else
          {
            v127 = KeGetCurrentPrcb();
            if ( v53 == 5 )
              v69 = v127->SelfmapLockHandle;
            else
              v69 = &v127->SelfmapLockHandle[3];
          }
        }
        else
        {
          v69 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v69, retaddr, v17, 0xFFFFF6FB7DBEDF68uLL);
          goto LABEL_169;
        }
        _m_prefetchw(v69);
        Next = (__int64)v69->LockQueue.Next;
        if ( !v69->LockQueue.Next )
        {
          if ( v69 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v69->LockQueue.Lock,
                                               0LL,
                                               (signed __int64)v69) )
          {
LABEL_169:
            v71 = KeGetCurrentPrcb();
            SchedulerAssist = v71->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v71->NestingLevel <= 1u )
              {
                v147 = SchedulerAssist[5] - 1;
                SchedulerAssist[5] = v147;
                if ( !v147 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
                  KiPerformUnboostKick(v71);
              }
            }
LABEL_105:
            LODWORD(v17) = v197;
            *((_QWORD *)v6 + 6) = a2;
LABEL_106:
            v56 = 0;
            v7 = MiWalkPageTablesRecursively(v6, v175, (unsigned int)(v17 - 1));
            v198 = v7;
            if ( *v180 != a2 )
            {
              LOBYTE(v56) = (*v180 & 0xFFF) == 0;
              Process = *v6 & 0x4000;
              if ( (*v6 & 0x4000) != 0 && a2 < *v180 )
              {
                if ( !*((_BYTE *)v6 + 8) && (unsigned int)MiYieldPageTableWalk(v6, 1LL) == 4 )
                  v198 = 4;
                v10 = 1;
                v7 = v198;
                v166 = 1;
                a2 = *v180;
                v196 = *v180;
                goto LABEL_31;
              }
              v93 = v181;
              v94 = a2;
              *((_QWORD *)v6 + 8) = a2;
              if ( !(_DWORD)Process
                || (Process = (unsigned __int64)v6 + v93 + 80, DpcTimeCount = Process, a2 > *(_QWORD *)Process) )
              {
                Process = (unsigned __int64)v6 + v93 + 80;
                DpcTimeCount = Process;
                *(_QWORD *)Process = a2;
              }
              if ( (int)v197 < 3LL )
              {
                Process += 16LL;
                v95 = 3LL - (int)v197;
                do
                {
                  v94 = ((v94 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  *(_QWORD *)Process = v94;
                  Process += 16LL;
                  --v95;
                }
                while ( v95 );
                v6 = a1;
                a2 = v196;
                DpcTimeCount = (unsigned __int64)a1 + v171 + 80;
              }
              v96 = a2;
              v57 = (int)v197;
              if ( v197 )
              {
                v97 = (unsigned __int64 *)(DpcTimeCount - 16);
                DpcTimeCount = 0LL;
                do
                {
                  Process = (__int64)(v96 << 25) >> 16;
                  if ( (*v6 & 0x4000) == 0 || (v96 = *v97, Process > *v97) )
                  {
                    v96 = Process;
                    *v97 = Process;
                  }
                  v97 -= 2;
                  --v57;
                }
                while ( v57 );
              }
            }
            if ( v7 >= 3 || *((_BYTE *)v6 + 8) )
              goto LABEL_108;
            if ( (*v6 & 4) == 0 )
              goto LABEL_137;
            if ( v56 )
              goto LABEL_309;
            v61 = v174;
            v62 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v63 = *(_BYTE *)(v174 + 184) & 7;
            if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
            {
              if ( v63 )
              {
                if ( v63 == 7 )
                {
                  v105 = (unsigned __int64 *)&unk_1403CBCE8;
                  v106 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
                }
                else
                {
                  v129 = KeGetCurrentPrcb();
                  if ( v63 == 5 )
                  {
                    v105 = (unsigned __int64 *)&unk_1403CBCE0;
                    v106 = v129->SelfmapLockHandle;
                  }
                  else
                  {
                    v105 = (unsigned __int64 *)&unk_1403CBCF8;
                    v106 = &v129->SelfmapLockHandle[3];
                  }
                }
              }
              else
              {
                v105 = (unsigned __int64 *)(v174 + 176);
                v106 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
              }
              v106->LockQueue.Lock = v105;
              v106->LockQueue.Next = 0LL;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                v65 = KiTryToAcquireQueuedSpinLockInstrumented(v106, v105, v57);
              }
              else
              {
                v107 = KeGetCurrentPrcb();
                v177 = v107;
                v108 = v107->SchedulerAssist;
                if ( v108 )
                {
                  if ( v107->NestingLevel <= 1u )
                  {
                    v151 = v108[5];
                    v108[5] = v151 + 1;
                    if ( v151 == -1 && !*((_BYTE *)v108 + 25) && !*((_BYTE *)v108 + 27) )
                    {
                      KiPerformUnboostKick(v107);
                      v107 = v177;
                    }
                  }
                }
                _m_prefetchw(v105);
                if ( *(_DWORD *)v105
                  || _InterlockedCompareExchange64((volatile signed __int64 *)v105, (signed __int64)v106, 0LL) )
                {
                  v173 = 0;
                  KiSetVpThreadSpinLockCount(v107, 0LL);
                  _mm_pause();
                  v65 = v173;
                }
                else
                {
                  v65 = 1;
                }
              }
              v61 = v174;
            }
            else
            {
              if ( v63 && v62 >= 0xFFFFF6FB7DBED000uLL && v62 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                v125 = (volatile signed __int32 *)MiGetPageTableLockBuffer(
                                                    v174,
                                                    ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                                    &v185);
                if ( (((unsigned __int32)*v125 >> v185) & 1) != 0
                  || (v126 = *v125, v126 != _InterlockedCompareExchange(v125, ~(2 << v185) & (v126 | (1 << v185)), v126)) )
                {
LABEL_309:
                  if ( (unsigned int)MiYieldPageTableWalk(v6, 1LL) == 4 )
                    v198 = 4;
                  v7 = v198;
                  v10 = 1;
                  v166 = 1;
                  goto LABEL_31;
                }
LABEL_131:
                v66 = *(_BYTE *)(v61 + 184) & 7;
                if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
                {
                  v155 = KeGetCurrentPrcb();
                  if ( v66 )
                  {
                    if ( v66 == 7 )
                    {
                      v156 = &v155->SelfmapLockHandle[1];
                    }
                    else
                    {
                      v39 = v66 == 5;
                      v156 = v155->SelfmapLockHandle;
                      if ( !v39 )
                        v156 = &v155->SelfmapLockHandle[3];
                    }
                  }
                  else
                  {
                    v156 = &v155->SelfmapLockHandle[2];
                  }
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(v156);
                }
                else if ( v66 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
                {
                  v120 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v61, a2, &v186);
                  v121 = *v120;
                  v122 = ~(3 << v186);
                  do
                  {
                    v123 = v121;
                    v121 = _InterlockedCompareExchange(v120, v121 & v122, v121);
                  }
                  while ( v123 != v121 );
                }
                else
                {
                  v67 = *(_QWORD *)a2;
                  if ( a2 >= 0xFFFFF6FB7DBED000uLL
                    && a2 <= 0xFFFFF6FB7DBED7F8uLL
                    && (MiFlags & 0x1800000) != 0
                    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                    && (v67 & 1) != 0
                    && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
                  {
                    v157 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                    if ( v157 )
                    {
                      v158 = *(_QWORD *)(v157 + 8 * ((a2 >> 3) & 0x1FF));
                      v159 = v67 | 0x20;
                      if ( (v158 & 0x20) == 0 )
                        v159 = *(_QWORD *)a2;
                      v67 = v159;
                      if ( (v158 & 0x42) != 0 )
                        v67 = v159 | 0x42;
                    }
                  }
                  do
                  {
                    v68 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v67 & 0xCFFFFFFFFFFFFFFFuLL, v67);
                    v39 = v67 == v68;
                    v67 = v68;
                  }
                  while ( !v39 );
                  v6 = a1;
                }
                *((_QWORD *)v6 + 6) = v62;
LABEL_137:
                LODWORD(v17) = v197;
LABEL_36:
                v26 = *v6;
                if ( (*v6 & 1) == 0 && !(_DWORD)v17 )
                {
                  v33 = (__int64 *)((((unsigned __int64)((__int64)(a2 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL)
                                  - 0x98000000000LL);
                  PteShadow = *v33;
                  if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL )
                  {
                    PteShadow = MiReadPteShadow(v33, *v33);
                    LODWORD(v17) = v197;
                  }
                  LOBYTE(PteShadow) = HIBYTE(PteShadow) & 0xF;
                  if ( (HIBYTE(PteShadow) & 0xF) == 0xA )
                  {
                    v7 = 0;
                    v198 = 0;
                    goto LABEL_22;
                  }
                  if ( (_BYTE)PteShadow == 9 || (_BYTE)PteShadow == 8 )
                  {
                    v7 = 0;
                    v198 = 0;
                    goto LABEL_22;
                  }
                }
                v27 = *((_QWORD *)v6 + 8);
                if ( v27 && v27 == *v180 )
                  *((_QWORD *)v6 + 8) = 0LL;
                v28 = *((_QWORD *)v6 + 7);
                if ( v28 && v28 == *v180 )
                  *((_QWORD *)v6 + 7) = 0LL;
                if ( (int)v17 >= 1 && (*(_BYTE *)(v174 + 184) & 7) != 0 && (v26 & 1) == 0 )
                {
                  v7 = 0;
                  v198 = 0;
                  goto LABEL_22;
                }
                if ( (v26 & 0x40) != 0 )
                {
                  v7 = 0;
                  v198 = 0;
                  goto LABEL_22;
                }
                v29 = v189(v6, a2);
                v7 = v29;
                v198 = v29;
                if ( v29 == 1 )
                {
                  v7 = 0;
                  v198 = 0;
                }
                else
                {
                  if ( v29 == 2 )
                  {
                    v198 = 0;
                    MiYieldPageTableWalk(v6, 1LL);
                    MiWaitForFreePage(*((_QWORD *)v6 + 9));
                    v7 = 0;
                    v10 = 1;
                    v166 = 1;
LABEL_29:
                    if ( v7 < 3 && *((_BYTE *)v6 + 8) != 1 )
                      goto LABEL_31;
LABEL_108:
                    v10 = 1;
                    v166 = 1;
                    goto LABEL_31;
                  }
LABEL_21:
                  LODWORD(v17) = v197;
LABEL_22:
                  a2 += 8LL;
                  v196 = a2;
                  if ( (*v6 & 0x4000) == 0
                    || (v18 = (unsigned __int64 *)&v6[(unsigned __int64)v181 / 4 + 20], a2 > *v18) )
                  {
                    v18 = (unsigned __int64 *)&v6[(unsigned __int64)v181 / 4 + 20];
                    *v18 = a2;
                  }
                  v19 = (int)v17;
                  DpcTimeCount = 0xFFFFF68000000000uLL;
                  if ( (int)v17 < 3LL )
                  {
                    v20 = v18 + 2;
                    v21 = 3LL - (int)v17;
                    v22 = a2;
                    do
                    {
                      v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                      *v20 = v22;
                      v20 += 2;
                      --v21;
                    }
                    while ( v21 );
                  }
                  v23 = a2;
                  Process = v19;
                  if ( v19 )
                  {
                    DpcTimeCount = 0LL;
                    v30 = (unsigned __int64 *)&v6[4 * v19 + 16];
                    do
                    {
                      v31 = (__int64)(v23 << 25) >> 16;
                      if ( (*v6 & 0x4000) == 0 || (v23 = *v30, v31 > *v30) )
                      {
                        v23 = v31;
                        *v30 = v31;
                      }
                      v30 -= 2;
                      --Process;
                    }
                    while ( Process );
                  }
                }
                v10 = v166;
                goto LABEL_29;
              }
              v64 = *(_QWORD *)v62;
              if ( v62 < 0xFFFFF6FB7DBED000uLL
                || v62 > 0xFFFFF6FB7DBED7F8uLL
                || (MiFlags & 0x1800000) == 0
                || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
              {
LABEL_126:
                if ( (v64 & 1) == 0
                  || (v64 & 0x1000000000000000LL) != 0
                  || v64 != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)v62,
                              v64 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                              v64) )
                {
                  goto LABEL_352;
                }
                v65 = 1;
              }
              else
              {
                if ( (v64 & 1) != 0 )
                {
                  if ( (v64 & 0x20) == 0 || (v64 & 0x42) == 0 )
                  {
                    v152 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                    if ( v152 )
                    {
                      v153 = *(_QWORD *)(v152 + 8 * ((v62 >> 3) & 0x1FF));
                      v154 = v64 | 0x20;
                      if ( (v153 & 0x20) == 0 )
                        v154 = *(_QWORD *)v62;
                      v64 = v154;
                      if ( (v153 & 0x42) != 0 )
                        v64 = v154 | 0x42;
                    }
                  }
                  goto LABEL_126;
                }
LABEL_352:
                v65 = 0;
              }
            }
            if ( !v65 )
              goto LABEL_309;
            goto LABEL_131;
          }
          Next = KxWaitForLockChainValid(v69, 0LL, v17, 0xFFFFF6FB7DBEDF68uLL);
        }
        v69->LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_169;
      }
      v32 = *((_QWORD *)v6 + 8);
      if ( v32 && v32 == a2 )
      {
        LODWORD(v17) = v197;
        *((_QWORD *)v6 + 8) = 0LL;
        goto LABEL_36;
      }
      NextPageTablePte = MiGetNextPageTablePte(v6, a2, v197);
      if ( NextPageTablePte == 3 )
      {
        v10 = 1;
        v198 = 3;
        v7 = 3;
        v166 = 1;
        goto LABEL_31;
      }
      if ( *((_BYTE *)v6 + 8) != 1 )
        goto LABEL_19;
      v7 = v198;
      v10 = 1;
      v166 = 1;
LABEL_31:
      a3 = v197;
      v5 = 0;
      if ( a2 > v188 )
        goto LABEL_71;
    }
    if ( (_DWORD)a3 != 3 )
      goto LABEL_73;
    v80 = *((_QWORD *)v6 + 3);
    v172 = v80;
    if ( (*v6 & 4) == 0 )
    {
      SharedVm = MiGetSharedVm(v80);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      if ( (*v6 & 0x400) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CBB24);
LABEL_260:
      *((_BYTE *)v6 + 8) = 0;
      goto LABEL_8;
    }
    v81 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v82 = *(_BYTE *)(v80 + 184) & 7;
    v167 = v81;
    if ( v82 >= 6u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
LABEL_197:
      v190 = (((unsigned __int64)(v81 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v191 = ((v190 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v192 = ((v191 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v193 = ((v192 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v80, 0xFFFFF6FB7DBEDF68uLL, 0LL);
      v89 = 0xFFFFF6FB7DBEDF68uLL;
      for ( i = 2LL; ; --i )
      {
        v91 = *(&v190 + i);
        v92 = *(_QWORD *)v91;
        if ( v91 >= 0xFFFFF6FB7DBED000uLL && v91 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          v88 = KeGetCurrentThread()->ApcState.Process;
          if ( v88->AddressPolicy != 1 && (v92 & 1) != 0 && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
          {
            v88 = KeGetCurrentThread()->ApcState.Process;
            v132 = v88[2].Affinity.Bitmap[0];
            if ( v132 )
            {
              v133 = *(_QWORD *)(v132 + 8 * ((v91 >> 3) & 0x1FF));
              v134 = v92 | 0x20;
              v88 = (_KPROCESS *)(unsigned __int8)v133;
              LOBYTE(v88) = v133 & 0x20;
              if ( (v133 & 0x20) == 0 )
                v134 = *(_QWORD *)v91;
              v92 = v134;
              if ( (v133 & 0x42) != 0 )
                v92 = v134 | 0x42;
            }
          }
        }
        if ( (v92 & 0x81) != 1 )
          break;
        if ( (v92 & 0x20) == 0 )
          MiPerformSafePdeWrite(v88, *(&v190 + i), v92, 1LL);
        if ( v91 != v89 )
        {
          MiLockPageTableInternal(v172, v91, 0LL);
          MiUnlockPageTableInternal(v172, v89);
          v89 = v91;
        }
        if ( !i )
          break;
      }
      v6 = a1;
      v39 = v89 == v167;
      v178 = v89;
      a2 = v196;
      if ( !v39 )
      {
        MiUnlockPageTableInternal(v172, v178);
        MiUnlockWorkingSetShared(*((_QWORD *)a1 + 3), *((unsigned __int8 *)a1 + 4));
        goto LABEL_8;
      }
      *((_QWORD *)a1 + 6) = v167;
      goto LABEL_260;
    }
    if ( v82 == 2 )
      v83 = &dword_1403CCD40;
    else
      v83 = (LONG *)(v80 + 192);
    CurrentIrql = KeGetCurrentIrql();
    v176 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v83, CurrentIrql);
    }
    else
    {
      v85 = KeGetCurrentPrcb();
      v86 = v85->SchedulerAssist;
      if ( v86 )
      {
        if ( v85->NestingLevel <= 1u )
        {
          v131 = v86[5];
          v86[5] = v131 + 1;
          if ( v131 == -1 && !*((_BYTE *)v86 + 25) && !*((_BYTE *)v86 + 27) )
          {
            KiPerformUnboostKick(v85);
            v81 = v167;
            v80 = v172;
          }
        }
      }
      _m_prefetchw(v83);
      v87 = *v83 & 0x7FFFFFFF;
      if ( v87 == _InterlockedCompareExchange(v83, v87 + 1, v87) )
        goto LABEL_195;
      KiSetVpThreadSpinLockCount(v85, 0LL);
      ExpWaitForSpinLockSharedAndAcquire(v83, v176);
    }
    v80 = v172;
    v81 = v167;
LABEL_195:
    if ( v83[1] )
      _InterlockedExchange(v83 + 1, 0);
    goto LABEL_197;
  }
LABEL_72:
  if ( (_DWORD)a3 == 3 )
  {
    v59 = *((_BYTE *)v6 + 8);
    v60 = *v6;
    if ( v59 )
    {
      if ( (v60 & 4) != 0 )
      {
        MiLockWorkingSetShared(DpcTimeCount);
      }
      else
      {
        v160 = MiGetSharedVm(DpcTimeCount);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v160);
        *(_DWORD *)(v160 + 4) = 0;
        if ( (*v6 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CBB24);
      }
      *((_BYTE *)v6 + 8) = 0;
      return v198;
    }
    if ( (v60 & 0x40) != 0 && v7 == 3 )
      return (unsigned int)v7;
    v73 = (__int64 (__fastcall *)(unsigned int *, _QWORD, __int64, unsigned __int64))*((_QWORD *)v6 + 20);
    *((_BYTE *)v6 + 5) = 1;
    if ( v73 )
    {
      v5 = v73(v6, v73, a3, DpcTimeCount);
      v59 = *((_BYTE *)v6 + 8);
    }
    else if ( *((_BYTE *)v6 + 4) == 17 )
    {
      v75 = 0LL;
      *((_BYTE *)v6 + 5) = 0;
      v5 = 0;
      goto LABEL_178;
    }
    *((_BYTE *)v6 + 5) = 0;
    if ( v59 != 1 )
    {
      v74 = v5;
      if ( v5 >= 3 )
        v74 = v5;
      v5 = v74;
    }
    v75 = 0LL;
LABEL_178:
    v76 = (volatile signed __int64 *)*((_QWORD *)v6 + 6);
    if ( !v76 )
      goto LABEL_184;
    v77 = *(_BYTE *)(v174 + 184) & 7;
    if ( v76 != (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      if ( v77 && (unsigned __int64)v76 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v76 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v162 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v174, *((_QWORD *)v6 + 6), &v187);
        v163 = *v162;
        v164 = ~(3 << v187);
        do
        {
          v165 = v163;
          v163 = _InterlockedCompareExchange(v162, v163 & v164, v163);
        }
        while ( v165 != v163 );
      }
      else
      {
        v78 = *v76;
        if ( (unsigned __int64)v76 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v76 <= 0xFFFFF6FB7DBED7F8uLL )
          v78 = MiReadPteShadow(*((_QWORD *)v6 + 6), *v76);
        do
        {
          v79 = v78;
          v78 = _InterlockedCompareExchange64(v76, v78 & 0xCFFFFFFFFFFFFFFFuLL, v78);
        }
        while ( v79 != v78 );
      }
LABEL_183:
      *((_QWORD *)v6 + 6) = v75;
      *((_BYTE *)v6 + 8) = 1;
LABEL_184:
      if ( v5 != 4 )
        return v198;
      return 4LL;
    }
    if ( v77 )
    {
      if ( v77 == 7 )
      {
        v100 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        v128 = KeGetCurrentPrcb();
        if ( v77 == 5 )
          v100 = v128->SelfmapLockHandle;
        else
          v100 = &v128->SelfmapLockHandle[3];
      }
    }
    else
    {
      v100 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v100, retaddr, a3, 0xFFFFF6FB7DBEDF68uLL);
      v75 = 0LL;
      goto LABEL_230;
    }
    _m_prefetchw(v100);
    v101 = (__int64)v100->LockQueue.Next;
    if ( !v100->LockQueue.Next )
    {
      if ( v100 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)v100->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)v100) )
      {
LABEL_230:
        v102 = KeGetCurrentPrcb();
        v103 = v102->SchedulerAssist;
        if ( v103 )
        {
          if ( v102->NestingLevel <= 1u )
          {
            v161 = v103[5] - 1;
            v103[5] = v161;
            if ( !v161 && !*((_BYTE *)v103 + 25) && !*((_BYTE *)v103 + 27) )
              KiPerformUnboostKick(v102);
          }
        }
        goto LABEL_183;
      }
      v101 = KxWaitForLockChainValid(v100, v73, a3, 0xFFFFF6FB7DBEDF68uLL);
      v75 = 0LL;
    }
    v100->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v101 + 8), 1uLL);
    goto LABEL_230;
  }
LABEL_73:
  if ( *((_BYTE *)v6 + 8) )
    return (unsigned int)v7;
  v40 = (__int64 (__fastcall *)(__int64))*((_QWORD *)v6 + 20);
  *((_BYTE *)v6 + 5) = 1;
  if ( v40 )
  {
    if ( v40 == MiGetNextPageTableTail )
    {
      v41 = *((_QWORD *)v6 + 2);
      if ( v41 )
        MiFlushTbList(v41);
    }
    else
    {
      v5 = ((__int64 (__fastcall *)(unsigned int *, unsigned __int64, __int64, unsigned __int64))v40)(
             v6,
             Process,
             a3,
             DpcTimeCount);
    }
  }
  else if ( *((_BYTE *)v6 + 4) == 17 )
  {
    *((_BYTE *)v6 + 5) = 0;
    return (unsigned int)v7;
  }
  *((_BYTE *)v6 + 5) = 0;
  if ( v5 != 4 )
    return v198;
  return 4LL;
}
