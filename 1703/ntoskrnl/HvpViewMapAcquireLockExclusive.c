/*
 * XREFs of HvpViewMapAcquireLockExclusive @ 0x1401E0FDC
 * Callers:
 *     HvViewMapPinFile @ 0x1401E0F1C (HvViewMapPinFile.c)
 *     HvViewMapUnpinFile @ 0x1401E0F84 (HvViewMapUnpinFile.c)
 *     HvViewMapChangeFileSize @ 0x140675A38 (HvViewMapChangeFileSize.c)
 *     HvViewMapPinForFileOffset @ 0x140675D44 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x140675F9C (HvViewMapUnpinForFileOffset.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpViewMapAcquireLockExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
}
