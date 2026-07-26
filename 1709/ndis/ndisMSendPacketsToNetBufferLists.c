/*
 * XREFs of ndisMSendPacketsToNetBufferLists @ 0x1C0056EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004E1B0 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005D740 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisMSendPacketsToNetBufferLists(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v6; // r15
  bool v7; // r14
  struct _NDIS_PACKET **v8; // r14
  __int64 v9; // rbx
  _QWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-38h]
  struct _NET_BUFFER_LIST *v12; // [rsp+48h] [rbp-30h]
  unsigned int v13; // [rsp+50h] [rbp-28h]
  unsigned int v14; // [rsp+58h] [rbp-20h]
  struct _NDIS_STACK_RESERVED *v15; // [rsp+80h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qqd(0x36u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(*a2, &v15);
  v13 = 0;
  v11 = a3;
  v10[1] = a2;
  v6 = *(_QWORD *)v15;
  v10[0] = *(_QWORD *)v15;
  do
  {
    v7 = ndisXlateSendPacketArrayToNetBufferLists((__int64)v10);
    if ( v12 )
    {
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v12,
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v6 + 680),
          *(_QWORD *)(a1 + 2568),
          0x8Fu,
          v14 & 1);
      (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))(a1 + 656))(a1, v12, 0LL, v14);
    }
  }
  while ( v7 );
  if ( !v12 && v13 < a3 )
  {
    v8 = &a2[v13];
    v9 = a3 - v13;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v6 + 112))(v6, *v8++, 3221225626LL);
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(0x37u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2);
}
