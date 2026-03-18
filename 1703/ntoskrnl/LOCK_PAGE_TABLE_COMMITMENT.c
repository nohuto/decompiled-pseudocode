/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14009A7F0
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockExclusiveEx(a2 + 880, 0LL);
}
