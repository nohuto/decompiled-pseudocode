/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x140225FF4
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x140226020 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall FsRtlAcquirePushLockExclusive(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
