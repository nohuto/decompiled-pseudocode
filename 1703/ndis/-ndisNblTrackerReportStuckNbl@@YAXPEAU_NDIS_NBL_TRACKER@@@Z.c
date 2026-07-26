/*
 * XREFs of ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00663A8
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0010700 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 */

void __fastcall ndisNblTrackerReportStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  void *Context; // rcx

  if ( !*((_WORD *)a1 + 8) || (unsigned int)(*((__int16 *)a1 + 8) - 3) <= 2 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x5754444Eu);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      Context = a1->Context;
      *(_QWORD *)PoolWithTag = Context;
      *((_DWORD *)PoolWithTag + 2) = *((__int16 *)a1 + 8);
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = ndisNblTrackerWatchdogWorkerRoutine;
      *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
      if ( ndisReferenceMiniport((__int64)Context, 0x67u) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 16), NormalWorkQueue);
      else
        ExFreePoolWithTag(v3, 0);
    }
  }
}
