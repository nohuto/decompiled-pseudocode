/*
 * XREFs of ndisMSendCompleteX @ 0x1C0056C00
 * Callers:
 *     ndisMAllocSGList @ 0x1C004C150 (ndisMAllocSGList.c)
 *     ndisMProcessSGList @ 0x1C004CB80 (ndisMProcessSGList.c)
 *     ndisMSendPacketsXToMiniport @ 0x1C00579A0 (ndisMSendPacketsXToMiniport.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisMFreeSGList @ 0x1C004CA6C (ndisMFreeSGList.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0054300 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C0054F38 (ndisFreePaddedMdl.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C005694C (ndisMSendCompletePacketToNetBufferLists.c)
 */

void __fastcall ndisMSendCompleteX(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  KIRQL v6; // bp
  __int64 v7; // r8
  __int64 v8; // r14
  struct _NDIS_STACK_RESERVED *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qqd(0x12u, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2, a3);
  v6 = KfRaiseIrql(2u);
  if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
    ndisMFreeSGList((__int64)a1, (__int64)a2, v7);
  if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
    ndisFreePaddedMdl((__int64)a2);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v9);
  v8 = *(_QWORD *)v9;
  *(_QWORD *)v9 = 1297040182LL;
  a2->Private.NdisPacketFlags &= 0xC0u;
  if ( !a3 )
    NDISM_SEND_PACKET_STATS(a1, a2);
  if ( *(_MDL **)((char *)&a2[1].Private.Head + a2->Private.NdisPacketOobOffset) )
    ndisMSendCompletePacketToNetBufferLists((__int64)a1, a2, a3);
  else
    (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v8 + 112))(v8, a2, a3);
  if ( v6 != 2 )
    KeLowerIrql(v6);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x13u, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2);
}
