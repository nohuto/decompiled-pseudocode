/*
 * XREFs of ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053DF0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMPauseComplete @ 0x1C0015F80 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004ED90 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004F040 (ndisXlateReturnNetBufferListToPacket.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00543F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0063A14 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMCoIndicateReceiveNdisPacketToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rax
  void *v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  KIRQL v10; // al
  int v11; // ecx
  struct _NET_BUFFER_LIST *v12; // rsi
  struct _NET_BUFFER_LIST *Alignment; // r12
  struct _NDIS_PACKET *v14; // rax
  KIRQL v15; // al
  struct _KTHREAD *CurrentThread; // rdx
  bool v17; // zf
  int v18; // ecx
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
      goto LABEL_18;
    v9 = v28 - v8;
    v32 = v28;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 2000));
    *(_QWORD *)(v7 + 2016) = KeGetCurrentThread();
    v11 = *(_DWORD *)(v7 + 2008);
    *(_DWORD *)(v7 + 2024) = 2425268;
    if ( v11 == 5 || v11 == 6 )
      break;
    *(_DWORD *)(v7 + 2012) += v9;
    *(_QWORD *)(v7 + 2016) = 0LL;
    *(_DWORD *)(v7 + 2024) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2000), v10);
    v12 = v27;
    ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(v6, v27, v29, v30);
    if ( (v30 & 2) != 0 )
    {
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v12->Link.Alignment;
        v14 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v12);
        if ( *(unsigned int *)((char *)&v14->Private.Count + v14->Private.NdisPacketOobOffset) != -1073741670 )
        {
          if ( (v14[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v14[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v14);
          else
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v7 + 2168))(*(_QWORD *)(v7 + 24), v14);
        }
        v12 = Alignment;
      }
      while ( Alignment );
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 2000));
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v7 + 2012) -= v9;
      v17 = *(_DWORD *)(v7 + 2008) == 5;
      v18 = *(_DWORD *)(v7 + 2012);
      *(_QWORD *)(v7 + 2016) = CurrentThread;
      *(_DWORD *)(v7 + 2024) = 2425343;
      if ( v17 && !v18 )
      {
        *(_DWORD *)(v7 + 2008) = 6;
        *(_QWORD *)(v7 + 2016) = 0LL;
        *(_DWORD *)(v7 + 2024) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2000), v15);
        NdisMPauseComplete((NDIS_HANDLE)v7);
LABEL_18:
        v19 = v28;
        goto LABEL_19;
      }
      *(_QWORD *)(v7 + 2016) = 0LL;
      *(_DWORD *)(v7 + 2024) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2000), v15);
      v6 = a1;
    }
    v27 = 0LL;
    if ( !v33 )
      goto LABEL_18;
    v8 = v32;
  }
  v23 = v27;
  *(_QWORD *)(v7 + 2016) = 0LL;
  *(_DWORD *)(v7 + 2024) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2000), v10);
  do
  {
    v24 = (struct _NET_BUFFER_LIST *)v23->Link.Alignment;
    v23->Link.Alignment = 0LL;
    ndisXlateReturnNetBufferListToPacket(v23);
    v23 = v24;
  }
  while ( v24 );
  v19 = v28 - v9;
LABEL_19:
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
