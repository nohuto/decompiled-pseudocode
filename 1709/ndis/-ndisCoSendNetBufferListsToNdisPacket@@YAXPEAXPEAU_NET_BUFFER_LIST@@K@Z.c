/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0052670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004DE14 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052810 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisMCoSendNetBufferListsComplete @ 0x1C0053920 (NdisMCoSendNetBufferListsComplete.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  char v3; // di
  char v5; // bl
  PNET_BUFFER_LIST Alignment; // rbx
  PNET_BUFFER_LIST v7; // rax
  struct _NDIS_PACKET **v8; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+28h] [rbp-D8h]
  PNET_BUFFER_LIST NetBufferLists; // [rsp+30h] [rbp-D0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+38h] [rbp-C8h]
  unsigned int v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+44h] [rbp-BCh]
  __int64 v14; // [rsp+48h] [rbp-B8h]
  char v15; // [rsp+50h] [rbp-B0h] BYREF

  v12 = 0;
  v8 = (struct _NDIS_PACKET **)&v15;
  v3 = a3;
  FirstNetBuffer = a2->FirstNetBuffer;
  v14 = a1[24];
  v9 = 64;
  NetBufferLists = a2;
  v13 = a3;
  do
  {
    v5 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v8, 0);
    if ( v12 )
      ndisCoSendPacketsToNdisPackets(a1, v8, v12);
  }
  while ( v5 );
  Alignment = NetBufferLists;
  if ( NetBufferLists )
  {
    if ( (unsigned __int8)byte_1C009874A >= 2u )
      WPP_SF_(0x12u, &WPP_4308510b5fb5364aadc32f04d3b40dd6_Traceguids);
    if ( FirstNetBuffer != Alignment->FirstNetBuffer )
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
    if ( Alignment )
    {
      v7 = Alignment;
      do
      {
        v7->Status = -1073741823;
        v7 = (PNET_BUFFER_LIST)v7->Link.Alignment;
      }
      while ( v7 );
      NdisMCoSendNetBufferListsComplete(a1, Alignment, v3 & 1);
    }
  }
}
