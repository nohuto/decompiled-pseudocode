/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8
 * Callers:
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     PiControlGetDeviceStack @ 0x14044DE98 (PiControlGetDeviceStack.c)
 *     PnpQueryInterface @ 0x14051AEB4 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PnpAsynchronousCall @ 0x1405532A4 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x1406D25EC (IopEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

PDEVICE_OBJECT __fastcall IoGetAttachedDeviceReferenceWithTag(PDEVICE_OBJECT DeviceObject, ULONG Tag)
{
  KIRQL v4; // di
  PDEVICE_OBJECT AttachedDevice; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  ObfReferenceObjectWithTag(AttachedDevice, Tag);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return AttachedDevice;
}
