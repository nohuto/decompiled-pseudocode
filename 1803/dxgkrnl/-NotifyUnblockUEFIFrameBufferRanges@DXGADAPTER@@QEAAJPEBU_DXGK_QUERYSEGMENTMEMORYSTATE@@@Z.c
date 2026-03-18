/*
 * XREFs of ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C0025914
 * Callers:
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C002F280 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  char *PoolWithTag; // rdi
  __int64 v7; // rax
  struct _IO_WORKITEM *WorkItem; // r14
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0;
  if ( a2->NumInvalidMemoryRanges == 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x4B677844u);
    if ( PoolWithTag )
    {
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 24));
      if ( WorkItem )
      {
        *(_QWORD *)PoolWithTag = *(_QWORD *)((char *)this + 268);
        *(struct _DXGK_QUERYSEGMENTMEMORYSTATE *)(PoolWithTag + 8) = *a2;
        *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 24;
        *(DXGK_MEMORYRANGE *)(PoolWithTag + 24) = *a2->pMemoryRanges;
        v10 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v10 + 24) = 2503LL;
        WdLogEvent5_WdEvent(v10);
        IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, PoolWithTag);
        PoolWithTag = 0LL;
      }
      else
      {
        v2 = -1073741670;
        v9 = WdLogNewEntry5_WdLowResource();
        *(_QWORD *)(v9 + 24) = 2494LL;
        WdLogEvent5_WdLowResource(v9);
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v2 = -1073741670;
      v7 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v7 + 24) = 2486LL;
      WdLogEvent5_WdLowResource(v7);
    }
  }
  else
  {
    v2 = -1073741811;
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = a2->NumInvalidMemoryRanges;
    WdLogEvent5_WdError(v5);
  }
  return v2;
}
