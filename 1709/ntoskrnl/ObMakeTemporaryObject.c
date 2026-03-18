/*
 * XREFs of ObMakeTemporaryObject @ 0x14046F200
 * Callers:
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     NtMakeTemporaryObject @ 0x14046F18C (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1406EF22C (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x14078A390 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x1407A5848 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140846850 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck(v2);
}
