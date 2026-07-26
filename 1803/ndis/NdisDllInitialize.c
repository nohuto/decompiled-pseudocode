/*
 * XREFs of NdisDllInitialize @ 0x1C011C0B0
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     NdispRegisterShim @ 0x1C00B4630 (NdispRegisterShim.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C011C144 (ndisInitializePerProcessorSlotAllocator.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  struct _NDIS_LEGACY_RWLOCK_TRACKER *PoolWithTag; // rax

  v0 = 0;
  if ( !LOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels) )
  {
    LOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels) = 1;
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
