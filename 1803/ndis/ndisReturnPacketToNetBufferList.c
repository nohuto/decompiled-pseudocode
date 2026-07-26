/*
 * XREFs of ndisReturnPacketToNetBufferList @ 0x1C006B734
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00535A0 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053AC0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisReturnPackets @ 0x1C005F170 (NdisReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00640D0 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C0064E80 (ndisMIndicatePacket.c)
 *     ndisSynchReturnPacketsForTranslation @ 0x1C006B770 (ndisSynchReturnPacketsForTranslation.c)
 * Callees:
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004E550 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006B330 (ndisReturnNetBufferListsInternal.c)
 */

void __fastcall ndisReturnPacketToNetBufferList(__int64 a1, struct _NDIS_PACKET *a2)
{
  struct _NET_BUFFER_LIST *v3; // rax

  v3 = (struct _NET_BUFFER_LIST *)ndisXlateReturnPacketToNetBufferList(a2);
  if ( v3 )
  {
    v3->Link.Alignment = 0LL;
    ndisReturnNetBufferListsInternal(a1, v3, 0, 0LL);
  }
}
