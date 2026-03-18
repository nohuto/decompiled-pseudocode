/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140822760
 * Callers:
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x1408229FC (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14082D8F0 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14082DBBC (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObjectWithTag(_QWORD *Object)
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
  ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
