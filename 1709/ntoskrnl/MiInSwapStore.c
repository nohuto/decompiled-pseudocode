/*
 * XREFs of MiInSwapStore @ 0x1404443BC
 * Callers:
 *     MmInSwapWorkingSet @ 0x140003E0C (MmInSwapWorkingSet.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInSwapStoreContextDereference @ 0x140444548 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  PVOID PoolWithTag; // rax
  ULONG_PTR v3; // rbx
  __int64 ProcessPartition; // rax
  int v5; // r8d

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x73536D4Du);
  v3 = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  KeInitializeEvent((PRKEVENT)(v3 + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 16) = MiInSwapStoreWorker;
  *(_QWORD *)(v3 + 24) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *(_QWORD *)(v3 + 32) = Object;
  *(_DWORD *)(v3 + 64) = 2;
  KeQueryPriorityThread(KeGetCurrentThread());
  ProcessPartition = MiGetProcessPartition((__int64)Object);
  ExQueueWorkItemToPartition(v3, v5 + 32, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 168));
  KeWaitForSingleObject((PVOID)(v3 + 40), WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference(v3);
  return 0LL;
}
