/*
 * XREFs of ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00536D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisMFreeSGList @ 0x1C004BAD4 (ndisMFreeSGList.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004DD14 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0053990 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005D740 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisMCoSendCompleteToNetBufferLists(int a1, _QWORD *a2, struct _NDIS_PACKET *a3)
{
  __int64 v3; // rsi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  struct _NDIS_PACKET *v7; // rcx
  __int64 v8; // rdx
  struct _NDIS_STACK_RESERVED *v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2[9];
  v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120);
  if ( (v6->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a3->Reserved + a3->Private.NdisPacketOobOffset) )
    ndisMFreeSGList(*(_QWORD *)(v3 + 120), (__int64)a3, (__int64)a3);
  if ( !a1 )
    NDISM_SEND_PACKET_STATS(v6, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a3, &v9);
  *((_DWORD *)v9 + 2) = 0;
  --*(_DWORD *)&a3[-1].ProtocolReserved[4];
  v8 = ndisXlateSendCompletePacketToNetBufferList(v7, a1);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 64))(*(_QWORD *)(v3 + 24), v8, 0LL);
}
