/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x140826610
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140826650 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
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
