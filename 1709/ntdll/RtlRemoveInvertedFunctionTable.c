/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x180076FE0
 * Callers:
 *     LdrpUnmapModule @ 0x180076FA8 (LdrpUnmapModule.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0090 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180077010 (RtlxRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
