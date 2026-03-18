/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x1404D9F40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpRemoveResourcePort @ 0x1404D6EA4 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1404D7B8C (AlpcDeleteBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

char __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  char result; // al
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = BugCheckParameter2[2];
  if ( v2 )
  {
    result = AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], (__int64)BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v4 = (void *)BugCheckParameter2[5];
  if ( v4 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2);
    AlpcpRemoveResourcePort((__int64)v4, (__int64)BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2, v5, v6, v7);
    return ObfDereferenceObject(v4);
  }
  return result;
}
