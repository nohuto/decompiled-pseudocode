/*
 * XREFs of MiFlushCacheRange @ 0x140220BA4
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14003BC50 (KeInvalidateAllCaches.c)
 *     MiFlushCacheForAttributeChange @ 0x140103734 (MiFlushCacheForAttributeChange.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_14036C214 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiFlushCacheForAttributeChange(a1, a2, 3);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_14036C20C;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
