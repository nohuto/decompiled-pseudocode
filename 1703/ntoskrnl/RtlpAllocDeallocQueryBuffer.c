/*
 * XREFs of RtlpAllocDeallocQueryBuffer @ 0x140556854
 * Callers:
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall RtlpAllocDeallocQueryBuffer(SIZE_T *a1, void *a2, __int64 a3, int *a4)
{
  PVOID PoolWithTag; // rsi
  int v5; // ebx

  PoolWithTag = 0LL;
  v5 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
  if ( a1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a1, 0x76727152u);
    if ( !PoolWithTag )
      v5 = -1073741801;
  }
  if ( a4 )
    *a4 = v5;
  return PoolWithTag;
}
