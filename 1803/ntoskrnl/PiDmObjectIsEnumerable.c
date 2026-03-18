/*
 * XREFs of PiDmObjectIsEnumerable @ 0x140509AC4
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140509908 (PiDmEnumObjectsWithCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v3 = *(_DWORD *)(BugCheckParameter2 + 32) & 1;
  ExReleasePushLockEx(BugCheckParameter2, 0LL, v4, v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
