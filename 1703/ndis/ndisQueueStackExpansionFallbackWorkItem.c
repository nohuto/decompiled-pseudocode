/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A894
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     NdisFOidRequestComplete @ 0x1C000F660 (NdisFOidRequestComplete.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0012570 (NdisFDevicePnPEventNotify.c)
 *     ndisDoOidRequests @ 0x1C001E190 (ndisDoOidRequests.c)
 *     NdisFNetPnPEvent @ 0x1C0020770 (NdisFNetPnPEvent.c)
 *     NdisFIndicateStatus @ 0x1C0020AA0 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0059660 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
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
