/*
 * XREFs of ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C017CC60
 * Callers:
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C017D130 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C002CEF0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C002D5C4 (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  __int64 Pointer; // rbx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
  Pointer = VmbChannelGetPointer(a1);
  KeSetEvent(*(PRKEVENT *)(Pointer + 4112), 0, 0);
  DXG_VMBUS_CHANNEL_BASE::DisableChannel((DXG_VMBUS_CHANNEL_BASE *)(Pointer + 4080));
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Pointer + 192));
  if ( WorkItem )
  {
    IoQueueWorkItem(
      WorkItem,
      (PIO_WORKITEM_ROUTINE)DXG_GUEST_VIRTUALGPU_VMBUS::InvalidateAdapterWorkItem,
      NormalWorkQueue,
      WorkItem);
  }
  else
  {
    v5 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v5 + 24) = 7236LL;
    WdLogEvent5_WdLowResource(v5);
  }
}
