/*
 * XREFs of ndisReturnPacketToNetBufferList @ 0x1C006AE30
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052C30 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053150 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisReturnPackets @ 0x1C005E770 (NdisReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0063580 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C0064340 (ndisMIndicatePacket.c)
 *     ndisSynchReturnPacketsForTranslation @ 0x1C006AE70 (ndisSynchReturnPacketsForTranslation.c)
 * Callees:
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004DBEC (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006AA30 (ndisReturnNetBufferListsInternal.c)
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
