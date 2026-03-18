/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x140776F40
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140778270 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(__int64 a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  ViKeAcquireSpinLockAtDpcLevelCommon(a1, retaddr);
  return VfDeadlockAcquireResource(v1, 5, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
