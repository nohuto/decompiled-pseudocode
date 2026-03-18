/*
 * XREFs of CmpAllocate @ 0x140514D70
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1406F753C (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x140514098 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140514DD4 (CmpClaimGlobalQuota.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(NumberOfBytes) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
