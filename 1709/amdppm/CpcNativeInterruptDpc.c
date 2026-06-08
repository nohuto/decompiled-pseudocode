/*
 * XREFs of CpcNativeInterruptDpc @ 0x1C0007480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 */

void __fastcall CpcNativeInterruptDpc(
        struct _KDPC *Dpc,
        PDEVICE_OBJECT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(*DeferredContext);
  if ( WorkItem )
    IoQueueWorkItem(WorkItem, CpcNativeInterruptWorker, CriticalWorkQueue, WorkItem);
  else
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x10u,
      (__int64)&WPP_65f5fca8239233fae57bd9aac9975bd6_Traceguids);
}
