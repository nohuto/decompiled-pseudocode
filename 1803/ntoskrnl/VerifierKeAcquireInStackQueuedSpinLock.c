/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLock @ 0x140825B70
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140825CDC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLock(ULONG_PTR a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  VerifierKeAcquireInStackQueuedSpinLockCommon(a1);
  return VfDeadlockAcquireResource(v1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
