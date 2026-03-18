/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x1404608E8
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x14045D104 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14046083C (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1404610A0 (PsChargeProcessPagedPoolQuota.c)
 */

PVOID __fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x6274624Fu);
  if ( PoolWithTag && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  return PoolWithTag;
}
