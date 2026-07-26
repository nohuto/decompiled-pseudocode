/*
 * XREFs of NdisDllInitialize @ 0x1C01110A0
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     NdispRegisterShim @ 0x1C00A8B64 (NdispRegisterShim.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C0111134 (ndisInitializePerProcessorSlotAllocator.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  struct _NDIS_LEGACY_RWLOCK_TRACKER *PoolWithTag; // rax

  v0 = 0;
  if ( !BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 1;
    ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
    KeQueryActiveProcessorCountEx(0);
    ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = KeGetRecommendedSharedDataAlignment();
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0x40 )
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 64;
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
