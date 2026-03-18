/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x140553C4C
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x140553364 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140553C18 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140553CB0 (PsChargeProcessPagedPoolQuota.c)
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
