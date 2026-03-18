/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1404CC100
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404D7B54 (AlpcpReleasePagedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1404EBEB8 (PsReturnSharedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140747AFC (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  ULONG_PTR v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v6; // rdx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog(a1);
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2);
    return 3221225473LL;
  }
  else
  {
    v3 = *(void **)(a1 + 48);
    if ( v3 )
    {
      v6 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v6 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota(v3);
      }
      else
      {
        AlpcpReleasePagedPoolQuota(v3, v6);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
      }
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    v4 = *(void **)(a1 + 224);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x42456C41u);
    return 0LL;
  }
}
