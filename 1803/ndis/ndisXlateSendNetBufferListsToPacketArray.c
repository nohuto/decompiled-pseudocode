/*
 * XREFs of ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E77C
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0052FE0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0056F30 (ndisMSendNetBufferListsToPackets.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisGetNetBufferListProtocolId @ 0x1C004DA20 (NdisGetNetBufferListProtocolId.c)
 *     ndisCopyNBLInfoToPacket @ 0x1C004DBEC (ndisCopyNBLInfoToPacket.c)
 *     ndisNetBufferToPacket @ 0x1C004DF00 (ndisNetBufferToPacket.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0056D2C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

char __fastcall ndisXlateSendNetBufferListsToPacketArray(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  int v3; // ebp
  __int64 v4; // r10
  char v5; // al
  __int64 v6; // r11
  __int64 v7; // rdx
  _MDL *v8; // r15
  unsigned int v9; // r8d
  __int64 v10; // r12
  _MDL *v11; // r13
  char v12; // bl
  _QWORD *v14; // rsi
  struct _MDL *i; // rbx
  PVOID MappedSystemVa; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // rax
  int v20; // ecx
  PNDIS_PACKET *v21; // rsi
  PNDIS_PACKET v22; // rsi
  unsigned int Flags; // ebx
  bool v24; // al
  bool v25; // zf
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned __int8 NdisPacketFlags; // cl
  unsigned __int8 v29; // cl
  __int64 NdisPacketOobOffset; // rax
  _MDL *v31; // rax
  signed __int32 v32; // ecx
  signed __int32 v33; // ecx
  int v35; // [rsp+20h] [rbp-88h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  _QWORD *v38; // [rsp+40h] [rbp-68h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  struct _NDIS_STACK_RESERVED *v40; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int8 v41; // [rsp+B0h] [rbp+8h]
  unsigned int v43; // [rsp+C8h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  v4 = *a1;
  v5 = a2;
  v6 = a1[5];
  v7 = 0LL;
  v38 = 0LL;
  v8 = 0LL;
  v9 = *((_DWORD *)a1 + 2);
  v10 = 0LL;
  v11 = (_MDL *)a1[3];
  v12 = 1;
  v36 = *a1;
  v43 = v9;
  v41 = 0;
  v39 = v6;
  v37 = 0LL;
  if ( !v2 )
    goto LABEL_51;
  while ( 1 )
  {
    if ( v5 )
    {
      if ( (*(_BYTE *)(v6 + 928) & 2) == 0 )
      {
        v14 = *(_QWORD **)(v2 + 8);
        v3 = 0;
        if ( v14 )
        {
          do
          {
            for ( i = (struct _MDL *)v14[4]; i; i = i->Next )
            {
              if ( (i->MdlFlags & 5) != 0 )
                MappedSystemVa = i->MappedSystemVa;
              else
                MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
              if ( !MappedSystemVa )
              {
                v3 = -1073741670;
                break;
              }
            }
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
          if ( v3 )
          {
            v17 = *(_QWORD *)v2;
            *(_QWORD *)v2 = 0LL;
            *(_DWORD *)(v2 + 140) = v3;
            if ( v37 )
              *v38 = v2;
            else
              v37 = v2;
            v38 = (_QWORD *)v2;
            v2 = v17;
            goto LABEL_48;
          }
          v9 = v43;
          v4 = v36;
        }
      }
    }
    if ( (*(_DWORD *)(v2 + 136) & 0x10) == 0 || (*(_DWORD *)(v2 + 128) & 1) == 0 )
      break;
    if ( (unsigned int)v10 >= v9 )
      goto LABEL_50;
    v18 = *(_QWORD *)(v2 + 48);
    *(_QWORD *)(v4 + 8 * v10) = v18;
    v10 = (unsigned int)(v10 + 1);
    *(_DWORD *)(v18 + 36) |= 0x4000u;
    *(_QWORD *)(*(unsigned __int16 *)(v18 + 42) + v18 + 112) = v2;
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( v2 )
      v11 = *(_MDL **)(v2 + 8);
    if ( ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
      goto LABEL_49;
    ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v2, 0LL, 0x17u, (void *)v18, 0);
LABEL_48:
    v9 = v43;
    v4 = v36;
LABEL_49:
    v5 = a2;
    v6 = v39;
    if ( !v2 )
      goto LABEL_50;
  }
  if ( v11 == *(_MDL **)(v2 + 8) )
  {
    *(_DWORD *)(v2 + 96) = 0;
    v19 = *(_QWORD **)(v2 + 8);
    if ( v19 )
    {
      v20 = 0;
      do
      {
        *(_DWORD *)(v2 + 96) = ++v20;
        v19 = (_QWORD *)*v19;
      }
      while ( v19 );
    }
  }
  v8 = v11;
  if ( !v11 )
  {
    if ( v3 )
      goto LABEL_50;
LABEL_46:
    *(_DWORD *)(v2 + 140) = 0;
    v2 = *(_QWORD *)v2;
    if ( !v2 )
      goto LABEL_50;
    v11 = *(_MDL **)(v2 + 8);
    goto LABEL_48;
  }
  while ( (unsigned int)v10 < v9 )
  {
    v21 = (PNDIS_PACKET *)(v4 + 8 * v10);
    v3 = ndisNetBufferToPacket((__int64)v8, 1, v21);
    if ( v3 )
      break;
    v22 = *v21;
    ndisCopyNBLInfoToPacket(v2, (__int64)v22, 0);
    v22->Private.Flags &= 0xFFFFFFF0;
    Flags = v22->Private.Flags;
    v22->Private.Flags = Flags | NdisGetNetBufferListProtocolId((PNET_BUFFER_LIST)v2);
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v2, 0LL, v3 + 19, v22, v3 & v35);
    ++*(_DWORD *)&v22[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v22, &v40);
    *(_QWORD *)v40 = *(_QWORD *)(v2 + 120);
    v24 = (*((_DWORD *)a1 + 9) & 2) != 0;
    v25 = (v24 | v41) == 0;
    v41 |= v24;
    v26 = v22->Private.Flags;
    if ( v25 )
      v27 = v26 | 0x80;
    else
      v27 = v26 & 0xFFFFFF7F;
    NdisPacketFlags = v22->Private.NdisPacketFlags;
    v22->Private.Flags = v27;
    if ( (*(_DWORD *)(v2 + 136) & 0x800) != 0 )
      v29 = NdisPacketFlags | 0x20;
    else
      v29 = NdisPacketFlags & 0xDF;
    NdisPacketOobOffset = v22->Private.NdisPacketOobOffset;
    v10 = (unsigned int)(v10 + 1);
    v9 = v43;
    v4 = v36;
    v22->Private.NdisPacketFlags = v29;
    *(_MDL **)((char *)&v22[1].Private.Head + NdisPacketOobOffset) = v8;
    v8[2].StartVa = (PVOID)v2;
    v8 = v8->Next;
    if ( !v8 )
      goto LABEL_46;
  }
LABEL_50:
  v7 = v37;
  v12 = 1;
  v6 = v39;
LABEL_51:
  *((_DWORD *)a1 + 8) = v10;
  a1[2] = v2;
  if ( v2 )
  {
    if ( !v8 )
      v8 = v11;
  }
  else
  {
    v8 = 0LL;
  }
  a1[3] = (__int64)v8;
  if ( v3 || !v2 )
  {
    v12 = 0;
    if ( v2 )
    {
      v31 = v8;
      if ( v8 && v8 != *(_MDL **)(v2 + 8) )
      {
        do
        {
          v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 96), 0xFFFFFFFF);
          v31 = v31->Next;
          v33 = v32 - 1;
        }
        while ( v31 );
        if ( !v33 )
          a1[3] = *(_QWORD *)(v2 + 8);
      }
      do
      {
        *(_DWORD *)(v2 + 140) = -1073741670;
        v2 = *(_QWORD *)v2;
      }
      while ( v2 );
    }
  }
  if ( v7 )
    ndisMSendNetBufferListsCompleteInternal(v6, v7, *((_DWORD *)a1 + 9) & 1, 0LL);
  return v12;
}
