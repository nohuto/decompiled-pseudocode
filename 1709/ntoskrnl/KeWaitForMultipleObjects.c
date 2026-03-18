/*
 * XREFs of KeWaitForMultipleObjects @ 0x14006B570
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140006590 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140020534 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     CcAsyncReadWorker @ 0x1401481D0 (CcAsyncReadWorker.c)
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     CcQueueLazyWriteScanThread @ 0x140148AC0 (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x140148E40 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x14021F800 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x14021FC34 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14021FDFC (MiWaitForAsynchronousFlushes.c)
 *     PnprQuiesceWorker @ 0x14042D5E0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x14042EDB4 (MiZeroAllPageFiles.c)
 *     PopSleepDeviceList @ 0x140437778 (PopSleepDeviceList.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     CmpDoFileWrite @ 0x1404E0284 (CmpDoFileWrite.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404F4CA0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 *     PfTLoggingWorker @ 0x140687320 (PfTLoggingWorker.c)
 *     PfGenerateTrace @ 0x1406F3AD4 (PfGenerateTrace.c)
 *     PopThermalReadCounters @ 0x1406FFF30 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiWaitForAllObjects @ 0x1400E3B9C (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x140115618 (KiWaitSatisfyMutant.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     KiSatisfyThreadWait @ 0x14020BCB4 (KiSatisfyThreadWait.c)
 */

// local variable allocation has failed, the output may be wrong!
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
  LONGLONG QuadPart; // rdx
  unsigned __int8 WaitIrql; // r15
  struct _KWAIT_BLOCK *v13; // rsi
  volatile UCHAR *p_BlockState; // r14
  ULONG v15; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  char *v17; // rdi
  unsigned __int64 v18; // rax
  LONGLONG v19; // r9
  NTSTATUS result; // eax
  unsigned __int8 v21; // al
  __int64 v22; // r9
  struct _KPRCB *v23; // r13
  volatile __int64 WaitStatus; // r12
  volatile signed __int32 *v25; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v28; // di
  _KWAIT_STATUS_REGISTER v29; // al
  unsigned __int64 v30; // rcx
  _KTHREAD *v32; // rbx
  struct _KPRCB *v33; // rbx
  _KTHREAD *v34; // rsi
  _KTHREAD *v35; // r14
  _KTHREAD *v36; // rdi
  __int64 v37; // r8
  NTSTATUS v38; // edi
  _KTHREAD *v39; // rbx
  _KTHREAD *NextThread; // rsi
  unsigned __int8 v41; // [rsp+48h] [rbp-59h]
  struct _KPRCB *v42; // [rsp+50h] [rbp-51h]
  unsigned int v43; // [rsp+58h] [rbp-49h]
  int v44; // [rsp+5Ch] [rbp-45h] BYREF
  int v45; // [rsp+60h] [rbp-41h] BYREF
  int v46; // [rsp+64h] [rbp-3Dh] BYREF
  int v47; // [rsp+68h] [rbp-39h] BYREF
  int v48; // [rsp+6Ch] [rbp-35h] BYREF
  int v49; // [rsp+70h] [rbp-31h] BYREF
  int v50; // [rsp+74h] [rbp-2Dh] BYREF
  int v51; // [rsp+78h] [rbp-29h] BYREF
  int v52; // [rsp+7Ch] [rbp-25h] BYREF
  int v53; // [rsp+80h] [rbp-21h] BYREF
  int v54; // [rsp+84h] [rbp-1Dh] BYREF
  int v55; // [rsp+88h] [rbp-19h] BYREF
  LONGLONG v56; // [rsp+90h] [rbp-11h]
  __int64 v57; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int8 v60; // [rsp+100h] [rbp+5Fh]

  v60 = WaitReason;
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
             (_DWORD)Object,
             (_BYTE)WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v41 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v41 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  QuadPart = 0xFFFFF78000000008uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v43 = 1;
    }
    else
    {
      v43 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    v56 = QuadPart;
  }
  else
  {
    v43 = 0;
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
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v44);
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
  v13 = WaitBlockArray;
  if ( !Alertable )
  {
    if ( CurrentThread->ApcState.UserApcPending )
    {
      QuadPart = (unsigned __int8)WaitMode;
      if ( WaitMode )
        goto LABEL_102;
    }
LABEL_17:
    p_BlockState = &WaitBlockArray->BlockState;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v60;
    v15 = 0;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    v42 = CurrentPrcb;
    while ( 1 )
    {
      v45 = 0;
      v17 = (char *)Object[v15];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v15;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v17;
      if ( _interlockedbittestandset((volatile signed __int32 *)v17, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v45);
          while ( (*(_DWORD *)v17 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v17, 7u) );
        CurrentPrcb = v42;
      }
      if ( (*v17 & 0x7F) == 2 )
      {
        if ( *((int *)v17 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v17 + 5) && v17[2] == CurrentPrcb->DpcRoutineActive )
        {
          if ( *((_DWORD *)v17 + 1) == 0x80000000 )
          {
            _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
            v48 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v48);
              while ( CurrentThread->ThreadLock );
            }
            KiSatisfyThreadWait((_DWORD)v42, (_DWORD)CurrentThread, v41, (_DWORD)WaitBlockArray, v15);
            RtlRaiseStatus(-1073741423);
          }
          v47 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v47);
            while ( CurrentThread->ThreadLock );
          }
          v23 = v42;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v15;
            if ( (*((_DWORD *)v17 + 1))-- == 1 )
              KiWaitSatisfyMutant(v17, CurrentThread, v42);
          }
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
          v22 = 0LL;
