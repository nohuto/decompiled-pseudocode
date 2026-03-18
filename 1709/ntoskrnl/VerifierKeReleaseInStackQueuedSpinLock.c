/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x1407B9330
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1407B9370 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLock(ULONG_PTR BugCheckParameter3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfDeadlockReleaseResource(
    *(_QWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFFFFFFFFFCuLL,
    6LL,
    KeGetCurrentThread(),
    retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockCommon(BugCheckParameter3);
}
