/*
 * XREFs of MiGetPteLink @ 0x14017CE5C
 * Callers:
 *     RemoveListEntryPte @ 0x140030F60 (RemoveListEntryPte.c)
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 *     RemoveListHeadPte @ 0x1400AA5FC (RemoveListHeadPte.c)
 *     InsertTailListPte @ 0x1400ABE6C (InsertTailListPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x140147314 (MiWaitForSystemCacheViewFlush.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteLink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 28;
  else
    return 0LL;
}
