/*
 * XREFs of MiGetPteLink @ 0x1401A653C
 * Callers:
 *     RemoveListEntryPte @ 0x1400C2AC8 (RemoveListEntryPte.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     RemoveListHeadPte @ 0x1400DE6D0 (RemoveListHeadPte.c)
 *     InsertTailListPte @ 0x1400E06C0 (InsertTailListPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14014B128 (MiWaitForSystemCacheViewFlush.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteLink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 28;
  else
    return 0LL;
}
