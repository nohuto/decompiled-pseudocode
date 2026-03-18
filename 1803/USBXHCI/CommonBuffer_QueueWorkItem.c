/*
 * XREFs of CommonBuffer_QueueWorkItem @ 0x1C00067A0
 * Callers:
 *     CommonBuffer_AcquireBuffer @ 0x1C00064FC (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C0006548 (CommonBuffer_AcquireBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CommonBuffer_QueueWorkItem(struct _KEVENT *Context)
{
  char v2; // di
  struct _DEVICE_OBJECT *v3; // rax
  struct _IO_WORKITEM *WorkItem; // rsi

  v2 = 0;
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(
                                  WdfDriverGlobals,
                                  **(_QWORD **)&Context->Header.Lock);
  WorkItem = IoAllocateWorkItem(v3);
  if ( WorkItem )
  {
    KeClearEvent(Context + 1);
    IoQueueWorkItemEx(WorkItem, CommonBuffer_WorkItem, CriticalWorkQueue, Context);
    return 1;
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)&Context->Header.Lock + 72LL),
      3u,
      8u,
      0xFu,
      (__int64)&WPP_2b4f898d1d553c000803289ecd93c2f6_Traceguids);
  }
  return v2;
}
