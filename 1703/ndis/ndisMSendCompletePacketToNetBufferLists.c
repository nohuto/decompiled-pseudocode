/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C0056E5C
 * Callers:
 *     ndisMAbortPackets @ 0x1C00258E0 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004DA7C (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0054A70 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0055750 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00559D0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0055E40 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C00562F0 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0056F30 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057110 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00578A0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057A90 (ndisMSendPacketsToMiniport.c)
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0010F3C (ndisInvokeNextSendCompleteHandler.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004F210 (ndisXlateSendCompletePacketToNetBufferList.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v6; // rax

  v3 = a3;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qqd(0x2Cu, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2, a3);
  if ( (v3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)v3 | 0xC0230000;
  v6 = (struct _NET_BUFFER_LIST *)ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( v6 )
  {
    v6->Status = v3;
    ndisInvokeNextSendCompleteHandler(
      v6,
      0,
      (struct _NDIS_FILTER_BLOCK *)a1,
      *(_BYTE **)(a1 + 2600),
      *(void **)(a1 + 2584),
      *(void (**)(void))(a1 + 2624));
  }
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(0x2Du, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2);
}
