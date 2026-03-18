/*
 * XREFs of CmpAllocate @ 0x14047D780
 * Callers:
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x140479EB8 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x14047D7E4 (CmpClaimGlobalQuota.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
