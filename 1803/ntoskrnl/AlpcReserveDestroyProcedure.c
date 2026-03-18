/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x14057F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpRemoveResourcePort @ 0x1404D6EA4 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1404D7B8C (AlpcDeleteBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(__int64 *a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  v1 = a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob(a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1, v3, v4, v5);
  }
  v6 = a1[1];
  if ( v6 )
    AlpcDeleteBlobByHandle(v6, a1[2], (__int64)a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, (__int64)a1);
    ObfDereferenceObject((PVOID)*a1);
  }
  return 0LL;
}
