/*
 * XREFs of IovUtilGetLowerDeviceObject @ 0x140772D18
 * Callers:
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14076D9A8 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14077E420 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 */

__int64 __fastcall IovUtilGetLowerDeviceObject(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  KIRQL v4; // di
  __int64 v5; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(_QWORD *)(a1 + 312);
  v4 = v2;
  v5 = *(_QWORD *)(v3 + 48);
  if ( v5 )
    ObfReferenceObject(*(PVOID *)(v3 + 48));
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v5;
}
