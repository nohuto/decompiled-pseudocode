/*
 * XREFs of KeInvalidateAllCaches @ 0x140137470
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400ED930 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x1401180C0 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x140208220 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x14022C154 (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x14022C174 (MiFlushCacheRange.c)
 *     RtlFlushNonVolatileMemory @ 0x140250BE0 (RtlFlushNonVolatileMemory.c)
 *     RtlpCheckAndFlushAllCacheIfOptimal @ 0x140250D94 (RtlpCheckAndFlushAllCacheIfOptimal.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14005B510 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x140144260 (KxSetTimeStampBusy.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      1,
      0LL,
      0,
      0LL,
      6LL,
      (__int64 (__fastcall *)(_QWORD))KeSweepLocalCaches,
      0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  __writecr8(CurrentIrql);
  return 1;
}
