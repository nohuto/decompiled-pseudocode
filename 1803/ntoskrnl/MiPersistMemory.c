/*
 * XREFs of MiPersistMemory @ 0x14025E26C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14025DA0C (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x14025E29C (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1401AEA20 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x140245E50 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
