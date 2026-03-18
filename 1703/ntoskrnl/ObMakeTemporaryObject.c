/*
 * XREFs of ObMakeTemporaryObject @ 0x140422C60
 * Callers:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x140422BEC (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     ObShutdownSystem @ 0x1406C0774 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140747B50 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140763AEC (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck(v2);
}
