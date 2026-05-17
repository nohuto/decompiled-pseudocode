/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x180076FE0
 * Callers:
 *     LdrpUnmapModule @ 0x180076FA8 (LdrpUnmapModule.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0090 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180077010 (RtlxRemoveInvertedFunctionTable.c)
 */

signed __int64 __fastcall RtlRemoveInvertedFunctionTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, a2, a3, a4);
  RtlxRemoveInvertedFunctionTable(v5, a1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
