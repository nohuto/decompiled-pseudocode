/*
 * XREFs of HvpViewMapAcquireLockShared @ 0x1401E513C
 * Callers:
 *     HvViewMapCopyFromFileOffset @ 0x1401E4F18 (HvViewMapCopyFromFileOffset.c)
 *     HvViewMapAddressForFileOffset @ 0x14069FEE4 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapContiguousBytesAfterFileOffset @ 0x14069FFF0 (HvViewMapContiguousBytesAfterFileOffset.c)
 *     HvViewMapFlush @ 0x1406A0080 (HvViewMapFlush.c)
 *     HvViewMapIsRangePinned @ 0x1406A021C (HvViewMapIsRangePinned.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvpViewMapAcquireLockShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1 + 8, 0LL);
}
