/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08
 * Callers:
 *     ndisMAbortPackets @ 0x1C0012510 (ndisMAbortPackets.c)
 *     NdisAllocatePacket @ 0x1C0015CD0 (NdisAllocatePacket.c)
 *     ndisMAllocSGList @ 0x1C004C150 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C004C540 (ndisMAllocSGListS.c)
 *     ndisMProcessSGList @ 0x1C004CB80 (ndisMProcessSGList.c)
 *     ndisMProcessSGListS @ 0x1C004CC50 (ndisMProcessSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004E5E8 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E77C (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C004F480 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053180 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00533D0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00535A0 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053AC0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0053F60 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0054040 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00540F0 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendComplete @ 0x1C0054580 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0055240 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00554C0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0055930 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0055DD0 (ndisMDeferredSendSG.c)
 *     ndisMIsLoopbackPacket @ 0x1C00562A0 (ndisMIsLoopbackPacket.c)
 *     ndisMLoopbackPacketX @ 0x1C00567A0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C0056A20 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0056C00 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0057060 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C0057140 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C0057390 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057580 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0057850 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C0058190 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C00582B0 (ndisSendPacketsWithPause.c)
 *     NdisReturnPackets @ 0x1C005F170 (NdisReturnPackets.c)
 *     ndisMDeferredReturnPackets @ 0x1C005FE58 (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00640D0 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C0064D40 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C0064E80 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C006B4A0 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C006B5E0 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_STACK_RESERVED_FROM_PACKET(struct _NDIS_PACKET *a1, struct _NDIS_STACK_RESERVED **a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(unsigned int *)&a1[-1].ProtocolReserved[4];
  if ( (unsigned int)v2 >= ndisPacketStackSize )
    v3 = 16LL;
  else
    v3 = (__int64)a1 + 48 * (v2 - ndisPacketStackSize);
  *a2 = (struct _NDIS_STACK_RESERVED *)v3;
}
