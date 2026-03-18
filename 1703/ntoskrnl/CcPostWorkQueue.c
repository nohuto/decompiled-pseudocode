/*
 * XREFs of CcPostWorkQueue @ 0x1400AE214
 * Callers:
 *     CcScheduleReadAheadEx @ 0x14004D5C0 (CcScheduleReadAheadEx.c)
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 *     CcNotifyOfMappedWrite @ 0x1400B00A8 (CcNotifyOfMappedWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x14015E860 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPerfLogWorkItemEnqueue @ 0x140023B2C (CcPerfLogWorkItemEnqueue.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _WORK_QUEUE_ITEM *v3; // rdi
  unsigned int v6; // edx
  __int64 *v7; // rax
  struct _WORK_QUEUE_ITEM **v8; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 128);
  v3 = 0LL;
  if ( (xmmword_1403E4010 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, a1, 0, ((*(_BYTE *)(a1 + 120) - 2) & 0xFD) == 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 128), &LockHandle);
  if ( *(_BYTE *)(a1 + 120) != 3
    || *(_QWORD *)(v2 + 328) == v2 + 328
    || *(_QWORD *)(v2 + 672) < *(_QWORD *)(v2 + 696) >> 2
    && *(_QWORD *)(v2 + 672) <= *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5760LL) >> 1 )
  {
    v6 = CcMaxNumberOfWriteBehindThreads;
  }
  else
  {
    v6 = CcMaxNumberOfWriteBehindThreads;
    if ( (unsigned int)CcMaxNumberOfWriteBehindThreads >= *(_DWORD *)(v2 + 272) )
      *(_BYTE *)(v2 + 808) = 1;
  }
  v7 = *(__int64 **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( !*(_BYTE *)(v2 + 384) )
  {
    v8 = (struct _WORK_QUEUE_ITEM **)(v2 + 280);
    if ( *v8 != (struct _WORK_QUEUE_ITEM *)v8 && (*(_BYTE *)(a1 + 120) != 2 || *(_DWORD *)(v2 + 400) + 1 <= v6) )
    {
      v3 = *v8;
      Flink = (*v8)->List.Flink;
      if ( (struct _WORK_QUEUE_ITEM **)(*v8)->List.Blink != v8 || (struct _WORK_QUEUE_ITEM *)Flink->Blink != v3 )
        __fastfail(3u);
      *v8 = (struct _WORK_QUEUE_ITEM *)Flink;
      Flink->Blink = (struct _LIST_ENTRY *)v8;
      ++*(_DWORD *)(v2 + 276);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
  {
    v3->List.Flink = 0LL;
    ExQueueWorkItem(v3, CriticalWorkQueue);
  }
}