LABEL_35:
          CurrentThread->WaitBlockFill6[68] = 2;
          CurrentThread->ThreadLock = 0LL;
          WaitStatus = CurrentThread->WaitStatus;
          if ( v15 )
          {
            do
            {
              if ( v13->BlockState < 5u )
              {
                v25 = (volatile signed __int32 *)v13->Object;
                v51 = 0;
                if ( _interlockedbittestandset(v25, 7u) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v51);
                    while ( (*v25 & 0x80u) != 0 );
                  }
                  while ( _interlockedbittestandset(v25, 7u) );
                  v22 = 0LL;
                }
                if ( v13->BlockState == 4 )
                {
                  Flink = v13->WaitListEntry.Flink;
                  Blink = v13->WaitListEntry.Blink;
                  if ( (struct _KWAIT_BLOCK *)v13->WaitListEntry.Flink->Blink != v13
                    || (struct _KWAIT_BLOCK *)Blink->Flink != v13 )
                  {
                    __fastfail(3u);
                  }
                  Blink->Flink = Flink;
                  Flink->Blink = Blink;
                }
                _InterlockedAnd(v25, 0xFFFFFF7F);
              }
              ++v13;
            }
            while ( v13 != &WaitBlockArray[(unsigned __int8)v15] );
          }
          v28 = CurrentThread->WaitIrql;
          v29.Flags = (unsigned __int8)CurrentThread->WaitRegister;
          if ( (v29.Flags & 0x38) == 0 )
          {
            if ( !v41 )
              goto LABEL_46;
            if ( v28 < 2u )
            {
              v39 = v23->CurrentThread;
              if ( v23->NextThread )
              {
                KiAbProcessContextSwitch(v23->CurrentThread, 0LL);
                v55 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)&v23->PrcbLock, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v55);
                  while ( v23->PrcbLock );
                }
                NextThread = v23->NextThread;
                v23->NextThread = 0LL;
                _disable();
                KiEndThreadCycleAccumulation(v23, v39, 0LL);
                _enable();
                v23->CurrentThread = NextThread;
                if ( NextThread->WaitBlockFill6[68] != 1 )
                  goto LABEL_160;
