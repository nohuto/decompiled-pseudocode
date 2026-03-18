/*
 * XREFs of KeWaitForMultipleObjects @ 0x1400E8C50
 * Callers:
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14002A7E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011FB50 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x14015E600 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x14015E860 (CcQueueLazyWriteScanThread.c)
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x1401687C0 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x1402139F0 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x140216484 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14021664C (MiWaitForAsynchronousFlushes.c)
 *     PopSleepDeviceList @ 0x140408A78 (PopSleepDeviceList.c)
 *     PnprQuiesceWorker @ 0x1404185D0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1404195D8 (MiZeroAllPageFiles.c)
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404AE9B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     PfGenerateTrace @ 0x1405761CC (PfGenerateTrace.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405C0ED0 (ExpWorkerThreadBalanceManager.c)
 *     PfTLoggingWorker @ 0x1405D7720 (PfTLoggingWorker.c)
 *     PopThermalReadCounters @ 0x1406CBCC0 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiWaitForAllObjects @ 0x140017B70 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x140018280 (KiWaitSatisfyMutant.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     KiSatisfyThreadWait @ 0x140205B3C (KiSatisfyThreadWait.c)
 */

NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  struct _KTHREAD *CurrentThread; // rbx
  PKWAIT_BLOCK WaitBlock; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 WaitIrql; // r15
  struct _KWAIT_BLOCK *v12; // rsi
  volatile UCHAR *p_BlockState; // r14
  ULONG v14; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 *v16; // rdi
  PVOID *v17; // rdx
  unsigned __int64 v18; // rax
  LONGLONG v19; // r9
  NTSTATUS result; // eax
  unsigned __int8 v21; // al
  __int64 v22; // r13
  volatile __int64 WaitStatus; // r12
  volatile signed __int32 *v24; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v27; // di
  _KWAIT_STATUS_REGISTER v28; // al
  LONGLONG QuadPart; // rdx
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v31; // rcx
  struct _KPRCB *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rbx
  _KTHREAD *NextThread; // r14
  __int64 v37; // rdi
  __int64 v38; // r8
  NTSTATUS v39; // esi
  __int64 v40; // rbx
  __int64 v41; // rsi
  unsigned __int8 v42; // [rsp+48h] [rbp-59h]
  __int64 v43; // [rsp+50h] [rbp-51h]
  unsigned int v44; // [rsp+58h] [rbp-49h]
  int v45; // [rsp+5Ch] [rbp-45h] BYREF
  int v46; // [rsp+60h] [rbp-41h] BYREF
  int v47; // [rsp+64h] [rbp-3Dh] BYREF
  int v48; // [rsp+68h] [rbp-39h] BYREF
  int v49; // [rsp+6Ch] [rbp-35h] BYREF
  int v50; // [rsp+70h] [rbp-31h] BYREF
  int v51; // [rsp+74h] [rbp-2Dh] BYREF
  int v52; // [rsp+78h] [rbp-29h] BYREF
  int v53; // [rsp+7Ch] [rbp-25h] BYREF
  int v54; // [rsp+80h] [rbp-21h] BYREF
  int v55; // [rsp+84h] [rbp-1Dh] BYREF
  int v56; // [rsp+88h] [rbp-19h] BYREF
  LONGLONG v57; // [rsp+90h] [rbp-11h]
  __int64 v58; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int8 v61; // [rsp+100h] [rbp+5Fh]

  v61 = WaitReason;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  WaitBlock = WaitBlockArray;
  if ( WaitBlockArray )
  {
    if ( Count > 0x40 )
      KeBugCheck(0xCu);
  }
  else
  {
    if ( Count > 3 )
      KeBugCheck(0xCu);
    WaitBlock = CurrentThread->WaitBlock;
    WaitBlockArray = CurrentThread->WaitBlock;
  }
  if ( WaitType == WaitAll )
    return KiWaitForAllObjects(
             Count,
             Object,
             (unsigned __int8)WaitReason,
             WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v42 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v42 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v44 = 1;
    }
    else
    {
      v44 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    v57 = QuadPart;
  }
  else
  {
    v44 = 0;
  }
