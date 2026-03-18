/*
 * XREFs of IovUtilGetBottomDeviceObject @ 0x140772CB8
 * Callers:
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140772F40 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14077E420 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14077E6DC (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
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
