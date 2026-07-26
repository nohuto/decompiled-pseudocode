/*
 * XREFs of ndisQueueWorkItem @ 0x1C002345C
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C0012890 (ndisSetDevicePowerOnComplete.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C00232DC (ndisCreatePMRejectWorkItem.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0049D3C (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0049E40 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C004ADD4 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C004AE8C (ndisCreatePMPdcTaskClientWorkItem.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052B90 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C0061260 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ndisMFinishClose @ 0x1C00FBAD4 (ndisMFinishClose.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueueWorkItem(PLIST_ENTRY Entry)
{
  KIRQL v1; // bl

  KeInsertQueue(&ndisWorkerQueue, Entry);
  _InterlockedIncrement(&ndisWorkerQueueItemCount);
  v1 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
  if ( !ndisThreadPoolTimerQueued )
  {
    ndisThreadPoolTimerQueued = 1;
    KeSetTimer(&ndisThreadPoolTimer, ndisThreadPoolTimerDueTime, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v1);
}
