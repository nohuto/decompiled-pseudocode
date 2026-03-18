/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x140540420
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1405404A4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpRemoveResourcePort @ 0x1405404DC (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x14054055C (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rcx

  v2 = *a1;
  if ( v2 )
    AlpcDeleteBlobByHandle(v2, a1[1], a1);
  v3 = a1[3];
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    ObfDereferenceObject((PVOID)a1[3]);
  }
  if ( a1[2] )
  {
    v4 = (_DWORD *)a1[6];
    if ( v4[48] == 1 || v4 )
      ObfDereferenceObject(v4);
    AlpcpReleasePagedPoolQuota(a1[2], 160LL);
    ObfDereferenceObjectWithTag((PVOID)a1[2], 0x63706C41u);
  }
  return 0LL;
}
