/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x1401E8894
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1401E88C0 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall FsRtlAcquirePushLockExclusive(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
