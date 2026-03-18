/*
 * XREFs of DpiGdiAsyncDisplayCallout @ 0x1C01EE68C
 * Callers:
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C01A144C (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01A1558 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 DpiGdiAsyncDisplayCallout()
{
  unsigned int v0; // ebx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  v0 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncDisplayCallout, DelayedWorkQueue, 0LL);
  }
  else
  {
    v0 = -1073741670;
    v3 = WdLogNewEntry5_WdLowResource(v2);
    *(_QWORD *)(v3 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v3);
  }
  return v0;
}
