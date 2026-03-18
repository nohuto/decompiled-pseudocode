/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140826790
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1408267D0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel(ULONG_PTR BugCheckParameter3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfDeadlockReleaseResource(
    *(_QWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFFFFFFFFFCuLL,
    6LL,
    KeGetCurrentThread(),
    retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(BugCheckParameter3);
}
