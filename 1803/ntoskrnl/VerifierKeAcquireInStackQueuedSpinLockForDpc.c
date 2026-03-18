/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140825D80
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140825DC4 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpc(ULONG_PTR a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1);
  return VfDeadlockAcquireResource(v1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
