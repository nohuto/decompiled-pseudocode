/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0053A8C
 * Callers:
 *     ndisReturnPeriodicReceives @ 0x1C0024BF8 (ndisReturnPeriodicReceives.c)
 *     NdisMTransferDataComplete @ 0x1C0053EA0 (NdisMTransferDataComplete.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0064044 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00680B8 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisFreePeriodicReceives @ 0x1C0069318 (ndisFreePeriodicReceives.c)
 *     ndisLWM5IndicateReceive @ 0x1C00693A4 (ndisLWM5IndicateReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
