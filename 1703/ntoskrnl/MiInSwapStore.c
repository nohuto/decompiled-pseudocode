/*
 * XREFs of MiInSwapStore @ 0x1404C9F3C
 * Callers:
 *     MmInSwapWorkingSet @ 0x14007D3E4 (MmInSwapWorkingSet.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MiInSwapStoreContextDereference @ 0x1404C9E98 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  KPRIORITY PriorityThread; // eax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x73536D4Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  KeInitializeEvent((PRKEVENT)(v3 + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 2) = MiInSwapStoreWorker;
  *((_QWORD *)v3 + 3) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *((_QWORD *)v3 + 4) = Object;
  *((_DWORD *)v3 + 16) = 2;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( PriorityThread < 15 )
    ++PriorityThread;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)v3, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  KeWaitForSingleObject(v3 + 40, WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference((volatile signed __int32 *)v3);
  return 0LL;
}
