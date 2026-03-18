/*
 * XREFs of ObpIncrPointerCount @ 0x1400A0910
 * Callers:
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 *     ObpLockDirectoryShared @ 0x14008A9CC (ObpLockDirectoryShared.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock_2 @ 0x14008AA84 (IopAcquireFastLock_2.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     ObInheritObjectHandle @ 0x140507048 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140507D70 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
