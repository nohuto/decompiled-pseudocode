/*
 * XREFs of KeInvalidateAllCaches @ 0x14016D5F0
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140051C70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x1400BA320 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x140245E50 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x140267808 (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x140267828 (MiFlushCacheRange.c)
 *     RtlFlushNonVolatileMemory @ 0x140286680 (RtlFlushNonVolatileMemory.c)
 *     RtlpCheckAndFlushAllCacheIfOptimal @ 0x140286844 (RtlpCheckAndFlushAllCacheIfOptimal.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1400BAA80 (KxSetTimeStampBusy.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      1u,
      0LL,
      0LL,
      0LL,
      6LL,
      (void (__fastcall *)(__int64))KeSweepLocalCaches,
      0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  __writecr8(CurrentIrql);
  return 1;
}
