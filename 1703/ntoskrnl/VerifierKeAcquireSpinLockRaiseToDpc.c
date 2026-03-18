/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140776FA0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1407782FC (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeAcquireSpinLockRaiseToDpc(int a1)
{
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViKeAcquireSpinLockRaiseToDpcCommon();
  VfDeadlockAcquireResource(a1, 5, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
