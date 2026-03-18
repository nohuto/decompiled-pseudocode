/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x14042C158
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x14042B7A8 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14042C124 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14042C1C0 (PsChargeProcessPagedPoolQuota.c)
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
