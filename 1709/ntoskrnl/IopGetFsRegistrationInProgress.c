/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x1401F9FD4
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405C8240 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1405DB3D0 (IoEnumerateRegisteredFiltersList.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
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
