/*
 * XREFs of ObpIncrPointerCount @ 0x1400F3900
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x1400880C0 (ExpSetResourceOwnerPointerEx.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock_2 @ 0x1400EB86C (IopAcquireFastLock_2.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     IopCallDriverReference @ 0x1400EEF70 (IopCallDriverReference.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404B7360 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x14055384C (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
