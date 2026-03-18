/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x1407774B0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLock(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfDeadlockReleaseResource(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCuLL, 6LL, KeGetCurrentThread(), retaddr);
  return VerifierKeReleaseInStackQueuedSpinLockCommon(a1);
}
