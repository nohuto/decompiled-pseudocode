/*
 * XREFs of IoFreeController @ 0x14013FC10
 * Callers:
 *     IoAllocateController @ 0x14013FB90 (IoAllocateController.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x14013FE30 (KeRemoveDeviceQueue.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __stdcall IoFreeController(PCONTROLLER_OBJECT ControllerObject)
{
  KDEVICE_QUEUE *p_DeviceWaitQueue; // rbx
  PKDEVICE_QUEUE_ENTRY v2; // rax

  p_DeviceWaitQueue = &ControllerObject->DeviceWaitQueue;
  do
    v2 = KeRemoveDeviceQueue(p_DeviceWaitQueue);
  while ( v2
       && ((unsigned int (__fastcall *)(ULONG *, struct _LIST_ENTRY *, _QWORD, struct _LIST_ENTRY *))v2[1].DeviceListEntry.Flink)(
            &v2[-4].SortKey,
            v2[-2].DeviceListEntry.Flink,
            0LL,
            v2[1].DeviceListEntry.Blink) == 2 );
}
