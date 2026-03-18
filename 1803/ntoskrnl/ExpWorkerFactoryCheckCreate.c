/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1400865D0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140086160 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x140176D50 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExpCheckThreadHistory @ 0x140086AF0 (ExpCheckThreadHistory.c)
 *     ExpWorkerFactoryCreateThread @ 0x140086C70 (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140087A0C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14052EF74 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

unsigned __int64 __fastcall ExpWorkerFactoryCheckCreate(char *Object, __int64 LockHandle, __int64 a3, __int64 a4)
{
  char v4; // si
  struct _KLOCK_QUEUE_HANDLE *v5; // rbx
  unsigned int v7; // ebp
  volatile __int64 *v8; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v12; // rcx
  __int64 Next; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int64 result; // rax
  unsigned int *v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // eax
  char v23; // si
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  _QWORD v29[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v30; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  v5 = (struct _KLOCK_QUEUE_HANDLE *)LockHandle;
  v7 = 2;
  if ( !LockHandle )
  {
    v8 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v5 = (struct _KLOCK_QUEUE_HANDLE *)v29;
    v29[1] = v8;
    v29[0] = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v30 = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = SchedulerAssist[5];
        SchedulerAssist[5] = v26 + 1;
        if ( v26 == -1 )
        {
          a3 = *((unsigned __int8 *)SchedulerAssist + 27);
          if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)a3 )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v29, v8);
    }
    else
    {
      LockHandle = _InterlockedExchange64(v8, (__int64)v29);
      if ( LockHandle )
        KxWaitForLockOwnerShip(v29);
    }
  }
  if ( v4 )
  {
    v24 = *((_DWORD *)Object + 38);
    if ( (((unsigned __int8)v24 | (unsigned __int8)((v24 | (v24 >> 6)) >> 2)) & 0x30) == 0 && (v24 & 0x100) == 0 )
      goto LABEL_43;
  }
  if ( *((_DWORD *)Object + 36)
    || *((_DWORD *)Object + 32) >= *((_DWORD *)Object + 31)
    || (v12 = *((_QWORD *)Object + 2), *(_DWORD *)(v12 + 28))
    || (LockHandle = *(_QWORD *)(v12 + 8), !*(_DWORD *)(LockHandle + 4)) && !*(_DWORD *)(v12 + 24) )
  {
    *((_DWORD *)Object + 38) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v5, retaddr, a3, a4);
      goto LABEL_13;
    }
    _m_prefetchw(v5);
    Next = (__int64)v5->LockQueue.Next;
    if ( !v5->LockQueue.Next )
    {
      if ( v5 == (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v5->LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)v5) )
      {
LABEL_13:
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v28 = v15[5] - 1;
            v15[5] = v28;
            if ( !v28 && !*((_BYTE *)v15 + 25) && !*((_BYTE *)v15 + 27) )
              KiPerformUnboostKick(v14);
          }
        }
        goto LABEL_14;
      }
      Next = KxWaitForLockChainValid(v5, LockHandle, a3, a4);
    }
    v5->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_13;
  }
  v17 = (unsigned int *)(Object + 152);
  if ( (!v4 || (*v17 & 0xC0) != 0x80) && *(_DWORD *)(LockHandle + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v25 = *v17;
    if ( ((*v17 >> 6) & 3) != 0 )
    {
      if ( ((*v17 >> 6) & 3) != 1 || !v4 )
        goto LABEL_43;
      v22 = v25 & 0xFFFFFF3F | 0x80;
      *v17 = v22;
    }
    else
    {
      v7 = 3;
      v22 = v25 & 0xFFFFFF3F | 0x40;
      *v17 = v22;
    }
    goto LABEL_36;
  }
  if ( (!v4 || (*((_DWORD *)Object + 38) & 0x30) != 0x20) && (unsigned __int8)ExpCheckThreadHistory(Object) )
  {
    v17 = (unsigned int *)(Object + 152);
    v21 = *((_DWORD *)Object + 38);
    if ( ((v21 >> 4) & 3) != 0 )
    {
      if ( ((*((_DWORD *)Object + 38) >> 4) & 3) != 1 || !v4 )
        goto LABEL_43;
      v22 = v21 & 0xFFFFFFCF | 0x20;
      *v17 = v22;
    }
    else
    {
      v7 = 3;
      v22 = v21 & 0xFFFFFFCF | 0x10;
      *v17 = v22;
    }
LABEL_36:
    v23 = 0;
    if ( (v22 & 8) == 0 )
    {
      v23 = 1;
      *v17 = v22 | 8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
    __writecr8(v5->OldIrql);
    if ( v23 )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v7);
  }
  if ( !v4 || (*((_DWORD *)Object + 38) & 0x3000) != 0x2000 )
  {
    v18 = *((_DWORD *)Object + 35);
    if ( v18 )
    {
      if ( *((_DWORD *)Object + 32) > v18 )
      {
        v17 = (unsigned int *)(Object + 152);
        v27 = *((_DWORD *)Object + 38);
        if ( ((v27 >> 12) & 3) == 0 )
        {
          v7 = 3;
          v22 = v27 & 0xFFFFCFFF | 0x1000;
          *v17 = v22;
          goto LABEL_36;
        }
        if ( ((*((_DWORD *)Object + 38) >> 12) & 3) == 1 && v4 )
        {
          v22 = v27 & 0xFFFFCFFF | 0x2000;
          *v17 = v22;
          goto LABEL_36;
        }
LABEL_43:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
LABEL_14:
        result = v5->OldIrql;
        __writecr8(result);
        return result;
      }
    }
  }
  v17 = (unsigned int *)(Object + 152);
  v19 = *((_DWORD *)Object + 38);
  if ( (v19 & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(Object);
    v19 = *v17;
  }
  ++*((_DWORD *)Object + 36);
  *v17 = v19 & 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
  __writecr8(v5->OldIrql);
  result = ExpWorkerFactoryCreateThread(Object);
  v20 = result;
  if ( (result & 0x80000000) != 0LL )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v5);
    --*((_DWORD *)Object + 36);
    if ( v20 != -1073741558 && v20 != -1073741814 && v20 != -1073741582 && v20 != -1073741823 )
    {
      *v17 |= 0x100u;
      v7 = 1;
      v22 = *v17;
      goto LABEL_36;
    }
    goto LABEL_43;
  }
  return result;
}
