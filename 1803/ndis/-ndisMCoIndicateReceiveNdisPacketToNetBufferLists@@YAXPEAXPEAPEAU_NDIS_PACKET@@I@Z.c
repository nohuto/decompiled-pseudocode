/*
 * XREFs of ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053820
 * Callers:
 *     <none>
 * Callees:
 *     NdisMPauseComplete @ 0x1C0013580 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E1FC (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004E4B0 (ndisXlateReturnNetBufferListToPacket.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053E20 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0064BA0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMCoIndicateReceiveNdisPacketToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rax
  void *v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r15d
  KIRQL v10; // dl
  unsigned int v11; // ecx
  bool v12; // cc
  KSPIN_LOCK *v13; // rcx
  struct _NET_BUFFER_LIST *v14; // rsi
  struct _NET_BUFFER_LIST *Alignment; // r12
  struct _NDIS_PACKET *v16; // rax
  KIRQL v17; // al
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  struct _NDIS_PACKET **v20; // rbx
  __int64 v21; // rsi
  struct _NDIS_PACKET *v22; // rdx
  struct _NET_BUFFER_LIST *v23; // rsi
  struct _NET_BUFFER_LIST *v24; // rbx
  _QWORD v25[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-20h]
  struct _NET_BUFFER_LIST *v27; // [rsp+38h] [rbp-18h]
  unsigned int v28; // [rsp+40h] [rbp-10h]
  unsigned int v29; // [rsp+44h] [rbp-Ch]
  unsigned int v30; // [rsp+48h] [rbp-8h]
  unsigned int v32; // [rsp+98h] [rbp+48h]
  bool v33; // [rsp+A0h] [rbp+50h]

  v3 = a1[9];
  v25[1] = a2;
  v26 = a3;
  v6 = a1;
  v27 = 0LL;
  v7 = *(_QWORD *)(v3 + 120);
  v8 = 0;
  v25[0] = v7;
  v30 = 0;
  v28 = 0;
  while ( 1 )
  {
    v33 = ndisXlateRecvPacketArrayToNetBufferLists((__int64)v25);
    if ( !v27 )
      goto LABEL_17;
    v9 = v28 - v8;
    v32 = v28;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 2000));
    *(_QWORD *)(v7 + 2016) = KeGetCurrentThread();
    v11 = *(_DWORD *)(v7 + 2008) - 5;
    *(_DWORD *)(v7 + 2024) = 2425268;
    v12 = v11 <= 1;
    v13 = (KSPIN_LOCK *)(v7 + 2000);
    if ( v12 )
      break;
    *(_DWORD *)(v7 + 2012) += v9;
    *(_QWORD *)(v7 + 2016) = 0LL;
    *(_DWORD *)(v7 + 2024) = 0;
    KeReleaseSpinLock(v13, v10);
    v14 = v27;
    ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(v6, v27, v29, v30);
    if ( (v30 & 2) != 0 )
    {
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
        v16 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v14);
        if ( *(unsigned int *)((char *)&v16->Private.Count + v16->Private.NdisPacketOobOffset) != -1073741670 )
        {
          if ( (v16[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v16[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v16);
          else
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v7 + 2168))(*(_QWORD *)(v7 + 24), v16);
        }
        v14 = Alignment;
      }
      while ( Alignment );
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 2000));
      *(_QWORD *)(v7 + 2016) = KeGetCurrentThread();
      v18 = *(_DWORD *)(v7 + 2012) - v9;
      *(_DWORD *)(v7 + 2024) = 2425343;
      *(_DWORD *)(v7 + 2012) = v18;
      if ( *(_DWORD *)(v7 + 2008) == 5 && !v18 )
      {
        *(_DWORD *)(v7 + 2008) = 6;
        *(_QWORD *)(v7 + 2016) = 0LL;
        *(_DWORD *)(v7 + 2024) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2000), v17);
        NdisMPauseComplete((NDIS_HANDLE)v7);
LABEL_17:
        v19 = v28;
        goto LABEL_18;
      }
      *(_QWORD *)(v7 + 2016) = 0LL;
      *(_DWORD *)(v7 + 2024) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2000), v17);
      v6 = a1;
    }
    v27 = 0LL;
    if ( !v33 )
      goto LABEL_17;
    v8 = v32;
  }
  v23 = v27;
  *(_QWORD *)(v7 + 2016) = 0LL;
  *(_DWORD *)(v7 + 2024) = 0;
  KeReleaseSpinLock(v13, v10);
  do
  {
    v24 = (struct _NET_BUFFER_LIST *)v23->Link.Alignment;
    v23->Link.Alignment = 0LL;
    ndisXlateReturnNetBufferListToPacket(v23);
    v23 = v24;
  }
  while ( v24 );
  v19 = v28 - v9;
LABEL_18:
  if ( v19 < a3 )
  {
    v20 = &a2[v19];
    v21 = a3 - v19;
    do
    {
      v22 = *v20++;
      if ( *(unsigned int *)((char *)&v22->Private.Count + v22->Private.NdisPacketOobOffset) != -1073741670 )
      {
        if ( (v22[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v22[-1].ProtocolReserved[4] == -1 )
          NDIS_FREE_XFER_DATA_PACKET(v22);
        else
          (*(void (__fastcall **)(_QWORD))(v7 + 2168))(*(_QWORD *)(v7 + 24));
      }
      --v21;
    }
    while ( v21 );
  }
}
