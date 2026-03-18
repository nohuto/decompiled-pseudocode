/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140825BC0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140825C04 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel(ULONG_PTR a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(a1);
  return VfDeadlockAcquireResource(v1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
