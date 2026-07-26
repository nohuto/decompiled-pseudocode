/*
 * XREFs of ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0064044
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052C30 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052EB0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053150 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMDeferredReturnPackets @ 0x1C005F39C (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0063580 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C00641F0 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C0064340 (ndisMIndicatePacket.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0069DC0 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnPacketToMiniport @ 0x1C006ACDC (ndisReturnPacketToMiniport.c)
 * Callees:
 *     NdisFreePacket @ 0x1C0020CC0 (NdisFreePacket.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0053A8C (ExFreeToNPagedLookasideList.c)
 */

void __fastcall NDIS_FREE_XFER_DATA_PACKET(PNDIS_PACKET Packet)
{
  _MDL *Head; // rbx
  SIZE_T ByteCount; // rsi
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  Head = Packet->Private.Head;
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
  LODWORD(Packet[-1].Reserved[1]) &= ~1u;
  NdisFreePacket(Packet);
}