LABEL_159:
                NextThread->ReadyTime = NextThread->ReadyTime
                                      - NextThread->WaitBlock[2].SpareLong
                                      + MEMORY[0xFFFFF78000000320];
                goto LABEL_160;
              }
LABEL_177:
              if ( (v39->MiscFlags & 0x40) != 0 )
                goto LABEL_178;
              goto LABEL_46;
            }
            if ( v23->NextThread && !v23->DpcRoutineActive )
            {
LABEL_181:
              LOBYTE(QuadPart) = 2;
              KiRequestSoftwareInterrupt(v23, QuadPart);
            }
            return WaitStatus;
          }
          if ( (v29.Flags & 0x18) != 0 )
          {
            if ( (v29.Flags & 8) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
            v57 = 0LL;
            v52 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v23->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v52);
              while ( v23->PrcbLock );
            }
            if ( !v23->NextThread )
              KiSelectNextThread(v23, &v57, *(_QWORD *)&WaitType, v22);
            _InterlockedAnd64((volatile signed __int64 *)&v23->PrcbLock, 0LL);
            KiReadyDeferredReadyList(v23, &v57, *(_QWORD *)&WaitType, v22);
            if ( v28 >= 2u )
            {
              if ( v23->NextThread && !v23->DpcRoutineActive )
                goto LABEL_181;
            }
            else
            {
              v39 = v23->CurrentThread;
              if ( !v23->NextThread )
                goto LABEL_177;
              KiAbProcessContextSwitch(v23->CurrentThread, 0LL);
              v53 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)&v23->PrcbLock, 0LL) )
              {
                do
                  KeYieldProcessorEx(&v53);
                while ( v23->PrcbLock );
              }
              NextThread = v23->NextThread;
              v23->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(v23, v39, 0LL);
              _enable();
              v23->CurrentThread = NextThread;
              if ( NextThread->WaitBlockFill6[68] == 1 )
                goto LABEL_159;
LABEL_160:
              NextThread->WaitBlockFill6[68] = 2;
              v39->WaitReason = 32;
              v39->WaitIrql = v28;
              KiQueueReadyThread(v23, v39);
              if ( (unsigned __int8)KiSwapContext(v39, NextThread, v28) )
              {
LABEL_178:
                __writecr8(1uLL);
                v39->MiscFlags &= ~0x40u;
                KiDeliverApc(0LL, 0LL, 0LL);
              }
