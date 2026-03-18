/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140777560
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCuLL, 6LL, KeGetCurrentThread(), retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(a1);
}
