/*
 * XREFs of HvpViewMapAcquireLockShared @ 0x1401E1000
 * Callers:
 *     HvViewMapCopyFromFileOffset @ 0x1401E0DE4 (HvViewMapCopyFromFileOffset.c)
 *     HvViewMapAddressForFileOffset @ 0x1406759AC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapContiguousBytesAfterFileOffset @ 0x140675AB8 (HvViewMapContiguousBytesAfterFileOffset.c)
 *     HvViewMapFlush @ 0x140675B48 (HvViewMapFlush.c)
 *     HvViewMapIsRangePinned @ 0x140675CE4 (HvViewMapIsRangePinned.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpViewMapAcquireLockShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1 + 8, 0LL);
}
