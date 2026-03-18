/*
 * XREFs of CmpClaimGlobalQuota @ 0x14047D7E4
 * Callers:
 *     CmpAllocate @ 0x14047D780 (CmpAllocate.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x1406A0870 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1406A09A4 (HvpViewRemapViewOfPrimaryFile.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x14047D83C (CmpUpdateGlobalQuotaAllowed.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1);
  if ( !(_DWORD)v2 || v2 >= CmpGlobalQuotaAllowed - CmpGlobalQuotaUsed )
    return 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, v2);
  if ( CmpGlobalQuotaUsed > (unsigned __int64)CmpGlobalQuotaWarning
    && !CmpQuotaWarningPopupDisplayed
    && ExReadyForErrors )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
      CmpQuotaWarningPopupDisplayed = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 1;
}
