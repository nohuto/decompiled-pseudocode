/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1880
 * Callers:
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x14056A828 (MiFreeToSubAllocatedRegion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 880, 0LL);
}
