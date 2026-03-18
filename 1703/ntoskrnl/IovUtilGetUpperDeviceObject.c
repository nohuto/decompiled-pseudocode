/*
 * XREFs of IovUtilGetUpperDeviceObject @ 0x140772D6C
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x14076E2BC (IovpExamineDevObjForwarding.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 */

void *__fastcall IovUtilGetUpperDeviceObject(__int64 a1)
{
  KIRQL v2; // al
  void *v3; // rbx
  KIRQL v4; // di

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(a1 + 24);
  v4 = v2;
  if ( v3 )
    ObfReferenceObject(v3);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v3;
}