LABEL_9:
  WaitIrql = CurrentThread->WaitIrql;
  while ( 1 )
  {
    CurrentThread->MiscFlags &= ~0x10u;
    CurrentThread->WaitRegister.Flags = 0;
    CurrentThread->WaitMode = WaitMode;
    if ( Alertable )
      CurrentThread->MiscFlags |= 0x10u;
    v45 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v45);
      while ( CurrentThread->ThreadLock );
    }
    if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
      break;
    CurrentThread->ThreadLock = 0LL;
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
    KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = 0;
  }
  v12 = WaitBlockArray;
  if ( !Alertable )
  {
    if ( CurrentThread->ApcState.UserApcPending && WaitMode )
      goto LABEL_88;
LABEL_17:
    p_BlockState = &WaitBlockArray->BlockState;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v61;
    v14 = 0;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    v43 = (__int64)CurrentPrcb;
    while ( 1 )
    {
      v46 = 0;
      v16 = (volatile signed __int32 *)Object[v14];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v14;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v16;
      if ( _interlockedbittestandset(v16, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v46);
          while ( (*v16 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset(v16, 7u) );
        CurrentPrcb = (struct _KPRCB *)v43;
      }
      if ( (*(_BYTE *)v16 & 0x7F) == 2 )
      {
        if ( *((int *)v16 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v16 + 5) && *((_BYTE *)v16 + 2) == CurrentPrcb->DpcRoutineActive )
        {
          if ( *((_DWORD *)v16 + 1) == 0x80000000 )
          {
            _InterlockedAnd(v16, 0xFFFFFF7F);
            v49 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v49);
              while ( CurrentThread->ThreadLock );
            }
            KiSatisfyThreadWait(v43, (_DWORD)CurrentThread, v42, (_DWORD)WaitBlockArray, v14);
            RtlRaiseStatus(-1073741423);
          }
          v48 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v48);
            while ( CurrentThread->ThreadLock );
          }
          v22 = v43;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v14;
            if ( (*((_DWORD *)v16 + 1))-- == 1 )
              KiWaitSatisfyMutant((int *)v16, (__int64)CurrentThread, v43);
          }
          _InterlockedAnd(v16, 0xFFFFFF7F);
LABEL_34:
          CurrentThread->WaitBlockFill6[68] = 2;
          CurrentThread->ThreadLock = 0LL;
          WaitStatus = CurrentThread->WaitStatus;
          if ( v14 )
          {
            do
            {
              if ( v12->BlockState < 5u )
              {
                v24 = (volatile signed __int32 *)v12->Object;
                v52 = 0;
                while ( _interlockedbittestandset(v24, 7u) )
                {
                  do
                    KeYieldProcessorEx(&v52);
                  while ( (*v24 & 0x80u) != 0 );
                }
                if ( v12->BlockState == 4 )
                {
                  Flink = v12->WaitListEntry.Flink;
                  Blink = v12->WaitListEntry.Blink;
                  if ( (struct _KWAIT_BLOCK *)v12->WaitListEntry.Flink->Blink != v12
                    || (struct _KWAIT_BLOCK *)Blink->Flink != v12 )
                  {
                    __fastfail(3u);
                  }
                  Blink->Flink = Flink;
                  Flink->Blink = Blink;
                }
                _InterlockedAnd(v24, 0xFFFFFF7F);
              }
              ++v12;
            }
            while ( v12 != &WaitBlockArray[(unsigned __int8)v14] );
          }
          v27 = CurrentThread->WaitIrql;
          v28.Flags = (unsigned __int8)CurrentThread->WaitRegister;
          if ( (v28.Flags & 0x38) == 0 )
          {
            if ( !v42 )
              goto LABEL_45;
            if ( v27 < 2u )
            {
              v40 = *(_QWORD *)(v22 + 8);
              if ( *(_QWORD *)(v22 + 16) )
              {
                KiAbProcessContextSwitch(*(_QWORD *)(v22 + 8), 0LL);
                v56 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 48), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v56);
                  while ( *(_QWORD *)(v22 + 48) );
                }
                v41 = *(_QWORD *)(v22 + 16);
                *(_QWORD *)(v22 + 16) = 0LL;
                _disable();
                KiEndThreadCycleAccumulation(v22, v40, 0LL);
                _enable();
                *(_QWORD *)(v22 + 8) = v41;
                if ( *(_BYTE *)(v41 + 388) != 1 )
                  goto LABEL_159;
