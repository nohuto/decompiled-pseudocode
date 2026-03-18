/*
 * XREFs of PiDqQueryLock @ 0x140698B04
 * Callers:
 *     PiDqIrpCancel @ 0x1401F8F40 (PiDqIrpCancel.c)
 * Callees:
 *     <none>
 */

void __fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
