/*
 * XREFs of ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C0021C34
 * Callers:
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0034AF0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  char *PoolWithTag; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _IO_WORKITEM *WorkItem; // r14
  __int64 v11; // rax
  __int64 v12; // rax

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
        v12 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v12 + 24) = 2422LL;
        WdLogEvent5_WdEvent(v12);
        IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, PoolWithTag);
        PoolWithTag = 0LL;
      }
      else
      {
        v2 = -1073741670;
        v11 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v11 + 24) = 2413LL;
        WdLogEvent5_WdLowResource(v11);
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v2 = -1073741670;
      v8 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v8 + 24) = 2405LL;
      WdLogEvent5_WdLowResource(v8);
    }
  }
  else
  {
    v2 = -1073741811;
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = a2->NumInvalidMemoryRanges;
    WdLogEvent5_WdError(v5);
  }
  return v2;
}
