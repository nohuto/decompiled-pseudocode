/*
 * XREFs of ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004E054
 * Callers:
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0025964 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0052BE4 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053AC0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ndisCopyNBLInfoToPacket @ 0x1C004DBEC (ndisCopyNBLInfoToPacket.c)
 *     ndisNetBufferToPacket @ 0x1C004DF00 (ndisNetBufferToPacket.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

char __fastcall ndisXlateRecvNetBufferListsToPacketArray(__int64 *a1)
{
  struct _NET_BUFFER_LIST *Alignment; // rbx
  int v2; // r13d
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // r15
  char v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rbp
  void *v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int Flags; // ecx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v18; // [rsp+60h] [rbp+8h]

  Alignment = (struct _NET_BUFFER_LIST *)a1[2];
  v2 = 0;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v5 = 0LL;
  v6 = *a1;
  v7 = 1;
  v18 = v4;
  while ( Alignment && (unsigned int)v5 < v4 )
  {
    if ( (Alignment->Flags & 0x10) != 0 && (Alignment->NblFlags & 2) != 0 )
    {
      v8 = Alignment->NdisReserved[0];
      *(_QWORD *)(v6 + 8 * v5) = v8;
      v9 = (unsigned int)v5;
      v8[9] |= 0x4000u;
      if ( ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
        goto LABEL_11;
      v10 = *(void **)(v6 + 8 * v5);
      v11 = 29;
      goto LABEL_10;
    }
    v9 = (unsigned int)v5;
    v2 = ndisNetBufferToPacket((__int64)Alignment->FirstNetBuffer, 0, (PNDIS_PACKET *)(v6 + 8 * v5));
    if ( v2 )
      break;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      v10 = *(void **)(v6 + 8 * v5);
      v11 = 25;
LABEL_10:
      ndisNblTrackerRecordEvent(Alignment, 0LL, v11, v10, 0);
    }
LABEL_11:
    v12 = *(_QWORD *)(v6 + 8 * v9);
    *(_DWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 32) = *((_DWORD *)a1 + 3);
    *(_DWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 16) = 14;
    *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v9) + 42LL) + *(_QWORD *)(v6 + 8 * v9) + 72LL) = 0LL;
    ndisCopyNBLInfoToPacket((__int64)Alignment, v12, 2);
    Flags = Alignment->Flags;
    if ( (Flags & 0x80u) != 0 )
    {
      *(_DWORD *)(v13 + 36) |= 0x100u;
      *(_BYTE *)(v13 + 41) |= 2u;
      *(_QWORD *)(*(unsigned __int16 *)(v13 + 42) + v13 + 72) = Alignment->SourceHandle;
      Flags = Alignment->Flags;
    }
    v15 = *(_DWORD *)(v13 + 36);
    if ( (Flags & 0x200) != 0 )
      v16 = v15 & 0xFFFFFF7F;
    else
      v16 = v15 | 0x80;
    *(_DWORD *)(v13 + 36) = v16 | 0x20000;
    v5 = (unsigned int)(v5 + 1);
    *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v9) + 42LL) + *(_QWORD *)(v6 + 8 * v9) + 112LL) = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v4 = v18;
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
