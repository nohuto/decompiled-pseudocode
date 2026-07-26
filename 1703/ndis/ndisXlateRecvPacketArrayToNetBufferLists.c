/*
 * XREFs of ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004ED90
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0053438 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053DF0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00686F0 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000E340 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C001157C (ndisGenerateNetBufferListCorrelationIds.c)
 *     ndisCopyPacketInfoToNBL @ 0x1C004E974 (ndisCopyPacketInfoToNBL.c)
 *     ndisPacketToNetBuffer @ 0x1C004EBA4 (ndisPacketToNetBuffer.c)
 *     XlateReceivePacketStats @ 0x1C0063AA4 (XlateReceivePacketStats.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

bool __fastcall ndisXlateRecvPacketArrayToNetBufferLists(__int64 a1)
{
  __int64 v2; // r15
  int v3; // r10d
  unsigned int v4; // ecx
  __int64 v5; // r12
  unsigned int v6; // r9d
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rax
  struct _NET_BUFFER_LIST *v11; // rbx
  char v12; // r13
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  __int64 v14; // rcx
  PVOID v15; // rax
  unsigned int Flags; // edx
  unsigned int v17; // edx
  bool v18; // r9
  __int64 v20; // [rsp+30h] [rbp-48h]
  void *v21; // [rsp+38h] [rbp-40h]
  unsigned int v22; // [rsp+80h] [rbp+8h]
  int v23; // [rsp+88h] [rbp+10h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  _QWORD *p_Alignment; // [rsp+98h] [rbp+20h]

  v2 = 0LL;
  p_Alignment = 0LL;
  v3 = -1073741670;
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 16);
  v21 = *(void **)a1;
  v24 = v6;
  v7 = *(_QWORD *)(a1 + 8) + 8 * v5;
  v8 = *(_DWORD *)(*(unsigned __int16 *)(*(_QWORD *)v7 + 42LL) + *(_QWORD *)v7 + 32LL);
  while ( 1 )
  {
    v20 = v7;
    v22 = v4;
    if ( (unsigned int)v5 >= v6 )
      break;
    v9 = *(_QWORD *)v7;
    v10 = *(unsigned __int16 *)(*(_QWORD *)v7 + 42LL);
    v23 = *(_DWORD *)(v10 + *(_QWORD *)v7 + 32);
    if ( v23 != v8 )
      break;
    v11 = 0LL;
    v12 = *(_BYTE *)(v9 + 41) >> 7;
    if ( *(char *)(v9 + 41) < 0 && (v11 = *(struct _NET_BUFFER_LIST **)(v10 + v9 + 120)) != 0LL )
    {
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(v11, 0LL, 0x12u, (void *)v9, 0);
      v11->Link.Alignment = 0LL;
    }
    else if ( ndisNetBufferListPool )
    {
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v11 = NetBufferAndNetBufferList;
      if ( v12 )
        *(_QWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 120) = NetBufferAndNetBufferList;
    }
    if ( !v11 )
    {
      v3 = -1073741670;
      if ( v2 )
        v8 = -1073741670;
      v18 = v2 != 0;
      goto LABEL_35;
    }
    ndisPacketToNetBuffer(v9, (__int64)v11->FirstNetBuffer);
    v14 = *(_QWORD *)(v9 + 8);
    if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
      v15 = *(PVOID *)(v14 + 24);
    else
      v15 = MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    if ( !*(_QWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 112) && (*(_BYTE *)(v9 + 41) & 2) == 0 )
      XlateReceivePacketStats(v21, v15, *(unsigned int *)(v9 + 4));
    v11->Flags |= 0x10u;
    v11->NdisReserved[0] = (void *)v9;
    ndisCopyPacketInfoToNBL(v9, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v11, XlateReceive);
    if ( (*(_DWORD *)(v9 + 36) & 0x100) != 0 )
    {
      v11->Flags |= 0x80u;
      v11->NblFlags |= 0x8000u;
      v11->SourceHandle = *(void **)(*(unsigned __int16 *)(v9 + 42) + v9 + 72);
    }
    else
    {
      v11->SourceHandle = *(void **)a1;
    }
    Flags = v11->Flags;
    if ( (Flags & 0x80u) != 0 && *(_BYTE *)(v9 + 36) >= 0 )
      v17 = Flags | 0x200;
    else
      v17 = Flags & 0xFFFFFDFF;
    v8 = v23;
    v3 = -1073741670;
    v11->Flags = v17;
    if ( v23 != -1073741670 )
      *(_DWORD *)(*(unsigned __int16 *)(v9 + 42) + v9 + 32) = 259;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v11, 0LL, 0x1Bu, (void *)v9, 0);
      v3 = -1073741670;
    }
    if ( v2 )
      *p_Alignment = v11;
    else
      v2 = (__int64)v11;
    LODWORD(v5) = v5 + 1;
    v4 = v22 + 1;
    v6 = v24;
    v7 = v20 + 8;
    p_Alignment = &v11->Link.Alignment;
  }
  v18 = (_DWORD)v5 != v6;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v2, v4);
LABEL_35:
  *(_DWORD *)(a1 + 36) = v22;
  *(_QWORD *)(a1 + 24) = v2;
  *(_DWORD *)(a1 + 32) = v5;
  if ( v8 == v3 )
    *(_DWORD *)(a1 + 40) |= 2u;
  return v18;
}
