/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x140237164
 * Callers:
 *     IoEnumerateRegisteredFiltersList @ 0x140603EB0 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14064DD40 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
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
