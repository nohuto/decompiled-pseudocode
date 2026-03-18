/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x1401480F4
 * Callers:
 *     MiProcessLoaderEntry @ 0x14006DF00 (MiProcessLoaderEntry.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1408185B0 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x14006E01C (MmLockLoadedModuleListExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x140148130 (RtlxRemoveInvertedFunctionTable.c)
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
