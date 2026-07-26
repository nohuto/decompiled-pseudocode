/*
 * XREFs of ?ndisRssV2Uninitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00017D4
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00AB714 (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisRssV2Uninitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rcx

  RssV2Context = a1->RssV2Context;
  if ( RssV2Context )
  {
    ExFreePoolWithTag(RssV2Context, 0);
    a1->RssV2Context = 0LL;
  }
}
