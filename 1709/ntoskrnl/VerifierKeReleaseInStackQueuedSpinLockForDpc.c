/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1407B93F0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1407B9430 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
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
