/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1407B8BE0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1407B8C24 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch(ULONG_PTR a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(a1);
  return VfDeadlockAcquireResource(v1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
