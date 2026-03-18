/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x140208220
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1402075C0 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x140223610 (MiPersistMemory.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14005B510 (KiIpiSendRequestEx.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400ED930 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x140137470 (KeInvalidateAllCaches.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl

  if ( Length < KiLargestCacheSize )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1, 0LL, 0, 0LL, 7LL, 0LL, 0LL);
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
