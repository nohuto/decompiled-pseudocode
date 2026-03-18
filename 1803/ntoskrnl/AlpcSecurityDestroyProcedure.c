/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x1404D7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpRemoveResourcePort @ 0x1404D6EA4 (AlpcpRemoveResourcePort.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404D7B54 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcDeleteBlobByHandle @ 0x1404D7B8C (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
    AlpcDeleteBlobByHandle(v2, *(_QWORD *)(a1 + 8), a1);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *(_DWORD **)(a1 + 48);
    if ( v4[48] == 1 || v4 )
      ObfDereferenceObject(v4);
    AlpcpReleasePagedPoolQuota(*(_QWORD *)(a1 + 16), 160LL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x63706C41u);
  }
  return 0LL;
}
