/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x140100F90
 * Callers:
 *     FsRtlReleaseEofLock @ 0x140100BE0 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x140205130 (KeSetEventBoostPriority.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KiAbFindWakeupLockEntry @ 0x1400A82C0 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

void __fastcall KeSetEventBoostPriorityEx(__int64 a1, _QWORD *a2, int *a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v5; // r12
  _QWORD *v7; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // rax
  int v12; // r14d
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  char v16; // al
  bool v17; // zf
  bool v18; // bl
  char v19; // al
  unsigned __int8 v20; // r8
  __int64 v21; // rdi
  _QWORD *v22; // r12
  struct _KPRCB *v23; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v25; // r8
  __int64 v26; // r13
  int v27; // r8d
  __int64 *v28; // rdx
  int v29; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __m128i *WakeupLockEntry; // rax
  __int64 v32; // r9
  unsigned __int8 v33; // [rsp+30h] [rbp-48h]
  _QWORD *v34; // [rsp+38h] [rbp-40h]
  __int64 v35; // [rsp+80h] [rbp+8h]

  v5 = a4;
  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v33 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  *(_DWORD *)(a1 + 4) = 1;
  v11 = *(_QWORD **)(a1 + 8);
  v12 = 0;
  if ( v11 == (_QWORD *)(a1 + 8) )
    goto LABEL_8;
  do
  {
    v13 = (__int64)v11;
    v34 = (_QWORD *)*v11;
    v14 = (_QWORD *)*v11;
    v15 = (_QWORD *)v11[1];
    if ( v14[1] != v13 || *v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = v15;
    v16 = *(_BYTE *)(v13 + 16);
    if ( v16 == 1 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v13, *(unsigned __int16 *)(v13 + 18), v7) )
      {
        v17 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v17 )
        {
          v5 = a4;
          CurrentIrql = v33;
          ++v12;
          goto LABEL_8;
        }
      }
      goto LABEL_39;
    }
    if ( v16 != 2 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v13, 256LL, 0LL) )
        --v12;
      goto LABEL_39;
    }
    *(_BYTE *)(v13 + 17) = 5;
    v21 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)v13 = 0LL;
    v22 = (_QWORD *)(v21 + 8);
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v23 = KeGetCurrentPrcb();
    v35 = (__int64)v23;
    CurrentThread = v23->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      LOBYTE(v25) = KeIsThreadRunning(v23->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, v13, v25);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v21);
    if ( (_QWORD *)*v22 == v22
      || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15 )
    {
      v26 = v35;
LABEL_31:
      v27 = *(_DWORD *)(v21 + 4);
      *(_DWORD *)(v21 + 4) = v27 + 1;
      v28 = *(__int64 **)(v21 + 32);
      if ( *v28 != v21 + 24 )
        __fastfail(3u);
      *(_QWORD *)v13 = v21 + 24;
      *(_QWORD *)(v13 + 8) = v28;
      *v28 = v13;
      *(_QWORD *)(v21 + 32) = v13;
      if ( !v27 && (_QWORD *)*v22 != v22 )
        KiWakeOtherQueueWaiters(v26, v21);
      goto LABEL_35;
    }
    v26 = v35;
    if ( !KiWakeQueueWaiter(v35, v21, v13) )
      goto LABEL_31;
LABEL_35:
    _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
    v17 = (*(_DWORD *)(a1 + 4))-- == 1;
    if ( v17 )
      break;
    v7 = a2;
LABEL_39:
    v11 = v34;
  }
  while ( v34 != (_QWORD *)(a1 + 8) );
  CurrentIrql = v33;
  v5 = a4;
LABEL_8:
  if ( a2 )
    v18 = v12 > 0;
  else
    v18 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v29 = *a3;
    if ( *a3 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        WakeupLockEntry = KiAbFindWakeupLockEntry(v5, (__int64)&Next[-27]);
        if ( WakeupLockEntry )
          KiAbApplyWakeupBoost(v29, (__int64)WakeupLockEntry, 1LL, v32);
      }
    }
    v20 = 1;
    v19 = 1;
  }
  else
  {
    v19 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    if ( a3 )
    {
      if ( *a3 )
      {
        if ( *(char *)a3 > v19 )
          v19 = *(_BYTE *)a3;
      }
      else
      {
        v18 = 0;
      }
    }
    if ( !v18 )
      v19 = 1;
    v20 = v18 + 1;
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, v20, v19, CurrentIrql);
}
