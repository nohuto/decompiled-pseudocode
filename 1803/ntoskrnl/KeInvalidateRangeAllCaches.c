/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x140245E50
 * Callers:
 *     KiFlushRangeAllCaches @ 0x140245280 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x14025E26C (MiPersistMemory.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140051C70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14016D5F0 (KeInvalidateAllCaches.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl

  if ( Length < KiLargestCacheSize )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1u, 0LL, 0LL, 0LL, 7LL, 0LL, 0LL);
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
