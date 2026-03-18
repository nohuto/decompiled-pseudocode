/*
 * XREFs of IoStartPacket @ 0x1401F9CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeInsertByKeyDeviceQueue @ 0x140207BE0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140207C90 (KeInsertDeviceQueue.c)
 */

void __stdcall IoStartPacket(PDEVICE_OBJECT DeviceObject, PIRP Irp, PULONG Key, PDRIVER_CANCEL CancelFunction)
{
  KIRQL v8; // bp
  unsigned __int8 CurrentIrql; // r15
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rdx
  KDEVICE_QUEUE *p_DeviceQueue; // rcx
  BOOLEAN inserted; // al

  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( CancelFunction )
  {
    v8 = KeAcquireQueuedSpinLock(7uLL);
    Irp->CancelRoutine = CancelFunction;
  }
  p_Tail = &Irp->Tail;
  p_DeviceQueue = &DeviceObject->DeviceQueue;
  if ( Key )
    inserted = KeInsertByKeyDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry, *Key);
  else
    inserted = KeInsertDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry);
  if ( inserted )
  {
    if ( CancelFunction )
    {
      if ( Irp->Cancel )
      {
        Irp->CancelRoutine = 0LL;
        Irp->CancelIrql = v8;
        ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))CancelFunction)(DeviceObject, Irp);
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v8);
      }
    }
  }
  else
  {
    DeviceObject->CurrentIrp = Irp;
    if ( CancelFunction )
    {
      if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x200) != 0 )
        Irp->CancelRoutine = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v8);
    }
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))DeviceObject->DriverObject->DriverStartIo)(DeviceObject, Irp);
  }
  __writecr8(CurrentIrql);
}
