/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A0D8
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     NdisFOidRequestComplete @ 0x1C00195D0 (NdisFOidRequestComplete.c)
 *     ndisDoOidRequests @ 0x1C001A290 (ndisDoOidRequests.c)
 *     NdisFIndicateStatus @ 0x1C001C610 (NdisFIndicateStatus.c)
 *     NdisFNetPnPEvent @ 0x1C001C840 (NdisFNetPnPEvent.c)
 *     NdisFDevicePnPEventNotify @ 0x1C001FD90 (NdisFDevicePnPEventNotify.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0058A20 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
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
