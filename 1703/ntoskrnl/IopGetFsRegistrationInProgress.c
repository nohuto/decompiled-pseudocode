/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x1401F444C
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14059D090 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1405D0AB0 (IoEnumerateRegisteredFiltersList.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

char IopGetFsRegistrationInProgress()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireQueuedSpinLock(0xAuLL);
  v1 = IopFsRegistrationInProgress;
  KeReleaseQueuedSpinLock(0xAuLL, v0);
  return v1;
}
