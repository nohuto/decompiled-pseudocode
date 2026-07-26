/*
 * XREFs of ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C00564A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004DC84 (ndisXlateSendCompleteNetBufferListToPacket.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteToNdisPackets(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  struct _NET_BUFFER_LIST *v4; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v4 = a2;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(0x2Eu, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2);
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v4, 0LL, *(_QWORD *)(a1 + 680), 0x95u, a3 & 1);
  do
  {
    Alignment = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
    v4->Link.Alignment = 0LL;
    ndisXlateSendCompleteNetBufferListToPacket(v4, &v8, (int *)&v7);
    if ( (v7 & 0xC0230000) == 0xC0230000 )
      v7 = (unsigned __int16)v7 | 0xC0010000;
    (*(void (__fastcall **)(__int64, __int64))(a1 + 112))(a1, v8);
    v4 = Alignment;
  }
  while ( Alignment );
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(0x2Fu, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, 0LL);
}
