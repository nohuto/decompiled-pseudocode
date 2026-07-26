/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C0055FAC
 * Callers:
 *     ndisMAbortPackets @ 0x1C0001868 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004B5A8 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0053BF0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C00548A0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C0054B20 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0054F90 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0055440 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0056080 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0056260 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00569F0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056BE0 (ndisMSendPacketsToMiniport.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004DD14 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0059E78 (ndisInvokeNextSendCompleteHandler.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v6; // rax

  v3 = a3;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qqd(0x2Cu, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2, a3);
  if ( (v3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)v3 | 0xC0230000;
  v6 = (struct _NET_BUFFER_LIST *)ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( v6 )
  {
    v6->Status = v3;
    ndisInvokeNextSendCompleteHandler(v6, *(_QWORD *)(a1 + 2584), *(void (**)(void))(a1 + 2624));
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(0x2Du, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2);
}
