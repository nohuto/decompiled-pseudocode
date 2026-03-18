/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x140440ED4
 * Callers:
 *     PfSnPrefetchSections @ 0x140440C2C (PfSnPrefetchSections.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall PfSnPrefetchSectionsCleanup(KSPIN_LOCK a1, int a2, unsigned int a3, KSPIN_LOCK a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  void (__fastcall **p_WorkerRoutine)(void *); // rbx
  KSPIN_LOCK SpinLock[6]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset(v4, 0, 48LL * a3);
  memset(SpinLock, 0, sizeof(SpinLock));
  ExInitializePushLock(SpinLock);
  SpinLock[1] = a1;
  LODWORD(SpinLock[4]) = a2;
  SpinLock[2] = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = (void (__fastcall *)(void *))SpinLock;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = (void (__fastcall *)(void *))PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = (void (__fastcall *)(void *))v4;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)SpinLock);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock);
}
