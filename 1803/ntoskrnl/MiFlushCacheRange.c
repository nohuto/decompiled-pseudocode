/*
 * XREFs of MiFlushCacheRange @ 0x140267828
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x1400CF57C (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14016D5F0 (KeInvalidateAllCaches.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_1403CB700 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiFlushCacheForAttributeChange(a1, a2, 3, a4);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_1403CB6F8;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
