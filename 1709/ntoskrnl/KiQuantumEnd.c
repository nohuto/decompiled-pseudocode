/*
 * XREFs of KiQuantumEnd @ 0x140090E30
 * Callers:
 *     KiIdleLoop @ 0x140184970 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x140188000 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400070C8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KiComputeNewPriority @ 0x140090D60 (KiComputeNewPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140090DE8 (KiTryScheduleNextForegroundBoost.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140092B80 (KiCheckPreferredHeteroProcessor.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSetPriorityBoost @ 0x1400D1540 (KiSetPriorityBoost.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1400D1604 (KiRemoveThreadFromReadyQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiShouldScanSharedReadyQueue @ 0x14011B5DC (KiShouldScanSharedReadyQueue.c)
 *     KiSetProcessorIdle @ 0x140128644 (KiSetProcessorIdle.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     EtwTraceAntiStarvationBoost @ 0x14017D254 (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

_QWORD *__fastcall KiQuantumEnd(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v4; // r9
  unsigned __int8 v5; // r14
  __int64 CurrentThread; // rdi
  unsigned __int64 v7; // rsi
  int v8; // r12d
  char v9; // si
  int v10; // r15d
  int v11; // r13d
  bool v12; // sf
  unsigned int v13; // r12d
  unsigned __int64 *v14; // rsi
  _QWORD *result; // rax
  __int64 v16; // r8
  char v17; // cl
  _DWORD *v18; // rdx
  __int64 v19; // r8
  char v20; // r14
  _KTHREAD *NextThread; // rdx
  __int64 v22; // rcx
  struct _KPRCB *v23; // rcx
  bool v24; // r15
  _DWORD *SchedulerAssist; // rcx
  int v26; // r15d
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int ReadySummary; // r10d
  int v30; // r10d
  char v31; // di
  unsigned int v32; // r10d
  unsigned int v33; // eax
  char v34; // r10
  _QWORD *v35; // rdi
  unsigned int v36; // r10d
  _LIST_ENTRY *v37; // r11
  _LIST_ENTRY *Flink; // rsi
  struct _KPRCB *p_Blink; // rcx
  bool v40; // dl
  int v41; // r15d
  _QWORD *v42; // rsi
  int v43; // ecx
  __int64 v44; // rdi
  int v45; // ebx
  char v46; // si
  _QWORD *v47; // r13
  __int64 v48; // r9
  unsigned int v49; // r11d
  unsigned int v50; // eax
  _QWORD **v51; // r15
  _QWORD *v52; // r11
  __int64 v53; // rdx
  bool v54; // cl
  char v55; // cl
  char v56; // al
  _QWORD *v57; // rdx
  unsigned int v58; // r15d
  __int64 v59; // rdi
  __int64 v60; // rdx
  int v61; // ecx
  _QWORD *v62; // rax
  unsigned int v63; // r15d
  __int64 v64; // rdi
  struct _KPRCB *v65; // rdx
  _QWORD *v66; // rax
  int v67; // ecx
  __int64 v68; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  int v70; // edx
  int v71; // r8d
  struct _SINGLE_LIST_ENTRY *v72; // r8
  int v73; // r8d
  int v74; // ecx
  int SegSs_high; // edx
  char v76; // cl
  char IsThreadRankNonZero; // al
  _DWORD *v78; // rdx
  _QWORD *v79; // rcx
  char v80; // cl
  char v81; // al
  _DWORD *v82; // rdx
  _BYTE *v83; // rcx
  bool v84; // zf
  _QWORD *v85; // [rsp+20h] [rbp-49h]
  _QWORD *v86; // [rsp+20h] [rbp-49h]
  _QWORD *v87; // [rsp+20h] [rbp-49h]
  _QWORD *v88; // [rsp+28h] [rbp-41h] BYREF
  unsigned int v89; // [rsp+30h] [rbp-39h]
  int QueueIndex; // [rsp+34h] [rbp-35h]
  int v91; // [rsp+38h] [rbp-31h]
  unsigned int v92; // [rsp+3Ch] [rbp-2Dh]
  struct _KPRCB *v93; // [rsp+40h] [rbp-29h]
  int v94; // [rsp+48h] [rbp-21h] BYREF
  int v95; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v96; // [rsp+50h] [rbp-19h] BYREF
  int v97; // [rsp+54h] [rbp-15h]
  int v98; // [rsp+58h] [rbp-11h] BYREF
  int v99; // [rsp+5Ch] [rbp-Dh] BYREF
  int v100; // [rsp+60h] [rbp-9h] BYREF
  int v101; // [rsp+64h] [rbp-5h] BYREF
  __int64 v102; // [rsp+68h] [rbp-1h]
  _KSHARED_READY_QUEUE *SharedReadyQueue; // [rsp+70h] [rbp+7h]
  unsigned int v104; // [rsp+78h] [rbp+Fh]
  unsigned int v105; // [rsp+7Ch] [rbp+13h]
  unsigned int v106; // [rsp+D0h] [rbp+67h]
  char v107; // [rsp+D0h] [rbp+67h]
  char v108; // [rsp+D0h] [rbp+67h]
  char v109; // [rsp+D8h] [rbp+6Fh]
  int v110; // [rsp+D8h] [rbp+6Fh]
  unsigned int v111; // [rsp+E0h] [rbp+77h]
  unsigned int v112; // [rsp+E0h] [rbp+77h]
  __int64 v113; // [rsp+E0h] [rbp+77h]
  int v114; // [rsp+E0h] [rbp+77h]
  int v115; // [rsp+E8h] [rbp+7Fh]
  int v116; // [rsp+E8h] [rbp+7Fh]
  int v117; // [rsp+E8h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  v5 = 0;
  v93 = CurrentPrcb;
  v109 = 0;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  v102 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v7 = *(_QWORD *)(CurrentThread + 72);
    if ( v7 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v94 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v94);
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v7 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v26 = 127;
        }
        else
        {
          v20 = KiComputeNewPriority(CurrentThread, 1);
          v95 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v95);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          v22 = 0LL;
          if ( !NextThread )
            v22 = (__int64)CurrentPrcb;
          if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0 )
          {
            v70 = **(_DWORD **)(CurrentThread + 1512);
            v71 = *(char *)(CurrentThread + 563);
            if ( v70 >= v71 )
            {
              v71 = **(_DWORD **)(CurrentThread + 1512);
              if ( v70 >= 16 )
                v71 = 15;
            }
            if ( v71 != *(char *)(CurrentThread + 195) )
              KiUpdateThreadPriority(v22, CurrentThread, v71, v22 != 0);
          }
          else
          {
            v23 = KeGetCurrentPrcb();
            v24 = NextThread == 0LL;
            if ( v20 > *(char *)(CurrentThread + 195) )
            {
              if ( *(_BYTE *)(CurrentThread + 793) )
              {
                v72 = (struct _SINGLE_LIST_ENTRY *)(CurrentThread + 1376);
                if ( *(_QWORD *)(CurrentThread + 1376) == 1LL )
                {
                  p_AbPropagateBoostsList = &v23->AbPropagateBoostsList;
                  if ( v23 != (struct _KPRCB *)-25720LL )
                  {
                    v72->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = v72;
                    _InterlockedIncrement16((volatile signed __int16 *)(CurrentThread + 1420));
                    KiAbQueueAutoBoostDpc(v23);
                  }
                }
              }
            }
            *(_BYTE *)(CurrentThread + 195) = v20;
            if ( v24 )
            {
              if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
              {
                if ( (unsigned __int8)KiIsThreadRankNonZero(CurrentThread, CurrentPrcb) )
                  v20 = 1;
                else
                  v20 = *(_BYTE *)(CurrentThread + 195);
              }
              *CurrentPrcb->PriorityState = v20;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
                *SchedulerAssist = v20;
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v26 = *(unsigned __int8 *)(CurrentThread + 651);
          v5 = 1;
          v109 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v27 = v7 + (unsigned int)(v26 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v27;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v28 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
          if ( (*(_QWORD *)(v28 + 80) & *(_QWORD *)(CurrentThread + 576) & *(_QWORD *)(v28 + 8)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      v4 = 0LL;
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
  }
  v8 = 10;
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000320];
  v11 = 16;
  v12 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v91 = MEMORY[0xFFFFF78000000320];
  if ( v12 )
  {
    v9 = 1;
    if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        v44 = (__int64)SharedReadyQueue;
        v96 = (int)v4;
        QueueIndex = SharedReadyQueue->QueueIndex;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
        {
          do
            KeYieldProcessorEx(&v96);
          while ( *(_QWORD *)v44 );
        }
        if ( (*(_DWORD *)(v44 + 8) & 0x7FFE) != 0 )
        {
          v45 = 16;
          v46 = QueueIndex;
          v47 = 0LL;
          v48 = (unsigned int)(MEMORY[0xFFFFF78000000320] - 300);
          v49 = __ROR4__(*(_DWORD *)(v44 + 8) & 0x7FFE, QueueIndex);
          v112 = MEMORY[0xFFFFF78000000320] - 300;
          do
          {
            _BitScanForward(&v50, v49);
            v104 = v50;
            v97 = v49 ^ (1 << v50);
            a3 = ((_BYTE)v50 + v46) & 0x1F;
            v92 = ((_BYTE)v50 + v46) & 0x1F;
            v51 = (_QWORD **)(v44 + 16 * (a3 + 1));
            v52 = *v51;
            do
            {
              v53 = (__int64)(v52 - 27);
              v54 = 0;
              v84 = (*(_DWORD *)(v52 - 12) & 0x400000) == 0;
              v52 = (_QWORD *)*v52;
              if ( !v84 )
              {
                v73 = **(_DWORD **)(v53 + 1512);
                v74 = *(char *)(v53 + 563);
                if ( v73 >= v74 )
                {
                  v74 = **(_DWORD **)(v53 + 1512);
                  if ( v73 >= 16 )
                    v74 = 15;
                }
                a3 = v92;
                v54 = v74 != *(char *)(v53 + 195);
              }
              v116 = v48 - *(_DWORD *)(v53 + 436);
              if ( v116 > 0 || v54 )
              {
                KiRemoveThreadFromSharedReadyQueue(v44, v53, a3);
                v48 = v112;
                *(_BYTE *)(v68 + 388) = 7;
                *(_QWORD *)(v68 + 216) = v47;
                v47 = (_QWORD *)(v68 + 216);
                if ( v116 > 0 )
                  --v8;
              }
              --v45;
            }
            while ( v52 != v51 && v8 && v45 );
            v49 = v97;
            v46 = QueueIndex;
            v117 = v8;
            v89 = v45;
            v86 = v47;
          }
          while ( v97 && v8 && v45 );
          _InterlockedAnd64((volatile signed __int64 *)v44, 0LL);
          CurrentPrcb = v93;
          v84 = v47 == 0LL;
          v9 = 1;
          v11 = 16;
          v10 = v91;
          v8 = 10;
          if ( !v84 )
          {
            v62 = v86;
            v63 = v112;
            do
            {
              v64 = (__int64)(v62 - 27);
              v108 = 0;
              v65 = (struct _KPRCB *)*(v62 - 18);
              v66 = (_QWORD *)*v62;
              v93 = v65;
              v87 = v66;
              v98 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v98);
                while ( *(_QWORD *)(v64 + 64) );
              }
              v67 = *(char *)(v64 + 195);
              v114 = v67;
              if ( (int)(v63 - *(_DWORD *)(v64 + 436)) > 0 && v67 < 15 )
              {
                LOBYTE(a3) = 15;
                v108 = 1;
                KiSetPriorityBoost(0LL, v64, a3, v93);
                v67 = v114;
              }
              *(_QWORD *)(v64 + 64) = 0LL;
              if ( v108 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v64, (unsigned int)v67, a3, v48);
              KiDeferredReadyThread((__int64)CurrentPrcb, v64, a3);
              v62 = v87;
            }
            while ( v87 );
            v10 = v91;
            v44 = (__int64)SharedReadyQueue;
            a3 = v92;
          }
          if ( v89 && v117 )
          {
            v55 = 1;
          }
          else
          {
            v55 = 1;
            if ( (unsigned int)(a3 + 1) <= 0xE )
              v55 = a3 + 1;
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v44, 0LL);
          v55 = 1;
        }
        *(_BYTE *)(v44 + 594) = v55;
        v4 = 0LL;
        CurrentThread = v102;
      }
    }
  }
  v88 = v4;
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd((__int64)CurrentPrcb, CurrentThread, v5, (__int64)&v88);
  }
  else
  {
    v13 = (unsigned int)v4;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v13);
      }
      while ( CurrentPrcb->PrcbLock );
    }
    v8 = 10;
  }
  if ( v9 )
  {
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = v10 + 75;
    v30 = ReadySummary & 0x7FFE;
    if ( v30 )
    {
      v111 = CurrentPrcb->QueueIndex;
      v31 = v111;
      v85 = 0LL;
      v32 = __ROR4__(v30, v111);
      a3 = (unsigned int)(MEMORY[0xFFFFF78000000320] - 300);
      v106 = MEMORY[0xFFFFF78000000320] - 300;
      do
      {
        _BitScanForward(&v33, v32);
        v105 = v33;
        v115 = v32 ^ (1 << v33);
        v34 = v33 + v31;
        v35 = v85;
        v36 = v34 & 0x1F;
        v89 = v36;
        v37 = &CurrentPrcb->DispatcherReadyListHead[v36];
        Flink = v37->Flink;
        do
        {
          p_Blink = (struct _KPRCB *)&Flink[-14].Blink;
          v40 = 0;
          v84 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
          Flink = Flink->Flink;
          v93 = p_Blink;
          if ( !v84 )
          {
            v4 = (_QWORD *)*(unsigned int *)p_Blink->ProcessorState.ContextFrame.VectorRegister[15].High;
            SegSs_high = SHIBYTE(p_Blink->ProcessorState.ContextFrame.SegSs);
            if ( (int)v4 >= SegSs_high )
            {
              SegSs_high = *(_DWORD *)p_Blink->ProcessorState.ContextFrame.VectorRegister[15].High;
              if ( (int)v4 >= 16 )
                SegSs_high = 15;
            }
            v40 = SegSs_high != SBYTE3(p_Blink->ParentNode);
          }
          v41 = a3 - HIDWORD(p_Blink->ProcessorState.SpecialRegisters.MsrGsSwap);
          if ( v41 > 0 || v40 )
          {
            KiRemoveThreadFromReadyQueue(CurrentPrcb, &p_Blink->ScbOffset, v36);
            BYTE4(v93->ProcessorState.SpecialRegisters.LastBranchToRip) = 7;
            a3 = v106;
            *v57 = v35;
            v35 = v57;
            if ( v41 > 0 )
              --v8;
          }
          --v11;
        }
        while ( Flink != v37 && v8 && v11 );
        v32 = v115;
        v85 = v35;
        v31 = v111;
      }
      while ( v115 && v8 && v11 );
      v42 = v85;
      CurrentThread = v102;
      v5 = v109;
      if ( v85 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        v58 = v106;
        do
        {
          v59 = (__int64)(v42 - 27);
          v107 = 0;
          v60 = *(v42 - 18);
          v42 = (_QWORD *)*v42;
          v113 = v60;
          v99 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v99);
            while ( *(_QWORD *)(v59 + 64) );
          }
          v61 = *(char *)(v59 + 195);
          v110 = v61;
          if ( (int)(v58 - *(_DWORD *)(v59 + 436)) > 0 && v61 < 15 )
          {
            LOBYTE(a3) = 15;
            v107 = 1;
            KiSetPriorityBoost(0LL, v59, a3, v113);
            v61 = v110;
          }
          *(_QWORD *)(v59 + 64) = 0LL;
          if ( v107 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
            EtwTraceAntiStarvationBoost(v59, (unsigned int)v61, a3, v4);
          KiDeferredReadyThread((__int64)CurrentPrcb, v59, a3);
        }
        while ( v42 );
        CurrentThread = v102;
        v100 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v100);
          while ( CurrentPrcb->PrcbLock );
        }
      }
      if ( v11 && v8 )
      {
        v43 = 1;
      }
      else
      {
        v43 = 1;
        if ( v89 + 1 <= 0xE )
          v43 = v89 + 1;
      }
      CurrentPrcb->QueueIndex = v43;
    }
  }
  while ( 1 )
  {
    v14 = (unsigned __int64 *)CurrentPrcb->NextThread;
    if ( v14 )
    {
      if ( v5 )
        *(_BYTE *)(CurrentThread + 565) = 0;
    }
    else
    {
      if ( v5 )
      {
        v14 = KiSelectReadyThread(*(char *)(CurrentThread + 195), (__int64)CurrentPrcb, (unsigned __int64 *)a3);
        if ( v14 )
          goto LABEL_55;
      }
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) == 0 )
        goto LABEL_13;
      KiSelectNextThread(CurrentPrcb, &v88, a3, v4);
      v14 = (unsigned __int64 *)CurrentPrcb->NextThread;
    }
    if ( !v14 )
      goto LABEL_13;
LABEL_55:
    if ( v14 == (unsigned __int64 *)CurrentPrcb->IdleThread
      || (v14[71] == KiCpuSetSequence || (*((_DWORD *)v14 + 29) & 8) != 0) && (v14[15] & 0x1000) == 0 )
    {
LABEL_13:
      result = v88;
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, CurrentPrcb);
      v76 = 1;
      if ( !IsThreadRankNonZero )
        v76 = *(_BYTE *)(CurrentThread + 195);
    }
    else
    {
      v76 = *(_BYTE *)(CurrentThread + 195);
    }
    *CurrentPrcb->PriorityState = v76;
    v78 = CurrentPrcb->SchedulerAssist;
    if ( v78 )
      *v78 = v76;
    if ( (unsigned __int64 *)CurrentPrcb->NextThread == v14 )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)v14 + 30, 0xCu) )
      {
        CurrentPrcb->NextThread = 0LL;
        if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) != 0 )
          KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL);
      }
      else
      {
        KiSelectNextThread(CurrentPrcb, &v88, a3, v4);
      }
    }
    v79 = v88;
    result = v14 + 27;
    *((_BYTE *)v14 + 388) = 7;
    v14 = 0LL;
    *result = v79;
    v88 = result;
LABEL_14:
    if ( !result )
      break;
    if ( v14 && v14 != (unsigned __int64 *)CurrentPrcb->IdleThread && (unsigned __int64 *)CurrentPrcb->NextThread != v14 )
    {
      if ( (*((_BYTE *)v14 + 2) & 4) != 0 )
      {
        v81 = KiIsThreadRankNonZero(v14, CurrentPrcb);
        v80 = 1;
        if ( !v81 )
          v80 = *((_BYTE *)v14 + 195);
      }
      else
      {
        v80 = *((_BYTE *)v14 + 195);
      }
      *CurrentPrcb->PriorityState = v80;
      v82 = CurrentPrcb->SchedulerAssist;
      if ( v82 )
        *v82 = v80;
      v83 = CurrentPrcb->SchedulerAssist;
      v84 = v14 == (unsigned __int64 *)CurrentPrcb->IdleThread;
      CurrentPrcb->NextThread = (_KTHREAD *)v14;
      if ( v83 )
        v83[8] = v84;
      if ( *((_BYTE *)v14 + 388) == 1 )
        *((_DWORD *)v14 + 33) = *((_DWORD *)v14 + 33) - *((_DWORD *)v14 + 109) + MEMORY[0xFFFFF78000000320];
      *((_BYTE *)v14 + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiReadyDeferredReadyList(CurrentPrcb, &v88, a3, v4);
    v88 = 0LL;
    v101 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v101);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !v14 || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
    _enable();
    if ( (*((_BYTE *)v14 + 2) & 4) != 0 )
    {
      v56 = KiIsThreadRankNonZero(v14, CurrentPrcb);
      v17 = 1;
      if ( !v56 )
        v17 = *((_BYTE *)v14 + 195);
    }
    else
    {
      v17 = *((_BYTE *)v14 + 195);
    }
    *CurrentPrcb->PriorityState = v17;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
      *v18 = v17;
    CurrentPrcb->CurrentThread = (_KTHREAD *)v14;
    if ( *((_BYTE *)v14 + 388) == 1 )
    {
      v16 = (unsigned int)(*((_DWORD *)v14 + 33) - *((_DWORD *)v14 + 109));
      *((_DWORD *)v14 + 33) = v16 + MEMORY[0xFFFFF78000000320];
    }
    *((_BYTE *)v14 + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v16);
    KiAbProcessContextSwitch(CurrentThread, 1LL);
    LOBYTE(v19) = 1;
    return (_QWORD *)KiSwapContext(CurrentThread, v14, v19);
  }
  return result;
}
