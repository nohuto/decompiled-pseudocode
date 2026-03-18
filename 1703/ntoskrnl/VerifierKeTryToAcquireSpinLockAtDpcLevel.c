/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140777C80
 * Callers:
 *     <none>
 * Callees:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407786F4 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevel(__int64 a1)
{
  int v1; // edi
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  v2 = ViKeTryToAcquireSpinLockAtDpcLevelCommon(a1, retaddr);
  if ( v2 )
    VfDeadlockAcquireResource(v1, 5, (unsigned int)KeGetCurrentThread(), 1, retaddr);
  return v2;
}
