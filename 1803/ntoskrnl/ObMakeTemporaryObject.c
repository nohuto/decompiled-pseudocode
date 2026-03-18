/*
 * XREFs of ObMakeTemporaryObject @ 0x14053ECF0
 * Callers:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x14053EC70 (NtMakeTemporaryObject.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x14075870C (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x1407F6850 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140812818 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL, v3, v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck((__int64)v2);
}