LABEL_46:
              __writecr8(v28);
            }
            return WaitStatus;
          }
          v32 = v23->CurrentThread;
          if ( v23->NextThread )
          {
            KiAbProcessContextSwitch(v23->CurrentThread, 0LL);
            v54 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v23->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v54);
              while ( v23->PrcbLock );
            }
            v36 = v23->NextThread;
            v23->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v23, v32, 0LL);
            _enable();
            v23->CurrentThread = v36;
            if ( v36->WaitBlockFill6[68] == 1 )
              v36->ReadyTime = v36->ReadyTime - v36->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v36->WaitBlockFill6[68] = 2;
            v32->WaitReason = 32;
            v32->WaitIrql = 1;
            KiQueueReadyThread(v23, v32);
            LOBYTE(v37) = 1;
            if ( (unsigned __int8)KiSwapContext(v32, v36, v37) )
            {
LABEL_96:
              __writecr8(1uLL);
              v32->MiscFlags &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
            }
          }
          else if ( (v32->MiscFlags & 0x40) != 0 )
          {
            goto LABEL_96;
          }
          __writecr8(1uLL);
          KiDeliverApc(0LL, 0LL, 0LL);
          __writecr8(0LL);
          return WaitStatus;
        }
      }
      else if ( *((int *)v17 + 1) > 0 )
      {
        v50 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v50);
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) != 0 )
          goto LABEL_33;
        CurrentThread->WaitStatus = v15;
        if ( (*v17 & 7) == 1 )
        {
          v22 = 0LL;
          *((_DWORD *)v17 + 1) = 0;
        }
        else
        {
          if ( (*v17 & 0x7F) == 5 )
            --*((_DWORD *)v17 + 1);
LABEL_33:
          v22 = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        v23 = v42;
        goto LABEL_35;
      }
      QuadPart = *((_QWORD *)v17 + 2);
      if ( *(char **)QuadPart != v17 + 8 )
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = QuadPart;
      *(_QWORD *)(p_BlockState - 17) = v17 + 8;
      *(_QWORD *)QuadPart = p_BlockState - 17;
      *((_QWORD *)v17 + 2) = p_BlockState - 17;
      _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      CurrentPrcb = v42;
      ++v15;
      p_BlockState += 48;
      if ( v15 >= Count )
      {
        *(_QWORD *)&WaitType = v56;
        v18 = v56;
        if ( v43 == 2 )
        {
          QuadPart = CurrentThread->ThreadTimerDelay;
          v30 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
          v18 = v56;
          if ( CurrentThread->WaitMode
            && !CurrentThread->WaitBlock[3].SpareLong
            && !CurrentThread->WaitIrql
            && !CurrentThread->ApcState.InProgressFlags
            && (_DWORD)QuadPart )
          {
            v18 = v56 + QuadPart;
          }
        }
        else
        {
          if ( !v43 )
            goto LABEL_25;
          if ( !v56 )
          {
LABEL_63:
            v49 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v49);
              while ( CurrentThread->ThreadLock );
            }
            v23 = v42;
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
              CurrentThread->WaitStatus = 258LL;
            v22 = 0LL;
            goto LABEL_35;
          }
          v30 = MEMORY[0xFFFFF78000000014];
        }
        if ( v30 > v18 )
          goto LABEL_63;
LABEL_25:
        v19 = v56;
        CurrentThread->WaitBlockCount = Count;
        result = KiCommitThreadWait(CurrentThread, WaitBlockArray, v43, v19);
        if ( result != 256 )
          return result;
        v41 = 0;
        v21 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentThread->WaitIrql = v21;
        goto LABEL_9;
      }
    }
  }
  QuadPart = WaitMode;
  if ( CurrentThread->Alerted[WaitMode] )
  {
    CurrentThread->Alerted[WaitMode] = 0;
    v38 = 257;
    goto LABEL_103;
  }
  if ( !WaitMode || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
  {
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v38 = 257;
      goto LABEL_103;
    }
    goto LABEL_17;
  }
  CurrentThread->ApcState.UserApcPending = 1;
LABEL_102:
  v38 = 192;
LABEL_103:
  CurrentThread->ThreadLock = 0LL;
  v33 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v33->NextThread && !v33->DpcRoutineActive )
    {
      LOBYTE(QuadPart) = 2;
      KiRequestSoftwareInterrupt(v33, QuadPart);
    }
  }
  else
  {
    v34 = v33->CurrentThread;
    if ( v33->NextThread )
    {
      KiAbProcessContextSwitch(v33->CurrentThread, 0LL);
      v46 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v33->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( v33->PrcbLock );
      }
      v35 = v33->NextThread;
      v33->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v33, v34, 0LL);
      _enable();
      v33->CurrentThread = v35;
      if ( v35->WaitBlockFill6[68] == 1 )
        v35->ReadyTime = v35->ReadyTime - v35->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v35->WaitBlockFill6[68] = 2;
      v34->WaitReason = 32;
      v34->WaitIrql = WaitIrql;
      KiQueueReadyThread(v33, v34);
      if ( (unsigned __int8)KiSwapContext(v34, v35, WaitIrql) )
        goto LABEL_125;
    }
    else
    {
      if ( (v34->MiscFlags & 0x40) == 0 )
        goto LABEL_106;
LABEL_125:
      __writecr8(1uLL);
      v34->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
LABEL_106:
    __writecr8(WaitIrql);
  }
  return v38;
}
