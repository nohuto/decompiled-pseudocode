/*
 * XREFs of ndisDereferenceRef @ 0x1C001807C
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C00179C4 (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceProtocol @ 0x1C001802C (ndisDereferenceProtocol.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     ndisDereferenceFilterDriver @ 0x1C001CA04 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceFilter @ 0x1C00252A0 (ndisDereferenceFilter.c)
 *     ndisDereferenceDriver @ 0x1C0025778 (ndisDereferenceDriver.c)
 *     ndisCancelOidRequestInternal @ 0x1C0045EE0 (ndisCancelOidRequestInternal.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0046520 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0046784 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0049E40 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0059BF0 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059D40 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00A7D30 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00B87B0 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00BBFA0 (ndisFNetPnPEventInternal.c)
 *     ndisFNotifyDetach @ 0x1C00BF48C (ndisFNotifyDetach.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00DB050 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 */

bool __fastcall ndisDereferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  KIRQL v4; // si
  bool v5; // zf
  bool v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  NdisDereferenceWithTag(SpinLock[2], a2);
  v5 = (*((_WORD *)SpinLock + 4))-- == 1;
  v6 = v5;
  if ( !*((_WORD *)SpinLock + 4) && !*((_BYTE *)SpinLock + 11) )
  {
    NdisFreeRefCount((PVOID)SpinLock[2]);
    SpinLock[2] = 0LL;
  }
  KeReleaseSpinLock(SpinLock, v4);
  return v6;
}
