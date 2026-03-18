/*
 * XREFs of KiQuantumEnd @ 0x1400EBA30
 * Callers:
 *     KiIdleLoop @ 0x1401AE5C0 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x1401B1C20 (KiDispatchInterrupt.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiSetPriorityBoost @ 0x1400A7404 (KiSetPriorityBoost.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400A7600 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400EAB34 (KiShouldScanSharedReadyQueue.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiComputeNewPriority @ 0x1400EB8C0 (KiComputeNewPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400ECA74 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400ECAB8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14014C8CC (KiRemoveThreadFromReadyQueue.c)
 *     KeReadGuestSchedulerAssistPriority @ 0x1401A5A6C (KeReadGuestSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x1401A6E5C (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

char __fastcall KiQuantumEnd(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // r14
  __int64 *v4; // r8
  __int64 CurrentThread; // rsi
  unsigned __int64 v6; // rdi
  __int64 ready; // rax
  int v8; // r15d
  char v9; // di
  unsigned int v10; // r13d
  int v11; // r12d
  bool v12; // sf
  struct _KPRCB *v13; // r15
  _DWORD *SchedulerAssist; // rcx
  __int64 NextThread; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int v18; // ecx
  _DWORD *v19; // rax
  __int64 v20; // r8
  struct _KPRCB *v21; // r15
  char v22; // al
  __int64 v23; // rdx
  struct _KPRCB *v24; // r14
  char v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r9
  int v28; // r15d
  unsigned __int64 v29; // rdx
  unsigned int ReadySummary; // r11d
  int v31; // r11d
  unsigned int v32; // edx
  _LIST_ENTRY *DispatcherReadyListHead; // r9
  _QWORD *v34; // r14
  unsigned int v35; // r11d
  int v36; // esi
  unsigned int v37; // ecx
  __int64 v38; // r8
  _QWORD *v39; // r11
  _QWORD *v40; // rdi
  _QWORD *v41; // r13
  bool v42; // cl
  bool v43; // zf
  unsigned int v44; // r8d
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  volatile signed __int32 *v46; // r13
  int v47; // ebx
  char v48; // di
  _QWORD *v49; // r15
  int v50; // r14d
  volatile signed __int64 *v51; // r12
  unsigned int v52; // esi
  unsigned int v53; // ecx
  unsigned __int8 v54; // r8
  volatile signed __int64 *v55; // rsi
  volatile signed __int64 *v56; // r11
  __int64 v57; // rdx
  bool v58; // cl
  int v59; // r13d
  int v60; // r13d
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  _QWORD *v65; // rdx
  int v66; // r10d
  __int64 v67; // rdx
  int v68; // r14d
  _QWORD *v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // r8
  unsigned int v73; // r10d
  __int64 v74; // rdx
  int v75; // esi
  _QWORD *v76; // r14
  __int64 v77; // rdi
  __int64 v78; // rax
  struct _KPRCB *v79; // r13
  int v80; // r13d
  __int64 v81; // r8
  struct _KPRCB *v82; // rdi
  int GuestSchedulerAssistPriority; // eax
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rdx
  char v87; // cl
  bool IsThreadRankNonZero; // al
  _DWORD *v89; // rdx
  int v90; // eax
  __int64 *v91; // rcx
  char v92; // dl
  bool v93; // al
  _BYTE *v94; // rcx
  int v95; // eax
  _KTHREAD *IdleThread; // rax
  __int64 v97; // r8
  __int64 v98; // rdx
  struct _KPRCB *v99; // rdi
  _QWORD *v101; // [rsp+20h] [rbp-59h]
  __int64 v102; // [rsp+20h] [rbp-59h]
  _QWORD *v103; // [rsp+20h] [rbp-59h]
  char QueueIndex; // [rsp+28h] [rbp-51h]
  int v105; // [rsp+28h] [rbp-51h]
  __int64 *v106; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v107; // [rsp+38h] [rbp-41h]
  int v108; // [rsp+3Ch] [rbp-3Dh]
  struct _KPRCB *v109; // [rsp+40h] [rbp-39h]
  _KSHARED_READY_QUEUE *v110; // [rsp+48h] [rbp-31h]
  int v111; // [rsp+50h] [rbp-29h] BYREF
  int v112; // [rsp+54h] [rbp-25h] BYREF
  int v113; // [rsp+58h] [rbp-21h] BYREF
  int v114; // [rsp+5Ch] [rbp-1Dh]
  int v115; // [rsp+60h] [rbp-19h] BYREF
  int v116; // [rsp+64h] [rbp-15h] BYREF
  int v117; // [rsp+68h] [rbp-11h] BYREF
  int v118; // [rsp+6Ch] [rbp-Dh] BYREF
  int v119; // [rsp+70h] [rbp-9h] BYREF
  __int64 v120; // [rsp+78h] [rbp-1h]
  unsigned int v121; // [rsp+80h] [rbp+7h]
  unsigned int v122; // [rsp+84h] [rbp+Bh]
  char v123; // [rsp+E0h] [rbp+67h]
  int v124; // [rsp+E8h] [rbp+6Fh]
  char v125; // [rsp+E8h] [rbp+6Fh]
  char v126; // [rsp+E8h] [rbp+6Fh]
  unsigned int v127; // [rsp+F0h] [rbp+77h]
  struct _KPRCB *v128; // [rsp+F0h] [rbp+77h]
  int v129; // [rsp+F0h] [rbp+77h]
  int v130; // [rsp+F8h] [rbp+7Fh]
  int v131; // [rsp+F8h] [rbp+7Fh]
  struct _KPRCB *v132; // [rsp+F8h] [rbp+7Fh]
  __int64 v133; // [rsp+F8h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0LL;
  v123 = 0;
  v109 = CurrentPrcb;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  v120 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v6 = *(_QWORD *)(CurrentThread + 72);
    if ( v6 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v21 = KeGetCurrentPrcb();
      v111 = 0;
      while ( 1 )
      {
        LOBYTE(a2) = 1;
        KiSetVpThreadSpinLockCount(v21, a2);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v21, 0LL);
        do
          KeYieldProcessorEx(&v111);
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v6 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v28 = 127;
        }
        else
        {
          v22 = KiComputeNewPriority(CurrentThread, 1);
          v24 = KeGetCurrentPrcb();
          v25 = v22;
          v112 = 0;
          while ( 1 )
          {
            LOBYTE(v23) = 1;
            KiSetVpThreadSpinLockCount(v24, v23);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v24, 0LL);
            do
              KeYieldProcessorEx(&v112);
            while ( CurrentPrcb->PrcbLock );
          }
          if ( CurrentPrcb->NextThread )
            v26 = 0LL;
          else
            v26 = (__int64)CurrentPrcb;
          if ( !KiUpdateVPBackingThreadPriority(CurrentThread, v26) )
          {
            LOBYTE(v27) = CurrentPrcb->NextThread == 0LL;
            KiUpdateThreadPriority(CurrentPrcb, CurrentThread, (unsigned int)v25, v27);
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          v28 = *(unsigned __int8 *)(CurrentThread + 651);
          v3 = 1;
          v123 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v29 = v6 + (unsigned int)(v28 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v29;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v62 = KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)];
          if ( (*(_QWORD *)(*(_QWORD *)(v62 + 192) + 8LL) & *(_QWORD *)(*(_QWORD *)(v62 + 192) + 80LL) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      KiReleaseThreadLockSafe(CurrentThread);
      v4 = 0LL;
    }
  }
  LOBYTE(ready) = 32;
  v8 = 10;
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000320];
  v11 = 16;
  v12 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v107 = MEMORY[0xFFFFF78000000320];
  if ( v12 )
  {
    v9 = 1;
    LODWORD(ready) = KiShouldScanSharedReadyQueue((__int64)CurrentPrcb);
    if ( (_DWORD)ready )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      v110 = SharedReadyQueue;
      LODWORD(ready) = SharedReadyQueue->ReadySummary;
      if ( (ready & 0x7FFE) != 0 )
      {
        QueueIndex = SharedReadyQueue->QueueIndex;
        v128 = KeGetCurrentPrcb();
        v113 = (int)v4;
        KiSetVpThreadSpinLockCount(v128, 1LL);
        v46 = (volatile signed __int32 *)v110;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v110, 0LL) )
        {
          KiSetVpThreadSpinLockCount(v128, 0LL);
          do
            KeYieldProcessorEx(&v113);
          while ( v110->Lock );
          LOBYTE(v67) = 1;
          KiSetVpThreadSpinLockCount(v128, v67);
        }
        if ( (v110->ReadySummary & 0x7FFE) != 0 )
        {
          v47 = 10;
          v48 = QueueIndex;
          v49 = 0LL;
          v50 = MEMORY[0xFFFFF78000000320] - 300;
          v129 = 16;
          v51 = (volatile signed __int64 *)v110;
          v131 = MEMORY[0xFFFFF78000000320] - 300;
          v52 = __ROR4__(v110->ReadySummary & 0x7FFE, QueueIndex);
          do
          {
            _BitScanForward(&v53, v52);
            v121 = v53;
            v114 = v52 ^ (1 << v53);
            v54 = (v53 + v48) & 0x1F;
            v105 = v54;
            v55 = &v51[2 * v54 + 2];
            v56 = (volatile signed __int64 *)*v55;
            do
            {
              v57 = (__int64)(v56 - 27);
              v58 = 0;
              v43 = (*(_DWORD *)(v56 - 12) & 0x400000) == 0;
              v56 = (volatile signed __int64 *)*v56;
              v102 = v57;
              if ( !v43 )
              {
                GuestSchedulerAssistPriority = KeReadGuestSchedulerAssistPriority(v57);
                v57 = v102;
                v54 = v105;
                v58 = GuestSchedulerAssistPriority != *(char *)(v102 + 195);
              }
              v59 = v50 - *(_DWORD *)(v57 + 436);
              if ( v59 > 0 || v58 )
              {
                KiRemoveThreadFromSharedReadyQueue((__int64)v51, v57, v54);
                *(_BYTE *)(v64 + 388) = 7;
                *(_QWORD *)(v64 + 216) = v49;
                v49 = (_QWORD *)(v64 + 216);
                if ( v59 > 0 )
                  --v47;
              }
              v60 = --v129;
            }
            while ( v56 != v55 && v47 && v60 );
            v52 = v114;
            v103 = v49;
            v108 = v47;
          }
          while ( v114 && v47 && v60 );
          _InterlockedAnd64(v51, 0LL);
          KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          CurrentPrcb = v109;
          v11 = 16;
          v3 = v123;
          v43 = v49 == 0LL;
          v9 = 1;
          v8 = 10;
          if ( !v43 )
          {
            v68 = v131;
            v69 = v103;
            do
            {
              v70 = (__int64)(v69 - 27);
              v125 = 0;
              v71 = *(v69 - 18);
              LOBYTE(v61) = 1;
              v69 = (_QWORD *)*v69;
              v109 = (struct _KPRCB *)v71;
              v132 = KeGetCurrentPrcb();
              v115 = 0;
              KiSetVpThreadSpinLockCount(v132, v61);
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 64), 0LL) )
              {
                KiSetVpThreadSpinLockCount(v132, 0LL);
                do
                  KeYieldProcessorEx(&v115);
                while ( *(_QWORD *)(v70 + 64) );
                LOBYTE(v84) = 1;
                KiSetVpThreadSpinLockCount(v132, v84);
              }
              if ( v68 - *(_DWORD *)(v70 + 436) > 0 && *(char *)(v70 + 195) < 15 )
              {
                v125 = 1;
                KiSetPriorityBoost(0LL, v70, 15, (__int64)v109);
              }
              KiReleaseThreadLockSafe(v70);
              if ( v125 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v70, v73);
              KiDeferredReadyThread(CurrentPrcb, v70, v72);
            }
            while ( v69 );
            v3 = v123;
            v11 = 16;
            v60 = v129;
          }
          if ( v60 && v108 || (LOBYTE(ready) = v105 + 1, (unsigned int)(v105 + 1) > 0xE) )
            LOBYTE(ready) = 1;
          v46 = (volatile signed __int32 *)v110;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v110, 0LL);
          KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          LOBYTE(ready) = 1;
        }
        CurrentThread = v120;
        v4 = 0LL;
        *((_BYTE *)v46 + 594) = ready;
        v10 = v107;
      }
    }
  }
  v106 = v4;
  if ( KiGroupSchedulingEnabled )
  {
    LOBYTE(ready) = KiGroupSchedulingQuantumEnd((__int64)CurrentPrcb, CurrentThread, v3, &v106);
  }
  else
  {
    v13 = KeGetCurrentPrcb();
    v116 = (int)v4;
    SchedulerAssist = v13->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v85 = SchedulerAssist[5];
        v43 = v85 == -1;
        LODWORD(ready) = v85 + 1;
        SchedulerAssist[5] = ready;
        if ( v43 )
        {
          LOBYTE(ready) = *((_BYTE *)SchedulerAssist + 25);
          if ( !(_BYTE)ready && !*((_BYTE *)SchedulerAssist + 27) )
            LOBYTE(ready) = KiPerformUnboostKick(v13);
        }
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      KiSetVpThreadSpinLockCount(v13, 0LL);
      do
        KeYieldProcessorEx(&v116);
      while ( CurrentPrcb->PrcbLock );
      LOBYTE(v63) = 1;
      LOBYTE(ready) = KiSetVpThreadSpinLockCount(v13, v63);
    }
    v8 = 10;
  }
  if ( v9 )
  {
    ReadySummary = CurrentPrcb->ReadySummary;
    LOBYTE(ready) = v10 + 75;
    CurrentPrcb->ReadyScanTick = v10 + 75;
    v31 = ReadySummary & 0x7FFE;
    if ( v31 )
    {
      v32 = CurrentPrcb->QueueIndex;
      DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      v34 = 0LL;
      v107 = v32;
      v124 = MEMORY[0xFFFFF78000000320] - 300;
      v35 = __ROR4__(v31, v32);
      v36 = MEMORY[0xFFFFF78000000320] - 300;
      do
      {
        _BitScanForward(&v37, v35);
        v122 = v37;
        v130 = v35 ^ (1 << v37);
        v38 = ((_BYTE)v37 + (_BYTE)v32) & 0x1F;
        ready = (__int64)&DispatcherReadyListHead[v38];
        v127 = ((_BYTE)v37 + (_BYTE)v32) & 0x1F;
        v39 = (_QWORD *)ready;
        v40 = *(_QWORD **)ready;
        do
        {
          v41 = v40 - 27;
          v42 = 0;
          v43 = (*(_DWORD *)(v40 - 12) & 0x400000) == 0;
          v40 = (_QWORD *)*v40;
          if ( !v43 )
          {
            LODWORD(ready) = KeReadGuestSchedulerAssistPriority(v41);
            v38 = v127;
            v42 = (_DWORD)ready != *((char *)v41 + 195);
          }
          if ( v36 - *((_DWORD *)v41 + 109) > 0 || v42 )
          {
            LOBYTE(ready) = KiRemoveThreadFromReadyQueue(CurrentPrcb, v41 + 27, v38);
            *((_BYTE *)v41 + 388) = 7;
            *v65 = v34;
            v34 = v65;
            if ( v66 > 0 )
              --v8;
          }
          --v11;
        }
        while ( v40 != v39 && v8 && v11 );
        v35 = v130;
        v101 = v34;
        if ( !v130 )
          break;
        if ( !v8 )
          break;
        LOBYTE(v32) = v107;
        DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      }
      while ( v11 );
      CurrentThread = v120;
      v43 = v34 == 0LL;
      v3 = v123;
      if ( !v43 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        v75 = v124;
        v76 = v101;
        do
        {
          v77 = (__int64)(v76 - 27);
          v126 = 0;
          v78 = *(v76 - 18);
          v79 = KeGetCurrentPrcb();
          v76 = (_QWORD *)*v76;
          v133 = v78;
          v117 = 0;
          while ( 1 )
          {
            LOBYTE(v74) = 1;
            KiSetVpThreadSpinLockCount(v79, v74);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v77 + 64), 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v79, 0LL);
            do
              KeYieldProcessorEx(&v117);
            while ( *(_QWORD *)(v77 + 64) );
          }
          v80 = *(char *)(v77 + 195);
          if ( v75 - *(_DWORD *)(v77 + 436) > 0 && v80 < 15 )
          {
            v126 = 1;
            KiSetPriorityBoost(0LL, v77, 15, v133);
          }
          KiReleaseThreadLockSafe(v77);
          if ( v126 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
            EtwTraceAntiStarvationBoost(v77, (unsigned int)v80);
          KiDeferredReadyThread(CurrentPrcb, v77, v81);
        }
        while ( v76 );
        v82 = KeGetCurrentPrcb();
        LOBYTE(v74) = 1;
        v118 = 0;
        LOBYTE(ready) = KiSetVpThreadSpinLockCount(v82, v74);
        CurrentThread = v120;
        v3 = v123;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          KiSetVpThreadSpinLockCount(v82, 0LL);
          do
            KeYieldProcessorEx(&v118);
          while ( CurrentPrcb->PrcbLock );
          LOBYTE(v86) = 1;
          LOBYTE(ready) = KiSetVpThreadSpinLockCount(v82, v86);
        }
        LODWORD(v38) = v127;
      }
      if ( v11 && v8 || (v44 = v38 + 1, v44 > 0xE) )
        v44 = 1;
      CurrentPrcb->QueueIndex = v44;
    }
  }
  while ( 1 )
  {
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v3 )
        *(_BYTE *)(CurrentThread + 565) = 0;
LABEL_26:
      if ( !NextThread )
        goto LABEL_13;
      goto LABEL_27;
    }
    if ( !v3
      || (ready = KiSelectReadyThread((unsigned int)*(char *)(CurrentThread + 195), CurrentPrcb),
          (NextThread = ready) == 0) )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) == 0 )
        goto LABEL_13;
      if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        goto LABEL_13;
      }
      LOBYTE(ready) = KiSelectNextThread(CurrentPrcb, &v106);
      NextThread = (__int64)CurrentPrcb->NextThread;
      goto LABEL_26;
    }
LABEL_27:
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
    {
      LOBYTE(ready) = KiCpuSetSequence;
      if ( *(_QWORD *)(NextThread + 568) != KiCpuSetSequence )
      {
        LODWORD(ready) = *(_DWORD *)(NextThread + 116);
        if ( (ready & 8) == 0 )
        {
          if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
          {
            IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, CurrentPrcb);
            v87 = 1;
            if ( !IsThreadRankNonZero )
              v87 = *(_BYTE *)(CurrentThread + 195);
          }
          else
          {
            v87 = *(_BYTE *)(CurrentThread + 195);
          }
          *CurrentPrcb->PriorityState = v87;
          v89 = CurrentPrcb->SchedulerAssist;
          if ( v89 )
          {
            v90 = KiVpThreadSystemWorkPriority;
            if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
              v90 = v87;
            *v89 = v90;
          }
          if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
            KiSelectNextThread(CurrentPrcb, &v106);
          ready = (__int64)v106;
          v91 = (__int64 *)(NextThread + 216);
          *(_BYTE *)(NextThread + 388) = 7;
          NextThread = 0LL;
          *v91 = ready;
          v106 = v91;
        }
      }
    }
LABEL_13:
    if ( !v106 )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        v93 = KiIsThreadRankNonZero(NextThread, CurrentPrcb);
        v92 = 1;
        if ( !v93 )
          v92 = *(_BYTE *)(NextThread + 195);
      }
      else
      {
        v92 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v92;
      v94 = CurrentPrcb->SchedulerAssist;
      if ( v94 )
      {
        v95 = KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
          v95 = v92;
        *(_DWORD *)v94 = v95;
        v94 = CurrentPrcb->SchedulerAssist;
      }
      IdleThread = CurrentPrcb->IdleThread;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      if ( v94 )
        v94[24] = NextThread == (_QWORD)IdleThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v106, v97);
    v99 = KeGetCurrentPrcb();
    v119 = 0;
    v106 = 0LL;
    while ( 1 )
    {
      LOBYTE(v98) = 1;
      LOBYTE(ready) = KiSetVpThreadSpinLockCount(v99, v98);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v99, 0LL);
      do
        KeYieldProcessorEx(&v119);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        LODWORD(ready) = v17[5] - 1;
        v17[5] = ready;
        if ( !(_DWORD)ready )
        {
          LOBYTE(ready) = *((_BYTE *)v17 + 25);
          if ( !(_BYTE)ready && !*((_BYTE *)v17 + 27) )
            LOBYTE(ready) = KiPerformUnboostKick(v16);
        }
      }
    }
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
        LOBYTE(v18) = 1;
      else
        LOBYTE(v18) = *(_BYTE *)(NextThread + 195);
    }
    else
    {
      LOBYTE(v18) = *(_BYTE *)(NextThread + 195);
    }
    *CurrentPrcb->PriorityState = v18;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
        v18 = KiVpThreadSystemWorkPriority;
      else
        v18 = (char)v18;
      *v19 = v18;
    }
    CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
    if ( *(_BYTE *)(NextThread + 388) == 1 )
      *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                    - *(_DWORD *)(NextThread + 436)
                                    + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    KiAbProcessContextSwitch(CurrentThread, 1LL);
    LOBYTE(v20) = 1;
    LOBYTE(ready) = KiSwapContext(CurrentThread, NextThread, v20);
  }
  return ready;
}
