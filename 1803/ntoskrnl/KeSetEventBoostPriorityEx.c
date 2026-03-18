/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x14007BCF4
 * Callers:
 *     FsRtlReleaseEofLock @ 0x14007B940 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1402448A0 (KeSetEventBoostPriority.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiAbFindWakeupLockEntry @ 0x140064594 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(__int64 a1, __int64 a2, int *a3, __int64 a4, char a5)
{
  __int64 v5; // r13
  int *v6; // rdi
  __int64 v7; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v10; // r15
  int v11; // r14d
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  char v15; // al
  bool v16; // zf
  bool v17; // bl
  char v18; // al
  int v19; // r8d
  __int64 v21; // rdi
  _QWORD *v22; // r15
  struct _KPRCB *v23; // r12
  _KTHREAD *CurrentThread; // r13
  __int64 v25; // r8
  int v26; // r8d
  __int64 *v27; // rdx
  int v28; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __m128i *WakeupLockEntry; // rax
  char CurrentIrql; // [rsp+30h] [rbp-58h]
  _QWORD *v32; // [rsp+90h] [rbp+8h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1);
  *(_DWORD *)(a1 + 4) = 1;
  v10 = *(_QWORD **)(a1 + 8);
  v11 = 0;
  if ( v10 == (_QWORD *)(a1 + 8) )
    goto LABEL_8;
  do
  {
    v12 = (_QWORD *)*v10;
    v13 = (__int64)v10;
    v10 = v12;
    v32 = v12;
    v14 = *(_QWORD **)(v13 + 8);
    if ( v12[1] != v13 || *v14 != v13 )
      __fastfail(3u);
    *v14 = v12;
    v12[1] = v14;
    v15 = *(_BYTE *)(v13 + 16);
    if ( v15 == 1 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, *(unsigned __int16 *)(v13 + 18), v7) )
      {
        v16 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v16 )
        {
          v6 = a3;
          v5 = a4;
          ++v11;
          goto LABEL_8;
        }
      }
      continue;
    }
    if ( v15 != 2 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL) )
        --v11;
      continue;
    }
    *(_BYTE *)(v13 + 17) = 5;
    v21 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)v13 = 0LL;
    v22 = (_QWORD *)(v21 + 8);
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v23 = KeGetCurrentPrcb();
    CurrentThread = v23->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      LOBYTE(v25) = KeIsThreadRunning(v23->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, v13, v25);
    }
    KiAcquireKobjectLockSafe(v21);
    if ( (_QWORD *)*v22 == v22
      || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)v23, v21, v13) )
    {
      v26 = *(_DWORD *)(v21 + 4);
      *(_DWORD *)(v21 + 4) = v26 + 1;
      v27 = *(__int64 **)(v21 + 32);
      if ( *v27 != v21 + 24 )
        __fastfail(3u);
      *(_QWORD *)v13 = v21 + 24;
      *(_QWORD *)(v13 + 8) = v27;
      *v27 = v13;
      *(_QWORD *)(v21 + 32) = v13;
      if ( !v26 && (_QWORD *)*v22 != v22 )
        KiWakeOtherQueueWaiters(v23, v21);
    }
    _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
    v16 = (*(_DWORD *)(a1 + 4))-- == 1;
    if ( v16 )
      break;
    v10 = v32;
    v7 = a2;
  }
  while ( v10 != (_QWORD *)(a1 + 8) );
  v5 = a4;
  v6 = a3;
LABEL_8:
  if ( a2 )
    v17 = v11 > 0;
  else
    v17 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v28 = *v6;
    if ( *v6 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        WakeupLockEntry = KiAbFindWakeupLockEntry(v5, (__int64)&Next[-27]);
        if ( WakeupLockEntry )
          KiAbApplyWakeupBoost(v28, (__int64)WakeupLockEntry, 1);
      }
    }
    v19 = 1;
    v18 = 1;
  }
  else
  {
    v18 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    if ( v6 )
    {
      if ( *v6 )
      {
        if ( (char)*v6 > v18 )
          v18 = *v6;
      }
      else
      {
        v17 = 0;
      }
    }
    if ( !v17 )
      v18 = 1;
    v19 = v17 + 1;
  }
  return KiExitDispatcher((_DWORD)CurrentPrcb, 0, v19, v18, CurrentIrql);
}
