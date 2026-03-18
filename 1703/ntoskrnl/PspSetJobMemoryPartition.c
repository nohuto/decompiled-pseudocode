/*
 * XREFs of PspSetJobMemoryPartition @ 0x1406E1C40
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(__int64 a1, ULONG_PTR a2)
{
  int v4; // edi
  void *v5; // rcx
  void *v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  v4 = -1073741790;
  if ( *(_QWORD *)(a1 + 1056) == a1 + 1056 && !*(_DWORD *)(a1 + 212) )
  {
    v4 = 0;
    if ( a2 )
    {
      v4 = ObpReferenceObjectByHandleWithTag(a2, 1, (__int64)MmPartitionObjectType, 0, 1649046352, &v8, 0LL, 0LL);
      if ( v4 >= 0 )
      {
        v5 = *(void **)(a1 + 1536);
        if ( v5 )
          ObfDereferenceObjectWithTag(v5, 0x624A7350u);
        *(_QWORD *)(a1 + 1536) = v8;
      }
    }
    else
    {
      v6 = *(void **)(a1 + 1536);
      if ( v6 )
      {
        ObfDereferenceObjectWithTag(v6, 0x624A7350u);
        *(_QWORD *)(a1 + 1536) = 0LL;
      }
    }
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  return (unsigned int)v4;
}
