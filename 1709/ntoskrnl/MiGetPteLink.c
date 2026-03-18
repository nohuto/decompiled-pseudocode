/*
 * XREFs of MiGetPteLink @ 0x14017C6E8
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     RemoveListHeadPte @ 0x1400A3BF4 (RemoveListHeadPte.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     InsertTailListPte @ 0x1400A477C (InsertTailListPte.c)
 *     RemoveListEntryPte @ 0x140125FB0 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x140127C20 (MiWaitForSystemCacheViewFlush.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteLink(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a1 )
    return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3) >> 28;
  else
    return 0LL;
}
