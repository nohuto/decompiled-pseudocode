/*
 * XREFs of IoAllocateController @ 0x140001100
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeController @ 0x140001180 (IoFreeController.c)
 *     KeInsertDeviceQueue @ 0x1400012E0 (KeInsertDeviceQueue.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __stdcall IoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  DeviceObject->Queue.Wcb.DeviceRoutine = ExecutionRoutine;
  DeviceObject->Queue.Wcb.DeviceContext = Context;
  if ( !KeInsertDeviceQueue(&ControllerObject->DeviceWaitQueue, (PKDEVICE_QUEUE_ENTRY)&DeviceObject->Queue)
    && ((unsigned int (__fastcall *)(PDEVICE_OBJECT, struct _IRP *, _QWORD, PVOID))ExecutionRoutine)(
         DeviceObject,
         DeviceObject->CurrentIrp,
         0LL,
         Context) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
