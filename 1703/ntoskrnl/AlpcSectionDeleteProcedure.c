/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x140446050
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x14047A04C (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x14047AB44 (AlpcpRemoveResourcePort.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 */

LONG_PTR __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  LONG_PTR result; // rax
  void *v4; // rdi

  v2 = BugCheckParameter2[2];
  if ( v2 )
  {
    result = AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v4 = (void *)BugCheckParameter2[5];
  if ( v4 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2);
    AlpcpRemoveResourcePort(v4, BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2);
    return ObfDereferenceObject(v4);
  }
  return result;
}
