/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A9F0
 * Callers:
 *     NdisFOidRequestComplete @ 0x1C0007530 (NdisFOidRequestComplete.c)
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     NdisFDevicePnPEventNotify @ 0x1C000FBC0 (NdisFDevicePnPEventNotify.c)
 *     NdisFNetPnPEvent @ 0x1C0010300 (NdisFNetPnPEvent.c)
 *     ndisDoOidRequests @ 0x1C001F670 (ndisDoOidRequests.c)
 *     NdisFIndicateStatus @ 0x1C0021F90 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0059130 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 232) )
  {
    ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 72), 1u, &v2);
    *(_BYTE *)(a1 + 232) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 200), NormalWorkQueue);
  }
}
