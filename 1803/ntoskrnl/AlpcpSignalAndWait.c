/*
 * XREFs of AlpcpSignalAndWait @ 0x1400601C0
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x1404CBD10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x140562AB8 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     AlpcpLogUnwait @ 0x1407495DC (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *Timeout,
        char a6)
{
  __int64 v6; // rbp
  BOOLEAN v10; // si
  char v11; // r8
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r8d
  unsigned int v23; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v25; // ebx
  void *v26; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  char v34; // [rsp+A0h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 32);
  v10 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  if ( v6 )
  {
    if ( !*(_BYTE *)(a1 + 58) )
    {
      KeReleaseSemaphoreEx(*(_QWORD *)(v6 + 248), 1, 1, a4, 1);
      goto LABEL_16;
    }
    v11 = *(_BYTE *)(a1 + 59);
    v12 = *(_QWORD *)(v6 + 48);
    v34 = v11;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v12;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = SchedulerAssist[5];
        SchedulerAssist[5] = v31 + 1;
        if ( v31 == -1 )
        {
          if ( !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
          v11 = v34;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v12);
    }
    else
    {
      if ( !_InterlockedExchange64((volatile __int64 *)v12, (__int64)&LockHandle) )
      {
LABEL_6:
        v16 = *(_DWORD *)(v12 + 12);
        if ( v16 >= *(_DWORD *)(v12 + 8) )
        {
          v18 = 0LL;
          if ( v11 )
            ++*(_DWORD *)(v12 + 20);
          else
            ++*(_DWORD *)(v12 + 16);
        }
        else
        {
          v17 = *(_QWORD **)(v12 + 32);
          if ( v17 )
          {
            *(_QWORD *)(v12 + 32) = *v17;
            v16 = *(_DWORD *)(v12 + 12);
          }
          v18 = v17[1];
          *(_DWORD *)(v12 + 12) = v16 + 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v6 + 352, v19, v20, v21);
        KeAbPostRelease(v6 + 352);
        if ( v18 )
        {
          v22 = 0;
          if ( v34 )
            v22 = -1;
          IoSetIoCompletionEx2(*(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40), v22, 0, 0LL, 0, v18, 1);
        }
        goto LABEL_16;
      }
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v11 = v34;
    goto LABEL_6;
  }
  v28 = *(_QWORD *)(a1 + 24);
  if ( v28 )
  {
    v29 = 5;
    if ( a6 )
      v29 = 1;
    KeReleaseSemaphoreEx(v28 + 1608, 1, 1, a4, v29);
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 40);
    if ( v30 )
    {
      KeSetEvent((PRKEVENT)(v30 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
      v32 = *(_QWORD *)(a1 + 40);
      if ( (v32 & 1) != 0 )
        ObfDereferenceObject((PVOID)(v32 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
LABEL_16:
  KeLeaveCriticalRegion();
  v23 = KeWaitForSingleObject(a2, a3, a4, v10, Timeout);
  CurrentThread = KeGetCurrentThread();
  v25 = v23;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v23);
  v26 = *(void **)(a1 + 32);
  if ( v26 )
    ObfDereferenceObject(v26);
  return v25;
}
