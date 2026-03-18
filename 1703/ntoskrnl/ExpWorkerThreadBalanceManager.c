/*
 * XREFs of ExpWorkerThreadBalanceManager @ 0x1405C0ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeTimeOutQueueWaiters @ 0x14002969C (KeTimeOutQueueWaiters.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ExpNewThreadNecessary @ 0x1400FC9E0 (ExpNewThreadNecessary.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x140206838 (KeSetMaximumCountPriQueue.c)
 *     ExpCreateWorkerThread @ 0x1405677E4 (ExpCreateWorkerThread.c)
 *     ExpAllocatePoolForNode @ 0x14071EBE4 (ExpAllocatePoolForNode.c)
 */

void __fastcall __noreturn ExpWorkerThreadBalanceManager(
        unsigned __int16 a1,
        __int64 a2,
        _SINGLE_LIST_ENTRY *a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  LARGE_INTEGER *Alertable; // r9
  char v7; // r15
  char v8; // r13
  __int64 v9; // rsi
  struct _KTIMER *v10; // rbx
  char v11; // r14
  NTSTATUS v12; // eax
  __int64 v13; // r8
  struct _KDPC *v14; // r9
  int v15; // eax
  int v16; // ebx
  __int64 *v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // r8
  struct _KDPC *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int WorkerThread; // eax
  unsigned __int64 v27; // r12
  _DWORD **v28; // rbx
  __int64 v29; // rdi
  _DWORD *v30; // rcx
  unsigned int v31; // r8d
  __int64 PoolForNode; // rax
  __int64 v33; // rdi
  __int64 v34; // r10
  __int64 v35; // rbx
  int v36; // eax
  USHORT Count; // [rsp+48h] [rbp-49h] BYREF
  struct _KTHREAD *v38; // [rsp+50h] [rbp-41h]
  __int64 v39; // [rsp+58h] [rbp-39h]
  __int64 v40; // [rsp+60h] [rbp-31h]
  int v41; // [rsp+68h] [rbp-29h] BYREF
  __int64 v42; // [rsp+70h] [rbp-21h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+78h] [rbp-19h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp+7h] BYREF
  PVOID Object[3]; // [rsp+A8h] [rbp+17h] BYREF

  CurrentThread = KeGetCurrentThread();
  v38 = CurrentThread;
  KeSetActualBasePriorityThread((__int64)CurrentThread, 12, a3, a4);
  Alertable = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = KeNodeBlock[a1];
  if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * a1) )
    v9 = 0LL;
  v10 = (struct _KTIMER *)(v9 + 1848);
  v40 = v9;
  v39 = 10000000LL * ExpWorkerThreadTimeoutInSeconds;
  Object[1] = (PVOID)(v9 + 1824);
  Object[2] = (PVOID)(v9 + 1912);
  Object[0] = (PVOID)(v9 + 1848);
  while ( 1 )
  {
    v11 = (char)Alertable;
    v12 = KeWaitForMultipleObjects(
            3u,
            Object,
            WaitAny,
            Executive,
            1,
            (BOOLEAN)Alertable,
            Alertable,
            (PKWAIT_BLOCK)(v9 + 1936));
    v14 = 0LL;
    if ( !v12 )
      break;
    v15 = v12 - 1;
    if ( !v15 )
    {
      v16 = 0;
      v17 = (__int64 *)(v9 + 320);
      do
      {
        v18 = *v17;
        if ( *v17 )
        {
          if ( (v18 & 1) == 0
            || (PoolForNode = ExpAllocatePoolForNode(v9, (unsigned int)v16, v13, v14),
                v14 = 0LL,
                (v18 = PoolForNode) != 0) )
          {
            if ( ExpNewThreadNecessary(v18, *(_DWORD *)(v18 + 712)) )
            {
              WorkerThread = ExpCreateWorkerThread(v9, v25);
              v14 = 0LL;
              if ( WorkerThread < 0 )
                v11 = 1;
            }
          }
          else
          {
            v11 = 1;
          }
        }
        ++v16;
        ++v17;
      }
      while ( v16 < 8 );
      goto LABEL_9;
    }
    if ( v15 == 1 )
    {
      v27 = v39;
      v28 = (_DWORD **)(v9 + 320);
      v29 = 8LL;
      do
      {
        v30 = *v28;
        if ( ((unsigned __int8)*v28 & 1) == 0 )
        {
          if ( v30 )
          {
            if ( (v30[176] & 0x4000) == 0 && !v30[1] )
            {
              v31 = (v30[176] & 0x3FFF) - ((2 * v30[177]) >> 1);
              if ( v31 )
              {
                KeTimeOutQueueWaiters((__int64)v30, v27, v31);
                v14 = 0LL;
              }
            }
          }
        }
        ++v28;
        --v29;
      }
      while ( v29 );
      v9 = v40;
LABEL_9:
      CurrentThread = v38;
LABEL_10:
      v10 = (struct _KTIMER *)(v9 + 1848);
    }
    if ( !v7 )
    {
      v19 = (_QWORD *)(v9 + 320);
      v20 = 2LL;
      do
      {
        v21 = (struct _KDPC *)*v19;
        if ( (*v19 & 1) != 0 )
          v21 = v14;
        HIDWORD(v21[10].DpcData) = v21[10].DpcData;
        if ( (signed int)(v21[11].TargetInfoAsUlong & 0x3FFF) >= SLODWORD(v21[11].DpcListEntry.Next) || v11 )
          v7 = 1;
        ++v19;
        --v20;
      }
      while ( v20 );
      if ( v7 )
        KeSetCoalescableTimer(v10, (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v14);
    }
    KeQueryNodeActiveAffinity(*(_WORD *)(v9 + 146), &Affinity, &Count);
    if ( CurrentThread->UserAffinity.Group != Affinity.Group || CurrentThread->UserAffinity.Mask != Affinity.Mask )
      KeSetAffinityThread_0((__int64)CurrentThread, (__int64)&Affinity);
    v22 = (__int64 *)(v9 + 320);
    v23 = 8LL;
    Alertable = 0LL;
    do
    {
      v24 = *v22;
      if ( (*v22 & 1) == 0 && v24 && *(_DWORD *)(v24 + 664) != Count )
        KeSetMaximumCountPriQueue(v24, Count);
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  v7 = 0;
  v33 = 0LL;
  v34 = 1LL;
  do
  {
    v35 = *(_QWORD *)(v9 + 8 * v33 + 320);
    if ( ((unsigned __int8)v35 & (unsigned __int8)v34) != 0 )
      v35 = (__int64)v14;
    if ( *(_DWORD *)(v35 + 696) == *(_DWORD *)(v35 + 700) && ExpNewThreadNecessary(v35, 0x3FFF) )
    {
      if ( (ExpWorkerQueueTestFlags & 2) != 0 )
        KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v14);
      if ( v33 == v34 && !v8 )
      {
        v41 = v34;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
        v42 = v35;
        WorkItem.Parameter = &v41;
        WorkItem.List.Flink = (struct _LIST_ENTRY *)v14;
        ExQueueWorkItem(&WorkItem, NormalWorkQueue);
        v8 = 1;
      }
      v36 = ExpCreateWorkerThread(v9, v35);
      v14 = 0LL;
      v34 = 1LL;
      if ( v36 < 0 )
        v11 = 1;
    }
    v33 += v34;
  }
  while ( v33 <= v34 );
  goto LABEL_10;
}
