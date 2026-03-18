/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x140015BA4
 * Callers:
 *     MiProcessLoaderEntry @ 0x140015EC4 (MiProcessLoaderEntry.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x140848628 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlxRemoveInvertedFunctionTable @ 0x140015BE0 (RtlxRemoveInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x140015FE0 (MmLockLoadedModuleListExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  MmLockLoadedModuleListExclusive(&v4);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  result = v4;
  __writecr8(v4);
  return result;
}
