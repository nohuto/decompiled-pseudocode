/*
 * XREFs of MiPersistMemory @ 0x140223610
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140222DFC (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x140223640 (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x140184E00 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x140208220 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
