/*
 * XREFs of IoGetDiskDeviceObject @ 0x1401F3A10
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

NTSTATUS __stdcall IoGetDiskDeviceObject(PDEVICE_OBJECT FileSystemDeviceObject, PDEVICE_OBJECT *DiskDeviceObject)
{
  NTSTATUS v2; // ebx
  KIRQL v6; // bp
  PVPB Vpb; // rcx
  struct _DEVICE_OBJECT *RealDevice; // rcx

  v2 = 0;
  if ( FileSystemDeviceObject->Vpb )
    return -1073741811;
  v6 = KeAcquireQueuedSpinLock(9uLL);
  Vpb = FileSystemDeviceObject->DeviceObjectExtension->Vpb;
  if ( Vpb )
  {
    if ( Vpb->ReferenceCount && (Vpb->Flags & 1) != 0 )
    {
      RealDevice = Vpb->RealDevice;
      *DiskDeviceObject = RealDevice;
      ObfReferenceObjectWithTag(RealDevice, 0x746C6644u);
    }
    else
    {
      v2 = -1073741202;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  KeReleaseQueuedSpinLock(9uLL, v6);
  return v2;
}
