/*
 * XREFs of HvpViewMapAcquireLockExclusive @ 0x1401E5110
 * Callers:
 *     HvViewMapPinFile @ 0x1401E5050 (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401E50B8 (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x14069FF70 (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x1406A027C (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x1406A04D4 (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall HvpViewMapAcquireLockExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
}
