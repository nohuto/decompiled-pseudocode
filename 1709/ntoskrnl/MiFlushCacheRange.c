/*
 * XREFs of MiFlushCacheRange @ 0x14022C174
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x1400ED7F4 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x140137470 (KeInvalidateAllCaches.c)
 */

__int64 __fastcall MiFlushCacheRange(struct _KPRCB *a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_140388560 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiFlushCacheForAttributeChange(a1, a2, 3LL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140388558;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
