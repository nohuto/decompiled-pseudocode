/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140081554
 * Callers:
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     PnpAsynchronousCall @ 0x1404DB8E0 (PnpAsynchronousCall.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     PiControlGetDeviceStack @ 0x140595F34 (PiControlGetDeviceStack.c)
 *     IopEjectDevice @ 0x1406A792C (IopEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
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
