/*
 * XREFs of ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00535F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisMFreeSGList @ 0x1C004BAD4 (ndisMFreeSGList.c)
 *     WPP_SF_Lqq @ 0x1C005393C (WPP_SF_Lqq.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0053990 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005D740 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisMCoSendCompleteToNdisPacket(unsigned int a1, _QWORD *a2, struct _NDIS_PACKET *a3)
{
  __int64 v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  __int64 v8; // rdx
  struct _NDIS_STACK_RESERVED *v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2[9];
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_Lqq(16LL, a2, a1, a2, a3);
  v7 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120);
  if ( (v7->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a3->Reserved + a3->Private.NdisPacketOobOffset) )
    ndisMFreeSGList(*(_QWORD *)(v3 + 120), (__int64)a3, (__int64)a3);
  if ( !a1 )
    NDISM_SEND_PACKET_STATS(v7, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a3, &v9);
  a3->Private.NdisPacketFlags &= 0xC0u;
  *((_DWORD *)v9 + 2) = 0;
  --*(_DWORD *)&a3[-1].ProtocolReserved[4];
  (*(void (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v3 + 48))(a1, *(_QWORD *)(v3 + 24), a3);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_Lqq(17LL, v8, a1, a2, a3);
}
