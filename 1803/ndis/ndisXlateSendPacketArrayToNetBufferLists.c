/*
 * XREFs of ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004EB14
 * Callers:
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00533D0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0057850 (ndisMSendPacketsToNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004D20 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C00056B0 (NdisFreeNetBufferList.c)
 *     ndisCopyPacketInfoToNBL @ 0x1C004DCF8 (ndisCopyPacketInfoToNBL.c)
 *     ndisPacketToNetBuffer @ 0x1C004E014 (ndisPacketToNetBuffer.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

bool __fastcall ndisXlateSendPacketArrayToNetBufferLists(__int64 a1)
{
  unsigned int v1; // r13d
  bool v2; // di
  __int64 v4; // rcx
  char v5; // dl
  PNET_BUFFER_LIST v6; // rsi
  int v7; // r12d
  __int64 v8; // rbx
  __int64 *v9; // r15
  int v10; // eax
  int v11; // ecx
  bool result; // al
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  PNET_BUFFER_LIST v14; // rbp
  int v15; // edx
  unsigned int v16; // edx
  struct _NET_BUFFER_LIST *Alignment; // rbx
  char v18; // [rsp+70h] [rbp+8h]
  _QWORD *p_Alignment; // [rsp+78h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  p_Alignment = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 1;
  v6 = 0LL;
  v18 = 1;
  v7 = 0;
  v8 = *(unsigned int *)(a1 + 32);
  if ( (unsigned int)v8 >= v1 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 40) = v7;
    *(_DWORD *)(a1 + 32) = v8;
    v2 = (_DWORD)v8 != v1;
  }
  else
  {
    v9 = (__int64 *)(v4 + 8 * v8);
    while ( 1 )
    {
      v10 = *(_DWORD *)(*v9 + 36);
      if ( v5 == 1 )
      {
        v18 = 0;
        v11 = v7 | 2;
        if ( (v10 & 0x80) != 0 )
          v11 = v7;
        v7 = v11;
      }
      else if ( (v7 & 2) != 0 )
      {
        if ( (v10 & 0x80u) != 0 )
          goto LABEL_9;
      }
      else if ( (v10 & 0x80u) == 0 )
      {
        goto LABEL_9;
      }
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v14 = NetBufferAndNetBufferList;
      if ( !NetBufferAndNetBufferList )
        break;
      ndisPacketToNetBuffer(*v9, (__int64)NetBufferAndNetBufferList->FirstNetBuffer);
      if ( !v6 )
        v6 = v14;
      if ( p_Alignment )
        *p_Alignment = v14;
      v14->SourceHandle = *(void **)a1;
      v14->NdisReserved[0] = (void *)*v9;
      p_Alignment = &v14->Link.Alignment;
      ndisCopyPacketInfoToNBL(*v9, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v14, XlateSend);
      LOBYTE(v6->NetBufferListInfo[7]) = *(_BYTE *)(*v9 + 36) & 0xF;
      v6->NetBufferListInfo[5] = *(void **)(*(unsigned __int16 *)(*v9 + 42) + *v9 + 104);
      v15 = v14->Flags | 0x10;
      v14->Flags = v15;
      if ( (*(_BYTE *)(*v9 + 41) & 0x20) != 0 )
        v16 = v15 | 0x800;
      else
        v16 = v15 & 0xFFFFF7FF;
      v14->Flags = v16;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(v14, 0LL, 0x15u, (void *)*v9, 0);
      v5 = v18;
      LODWORD(v8) = v8 + 1;
      ++v9;
      if ( (unsigned int)v8 >= v1 )
        goto LABEL_9;
    }
    if ( v6 )
    {
      do
      {
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
          ndisNblTrackerRecordEvent(v6, 0LL, 0x16u, 0LL, 0);
        *(_QWORD *)(v6->Link.Region + 32) = 0LL;
        Alignment = (struct _NET_BUFFER_LIST *)v6->Link.Alignment;
        NdisFreeNetBufferList(v6);
        v6 = Alignment;
      }
      while ( Alignment );
    }
    v6 = 0LL;
  }
  result = v2;
  *(_QWORD *)(a1 + 24) = v6;
  return result;
}
