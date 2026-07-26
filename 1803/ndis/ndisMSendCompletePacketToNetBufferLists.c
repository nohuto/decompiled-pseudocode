/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C005694C
 * Callers:
 *     ndisMAbortPackets @ 0x1C0012510 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004C540 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0054580 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0055240 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00554C0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0055930 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0055DD0 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0056A20 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0056C00 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C0057390 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057580 (ndisMSendPacketsToMiniport.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004E678 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005A7D4 (ndisInvokeNextSendCompleteHandler.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v6; // rax

  v3 = a3;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qqd(0x2Cu, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2, a3);
  if ( (v3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)v3 | 0xC0230000;
  v6 = (struct _NET_BUFFER_LIST *)ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( v6 )
  {
    v6->Status = v3;
    ndisInvokeNextSendCompleteHandler(v6, *(void **)(a1 + 2584), *(void (**)(void))(a1 + 2624));
  }
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x2Du, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2);
}
