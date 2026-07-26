/*
 * XREFs of ndisMDeferredSend @ 0x1C0055750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0054888 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisFreePaddedMdl @ 0x1C0055460 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C0056CB0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0056E5C (ndisMSendCompletePacketToNetBufferLists.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

char __fastcall ndisMDeferredSend(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PACKET *FirstPendingPacket; // rbp
  int v3; // r9d
  unsigned __int8 *WrapperReserved; // r14
  struct _NDIS_MINIPORT_BLOCK *v5; // rcx
  unsigned int v6; // edi
  unsigned int Flags; // edi
  __int64 v8; // rcx
  struct _NDIS_STACK_RESERVED *v9; // rbx
  unsigned __int8 **v10; // rax
  __int64 v11; // r15
  __int64 NdisPacketOobOffset; // rax
  struct _NDIS_STACK_RESERVED *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_q(0x18u, &WPP_baff752c64773449955de141535fd9df_Traceguids, (__int64)a1);
  while ( a1->FirstPendingPacket && (a1->Flags & 0x400000) != 0 )
  {
    FirstPendingPacket = a1->FirstPendingPacket;
    NDIS_STACK_RESERVED_FROM_PACKET(FirstPendingPacket, &v14);
    a1->FirstPendingPacket = 0LL;
    WrapperReserved = FirstPendingPacket->WrapperReserved;
    v5 = *(struct _NDIS_MINIPORT_BLOCK **)&FirstPendingPacket->MacReserved[16];
    if ( v5 != (struct _NDIS_MINIPORT_BLOCK *)&a1->PacketList )
      a1->FirstPendingPacket = (_NDIS_PACKET *)&v5[-1].PdcTaskClientDisableWorkItem.WrapperReserved[8];
    if ( ((v3 & 0x4000) != 0 || (v3 & 0x8800000) != 0 && SLOBYTE(FirstPendingPacket->Private.Flags) >= 0)
      && (unsigned __int8)ndisMLoopbackPacketX(a1, FirstPendingPacket) )
    {
      v6 = 0;
LABEL_11:
      FirstPendingPacket->Private.NdisPacketFlags &= ~0x10u;
      if ( v6 == -1073741670 )
      {
        FirstPendingPacket->Private.NdisPacketFlags &= ~0x10u;
        a1->Flags &= ~0x400000u;
        a1->FirstPendingPacket = FirstPendingPacket;
      }
      else
      {
        if ( !v6 )
          NDISM_SEND_PACKET_STATS(a1, FirstPendingPacket);
        v8 = *(_QWORD *)WrapperReserved;
        v9 = v14;
        v10 = *(unsigned __int8 ***)&FirstPendingPacket->MacReserved[24];
        v11 = *(_QWORD *)v14;
        if ( *(unsigned __int8 **)(*(_QWORD *)WrapperReserved + 8LL) != WrapperReserved || *v10 != WrapperReserved )
          __fastfail(3u);
        *v10 = (unsigned __int8 *)v8;
        *(_QWORD *)(v8 + 8) = v10;
        *(_QWORD *)&FirstPendingPacket->MacReserved[24] = &FirstPendingPacket->MacReserved[16];
        *(_QWORD *)WrapperReserved = WrapperReserved;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v9 = 1297040180LL;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v9 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0
          && *(void **)((char *)&FirstPendingPacket[1].Private.Pool + FirstPendingPacket->Private.NdisPacketOobOffset) )
        {
          ndisFreePaddedMdl((__int64)FirstPendingPacket);
        }
        NdisPacketOobOffset = FirstPendingPacket->Private.NdisPacketOobOffset;
        FirstPendingPacket->Private.NdisPacketFlags &= 0xC0u;
        if ( *(_MDL **)((char *)&FirstPendingPacket[1].Private.Head + NdisPacketOobOffset) )
          ndisMSendCompletePacketToNetBufferLists(a1, FirstPendingPacket, v6);
        else
          (*(void (__fastcall **)(__int64, _NDIS_PACKET *, _QWORD))(v11 + 112))(v11, FirstPendingPacket, v6);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 1508280;
      }
    }
    else
    {
      Flags = FirstPendingPacket->Private.Flags;
      FirstPendingPacket->Private.NdisPacketFlags |= 0x10u;
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      v6 = a1->SendHandler(a1->MiniportAdapterContext, FirstPendingPacket, Flags);
      KeAcquireSpinLockAtDpcLevel(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 1508258;
      if ( v6 != 259 )
        goto LABEL_11;
    }
  }
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_q(0x19u, &WPP_baff752c64773449955de141535fd9df_Traceguids, (__int64)a1);
  return 0;
}
