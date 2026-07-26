/*
 * XREFs of ndisDereferenceRef @ 0x1C0019DB0
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisDereferenceFilter @ 0x1C0011E1C (ndisDereferenceFilter.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0017074 (ndisDereferenceFilterDriver.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     ndisCancelOidRequestInternal @ 0x1C00441CC (ndisCancelOidRequestInternal.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0044800 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00484B0 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisSynchronousOidRequest @ 0x1C0048A94 (ndisSynchronousOidRequest_ea_1C0048A94.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0059620 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059780 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00B0CE0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B0F20 (ndisFNetPnPEventInternal.c)
 *     ndisFNotifyDetach @ 0x1C00B2934 (ndisFNotifyDetach.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00C351C (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00E68B0 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 */

bool __fastcall ndisDereferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  KIRQL v4; // si
  __int16 v5; // dx
  bool v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  NdisDereferenceWithTag(SpinLock[2], a2);
  v5 = *((_WORD *)SpinLock + 4) - 1;
  *((_WORD *)SpinLock + 4) = v5;
  v6 = v5 == 0;
  if ( !v5 && !*((_BYTE *)SpinLock + 11) )
  {
    NdisFreeRefCount((struct NDIS_REFCOUNT_HANDLE__ *)SpinLock[2]);
    SpinLock[2] = 1LL;
  }
  KeReleaseSpinLock(SpinLock, v4);
  return v6;
}