LABEL_158:
                *(_DWORD *)(v41 + 132) = *(_DWORD *)(v41 + 132) - *(_DWORD *)(v41 + 436) + MEMORY[0xFFFFF78000000320];
                goto LABEL_159;
              }
LABEL_176:
              if ( (*(_DWORD *)(v40 + 116) & 0x40) != 0 )
                goto LABEL_177;
              goto LABEL_45;
            }
            if ( *(_QWORD *)(v22 + 16) && !*(_BYTE *)(v22 + 11882) )
LABEL_180:
              KiRequestSoftwareInterrupt((struct _KPRCB *)v22, 2);
            return WaitStatus;
          }
          if ( (v28.Flags & 0x18) != 0 )
          {
            if ( (v28.Flags & 8) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
            v58 = 0LL;
            v53 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 48), 0LL) )
            {
              do
                KeYieldProcessorEx(&v53);
              while ( *(_QWORD *)(v22 + 48) );
            }
            if ( !*(_QWORD *)(v22 + 16) )
              KiSelectNextThread(v22, &v58);
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 48), 0LL);
            KiReadyDeferredReadyList(v22, &v58);
            if ( v27 >= 2u )
            {
              if ( *(_QWORD *)(v22 + 16) && !*(_BYTE *)(v22 + 11882) )
                goto LABEL_180;
            }
            else
            {
              v40 = *(_QWORD *)(v22 + 8);
              if ( !*(_QWORD *)(v22 + 16) )
                goto LABEL_176;
              KiAbProcessContextSwitch(*(_QWORD *)(v22 + 8), 0LL);
              v54 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 48), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v54);
                while ( *(_QWORD *)(v22 + 48) );
              }
              v41 = *(_QWORD *)(v22 + 16);
              *(_QWORD *)(v22 + 16) = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(v22, v40, 0LL);
              _enable();
              *(_QWORD *)(v22 + 8) = v41;
              if ( *(_BYTE *)(v41 + 388) == 1 )
                goto LABEL_158;
LABEL_159:
              *(_BYTE *)(v41 + 388) = 2;
              *(_BYTE *)(v40 + 643) = 32;
              *(_BYTE *)(v40 + 390) = v27;
              KiQueueReadyThread(v22, v40);
              if ( (unsigned __int8)KiSwapContext(v40, v41, v27) )
              {
LABEL_177:
                __writecr8(1uLL);
                *(_DWORD *)(v40 + 116) &= ~0x40u;
                KiDeliverApc(0LL, 0LL, 0LL);
              }
