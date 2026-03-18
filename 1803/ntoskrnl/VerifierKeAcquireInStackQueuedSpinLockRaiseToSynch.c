/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140825E80
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140825EC4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch(ULONG_PTR a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(a1);
  return VfDeadlockAcquireResource(v1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
