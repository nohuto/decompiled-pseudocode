/*
 * XREFs of ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0063A14
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053B70 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053DF0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054090 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMDeferredReturnPackets @ 0x1C005F5E4 (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0062F50 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C0063BC0 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C0063D10 (ndisMIndicatePacket.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00686F0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnPacketToMiniport @ 0x1C006955C (ndisReturnPacketToMiniport.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C0054984 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall NDIS_FREE_XFER_DATA_PACKET(struct _NDIS_PACKET *a1)
{
  _MDL *Head; // rbx
  SIZE_T ByteCount; // rsi
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  Head = a1->Private.Head;
  ByteCount = Head->ByteCount;
  if ( (Head->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Head->MappedSystemVa, Head);
  if ( (unsigned int)ByteCount >= 0x64 )
  {
    if ( (unsigned int)ByteCount >= 0x5EA )
    {
      MmSizeOfMdl((PVOID)0xFFF, ByteCount);
      ExFreePoolWithTag(Head, 0);
      goto LABEL_9;
    }
    v4 = &ndisRcv1514BytesLL;
  }
  else
  {
    v4 = &ndisRcv100BytesLL;
  }
  ExFreeToNPagedLookasideList(v4, Head);
LABEL_9:
  LODWORD(a1[-1].Reserved[1]) &= ~1u;
  NdisFreePacket(a1);
}