LABEL_45:
              __writecr8(v27);
            }
            return WaitStatus;
          }
          v35 = *(_QWORD *)(v22 + 8);
          if ( *(_QWORD *)(v22 + 16) )
          {
            KiAbProcessContextSwitch(*(_QWORD *)(v22 + 8), 0LL);
            v55 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 48), 0LL) )
            {
              do
                KeYieldProcessorEx(&v55);
              while ( *(_QWORD *)(v22 + 48) );
            }
            v37 = *(_QWORD *)(v22 + 16);
            *(_QWORD *)(v22 + 16) = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v22, v35, 0LL);
            _enable();
            *(_QWORD *)(v22 + 8) = v37;
            if ( *(_BYTE *)(v37 + 388) == 1 )
              *(_DWORD *)(v37 + 132) = *(_DWORD *)(v37 + 132) - *(_DWORD *)(v37 + 436) + MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v37 + 388) = 2;
            *(_BYTE *)(v35 + 643) = 32;
            *(_BYTE *)(v35 + 390) = 1;
            KiQueueReadyThread(v22, v35);
            LOBYTE(v38) = 1;
            if ( (unsigned __int8)KiSwapContext(v35, v37, v38) )
            {
LABEL_115:
              __writecr8(1uLL);
              *(_DWORD *)(v35 + 116) &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
            }
          }
          else if ( (*(_DWORD *)(v35 + 116) & 0x40) != 0 )
          {
            goto LABEL_115;
          }
          __writecr8(1uLL);
          KiDeliverApc(0LL, 0LL, 0LL);
          __writecr8(0LL);
          return WaitStatus;
        }
      }
      else if ( *((int *)v16 + 1) > 0 )
      {
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v14;
          if ( (*(_BYTE *)v16 & 7) == 1 )
          {
            *((_DWORD *)v16 + 1) = 0;
          }
          else if ( (*(_BYTE *)v16 & 0x7F) == 5 )
          {
            --*((_DWORD *)v16 + 1);
          }
        }
        _InterlockedAnd(v16, 0xFFFFFF7F);
        v22 = v43;
        goto LABEL_34;
      }
      v17 = (PVOID *)*((_QWORD *)v16 + 2);
      if ( *v17 != v16 + 2 )
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = v17;
      *(_QWORD *)(p_BlockState - 17) = v16 + 2;
      *v17 = (PVOID)(p_BlockState - 17);
      *((_QWORD *)v16 + 2) = p_BlockState - 17;
      _InterlockedAnd(v16, 0xFFFFFF7F);
      CurrentPrcb = (struct _KPRCB *)v43;
      ++v14;
      p_BlockState += 48;
      if ( v14 >= Count )
      {
        v18 = v57;
        if ( v44 == 2 )
        {
          ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
          v31 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
          v18 = v57;
          if ( CurrentThread->WaitMode
            && !CurrentThread->WaitBlock[3].SpareLong
            && !CurrentThread->WaitIrql
            && !CurrentThread->ApcState.InProgressFlags
            && (_DWORD)ThreadTimerDelay )
          {
            v18 = v57 + ThreadTimerDelay;
          }
        }
        else
        {
          if ( !v44 )
            goto LABEL_25;
          if ( !v57 )
          {
LABEL_63:
            v50 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v50);
              while ( CurrentThread->ThreadLock );
            }
            v22 = v43;
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
              CurrentThread->WaitStatus = 258LL;
            goto LABEL_34;
          }
          v31 = MEMORY[0xFFFFF78000000014];
        }
        if ( v31 > v18 )
          goto LABEL_63;
LABEL_25:
        v19 = v57;
        CurrentThread->WaitBlockCount = Count;
        result = KiCommitThreadWait(CurrentThread, WaitBlockArray, v44, v19);
        if ( result != 256 )
          return result;
        v42 = 0;
        v21 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentThread->WaitIrql = v21;
        goto LABEL_9;
      }
    }
  }
  if ( CurrentThread->Alerted[WaitMode] )
  {
    CurrentThread->Alerted[WaitMode] = 0;
    v39 = 257;
    goto LABEL_89;
  }
  if ( !WaitMode || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
  {
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v39 = 257;
      goto LABEL_89;
    }
    goto LABEL_17;
  }
  CurrentThread->ApcState.UserApcPending = 1;
LABEL_88:
  v39 = 192;
LABEL_89:
  CurrentThread->ThreadLock = 0LL;
  v33 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v33->NextThread && !v33->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v33, 2);
  }
  else
  {
    v34 = (__int64)v33->CurrentThread;
    if ( v33->NextThread )
    {
      KiAbProcessContextSwitch(v33->CurrentThread, 0LL);
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v33->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( v33->PrcbLock );
      }
      NextThread = v33->NextThread;
      v33->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v33, v34, 0LL);
      _enable();
      v33->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v34 + 643) = 32;
      *(_BYTE *)(v34 + 390) = WaitIrql;
      KiQueueReadyThread(v33, v34);
      if ( (unsigned __int8)KiSwapContext(v34, NextThread, WaitIrql) )
        goto LABEL_122;
    }
    else
    {
      if ( (*(_DWORD *)(v34 + 116) & 0x40) == 0 )
        goto LABEL_92;
LABEL_122:
      __writecr8(1uLL);
      *(_DWORD *)(v34 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
LABEL_92:
    __writecr8(WaitIrql);
  }
  return v39;
}
