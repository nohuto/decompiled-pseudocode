/*
 * XREFs of KeWaitForMultipleObjects @ 0x1400FF3A0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140099390 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400C3594 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 *     CcQueueLazyWriteScanThread @ 0x140177AA0 (CcQueueLazyWriteScanThread.c)
 *     CcAsyncReadWorker @ 0x140178110 (CcAsyncReadWorker.c)
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14017ED50 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x14025B100 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x14025B53C (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14025B704 (MiWaitForAsynchronousFlushes.c)
 *     PopSleepDeviceList @ 0x1404728F4 (PopSleepDeviceList.c)
 *     PnprQuiesceWorker @ 0x140484180 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140485208 (MiZeroAllPageFiles.c)
 *     CmpDoFileWrite @ 0x14049BEC0 (CmpDoFileWrite.c)
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14054B3E0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     PfGenerateTrace @ 0x1405EC870 (PfGenerateTrace.c)
 *     PfTLoggingWorker @ 0x14062C1C0 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x140763154 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B3E20 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiWaitForAllObjects @ 0x140086EF0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x140089A18 (KiWaitSatisfyMutant.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiSatisfyThreadWait @ 0x14024A2D8 (KiSatisfyThreadWait.c)
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
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  struct _KWAIT_BLOCK *v14; // rsi
  ULONG v15; // r11d
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  volatile UCHAR *p_BlockState; // r14
  ULONG v19; // r15d
  struct _KPRCB *v20; // rdx
  char *v21; // rdi
  int v22; // ecx
  PVOID *v23; // rdx
  unsigned __int64 v24; // rax
  struct _KPRCB *v25; // rdi
  _DWORD *v26; // rcx
  __int64 v27; // r13
  _QWORD *v28; // r11
  struct _KPRCB *v29; // r14
  _DWORD *v30; // rcx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  volatile __int64 WaitStatus; // r12
  volatile signed __int32 *v34; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v37; // di
  _KWAIT_STATUS_REGISTER v38; // al
  NTSTATUS result; // eax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r9
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r14
  struct _KPRCB *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rbx
  struct _KPRCB *v49; // r14
  _KTHREAD *NextThread; // r14
  __int64 v51; // r8
  struct _KPRCB *v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // r8
  __int64 v55; // r8
  int v56; // eax
  int v57; // eax
  NTSTATUS v58; // esi
  struct _KPRCB *v59; // rdi
  int v60; // eax
  int v61; // eax
  int v62; // eax
  struct _KPRCB *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rbx
  struct _KPRCB *v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // r8
  struct _KPRCB *v70; // rsi
  unsigned __int8 v71; // [rsp+48h] [rbp-59h]
  __int64 v72; // [rsp+50h] [rbp-51h]
  int v73; // [rsp+58h] [rbp-49h]
  int v74; // [rsp+5Ch] [rbp-45h] BYREF
  ULONG v75; // [rsp+60h] [rbp-41h] BYREF
  int v76; // [rsp+64h] [rbp-3Dh] BYREF
  ULONG v77; // [rsp+68h] [rbp-39h] BYREF
  ULONG v78; // [rsp+6Ch] [rbp-35h] BYREF
  ULONG v79; // [rsp+70h] [rbp-31h] BYREF
  ULONG v80; // [rsp+74h] [rbp-2Dh] BYREF
  int v81; // [rsp+78h] [rbp-29h] BYREF
  int v82; // [rsp+7Ch] [rbp-25h] BYREF
  int v83; // [rsp+80h] [rbp-21h] BYREF
  int v84; // [rsp+84h] [rbp-1Dh] BYREF
  int v85; // [rsp+88h] [rbp-19h] BYREF
  LONGLONG QuadPart; // [rsp+90h] [rbp-11h]
  _QWORD *v87; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int8 v90; // [rsp+100h] [rbp+5Fh]

  v90 = WaitReason;
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
  v71 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v71 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v73 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v73 = 1;
    }
  }
  else
  {
    v73 = 0;
  }
  while ( 2 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v74 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v56 = SchedulerAssist[5];
          SchedulerAssist[5] = v56 + 1;
          if ( v56 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        do
          KeYieldProcessorEx(&v74);
        while ( CurrentThread->ThreadLock );
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    v14 = WaitBlockArray;
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v58 = 257;
LABEL_102:
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        v46 = KeGetCurrentPrcb();
        if ( WaitIrql >= 2u )
        {
          if ( v46->NextThread && !v46->DpcRoutineActive )
            KiRequestSoftwareInterrupt(v46, 2);
          return v58;
        }
        v47 = (__int64)v46->CurrentThread;
        if ( v46->NextThread )
        {
          KiAbProcessContextSwitch((__int64)v46->CurrentThread, 0);
          v49 = KeGetCurrentPrcb();
          v76 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v49, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v46->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v49, 0);
            do
              KeYieldProcessorEx(&v76);
            while ( v46->PrcbLock );
          }
          NextThread = v46->NextThread;
          v46->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v46, v47, 0LL);
          _enable();
          v46->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
          {
            v51 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
            NextThread->ReadyTime = v51 + MEMORY[0xFFFFF78000000320];
          }
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(v47 + 643) = 32;
          *(_BYTE *)(v47 + 390) = WaitIrql;
          KiQueueReadyThread(v46, v47, v51);
          if ( !(unsigned __int8)KiSwapContext(v47, NextThread, WaitIrql) )
            goto LABEL_105;
        }
        else if ( (*(_DWORD *)(v47 + 116) & 0x40) == 0 )
        {
LABEL_105:
          __writecr8(WaitIrql);
          return v58;
        }
        __writecr8(1uLL);
        *(_DWORD *)(v47 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
        goto LABEL_105;
      }
      if ( WaitMode
        && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_101:
        v58 = 192;
        goto LABEL_102;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v58 = 257;
        goto LABEL_102;
      }
    }
    else if ( CurrentThread->ApcState.UserApcPending && WaitMode )
    {
      goto LABEL_101;
    }
    v15 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v90;
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v57 = v17[5] - 1;
        v17[5] = v57;
        if ( !v57 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
          KiPerformUnboostKick(v16);
      }
    }
    p_BlockState = &WaitBlockArray->BlockState;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v19 = v15;
    v20 = KeGetCurrentPrcb();
    v72 = (__int64)v20;
    do
    {
      v75 = v15;
      v21 = (char *)Object[v19];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v19;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v21;
      if ( _interlockedbittestandset((volatile signed __int32 *)v21, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v75);
          while ( (*(_DWORD *)v21 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v21, 7u) );
        v20 = (struct _KPRCB *)v72;
        v15 = 0;
      }
      v22 = *((_DWORD *)v21 + 1);
      if ( (*v21 & 0x7F) != 2 )
      {
        if ( v22 <= 0 )
          goto LABEL_22;
        v29 = KeGetCurrentPrcb();
        v80 = v15;
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v61 = v30[5];
            v30[5] = v61 + 1;
            if ( v61 == -1 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
              KiPerformUnboostKick(v29);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          KiSetVpThreadSpinLockCount((__int64)v29, 0);
          do
            KeYieldProcessorEx(&v80);
          while ( CurrentThread->ThreadLock );
          KiSetVpThreadSpinLockCount((__int64)v29, 1);
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v19;
          if ( (*v21 & 7) == 1 )
          {
            v28 = 0LL;
            *((_DWORD *)v21 + 1) = 0;
            goto LABEL_39;
          }
          if ( (*v21 & 0x7F) == 5 )
            --*((_DWORD *)v21 + 1);
        }
        v28 = 0LL;
LABEL_39:
        _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
        v27 = v72;
        goto LABEL_40;
      }
      if ( v22 > 0 || CurrentThread == *((struct _KTHREAD **)v21 + 5) && v21[2] == v20->DpcRoutineActive )
      {
        if ( *((_DWORD *)v21 + 1) == 0x80000000 )
        {
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v59 = KeGetCurrentPrcb();
          v78 = v15;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v59, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v59, 0);
            do
              KeYieldProcessorEx(&v78);
            while ( CurrentThread->ThreadLock );
          }
          KiSatisfyThreadWait(v72, (_DWORD)CurrentThread, v71, (_DWORD)WaitBlockArray, v19);
          RtlRaiseStatus(-1073741423);
        }
        v44 = KeGetCurrentPrcb();
        v77 = v15;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v44, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v44, 0);
          do
            KeYieldProcessorEx(&v77);
          while ( CurrentThread->ThreadLock );
        }
        v27 = v72;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v19;
          if ( (*((_DWORD *)v21 + 1))-- == 1 )
            KiWaitSatisfyMutant((int *)v21, (__int64)CurrentThread, v72);
        }
        _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
        v28 = 0LL;
LABEL_40:
        CurrentThread->WaitBlockFill6[68] = 2;
        CurrentThread->ThreadLock = 0LL;
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v62 = v32[5] - 1;
            v32[5] = v62;
            if ( !v62 && !*((_BYTE *)v32 + 25) && !*((_BYTE *)v32 + 27) )
              KiPerformUnboostKick(v31);
          }
        }
        WaitStatus = CurrentThread->WaitStatus;
        if ( v19 )
        {
          do
          {
            if ( v14->BlockState < 5u )
            {
              v34 = (volatile signed __int32 *)v14->Object;
              v81 = (int)v28;
              if ( _interlockedbittestandset(v34, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v81);
                  while ( (*v34 & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset(v34, 7u) );
                v28 = 0LL;
              }
              if ( v14->BlockState == 4 )
              {
                Flink = v14->WaitListEntry.Flink;
                Blink = v14->WaitListEntry.Blink;
                if ( (struct _KWAIT_BLOCK *)v14->WaitListEntry.Flink->Blink != v14
                  || (struct _KWAIT_BLOCK *)Blink->Flink != v14 )
                {
                  __fastfail(3u);
                }
                Blink->Flink = Flink;
                Flink->Blink = Blink;
              }
              _InterlockedAnd(v34, 0xFFFFFF7F);
            }
            ++v14;
          }
          while ( v14 != &WaitBlockArray[(unsigned __int8)v19] );
        }
        v37 = CurrentThread->WaitIrql;
        v38.Flags = (unsigned __int8)CurrentThread->WaitRegister;
        if ( (v38.Flags & 0x38) == 0 )
        {
          if ( !v71 )
          {
LABEL_52:
            __writecr8(v37);
            return WaitStatus;
          }
          if ( v37 < 2u )
          {
            v66 = *(_QWORD *)(v27 + 8);
            if ( *(_QWORD *)(v27 + 16) )
            {
              KiAbProcessContextSwitch(*(_QWORD *)(v27 + 8), 0);
              v70 = KeGetCurrentPrcb();
              v85 = 0;
              while ( 1 )
              {
                KiSetVpThreadSpinLockCount((__int64)v70, 1);
                if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
                  break;
                KiSetVpThreadSpinLockCount((__int64)v70, 0);
                do
                  KeYieldProcessorEx(&v85);
                while ( *(_QWORD *)(v27 + 48) );
              }
              v68 = *(_QWORD *)(v27 + 16);
              *(_QWORD *)(v27 + 16) = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(v27, v66, 0LL);
              _enable();
              *(_QWORD *)(v27 + 8) = v68;
              if ( *(_BYTE *)(v68 + 388) == 1 )
LABEL_209:
                *(_DWORD *)(v68 + 132) = *(_DWORD *)(v68 + 132) - *(_DWORD *)(v68 + 436) + MEMORY[0xFFFFF78000000320];
LABEL_210:
              *(_BYTE *)(v68 + 388) = 2;
              *(_BYTE *)(v66 + 643) = 32;
              *(_BYTE *)(v66 + 390) = v37;
              KiQueueReadyThread((struct _KPRCB *)v27, v66, v69);
              if ( !(unsigned __int8)KiSwapContext(v66, v68, v37) )
                goto LABEL_52;
LABEL_213:
              __writecr8(1uLL);
              *(_DWORD *)(v66 + 116) &= ~0x40u;
              KiDeliverApc(0, 0LL, 0LL);
              goto LABEL_52;
            }
            goto LABEL_212;
          }
          if ( !*(_QWORD *)(v27 + 16) || *(_BYTE *)(v27 + 11882) )
            return WaitStatus;
          goto LABEL_216;
        }
        if ( (v38.Flags & 0x18) != 0 )
        {
          if ( (v38.Flags & 8) != 0 )
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
          v63 = KeGetCurrentPrcb();
          v82 = (int)v28;
          v87 = v28;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v63, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v63, 0);
            do
              KeYieldProcessorEx(&v82);
            while ( *(_QWORD *)(v27 + 48) );
          }
          if ( !*(_QWORD *)(v27 + 16) )
            KiSelectNextThread((struct _KPRCB *)v27, &v87);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          KiReadyDeferredReadyList(v27, &v87, v64);
          v65 = *(_QWORD *)(v27 + 16);
          if ( v37 < 2u )
          {
            v66 = *(_QWORD *)(v27 + 8);
            if ( v65 )
            {
              KiAbProcessContextSwitch(*(_QWORD *)(v27 + 8), 0);
              v67 = KeGetCurrentPrcb();
              v83 = 0;
              while ( 1 )
              {
                KiSetVpThreadSpinLockCount((__int64)v67, 1);
                if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
                  break;
                KiSetVpThreadSpinLockCount((__int64)v67, 0);
                do
                  KeYieldProcessorEx(&v83);
                while ( *(_QWORD *)(v27 + 48) );
              }
              v68 = *(_QWORD *)(v27 + 16);
              *(_QWORD *)(v27 + 16) = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(v27, v66, 0LL);
              _enable();
              *(_QWORD *)(v27 + 8) = v68;
              if ( *(_BYTE *)(v68 + 388) == 1 )
                goto LABEL_209;
              goto LABEL_210;
            }
LABEL_212:
            if ( (*(_DWORD *)(v66 + 116) & 0x40) == 0 )
              goto LABEL_52;
            goto LABEL_213;
          }
          if ( !v65 || *(_BYTE *)(v27 + 11882) )
            return WaitStatus;
LABEL_216:
          KiRequestSoftwareInterrupt((struct _KPRCB *)v27, 2);
          return WaitStatus;
        }
        v48 = *(_QWORD *)(v27 + 8);
        if ( *(_QWORD *)(v27 + 16) )
        {
          KiAbProcessContextSwitch(*(_QWORD *)(v27 + 8), 0);
          v52 = KeGetCurrentPrcb();
          v84 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v52, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v52, 0);
            do
              KeYieldProcessorEx(&v84);
            while ( *(_QWORD *)(v27 + 48) );
          }
          v53 = *(_QWORD *)(v27 + 16);
          *(_QWORD *)(v27 + 16) = 0LL;
          _disable();
          KiEndThreadCycleAccumulation(v27, v48, 0LL);
          _enable();
          *(_QWORD *)(v27 + 8) = v53;
          if ( *(_BYTE *)(v53 + 388) == 1 )
            *(_DWORD *)(v53 + 132) = *(_DWORD *)(v53 + 132) - *(_DWORD *)(v53 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v53 + 388) = 2;
          *(_BYTE *)(v48 + 643) = 32;
          *(_BYTE *)(v48 + 390) = 1;
          KiQueueReadyThread((struct _KPRCB *)v27, v48, v54);
          LOBYTE(v55) = 1;
          if ( !(unsigned __int8)KiSwapContext(v48, v53, v55) )
            goto LABEL_111;
        }
        else if ( (*(_DWORD *)(v48 + 116) & 0x40) == 0 )
        {
LABEL_111:
          __writecr8(1uLL);
          KiDeliverApc(0, 0LL, 0LL);
          __writecr8(0LL);
          return WaitStatus;
        }
        __writecr8(1uLL);
        *(_DWORD *)(v48 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
        goto LABEL_111;
      }
LABEL_22:
      v23 = (PVOID *)*((_QWORD *)v21 + 2);
      if ( *v23 != v21 + 8 )
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = v23;
      *(_QWORD *)(p_BlockState - 17) = v21 + 8;
      *v23 = (PVOID)(p_BlockState - 17);
      *((_QWORD *)v21 + 2) = p_BlockState - 17;
      _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
      v20 = (struct _KPRCB *)v72;
      ++v19;
      p_BlockState += 48;
    }
    while ( v19 < Count );
    v24 = QuadPart;
    if ( v73 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v41 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v24 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v24 = QuadPart + ThreadTimerDelay;
      }
      goto LABEL_60;
    }
    if ( v73 )
    {
      if ( !QuadPart )
      {
LABEL_27:
        v25 = KeGetCurrentPrcb();
        v79 = v15;
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v60 = v26[5];
            v26[5] = v60 + 1;
            if ( v60 == -1 && !*((_BYTE *)v26 + 25) && !*((_BYTE *)v26 + 27) )
              KiPerformUnboostKick(v25);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          KiSetVpThreadSpinLockCount((__int64)v25, 0);
          do
            KeYieldProcessorEx(&v79);
          while ( CurrentThread->ThreadLock );
          KiSetVpThreadSpinLockCount((__int64)v25, 1);
        }
        v27 = v72;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          CurrentThread->WaitStatus = 258LL;
        v28 = 0LL;
        goto LABEL_40;
      }
      v41 = MEMORY[0xFFFFF78000000014];
LABEL_60:
      if ( v41 > v24 )
        goto LABEL_27;
    }
    v42 = QuadPart;
    CurrentThread->WaitBlockCount = Count;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)WaitBlockArray, v73, v42);
    if ( result == 256 )
    {
      v71 = 0;
      v43 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = v43;
      continue;
    }
    return result;
  }
}
