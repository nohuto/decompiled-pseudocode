/*
 * XREFs of CmpCanGrowHive @ 0x14043B1FC
 * Callers:
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpCanGrowHive(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != qword_14033BE70 )
      return 1;
    if ( a2 + 4096 <= CmSystemHiveLimitSize )
    {
      LODWORD(v3) = 393216;
      if ( *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5584LL) >> 1 < 0x60000uLL )
        v3 = *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5584LL) >> 1;
      if ( a2 + 4096 > 36864 * (int)v3 / 0xAu && !CmpSystemQuotaWarningPopupDisplayed && ExReadyForErrors )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
          CmpSystemQuotaWarningPopupDisplayed = 1;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
