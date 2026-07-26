/*
 * XREFs of ndisMIndicatePacketsToNetBufferLists @ 0x1C0069DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisMPauseComplete @ 0x1C001DE10 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004D89C (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004DB4C (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0059B5C (ndisInvokeNextReceiveHandler.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0064044 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(NDIS_HANDLE MiniportAdapterHandle, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  bool v6; // r13
  unsigned int v7; // r12d
  KIRQL v8; // al
  int v9; // ecx
  int v10; // ebx
  struct _NET_BUFFER_LIST *v11; // rsi
  int v12; // r13d
  struct _NET_BUFFER_LIST *Alignment; // rbx
  struct _NDIS_PACKET *v14; // rdx
  __int64 NdisPacketOobOffset; // rax
  KIRQL v16; // al
  struct _KTHREAD *CurrentThread; // rdx
  bool v18; // zf
  int v19; // ecx
  unsigned int v20; // ecx
  int v21; // esi
  __int64 v22; // r14
  struct _NDIS_PACKET **v23; // rbx
  struct _NDIS_PACKET *v24; // rcx
  __int64 v25; // rax
  struct _NET_BUFFER_LIST *v26; // rsi
  struct _NET_BUFFER_LIST *v27; // rbx
  _QWORD v28[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-20h]
  struct _NET_BUFFER_LIST *v30; // [rsp+58h] [rbp-18h]
  unsigned int v31; // [rsp+60h] [rbp-10h]
  unsigned int v32; // [rsp+64h] [rbp-Ch]
  int v33; // [rsp+68h] [rbp-8h]
  unsigned int v34; // [rsp+B0h] [rbp+40h]
  bool v36; // [rsp+C0h] [rbp+50h]

  v29 = a3;
  v3 = 0;
  v31 = 0;
  v33 = 0;
  v28[1] = a2;
  v28[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v6 = ndisXlateRecvPacketArrayToNetBufferLists((__int64)v28);
    v36 = v6;
    if ( !v30 )
      goto LABEL_25;
    v7 = v31 - v3;
    v34 = v31;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
    *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
    v9 = *((_DWORD *)MiniportAdapterHandle + 502);
    *((_DWORD *)MiniportAdapterHandle + 506) = 2491740;
    if ( v9 == 5 || v9 == 6 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 503) += v7;
    *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 506) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v8);
    v10 = v33;
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v33 & 2) == 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v7);
      v10 = v33;
    }
    v11 = v30;
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v30,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 513),
        *((_QWORD *)MiniportAdapterHandle + 314),
        (v10 & 2 | 0x100u) >> 1,
        0);
    ndisInvokeNextReceiveHandler(
      v11,
      0,
      v32,
      v10,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 315),
      *((void **)MiniportAdapterHandle + 313),
      *((void (**)(void))MiniportAdapterHandle + 329));
    if ( (v10 & 2) != 0 )
    {
      v12 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v11,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
          *((_QWORD *)MiniportAdapterHandle + 513),
          0x8Eu,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v11->Link.Alignment;
        v14 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v11);
        NdisPacketOobOffset = v14->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v14->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v12 )
          {
            if ( (v14[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v14[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v14);
            else
              (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 271))(*((_QWORD *)MiniportAdapterHandle + 3));
          }
          else
          {
            *(unsigned int *)((char *)&v14->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v11 = Alignment;
      }
      while ( Alignment );
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
      CurrentThread = KeGetCurrentThread();
      *((_DWORD *)MiniportAdapterHandle + 503) -= v7;
      v18 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
      v19 = *((_DWORD *)MiniportAdapterHandle + 503);
      *((_QWORD *)MiniportAdapterHandle + 252) = CurrentThread;
      *((_DWORD *)MiniportAdapterHandle + 506) = 2491870;
      if ( v18 && !v19 )
      {
        *((_DWORD *)MiniportAdapterHandle + 502) = 6;
        *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
        *((_DWORD *)MiniportAdapterHandle + 506) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v16);
        NdisMPauseComplete(MiniportAdapterHandle);
LABEL_26:
        v20 = v31;
        goto LABEL_27;
      }
      *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 506) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v16);
      v6 = v36;
    }
    v3 = v34;
    v30 = 0LL;
LABEL_25:
    if ( !v6 )
      goto LABEL_26;
  }
  *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 506) = 0;
  v26 = v30;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v8);
  do
  {
    v27 = (struct _NET_BUFFER_LIST *)v26->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v26);
    v26 = v27;
  }
  while ( v27 );
  v20 = v31 - v7;
LABEL_27:
  if ( v20 < a3 )
  {
    v21 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
    v22 = a3 - v20;
    v23 = (struct _NDIS_PACKET **)(a2 + 8LL * v20);
    do
    {
      v24 = *v23++;
      v25 = v24->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v24->Private.Count + v25) != -1073741670 )
      {
        if ( v21 )
        {
          if ( (v24[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v24[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v24);
          else
            (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))MiniportAdapterHandle + 271))(
              *((_QWORD *)MiniportAdapterHandle + 3),
              v24);
        }
        else
        {
          *(unsigned int *)((char *)&v24->Private.Count + v25) = 0;
        }
      }
      --v22;
    }
    while ( v22 );
  }
}
