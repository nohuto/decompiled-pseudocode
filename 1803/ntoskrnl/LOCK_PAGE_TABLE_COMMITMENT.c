/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE70
 * Callers:
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MmAssignProcessToJob @ 0x140531714 (MmAssignProcessToJob.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockExclusiveEx(a2 + 880, 0LL);
}
