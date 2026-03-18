/*
 * XREFs of KeInvalidateAllCaches @ 0x14003BC50
 * Callers:
 *     KeFlushIoBuffers @ 0x140021430 (KeFlushIoBuffers.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140103850 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushCacheMdl @ 0x14013DF6C (MiFlushCacheMdl.c)
 *     KeInvalidateRangeAllCaches @ 0x140201C50 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheRange @ 0x140220BA4 (MiFlushCacheRange.c)
 *     RtlFlushNonVolatileMemory @ 0x14023B330 (RtlFlushNonVolatileMemory.c)
 *     RtlpCheckAndFlushAllCacheIfOptimal @ 0x14023B4E4 (RtlpCheckAndFlushAllCacheIfOptimal.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x14000D8C4 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequestEx @ 0x1400D8CD0 (KiIpiSendRequestEx.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int CurrentPrcb; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = (unsigned int)KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx(CurrentPrcb, 1, 0, 0, 0LL, 6LL, (__int64)KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  __writecr8(CurrentIrql);
  return 1;
}
