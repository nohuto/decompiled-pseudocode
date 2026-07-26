/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005D740
 * Callers:
 *     ndisMAbortPackets @ 0x1C0001868 (ndisMAbortPackets.c)
 *     ndisMAllocSGList @ 0x1C004B1B8 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C004B5A8 (ndisMAllocSGListS.c)
 *     ndisMProcessSGList @ 0x1C004BBF0 (ndisMProcessSGList.c)
 *     ndisMProcessSGListS @ 0x1C004BCC0 (ndisMProcessSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004DC84 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004DE14 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C004EB10 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052810 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052A60 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052C30 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053150 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00535F0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00536D0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0053780 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendComplete @ 0x1C0053BF0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C00548A0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C0054B20 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0054F90 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0055440 (ndisMDeferredSendSG.c)
 *     ndisMIsLoopbackPacket @ 0x1C0055900 (ndisMIsLoopbackPacket.c)
 *     ndisMLoopbackPacketX @ 0x1C0055E00 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C0056080 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0056260 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C00566C0 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C00567A0 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00569F0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056BE0 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0056EB0 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C00577D0 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C00578F0 (ndisSendPacketsWithPause.c)
 *     NdisReturnPackets @ 0x1C005E770 (NdisReturnPackets.c)
 *     ndisMDeferredReturnPackets @ 0x1C005F39C (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0063580 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C00641F0 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C0064340 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C006ABA0 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C006ACDC (ndisReturnPacketToMiniport.c)
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
