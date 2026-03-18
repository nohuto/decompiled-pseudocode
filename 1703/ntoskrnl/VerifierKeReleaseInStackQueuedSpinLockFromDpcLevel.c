/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140777610
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCuLL, 6LL, KeGetCurrentThread(), retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(a1);
}
