/*
 * XREFs of KeReleaseMutant @ 0x14013E470
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14012FA80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14013D39C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14013DE98 (LdrpGetFromMUIMemCache.c)
 *     ExpDeleteMutant @ 0x14013E450 (ExpDeleteMutant.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016399C (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016B088 (LdrpSetAlternateResourceModuleHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x140270CA0 (NtSignalAndWaitForSingleObject.c)
 *     PopWdiTimerWorkerThread @ 0x14027E770 (PopWdiTimerWorkerThread.c)
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     NtReleaseMutant @ 0x1405BC830 (NtReleaseMutant.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14013E754 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // rax
  char v5; // di
  int ApcDisable; // r12d
  BOOLEAN v7; // r15
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  int SignalState; // esi
  LONG v13; // eax
  _KTHREAD *OwnerThread; // r15
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KMUTANT *v17; // rcx
  struct _KMUTANT *v19; // rax
  __int64 v20; // rdx
  struct _LIST_ENTRY *v21; // rcx
  char v22; // al
  bool v23; // zf
  NTSTATUS v24; // ecx
  unsigned __int8 IsThreadRunning; // al
  __int64 v26; // rdx
  __int64 v27; // r9
  _QWORD *v28; // r8
  __int64 v29; // rcx
  char v30; // al
  int v31; // r10d
  struct _KMUTANT **v32; // r9
  __int64 v33; // [rsp+30h] [rbp-A8h]
  _KTHREAD *v34; // [rsp+38h] [rbp-A0h]
  struct _KMUTANT *v35; // [rsp+40h] [rbp-98h]
  struct _KPRCB *v36; // [rsp+48h] [rbp-90h]
  struct _KPRCB *v37; // [rsp+48h] [rbp-90h]
  __int64 v38; // [rsp+50h] [rbp-88h]
  _KTHREAD *v39; // [rsp+58h] [rbp-80h]
  struct _KMUTANT *v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h] BYREF
  LONG LockNV; // [rsp+70h] [rbp-68h]
  int v43; // [rsp+E0h] [rbp+8h] BYREF
  KPRIORITY v44; // [rsp+E8h] [rbp+10h]
  int v45; // [rsp+F0h] [rbp+18h] BYREF
  BOOLEAN v46; // [rsp+F8h] [rbp+20h]

  v46 = Wait;
  v44 = Increment;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  ApcDisable = 0;
  v38 = (__int64)CurrentThread;
  v7 = Wait;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 0;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v45);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)v38;
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->Header.SignalState = 1;
    v13 = 1;
    Mutant->Abandoned = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      __writecr8(CurrentIrql);
      if ( Mutant->Abandoned )
        v24 = 128;
      else
        v24 = -1073741754;
      RtlRaiseStatus(v24);
    }
    v13 = ++Mutant->Header.SignalState;
  }
  if ( v13 != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    goto LABEL_15;
  }
  LockNV = Mutant->Header.LockNV;
  BYTE2(LockNV) = 0;
  Mutant->Header.LockNV = LockNV;
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v34 = OwnerThread;
  v36 = KeGetCurrentPrcb();
  v43 = 0;
  KiSetVpThreadSpinLockCount((__int64)v36, 1);
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    KiSetVpThreadSpinLockCount((__int64)v36, 0);
    do
      KeYieldProcessorEx(&v43);
    while ( OwnerThread->ThreadLock );
    KiSetVpThreadSpinLockCount((__int64)v36, 1);
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  v7 = v46;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  v34->ThreadLock = 0LL;
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  v17 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v17 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v19 = *(struct _KMUTANT **)&v17->Header.Lock;
      v20 = (__int64)v17;
      v35 = v17;
      v21 = v17->Header.WaitListHead.Flink;
      v40 = v19;
      if ( v19->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v20 || v21->Flink != (struct _LIST_ENTRY *)v20 )
        __fastfail(3u);
      v21->Flink = (struct _LIST_ENTRY *)v19;
      v19->Header.WaitListHead.Flink = v21;
      v22 = *(_BYTE *)(v20 + 16);
      if ( v22 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v20, *(unsigned __int16 *)(v20 + 18), &v41) )
      {
        v23 = Mutant->Header.SignalState-- == 1;
        if ( v23 )
          goto LABEL_13;
      }
LABEL_33:
      v17 = v40;
      if ( v40 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_13;
    }
    if ( v22 != 2 )
    {
      KiTryUnwaitThread((__int64)CurrentPrcb, v20, 256LL, 0LL);
      goto LABEL_33;
    }
    *(_BYTE *)(v20 + 17) = 5;
    v33 = *(_QWORD *)(v20 + 24);
    *(_QWORD *)v20 = 0LL;
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v37 = KeGetCurrentPrcb();
    v39 = v37->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v37->CurrentThread);
      EtwTraceEnqueueWork(v27, v26, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v33);
    v28 = (_QWORD *)(v33 + 8);
    v29 = v33;
    if ( (_QWORD *)*v28 != v28
      && *(_DWORD *)(v33 + 40) < *(_DWORD *)(v33 + 44)
      && (v39->Queue != (_DISPATCHER_HEADER *volatile)v33 || v39->WaitReason != 15) )
    {
      v30 = KiWakeQueueWaiter((__int64)v37, v33, (__int64)v35);
      v29 = v33;
      if ( v30 )
        goto LABEL_53;
      v28 = (_QWORD *)(v33 + 8);
    }
    v31 = *(_DWORD *)(v29 + 4);
    *(_DWORD *)(v29 + 4) = v31 + 1;
    v32 = *(struct _KMUTANT ***)(v29 + 32);
    if ( *v32 != (struct _KMUTANT *)(v29 + 24) )
      __fastfail(3u);
    *(_QWORD *)&v35->Header.Lock = v29 + 24;
    v35->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v32;
    *v32 = v35;
    *(_QWORD *)(v29 + 32) = v35;
    if ( !v31 && (_QWORD *)*v28 != v28 )
    {
      KiWakeOtherQueueWaiters((__int64)v37, v29);
      v29 = v33;
    }
LABEL_53:
    _InterlockedAnd((volatile signed __int32 *)v29, 0xFFFFFF7F);
    v23 = Mutant->Header.SignalState-- == 1;
    if ( v23 )
      goto LABEL_13;
    goto LABEL_33;
  }
LABEL_13:
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
LABEL_15:
  if ( v7 )
    v5 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v5, 1u, v44, CurrentIrql);
  if ( ApcDisable )
    KeLeaveCriticalRegionThread(v38);
  return SignalState;
}
