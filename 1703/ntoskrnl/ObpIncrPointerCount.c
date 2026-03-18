/*
 * XREFs of ObpIncrPointerCount @ 0x140091B70
 * Callers:
 *     ObpLockDirectoryShared @ 0x140044324 (ObpLockDirectoryShared.c)
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     PsImpersonateContainerOfThread @ 0x140044504 (PsImpersonateContainerOfThread.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     IoGetAttachedDeviceReference @ 0x140091AB0 (IoGetAttachedDeviceReference.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     ObInheritObjectHandle @ 0x14042BE2C (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140517B10 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
