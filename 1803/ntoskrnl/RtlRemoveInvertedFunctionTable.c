/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x140160774
 * Callers:
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x14089E270 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1401607B0 (RtlxRemoveInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
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
