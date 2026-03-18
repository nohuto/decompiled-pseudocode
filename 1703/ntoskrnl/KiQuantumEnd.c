/*
 * XREFs of KiQuantumEnd @ 0x140041B30
 * Callers:
 *     KiIdleLoop @ 0x140184ED0 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x140188550 (KiDispatchInterrupt.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x14001ACCC (KiSetPriorityBoost.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14001AEE8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiShouldScanSharedReadyQueue @ 0x140025C4C (KiShouldScanSharedReadyQueue.c)
 *     KiSetProcessorIdle @ 0x140034028 (KiSetProcessorIdle.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiCheckThreadAffinity @ 0x14004144C (KiCheckThreadAffinity.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400427D0 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140042818 (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeNewPriority @ 0x140042850 (KiComputeNewPriority.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1401608C0 (KiRemoveThreadFromReadyQueue.c)
 *     EtwTraceAntiStarvationBoost @ 0x14017D83C (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

_QWORD *KiQuantumEnd()
{
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v1; // rdx
  unsigned __int8 v2; // r14
  unsigned __int64 CurrentThread; // rdi
  unsigned __int64 v4; // rsi
  int v5; // r13d
  char v6; // si
  int v7; // r15d
  int v8; // r12d
  bool v9; // sf
  __int64 NextThread; // rsi
  _QWORD *result; // rax
  char v12; // r14
  struct _KPRCB *v13; // rcx
  bool v14; // r15
  int v15; // r15d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // r8
  struct _SINGLE_LIST_ENTRY *v20; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  __int64 v22; // r15
  int v23; // r11d
  _QWORD *v24; // r10
  int v25; // edx
  char v26; // r13
  __int64 v27; // r9
  unsigned int v28; // r11d
  unsigned int v29; // ecx
  char v30; // r8
  int v31; // r13d
  __int64 v32; // r8
  _QWORD **v33; // rdi
  _QWORD *v34; // r11
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // r8d
  unsigned int ReadySummary; // r10d
  unsigned int v39; // edx
  _LIST_ENTRY *DispatcherReadyListHead; // r9
  int v41; // r10d
  _QWORD *v42; // r8
  unsigned int v43; // r10d
  unsigned int v44; // ecx
  int v45; // r10d
  unsigned int v46; // esi
  _LIST_ENTRY *v47; // r15
  _LIST_ENTRY *Flink; // r11
  unsigned __int64 p_Blink; // rcx
  int v50; // eax
  _LIST_ENTRY *v51; // rdx
  unsigned int v52; // esi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // r15
  unsigned __int64 v56; // rax
  _QWORD *v57; // r8
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // r15
  unsigned __int64 v61; // rax
  _QWORD *v62; // r10
  int v63; // ecx
  char v64; // cl
  _QWORD *v65; // rcx
  char v66; // cl
  char IsThreadRankNonZero; // al
  _QWORD *v68; // [rsp+20h] [rbp-49h]
  unsigned __int64 v69; // [rsp+20h] [rbp-49h]
  _QWORD *v70; // [rsp+20h] [rbp-49h]
  _QWORD *v71; // [rsp+20h] [rbp-49h]
  _QWORD *v72; // [rsp+28h] [rbp-41h] BYREF
  int v73; // [rsp+30h] [rbp-39h]
  unsigned __int64 v74; // [rsp+38h] [rbp-31h]
  int v75; // [rsp+40h] [rbp-29h] BYREF
  int v76; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v77; // [rsp+48h] [rbp-21h]
  int v78; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v79; // [rsp+50h] [rbp-19h]
  int v80; // [rsp+54h] [rbp-15h]
  int v81; // [rsp+58h] [rbp-11h] BYREF
  int v82; // [rsp+5Ch] [rbp-Dh] BYREF
  int v83; // [rsp+60h] [rbp-9h] BYREF
  int v84; // [rsp+64h] [rbp-5h] BYREF
  _KSHARED_READY_QUEUE *SharedReadyQueue; // [rsp+68h] [rbp-1h]
  unsigned int v86; // [rsp+70h] [rbp+7h]
  unsigned int v87; // [rsp+74h] [rbp+Bh]
  char QueueIndex; // [rsp+D0h] [rbp+67h]
  int v89; // [rsp+D0h] [rbp+67h]
  char v90; // [rsp+D0h] [rbp+67h]
  char v91; // [rsp+D0h] [rbp+67h]
  int v92; // [rsp+D8h] [rbp+6Fh]
  int v93; // [rsp+D8h] [rbp+6Fh]
  int v94; // [rsp+D8h] [rbp+6Fh]
  int v95; // [rsp+E0h] [rbp+77h]
  char v96; // [rsp+E0h] [rbp+77h]
  unsigned __int64 v97; // [rsp+E0h] [rbp+77h]
  int v98; // [rsp+E8h] [rbp+7Fh] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  v2 = 0;
  CurrentThread = (unsigned __int64)CurrentPrcb->CurrentThread;
  v74 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v4 = *(_QWORD *)(CurrentThread + 72);
    if ( v4 >= *(_QWORD *)(CurrentThread + 32) || KeHeteroSystem != 1 && *(_BYTE *)(CurrentThread + 125) )
    {
      v98 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v98);
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      if ( v4 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x80u) == 0 || *(char *)(CurrentThread + 195) < 16 )
        {
          v12 = KiComputeNewPriority(CurrentThread, 1LL);
          v75 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v75);
            while ( CurrentPrcb->PrcbLock );
          }
          v13 = KeGetCurrentPrcb();
          v14 = CurrentPrcb->NextThread == 0LL;
          if ( v12 > *(char *)(CurrentThread + 195) )
          {
            if ( *(_BYTE *)(CurrentThread + 793) )
            {
              v20 = (struct _SINGLE_LIST_ENTRY *)(CurrentThread + 1376);
              if ( *(_QWORD *)(CurrentThread + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = &v13->AbPropagateBoostsList;
                if ( v13 != (struct _KPRCB *)-26040LL )
                {
                  v20->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = v20;
                  _InterlockedIncrement16((volatile signed __int16 *)(CurrentThread + 1420));
                  KiAbQueueAutoBoostDpc(v13);
                }
              }
            }
          }
          *(_BYTE *)(CurrentThread + 195) = v12;
          if ( v14 )
          {
            if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
            {
              if ( (unsigned __int8)KiIsThreadRankNonZero(CurrentThread, CurrentPrcb) )
                v12 = 1;
              else
                v12 = *(_BYTE *)(CurrentThread + 195);
            }
            *CurrentPrcb->PriorityState = v12;
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v15 = *(unsigned __int8 *)(CurrentThread + 651);
          v2 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        else
        {
          v15 = 127;
        }
        v16 = v4 + (unsigned int)(v15 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 4u);
        *(_QWORD *)(CurrentThread + 32) = v16;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v17 = KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)];
          if ( (*(_QWORD *)(*(_QWORD *)(v17 + 192) + 8LL) & *(_QWORD *)(*(_QWORD *)(v17 + 192) + 80LL) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xBu);
      v1 = 0LL;
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
  }
  v5 = 10;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = 16;
  v9 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v80 = MEMORY[0xFFFFF78000000320];
  if ( v9 )
  {
    v6 = 1;
    if ( KiShouldScanSharedReadyQueue((__int64)CurrentPrcb) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        v22 = (__int64)SharedReadyQueue;
        v76 = (int)v1;
        QueueIndex = SharedReadyQueue->QueueIndex;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
        {
          do
            KeYieldProcessorEx(&v76);
          while ( *(_QWORD *)v22 );
        }
        v23 = *(_DWORD *)(v22 + 8) & 0x7FFE;
        if ( v23 )
        {
          v24 = 0LL;
          v25 = 16;
          v92 = 10;
          v26 = QueueIndex;
          v68 = 0LL;
          v27 = (unsigned int)(MEMORY[0xFFFFF78000000320] - 300);
          v95 = 16;
          v77 = MEMORY[0xFFFFF78000000320] - 300;
          v28 = __ROR4__(v23, QueueIndex);
          do
          {
            _BitScanForward(&v29, v28);
            v86 = v29;
            v73 = v28 ^ (1 << v29);
            v30 = v29 + v26;
            v31 = v92;
            v32 = v30 & 0x1F;
            v79 = v32;
            v33 = (_QWORD **)(v22 + 16 + 16LL * (unsigned int)v32);
            v34 = *v33;
            do
            {
              v35 = (__int64)(v34 - 27);
              v36 = v27 - *((_DWORD *)v34 + 55);
              v34 = (_QWORD *)*v34;
              if ( v36 > 0 )
              {
                KiRemoveThreadFromSharedReadyQueue(v22, v35, v32);
                v27 = v77;
                v24 = (_QWORD *)(v59 + 216);
                *(_BYTE *)(v59 + 388) = 7;
                --v31;
                v25 = v95;
                *v24 = v68;
                v68 = v24;
              }
              v95 = --v25;
            }
            while ( v34 != v33 && v31 && v25 );
            v28 = v73;
            v92 = v31;
            v26 = QueueIndex;
          }
          while ( v73 && v92 && v25 );
          _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
          CurrentThread = v74;
          v8 = 16;
          v5 = 10;
          if ( v24 )
          {
            do
            {
              v60 = (__int64)(v24 - 27);
              v91 = 0;
              v61 = *(v24 - 18);
              v62 = (_QWORD *)*v24;
              v74 = v61;
              v71 = v62;
              v78 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v78);
                while ( *(_QWORD *)(v60 + 64) );
              }
              v63 = *(char *)(v60 + 195);
              v73 = v63;
              if ( v63 < 15 )
              {
                v91 = 1;
                KiSetPriorityBoost(0LL, v60, 15, v74);
                v63 = v73;
              }
              *(_QWORD *)(v60 + 64) = 0LL;
              if ( v91 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v60, (unsigned int)v63, v32, v27);
              KiDeferredReadyThread(CurrentPrcb, v60, v32, v27);
              v24 = v71;
            }
            while ( v71 );
            v22 = (__int64)SharedReadyQueue;
            LODWORD(v32) = v79;
            v25 = v95;
          }
          if ( v25 && v92 )
          {
            LOBYTE(v37) = 1;
          }
          else
          {
            v37 = v32 + 1;
            if ( v37 > 0xE )
              LOBYTE(v37) = 1;
          }
          *(_BYTE *)(v22 + 594) = v37;
          v1 = 0LL;
          v7 = v80;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
          v1 = 0LL;
          *(_BYTE *)(v22 + 594) = 1;
          v7 = v80;
        }
      }
    }
  }
  v72 = v1;
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v2, &v72);
  }
  else
  {
    v81 = (int)v1;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v81);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( v6 )
  {
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = v7 + 75;
    if ( (ReadySummary & 0x7FFE) != 0 )
    {
      v39 = CurrentPrcb->QueueIndex;
      DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      v96 = v39;
      v41 = ReadySummary & 0x7FFE;
      if ( !v41 )
        goto LABEL_89;
      v42 = 0LL;
      v69 = 0LL;
      v89 = MEMORY[0xFFFFF78000000320] - 300;
      v43 = __ROR4__(v41, v39);
      do
      {
        _BitScanForward(&v44, v43);
        v87 = v44;
        v93 = v43 ^ (1 << v44);
        v45 = v89;
        v46 = ((_BYTE)v44 + (_BYTE)v39) & 0x1F;
        v47 = &DispatcherReadyListHead[((_BYTE)v44 + (_BYTE)v39) & 0x1F];
        Flink = v47->Flink;
        do
        {
          p_Blink = (unsigned __int64)&Flink[-14].Blink;
          v50 = v45 - HIDWORD(Flink[13].Blink);
          v51 = Flink;
          Flink = Flink->Flink;
          v74 = p_Blink;
          if ( v50 > 0 )
          {
            KiRemoveThreadFromReadyQueue(CurrentPrcb, v51, v46);
            v53 = v74;
            v54 = v69;
            *(_BYTE *)(v74 + 388) = 7;
            v42 = (_QWORD *)(v53 + 216);
            v69 = v53 + 216;
            --v5;
            *(_QWORD *)(v53 + 216) = v54;
          }
          --v8;
        }
        while ( Flink != v47 && v5 && v8 );
        v43 = v93;
        if ( !v93 )
          break;
        if ( !v5 )
          break;
        LOBYTE(v39) = v96;
        DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      }
      while ( v8 );
      if ( v42 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        do
        {
          v55 = (__int64)(v42 - 27);
          v90 = 0;
          v56 = *(v42 - 18);
          v57 = (_QWORD *)*v42;
          v97 = v56;
          v70 = v57;
          v82 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v82);
            while ( *(_QWORD *)(v55 + 64) );
          }
          v58 = *(char *)(v55 + 195);
          v94 = v58;
          if ( v58 < 15 )
          {
            v90 = 1;
            KiSetPriorityBoost(0LL, v55, 15, v97);
            v58 = v94;
          }
          *(_QWORD *)(v55 + 64) = 0LL;
          if ( v90 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
            EtwTraceAntiStarvationBoost(v55, (unsigned int)v58, v57, DispatcherReadyListHead);
          KiDeferredReadyThread(CurrentPrcb, v55, v57, DispatcherReadyListHead);
          v42 = v70;
        }
        while ( v70 );
        v83 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v83);
          while ( CurrentPrcb->PrcbLock );
        }
      }
      if ( v8 && v5 || (v52 = v46 + 1, v52 > 0xE) )
LABEL_89:
        v52 = 1;
      CurrentPrcb->QueueIndex = v52;
    }
  }
  while ( 1 )
  {
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v2 )
        *(_BYTE *)(CurrentThread + 565) = 0;
    }
    else
    {
      if ( v2 )
      {
        NextThread = KiSelectReadyThread((unsigned int)*(char *)(CurrentThread + 195), CurrentPrcb);
        if ( NextThread )
          goto LABEL_54;
      }
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x800) == 0 )
        goto LABEL_13;
      KiSelectNextThread(CurrentPrcb, &v72);
      NextThread = (__int64)CurrentPrcb->NextThread;
    }
    if ( !NextThread )
      goto LABEL_13;
LABEL_54:
    if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread
      || KiCheckThreadAffinity(NextThread) && (*(_DWORD *)(NextThread + 120) & 0x800) == 0 )
    {
LABEL_13:
      result = v72;
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(CurrentThread + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(CurrentThread, CurrentPrcb) )
        v64 = 1;
      else
        v64 = *(_BYTE *)(CurrentThread + 195);
    }
    else
    {
      v64 = *(_BYTE *)(CurrentThread + 195);
    }
    *CurrentPrcb->PriorityState = v64;
    if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)(NextThread + 120), 0xBu) )
      {
        CurrentPrcb->NextThread = 0LL;
        if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) != 0 )
          KiSetProcessorIdle((__int64)CurrentPrcb, 1, 1);
      }
      else
      {
        KiSelectNextThread(CurrentPrcb, &v72);
      }
    }
    v65 = v72;
    result = (_QWORD *)(NextThread + 216);
    *(_BYTE *)(NextThread + 388) = 7;
    NextThread = 0LL;
    *result = v65;
    v72 = result;
LABEL_14:
    if ( !result )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, CurrentPrcb);
        v66 = 1;
        if ( !IsThreadRankNonZero )
          v66 = *(_BYTE *)(NextThread + 195);
      }
      else
      {
        v66 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v66;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiReadyDeferredReadyList(CurrentPrcb, &v72);
    v72 = 0LL;
    v84 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v84);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
        v18 = 1;
      else
        v18 = *(_BYTE *)(NextThread + 195);
    }
    else
    {
      v18 = *(_BYTE *)(NextThread + 195);
    }
    *CurrentPrcb->PriorityState = v18;
    CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
    if ( *(_BYTE *)(NextThread + 388) == 1 )
      *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                    - *(_DWORD *)(NextThread + 436)
                                    + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    KiAbProcessContextSwitch(CurrentThread, 1LL);
    LOBYTE(v19) = 1;
    return (_QWORD *)KiSwapContext(CurrentThread, NextThread, v19);
  }
  return result;
}
