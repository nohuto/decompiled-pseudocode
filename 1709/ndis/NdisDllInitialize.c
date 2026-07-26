/*
 * XREFs of NdisDllInitialize @ 0x1C011C750
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     NdispRegisterShim @ 0x1C00C8ECC (NdispRegisterShim.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C011C7E4 (ndisInitializePerProcessorSlotAllocator.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  struct _NDIS_LEGACY_RWLOCK_TRACKER *PoolWithTag; // rax

  v0 = 0;
  if ( !BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) )
  {
    BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) = 1;
    ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
    KeQueryActiveProcessorCountEx(0);
    ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
    LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = KeGetRecommendedSharedDataAlignment();
    if ( LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) < 0x40 )
      LODWORD(WPP_MAIN_CB.Queue.ListEntry.Flink) = 64;
    ndisInitializePerProcessorSlotAllocator();
    if ( _InterlockedIncrement(&NumNdisDllInitialize) == 1 )
      NdispRegisterShim();
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      PoolWithTag = (struct _NDIS_LEGACY_RWLOCK_TRACKER *)ExAllocatePoolWithTag(
                                                            NonPagedPoolNx,
                                                            520LL * ndisMaxNumberOfProcessors,
                                                            0x2020444Eu);
      ndisRWLocksOwnedByThread = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 520LL * ndisMaxNumberOfProcessors);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v0;
}
