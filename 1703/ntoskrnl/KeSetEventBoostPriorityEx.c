/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x140111AC4
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     FsRtlReleaseEofLock @ 0x14011C930 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1401FED70 (KeSetEventBoostPriority.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiAbFindWakeupLockEntry @ 0x140111C7C (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x140112AD4 (KiAbApplyWakeupBoost.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

void __fastcall KeSetEventBoostPriorityEx(__int64 a1, __int64 *a2, unsigned int *a3, __int64 a4, char a5)
{
  __int64 v5; // r13
  unsigned int *v6; // rdi
  __int64 *v7; // r12
  unsigned int v9; // ebp
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v11; // rax
  int v12; // r14d
  bool v13; // bl
  unsigned int v14; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  char v16; // al
  __int64 v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  char v20; // al
  bool v21; // zf
  __int64 WakeupLockEntry; // rax
  __int64 v23; // rdi
  _QWORD *v24; // r12
  struct _KPRCB *v25; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v27; // r8
  __int64 v28; // r13
  int v29; // r8d
  __int64 *v30; // rdx
  _QWORD *v31; // [rsp+30h] [rbp-58h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-50h]
  __int64 v33; // [rsp+90h] [rbp+8h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  *(_DWORD *)(a1 + 4) = 1;
  v11 = *(_QWORD **)(a1 + 8);
  v12 = 0;
  if ( v11 == (_QWORD *)(a1 + 8) )
    goto LABEL_2;
  while ( 1 )
  {
    v17 = (__int64)v11;
    v31 = (_QWORD *)*v11;
    v18 = (_QWORD *)*v11;
    v19 = (_QWORD *)v11[1];
    if ( v18[1] != v17 || *v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = v19;
    v20 = *(_BYTE *)(v17 + 16);
    if ( v20 != 1 )
    {
      if ( v20 != 2 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL) )
          --v12;
        goto LABEL_44;
      }
      *(_BYTE *)(v17 + 17) = 5;
      v23 = *(_QWORD *)(v17 + 24);
      *(_QWORD *)v17 = 0LL;
      v24 = (_QWORD *)(v23 + 8);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v25 = KeGetCurrentPrcb();
      v33 = (__int64)v25;
      CurrentThread = v25->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v27) = KeIsThreadRunning(v25->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v17, v27);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v23);
      if ( (_QWORD *)*v24 == v24
        || *(_DWORD *)(v23 + 40) >= *(_DWORD *)(v23 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v23 && CurrentThread->WaitReason == 15 )
      {
        v28 = v33;
      }
      else
      {
        v28 = v33;
        if ( KiWakeQueueWaiter(v33, v23, v17) )
        {
LABEL_40:
          _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
          v21 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v21 )
            goto LABEL_15;
          v7 = a2;
          goto LABEL_44;
        }
      }
      v29 = *(_DWORD *)(v23 + 4);
      *(_DWORD *)(v23 + 4) = v29 + 1;
      v30 = *(__int64 **)(v23 + 32);
      if ( *v30 != v23 + 24 )
        __fastfail(3u);
      *(_QWORD *)v17 = v23 + 24;
      *(_QWORD *)(v17 + 8) = v30;
      *v30 = v17;
      *(_QWORD *)(v23 + 32) = v17;
      if ( !v29 && (_QWORD *)*v24 != v24 )
        KiWakeOtherQueueWaiters(v28, v23);
      goto LABEL_40;
    }
    if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), v7) )
    {
      v21 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v21 )
        break;
    }
LABEL_44:
    v11 = v31;
    if ( v31 == (_QWORD *)(a1 + 8) )
      goto LABEL_15;
  }
  ++v12;
LABEL_15:
  v6 = a3;
  v5 = a4;
LABEL_2:
  if ( a2 )
    v13 = v12 > 0;
  else
    v13 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v14 = *v6;
    if ( *v6 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        WakeupLockEntry = KiAbFindWakeupLockEntry(v5, &Next[-27]);
        if ( WakeupLockEntry )
          KiAbApplyWakeupBoost(v14, WakeupLockEntry, 1LL);
      }
    }
    goto LABEL_7;
  }
  v16 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
  if ( v6 )
  {
    if ( *v6 )
    {
      if ( *(char *)v6 > v16 )
        v16 = *(_BYTE *)v6;
    }
    else
    {
      v13 = 0;
    }
  }
  if ( !v13 )
  {
LABEL_7:
    v9 = 1;
    v16 = 1;
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0, v9, (unsigned int)v16, CurrentIrql);
}
