/*
 * XREFs of ndisMIndicatePacketsToNetBufferLists @ 0x1C006A700
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisMPauseComplete @ 0x1C0013580 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E1FC (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004E4B0 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C005A528 (ndisInvokeNextReceiveHandler.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0064BA0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(char *MiniportAdapterHandle, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  bool v6; // r13
  unsigned int v7; // r12d
  KIRQL v8; // dl
  unsigned int v9; // ecx
  bool v10; // cc
  KSPIN_LOCK *v11; // rcx
  int v12; // ebx
  struct _NET_BUFFER_LIST *v13; // rsi
  int v14; // r13d
  struct _NET_BUFFER_LIST *Alignment; // rbx
  struct _NDIS_PACKET *v16; // rdx
  __int64 NdisPacketOobOffset; // rax
  KIRQL v18; // al
  unsigned int v19; // edx
  bool v20; // zf
  unsigned int v21; // ecx
  int v22; // esi
  __int64 v23; // r14
  struct _NDIS_PACKET **v24; // rbx
  struct _NDIS_PACKET *v25; // rcx
  __int64 v26; // rax
  struct _NET_BUFFER_LIST *v27; // rsi
  struct _NET_BUFFER_LIST *v28; // rbx
  _QWORD v29[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-20h]
  struct _NET_BUFFER_LIST *v31; // [rsp+58h] [rbp-18h]
  unsigned int v32; // [rsp+60h] [rbp-10h]
  unsigned int v33; // [rsp+64h] [rbp-Ch]
  int v34; // [rsp+68h] [rbp-8h]
  unsigned int v35; // [rsp+B0h] [rbp+40h]
  bool v37; // [rsp+C0h] [rbp+50h]

  v30 = a3;
  v3 = 0;
  v32 = 0;
  v34 = 0;
  v29[1] = a2;
  v29[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v6 = ndisXlateRecvPacketArrayToNetBufferLists((__int64)v29);
    v37 = v6;
    if ( !v31 )
      goto LABEL_24;
    v7 = v32 - v3;
    v35 = v32;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
    *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
    v9 = *((_DWORD *)MiniportAdapterHandle + 502) - 5;
    *((_DWORD *)MiniportAdapterHandle + 506) = 2491740;
    v10 = v9 <= 1;
    v11 = (KSPIN_LOCK *)(MiniportAdapterHandle + 2000);
    if ( v10 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 503) += v7;
    *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 506) = 0;
    KeReleaseSpinLock(v11, v8);
    v12 = v34;
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v34 & 2) == 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v7);
      v12 = v34;
    }
    v13 = v31;
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v31,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 513),
        *((_QWORD *)MiniportAdapterHandle + 314),
        (v12 & 2 | 0x100u) >> 1,
        0);
    ndisInvokeNextReceiveHandler(
      v13,
      0,
      v33,
      v12,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 315),
      *((void **)MiniportAdapterHandle + 313),
      *((void (**)(void))MiniportAdapterHandle + 329));
    if ( (v12 & 2) != 0 )
    {
      v14 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v13,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
          *((_QWORD *)MiniportAdapterHandle + 513),
          142LL,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v13->Link.Alignment;
        v16 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v13);
        NdisPacketOobOffset = v16->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v16->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v14 )
          {
            if ( (v16[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v16[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v16);
            else
              (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 271))(*((_QWORD *)MiniportAdapterHandle + 3));
          }
          else
          {
            *(unsigned int *)((char *)&v16->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v13 = Alignment;
      }
      while ( Alignment );
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
      v19 = *((_DWORD *)MiniportAdapterHandle + 503) - v7;
      *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
      v20 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
      *((_DWORD *)MiniportAdapterHandle + 506) = 2491870;
      *((_DWORD *)MiniportAdapterHandle + 503) = v19;
      if ( v20 && !v19 )
      {
        *((_DWORD *)MiniportAdapterHandle + 502) = 6;
        *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
        *((_DWORD *)MiniportAdapterHandle + 506) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v18);
        NdisMPauseComplete(MiniportAdapterHandle);
LABEL_25:
        v21 = v32;
        goto LABEL_26;
      }
      *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 506) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v18);
      v6 = v37;
    }
    v3 = v35;
    v31 = 0LL;
LABEL_24:
    if ( !v6 )
      goto LABEL_25;
  }
  *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 506) = 0;
  v27 = v31;
  KeReleaseSpinLock(v11, v8);
  do
  {
    v28 = (struct _NET_BUFFER_LIST *)v27->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v27);
    v27 = v28;
  }
  while ( v28 );
  v21 = v32 - v7;
LABEL_26:
  if ( v21 < a3 )
  {
    v22 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
    v23 = a3 - v21;
    v24 = (struct _NDIS_PACKET **)(a2 + 8LL * v21);
    do
    {
      v25 = *v24++;
      v26 = v25->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v25->Private.Count + v26) != -1073741670 )
      {
        if ( v22 )
        {
          if ( (v25[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v25[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v25);
          else
            (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))MiniportAdapterHandle + 271))(
              *((_QWORD *)MiniportAdapterHandle + 3),
              v25);
        }
        else
        {
          *(unsigned int *)((char *)&v25->Private.Count + v26) = 0;
        }
      }
      --v23;
    }
    while ( v23 );
  }
}
