/*
 * XREFs of ndisMSendPacketsToMiniport @ 0x1C0057A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisFreePaddedMdl @ 0x1C0055460 (ndisFreePaddedMdl.c)
 *     ndisMCheckPacketAndPad @ 0x1C005552C (ndisMCheckPacketAndPad.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0056E5C (ndisMSendCompletePacketToNetBufferLists.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisMProcessDeferred @ 0x1C005FF14 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C0060588 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMSendPacketsToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int64 *a2, unsigned int a3)
{
  unsigned int v4; // ebp
  KIRQL v7; // di
  __int64 *v8; // r13
  _LIST_ENTRY *p_PacketList; // r12
  __int64 v10; // rdi
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *Blink; // rdx
  struct _NDIS_STACK_RESERVED *v13; // r12
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-58h]
  unsigned int v18; // [rsp+80h] [rbp+8h]
  struct _NDIS_STACK_RESERVED *v19; // [rsp+88h] [rbp+10h] BYREF
  KIRQL v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qqd(0xCu, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2, a3);
  v18 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v20 = v7;
  v8 = a2;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 1507570;
  if ( a3 )
  {
    p_PacketList = &a1->PacketList;
    do
    {
      v10 = *v8;
      if ( (a1->SendFlags & 8) != 0 )
        v4 = ndisMCheckPacketAndPad((__int64)a1, *v8);
      *(_DWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 32) = 259;
      NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v10, &v19);
      v11 = (_LIST_ENTRY *)(v10 + 64);
      *(_QWORD *)(v10 + 72) = v10 + 64;
      *(_QWORD *)(v10 + 64) = v10 + 64;
      Blink = p_PacketList->Blink;
      if ( Blink->Flink != p_PacketList )
        __fastfail(3u);
      v11->Flink = p_PacketList;
      *(_QWORD *)(v10 + 72) = Blink;
      Blink->Flink = v11;
      p_PacketList->Blink = v11;
      if ( v4 )
      {
        v13 = v19;
        Flink = v11->Flink;
        v21 = *(_QWORD *)v19;
        v15 = *(_LIST_ENTRY ***)(v10 + 72);
        if ( Flink->Blink != v11 || *v15 != v11 )
          __fastfail(3u);
        *v15 = Flink;
        Flink->Blink = (_LIST_ENTRY *)v15;
        *(_QWORD *)(v10 + 72) = v10 + 64;
        v11->Flink = v11;
        a1->Flags |= 0x400000u;
        *(_QWORD *)v13 = 1297040176LL;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        *((_DWORD *)v13 + 2) = 0;
        if ( (a1->SendFlags & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 128) )
          ndisFreePaddedMdl(v10);
        v16 = *(unsigned __int16 *)(v10 + 42);
        *(_BYTE *)(v10 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v16 + v10 + 112) )
          ndisMSendCompletePacketToNetBufferLists((__int64)a1, (struct _NDIS_PACKET *)v10, v4);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v21 + 112))(v21, v10, v4);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        p_PacketList = &a1->PacketList;
        a1->MiniportThread = KeGetCurrentThread();
        v4 = 0;
        a1->LockDbg = 1507590;
      }
      else if ( !a1->FirstPendingPacket )
      {
        a1->FirstPendingPacket = (_NDIS_PACKET *)v10;
      }
      ++v8;
      ++v18;
    }
    while ( v18 < a3 );
    v7 = v20;
  }
  ndisMQueueWorkItem(a1, 1LL);
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockDbgX = 1507602;
    a1->LockThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockDbgX = 0;
    a1->LockThread = 0LL;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v7);
  if ( (unsigned __int8)byte_1C009260A >= 4u )
  {
    LODWORD(v17) = a3;
    WPP_SF_qqd(0xDu, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2, v17);
  }
}
