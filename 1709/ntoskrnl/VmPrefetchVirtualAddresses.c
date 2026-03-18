/*
 * XREFs of VmPrefetchVirtualAddresses @ 0x14073D5EC
 * Callers:
 *     MmInSwapWorkingSet @ 0x140003E0C (MmInSwapWorkingSet.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall VmPrefetchVirtualAddresses(void *Src, void (__fastcall *a2)(void *))
{
  _KPROCESS *Process; // rsi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v6; // rbx
  struct _LIST_ENTRY *v7; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[2].ActiveProcessors.Bitmap[16] )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * ((_QWORD)a2 + 4), 0x63506D56u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x38uLL);
      v6->List.Flink = 0LL;
      v6->WorkerRoutine = (void (__fastcall *)(void *))VmpPrefetchWorker;
      v6->Parameter = v6;
      ObfReferenceObject(Process);
      v6[1].WorkerRoutine = a2;
      v7 = (struct _LIST_ENTRY *)(((unsigned __int64)&v6[1].Parameter + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v6[1].List.Blink = v7;
      v6[1].List.Flink = (struct _LIST_ENTRY *)Process;
      memmove(v7, Src, 16LL * (_QWORD)a2);
      ExQueueWorkItem(v6, DelayedWorkQueue);
    }
  }
}
