/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x1400889D8
 * Callers:
 *     ExpFindCurrentThread @ 0x140088730 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x1400CF164 (ExpFindEmptyEntry.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  volatile __int64 *v11; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v14; // al
  __int64 v15; // rdx
  volatile __int64 *v16; // r10
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  char v19; // al
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  unsigned __int8 v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 v24; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v7 = v5;
    v8 = v5 + 4;
    if ( v5 + 4 < v5 )
      return;
    v6 = 16LL * v8;
    if ( v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 48;
    v7 = 0;
    v8 = 3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
  _enable();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x61546552u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(&PoolWithTag[4 * v7], 0, 16LL * (v8 - v7));
    a2->LockQueue.Next = 0LL;
    v11 = (volatile __int64 *)(a1 + 96);
    a2->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
    v23 = 2;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = SchedulerAssist[5];
        SchedulerAssist[5] = v21 + 1;
        if ( v21 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v14 = KiFastAcquireQueuedSpinLockInstrumented(a2, v11, &v23);
    }
    else
    {
      v14 = 0;
      v15 = _InterlockedExchange64(v11, (__int64)a2);
      if ( v15 )
      {
        KxWaitForLockOwnerShipWithIrql(a2, v15, &v23);
        v14 = 1;
      }
    }
    if ( v14 )
    {
      _disable();
      __writecr8(v23);
    }
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(v10, v2, 16LL * v7);
      v10[2] = v8;
      *(_QWORD *)(a1 + 16) = v10;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      _enable();
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( !v5 )
        LOBYTE(v5) = 1;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      _enable();
      ExFreePoolWithTag(v10, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
  }
  v16 = (volatile __int64 *)(a1 + 96);
  v24 = 2;
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = v5;
  a2->LockQueue.Next = 0LL;
  a2->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  v17 = KeGetCurrentPrcb();
  v18 = v17->SchedulerAssist;
  if ( v18 )
  {
    if ( v17->NestingLevel <= 1u )
    {
      v22 = v18[5];
      v18[5] = v22 + 1;
      if ( v22 == -1 && !*((_BYTE *)v18 + 25) && !*((_BYTE *)v18 + 27) )
        KiPerformUnboostKick(v17);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v19 = KiFastAcquireQueuedSpinLockInstrumented(a2, v16, &v24);
  }
  else
  {
    v19 = 0;
    v20 = _InterlockedExchange64(v16, (__int64)a2);
    if ( v20 )
    {
      KxWaitForLockOwnerShipWithIrql(a2, v20, &v24);
      v19 = 1;
    }
  }
  if ( v19 )
  {
    _disable();
    __writecr8(v24);
  }
}
