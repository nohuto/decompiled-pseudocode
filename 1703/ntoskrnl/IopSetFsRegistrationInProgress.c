/*
 * XREFs of IopSetFsRegistrationInProgress @ 0x140153F6C
 * Callers:
 *     IoRegisterFileSystem @ 0x14059D290 (IoRegisterFileSystem.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopSetFsRegistrationInProgress(char a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  IopFsRegistrationInProgress = a1;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
