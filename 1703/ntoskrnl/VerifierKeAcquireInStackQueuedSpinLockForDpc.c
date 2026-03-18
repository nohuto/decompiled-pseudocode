/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140776CD0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140776D14 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpc(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1;
  VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1, retaddr, a2);
  return VfDeadlockAcquireResource(v2, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
