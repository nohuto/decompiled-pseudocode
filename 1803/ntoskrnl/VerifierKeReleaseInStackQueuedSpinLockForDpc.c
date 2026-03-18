/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1408266D0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140826710 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(ULONG_PTR BugCheckParameter3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfDeadlockReleaseResource(
    *(_QWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFFFFFFFFFCuLL,
    6LL,
    KeGetCurrentThread(),
    retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(BugCheckParameter3);
}
