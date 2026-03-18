/*
 * XREFs of IovUtilGetBottomDeviceObject @ 0x1407B4A78
 * Callers:
 *     IovpCallDriver1 @ 0x1407AF150 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x1407B4D00 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1407C03F0 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1407C06AC (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObject(_QWORD *Object)
{
  KIRQL v2; // si
  PVOID v3; // rdi

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    v3 = Object;
    Object = *(_QWORD **)(Object[39] + 48LL);
  }
  while ( Object );
  ObfReferenceObject(v3);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
