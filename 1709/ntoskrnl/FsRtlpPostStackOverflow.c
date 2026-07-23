/*
 * XREFs of FsRtlpPostStackOverflow @ 0x1401E95A4
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x1401E94F0 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x1401E9510 (FsRtlPostStackOverflow.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KeInsertQueue @ 0x14012E710 (KeInsertQueue.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

LONG __fastcall FsRtlpPostStackOverflow(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned __int8 a4)
{
  _LIST_ENTRY *PoolWithTag; // rax

  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x73725346u);
  if ( !PoolWithTag )
  {
    if ( !a4 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&StackOverflowFallbackSerialEvent, Executive, 0, 0, 0LL);
    PoolWithTag = (_LIST_ENTRY *)&StackOverflowFallback;
  }
  PoolWithTag[2].Blink = a1;
  PoolWithTag[3].Flink = a2;
  PoolWithTag[2].Flink = a3;
  PoolWithTag->Flink = 0LL;
  PoolWithTag[1].Flink = (struct _LIST_ENTRY *)FsRtlStackOverflowRead;
  PoolWithTag[1].Blink = PoolWithTag;
  return KeInsertQueue((PRKQUEUE)&FsRtlWorkerQueues + a4, PoolWithTag);
}
