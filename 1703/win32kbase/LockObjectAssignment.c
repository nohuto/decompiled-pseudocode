/*
 * XREFs of LockObjectAssignment @ 0x1C0043540
 * Callers:
 *     HMAllocObject @ 0x1C0040370 (HMAllocObject.c)
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     LockInputThreadDesktop @ 0x1C008FA70 (LockInputThreadDesktop.c)
 *     HMChangeOwnerThread @ 0x1C0095C80 (HMChangeOwnerThread.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall LockObjectAssignment(void **a1, void *a2)
{
  void *v2; // rdi
  LONG_PTR result; // rax

  v2 = *a1;
  if ( a2 )
    result = ObfReferenceObject(a2);
  *a1 = a2;
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
