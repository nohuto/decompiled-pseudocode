/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x1408227C4
 * Callers:
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14081C7E8 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14082D8F0 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IovUtilGetLowerDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // di
  void *v3; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(*(_QWORD *)(a1 + 312) + 48LL);
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
