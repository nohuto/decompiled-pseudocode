/*
 * XREFs of ExpWaitForResource @ 0x1400F3F20
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140100730 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x140158600 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140159160 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PerfLogExecutiveResourceWait @ 0x1402B1C68 (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWaitForResource(
        struct _LIST_ENTRY *a1,
        __int64 a2,
        unsigned int a3,
        void (__fastcall *a4)(struct _LIST_ENTRY *))
{
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  NTSTATUS result; // eax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-40h] BYREF

  __incgsdword(0x6368u);
  v8 = 0;
  v9 = 0;
  ++HIDWORD(a1[4].Flink);
  Timeout.QuadPart = -5000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 16), WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v8;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v8);
    ++v9;
    Timeout.QuadPart = ExpTimeout;
    if ( ExResourceTimeoutCount && v9 > ExResourceTimeoutCount )
    {
      v9 = 0;
      DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6F546552u);
      if ( PoolWithTag )
      {
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ExpResourceTimeoutCaptureLiveDump;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
        PoolWithTag[1].List.Blink = a1;
        LODWORD(PoolWithTag[1].WorkerRoutine) = HIDWORD(a1[4].Flink);
        HIDWORD(PoolWithTag[1].WorkerRoutine) = ExResourceTimeoutCount;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
      __debugbreak();
    }
    if ( a4 )
      a4(a1);
  }
  return result;
}
