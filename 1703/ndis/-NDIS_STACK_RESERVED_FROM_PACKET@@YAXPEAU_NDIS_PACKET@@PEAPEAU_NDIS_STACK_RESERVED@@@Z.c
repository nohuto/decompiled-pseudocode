/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58
 * Callers:
 *     ndisMAbortPackets @ 0x1C00258E0 (ndisMAbortPackets.c)
 *     ndisMAllocSGList @ 0x1C004D698 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C004DA7C (ndisMAllocSGListS.c)
 *     ndisMProcessSGList @ 0x1C004E0A0 (ndisMProcessSGList.c)
 *     ndisMProcessSGListS @ 0x1C004E170 (ndisMProcessSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004F180 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004F310 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C004FC30 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053750 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00539A0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053B70 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054090 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0054530 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0054610 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00546C0 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendComplete @ 0x1C0054A70 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0055750 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00559D0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0055E40 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C00562F0 (ndisMDeferredSendSG.c)
 *     ndisMIsLoopbackPacket @ 0x1C00567B0 (ndisMIsLoopbackPacket.c)
 *     ndisMLoopbackPacketX @ 0x1C0056CB0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C0056F30 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057110 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0057570 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C0057650 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00578A0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057A90 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0057D60 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C00584B0 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C00585D0 (ndisSendPacketsWithPause.c)
 *     NdisReturnPackets @ 0x1C005E9C0 (NdisReturnPackets.c)
 *     ndisMDeferredReturnPackets @ 0x1C005F5E4 (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0062F50 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C0063BC0 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C0063D10 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C0069420 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C006955C (ndisReturnPacketToMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_STACK_RESERVED_FROM_PACKET(struct _NDIS_PACKET *a1, struct _NDIS_STACK_RESERVED **a2)
{
  __int64 v2; // r8
  char *v3; // rax

  v2 = *(unsigned int *)&a1[-1].ProtocolReserved[4];
  if ( (unsigned int)v2 >= ndisPacketStackSize )
    v3 = 0LL;
  else
    v3 = (char *)a1 + 48 * (v2 - ndisPacketStackSize) - 16;
  *a2 = (struct _NDIS_STACK_RESERVED *)(v3 + 16);
}
