/*
 * XREFs of FsRtlpPostStackOverflow @ 0x1401E48F4
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x1401E4860 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x1401E4870 (FsRtlPostStackOverflow.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
