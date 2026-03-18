/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140007610
 * Callers:
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     PnpQueryInterface @ 0x1405C5140 (PnpQueryInterface.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PnpAsynchronousCall @ 0x1405E2C94 (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x140614B24 (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x14073A03C (IopEjectDevice.c)
 *     PiControlGetDeviceStack @ 0x14073AA54 (PiControlGetDeviceStack.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
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
