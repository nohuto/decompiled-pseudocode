/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x140458F00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x14047A04C (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x14047AB44 (AlpcpRemoveResourcePort.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(PVOID *a1)
{
  ULONG_PTR v1; // rdi
  PVOID v3; // rcx

  v1 = (ULONG_PTR)a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, a1);
    ObfDereferenceObject(*a1);
  }
  return 0LL;
}
