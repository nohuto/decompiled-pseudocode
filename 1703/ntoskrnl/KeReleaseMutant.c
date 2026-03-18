/*
 * XREFs of KeReleaseMutant @ 0x1400E3270
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140012704 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140013514 (LdrpGetFromMUIMemCache.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140149348 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140164458 (LdrpSetAlternateResourceModuleHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x140226A34 (NtSignalAndWaitForSingleObject.c)
 *     PopWdiTimerWorkerThread @ 0x140233180 (PopWdiTimerWorkerThread.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     NtReleaseMutant @ 0x1405211C0 (NtReleaseMutant.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140011644 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // rax
  char v5; // di
  int ApcDisable; // r12d
  unsigned int v8; // r13d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  int SignalState; // ebp
  _KTHREAD *OwnerThread; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KMUTANT *v16; // r13
  NTSTATUS v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  char v22; // al
  bool v23; // zf
  unsigned __int8 IsThreadRunning; // al
  __int64 v25; // rdx
  __int64 v26; // r9
  _QWORD *v27; // r8
  __int64 v28; // rcx
  char v29; // al
  int v30; // r10d
  _QWORD *v31; // r9
  __int64 v32; // [rsp+30h] [rbp-A8h]
  _QWORD *v33; // [rsp+40h] [rbp-98h]
  struct _KPRCB *v34; // [rsp+48h] [rbp-90h]
  unsigned __int8 v35; // [rsp+50h] [rbp-88h]
  __int64 v36; // [rsp+58h] [rbp-80h]
  _KTHREAD *v37; // [rsp+60h] [rbp-78h]
  __int64 v38; // [rsp+68h] [rbp-70h] BYREF
  LONG LockNV; // [rsp+70h] [rbp-68h]
  int v40; // [rsp+E0h] [rbp+8h] BYREF
  KPRIORITY v41; // [rsp+E8h] [rbp+10h]
  int v42; // [rsp+F0h] [rbp+18h] BYREF
  BOOLEAN v43; // [rsp+F8h] [rbp+20h]

  v43 = Wait;
  v41 = Increment;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  ApcDisable = 0;
  v36 = (__int64)CurrentThread;
  v8 = Increment;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = 0;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v42);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)v36;
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->Header.SignalState = 1;
    Mutant->Abandoned = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      __writecr8(CurrentIrql);
      if ( Mutant->Abandoned )
        v18 = 128;
      else
        v18 = -1073741754;
      RtlRaiseStatus(v18);
    }
    ++Mutant->Header.SignalState;
  }
  if ( Mutant->Header.SignalState != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    goto LABEL_16;
  }
  LockNV = Mutant->Header.LockNV;
  BYTE2(LockNV) = 0;
  Mutant->Header.LockNV = LockNV;
  ApcDisable = Mutant->ApcDisable;
  OwnerThread = Mutant->OwnerThread;
  v40 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v40);
    while ( OwnerThread->ThreadLock );
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  OwnerThread->ThreadLock = 0LL;
  v16 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v16 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v19 = (__int64)v16;
      v16 = *(struct _KMUTANT **)&v16->Header.Lock;
      v33 = (_QWORD *)v19;
      v20 = *(_QWORD *)v19;
      v21 = *(_QWORD **)(v19 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 || *v21 != v19 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      v22 = *(_BYTE *)(v19 + 16);
      if ( v22 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v19, *(unsigned __int16 *)(v19 + 18), &v38) )
      {
        v23 = Mutant->Header.SignalState-- == 1;
        if ( v23 )
          goto LABEL_13;
      }
LABEL_33:
      if ( v16 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_13;
    }
    if ( v22 != 2 )
    {
      KiTryUnwaitThread((__int64)CurrentPrcb, v19, 256LL, 0LL);
      goto LABEL_33;
    }
    *(_BYTE *)(v19 + 17) = 5;
    v32 = *(_QWORD *)(v19 + 24);
    *(_QWORD *)v19 = 0LL;
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v34 = KeGetCurrentPrcb();
    v37 = v34->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v34->CurrentThread);
      EtwTraceEnqueueWork(v26, v25, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v32);
    v27 = (_QWORD *)(v32 + 8);
    v28 = v32;
    if ( (_QWORD *)*v27 != v27
      && *(_DWORD *)(v32 + 40) < *(_DWORD *)(v32 + 44)
      && (v37->Queue != (_DISPATCHER_HEADER *volatile)v32 || v37->WaitReason != 15) )
    {
      v29 = KiWakeQueueWaiter((__int64)v34, v32, (__int64)v33);
      v28 = v32;
      if ( v29 )
        goto LABEL_53;
      v27 = (_QWORD *)(v32 + 8);
    }
    v30 = *(_DWORD *)(v28 + 4);
    *(_DWORD *)(v28 + 4) = v30 + 1;
    v31 = *(_QWORD **)(v28 + 32);
    if ( *v31 != v28 + 24 )
      __fastfail(3u);
    *v33 = v28 + 24;
    v33[1] = v31;
    *v31 = v33;
    *(_QWORD *)(v28 + 32) = v33;
    if ( !v30 && (_QWORD *)*v27 != v27 )
    {
      KiWakeOtherQueueWaiters((__int64)v34, v28);
      v28 = v32;
    }
LABEL_53:
    _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
    v23 = Mutant->Header.SignalState-- == 1;
    if ( v23 )
      goto LABEL_13;
    goto LABEL_33;
  }
LABEL_13:
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive((unsigned __int64)Mutant);
  v8 = v41;
  CurrentIrql = v35;
LABEL_16:
  if ( v43 )
    v5 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v5, 1LL, v8, CurrentIrql);
  if ( ApcDisable )
    KiLeaveCriticalRegionUnsafe(v36);
  return SignalState;
}
