/*
 * XREFs of KeReleaseMutant @ 0x1400DB760
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140028D80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     ExpDeleteMutant @ 0x1400DB740 (ExpDeleteMutant.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DBFB0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD510 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14012F768 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14013044C (LdrUnloadAlternateResourceModuleEx.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402391E0 (NtSignalAndWaitForSingleObject.c)
 *     PopWdiTimerWorkerThread @ 0x140248670 (PopWdiTimerWorkerThread.c)
 *     NtReleaseMutant @ 0x1405154F0 (NtReleaseMutant.c)
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400DB9FC (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  int ApcDisable; // r12d
  BOOLEAN v7; // r15
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  int SignalState; // esi
  _KTHREAD *OwnerThread; // r15
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v16; // rcx
  NTSTATUS v18; // ecx
  struct _LIST_ENTRY *v19; // r8
  struct _LIST_ENTRY *v20; // rax
  char v21; // al
  bool v22; // zf
  unsigned __int8 IsThreadRunning; // al
  __int64 v24; // rdx
  __int64 v25; // r9
  _QWORD *v26; // r8
  __int64 v27; // rcx
  char v28; // al
  int v29; // r10d
  struct _LIST_ENTRY *v30; // r9
  __int64 v31; // [rsp+30h] [rbp-A8h]
  _KTHREAD *v32; // [rsp+38h] [rbp-A0h]
  struct _KPRCB *v33; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *v34; // [rsp+48h] [rbp-90h]
  __int64 v35; // [rsp+50h] [rbp-88h]
  _KTHREAD *v36; // [rsp+58h] [rbp-80h]
  struct _KMUTANT *v37; // [rsp+60h] [rbp-78h]
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
  v35 = (__int64)CurrentThread;
  v7 = Wait;
  CurrentIrql = KeGetCurrentIrql();
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
    CurrentThread = (_KTHREAD *)v35;
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
    goto LABEL_15;
  }
  LockNV = Mutant->Header.LockNV;
  BYTE2(LockNV) = 0;
  Mutant->Header.LockNV = LockNV;
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v32 = OwnerThread;
  v40 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v40);
    while ( OwnerThread->ThreadLock );
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  v7 = v43;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  v32->ThreadLock = 0LL;
  v16 = Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v16 != &Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v34 = v16;
      v37 = (struct _KMUTANT *)v16->Flink;
      v19 = v16->Flink;
      v20 = v16->Blink;
      if ( v16->Flink->Blink != v16 || v20->Flink != v16 )
        __fastfail(3u);
      v20->Flink = v19;
      v19->Blink = v20;
      v21 = (char)v16[1].Flink;
      if ( v21 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v16, WORD1(v16[1].Flink), &v38) )
      {
        v22 = Mutant->Header.SignalState-- == 1;
        if ( v22 )
          goto LABEL_13;
      }
LABEL_38:
      v16 = (struct _LIST_ENTRY *)v37;
      if ( v37 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_13;
    }
    if ( v21 != 2 )
    {
      KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v16, 256LL, 0LL);
      goto LABEL_38;
    }
    BYTE1(v16[1].Flink) = 5;
    v31 = (__int64)v16[1].Blink;
    v16->Flink = 0LL;
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v33 = KeGetCurrentPrcb();
    v36 = v33->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v33->CurrentThread);
      EtwTraceEnqueueWork(v25, v24, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v31);
    v26 = (_QWORD *)(v31 + 8);
    v27 = v31;
    if ( (_QWORD *)*v26 != v26
      && *(_DWORD *)(v31 + 40) < *(_DWORD *)(v31 + 44)
      && (v36->Queue != (_DISPATCHER_HEADER *volatile)v31 || v36->WaitReason != 15) )
    {
      v28 = KiWakeQueueWaiter((__int64)v33, v31, (__int64)v34);
      v27 = v31;
      if ( v28 )
        goto LABEL_52;
      v26 = (_QWORD *)(v31 + 8);
    }
    v29 = *(_DWORD *)(v27 + 4);
    *(_DWORD *)(v27 + 4) = v29 + 1;
    v30 = *(struct _LIST_ENTRY **)(v27 + 32);
    if ( v30->Flink != (struct _LIST_ENTRY *)(v27 + 24) )
      __fastfail(3u);
    v34->Flink = (struct _LIST_ENTRY *)(v27 + 24);
    v34->Blink = v30;
    v30->Flink = v34;
    *(_QWORD *)(v27 + 32) = v34;
    if ( !v29 && (_QWORD *)*v26 != v26 )
    {
      KiWakeOtherQueueWaiters((__int64)v33, v27);
      v27 = v31;
    }
LABEL_52:
    _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
    v22 = Mutant->Header.SignalState-- == 1;
    if ( v22 )
      goto LABEL_13;
    goto LABEL_38;
  }
LABEL_13:
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
LABEL_15:
  if ( v7 )
    v5 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v5, 1u, v41, CurrentIrql);
  if ( ApcDisable )
    KeLeaveCriticalRegionThread(v35);
  return SignalState;
}
