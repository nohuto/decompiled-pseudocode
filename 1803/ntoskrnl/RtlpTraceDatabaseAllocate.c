/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x14028ED1C
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x14028E960 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14028ED44 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpTraceDatabaseAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  bool v3; // zf
  POOL_TYPE v5; // ecx

  v3 = (a2 & 4) == 0;
  v5 = NonPagedPoolNx;
  if ( v3 )
    v5 = PagedPool;
  return ExAllocatePoolWithTag(v5, NumberOfBytes, a3);
}
