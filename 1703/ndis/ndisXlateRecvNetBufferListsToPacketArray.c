/*
 * XREFs of ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004EBE4
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0027570 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0028358 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054090 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ndisCopyNBLInfoToPacket @ 0x1C004E85C (ndisCopyNBLInfoToPacket.c)
 *     ndisNetBufferToPacket @ 0x1C004EA98 (ndisNetBufferToPacket.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

char __fastcall ndisXlateRecvNetBufferListsToPacketArray(__int64 *a1)
{
  struct _NET_BUFFER_LIST *Alignment; // rbx
  int v2; // r12d
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r13
  char v7; // r15
  struct _NDIS_PACKET *v8; // rax
  PNDIS_PACKET *v9; // r14
  unsigned int v10; // r8d
  PNDIS_PACKET v11; // rdi
  unsigned int v13; // [rsp+60h] [rbp+8h]

  Alignment = (struct _NET_BUFFER_LIST *)a1[2];
  v2 = 0;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v5 = 0LL;
  v6 = *a1;
  v7 = 1;
  v13 = v4;
  while ( Alignment && (unsigned int)v5 < v4 )
  {
    if ( (Alignment->Flags & 0x10) != 0 && (Alignment->NblFlags & 2) != 0 )
    {
      v8 = (struct _NDIS_PACKET *)Alignment->NdisReserved[0];
      v9 = (PNDIS_PACKET *)(v6 + 8 * v5);
      *v9 = v8;
      v8->Private.Flags |= 0x4000u;
      if ( ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
        goto LABEL_11;
      v10 = 29;
      goto LABEL_10;
    }
    v9 = (PNDIS_PACKET *)(v6 + 8 * v5);
    v2 = ndisNetBufferToPacket((__int64)Alignment->FirstNetBuffer, 0, v9);
    if ( v2 )
      break;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      v10 = 25;
LABEL_10:
      ndisNblTrackerRecordEvent(Alignment, 0LL, v10, *v9, 0);
    }
LABEL_11:
    v11 = *v9;
    *(unsigned int *)((char *)&v11->Private.Count + (*v9)->Private.NdisPacketOobOffset) = *((_DWORD *)a1 + 3);
    *(_DWORD *)((char *)&v11->Private.Tail + v11->Private.NdisPacketOobOffset) = 14;
    *(_QWORD *)&(*v9)->MacReserved[(*v9)->Private.NdisPacketOobOffset + 24] = 0LL;
    ndisCopyNBLInfoToPacket((__int64)Alignment, (__int64)v11, 2);
    if ( (Alignment->Flags & 0x80u) != 0 )
    {
      v11->Private.Flags |= 0x100u;
      v11->Private.NdisPacketFlags |= 2u;
      *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] = Alignment->SourceHandle;
    }
    if ( (Alignment->Flags & 0x200) != 0 )
      v11->Private.Flags &= ~0x80u;
    else
      v11->Private.Flags |= 0x80u;
    v11->Private.Flags |= 0x20000u;
    v5 = (unsigned int)(v5 + 1);
    *(_MDL **)((char *)&(*v9)[1].Private.Head + (*v9)->Private.NdisPacketOobOffset) = (_MDL *)Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v4 = v13;
  }
  *((_DWORD *)a1 + 8) = v5;
  a1[2] = (__int64)Alignment;
  if ( Alignment )
    a1[3] = (__int64)Alignment->FirstNetBuffer;
  if ( v2 )
  {
    if ( (_DWORD)v5 )
      return v7;
    return 0;
  }
  else if ( !Alignment )
  {
    return 0;
  }
  return v7;
}
