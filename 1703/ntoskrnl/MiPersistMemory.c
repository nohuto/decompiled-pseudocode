/*
 * XREFs of MiPersistMemory @ 0x1402191A0
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140218B04 (MiFlushFileOnlyMdl.c)
 * Callees:
 *     <none>
 */

void __fastcall MiPersistMemory(PVOID BaseAddress, __int64 Length)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)BaseAddress, Length);
  else
    KeInvalidateRangeAllCaches(BaseAddress, Length);
}
