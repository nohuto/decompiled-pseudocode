/*
 * XREFs of ndisXlateSendNetBufferListsToPacketArray @ 0x1C004F310
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0053630 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0057440 (ndisMSendNetBufferListsToPackets.c)
 * Callees:
 *     NdisGetNetBufferListProtocolId @ 0x1C0011860 (NdisGetNetBufferListProtocolId.c)
 *     ndisCopyNBLInfoToPacket @ 0x1C004E85C (ndisCopyNBLInfoToPacket.c)
 *     ndisNetBufferToPacket @ 0x1C004EA98 (ndisNetBufferToPacket.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005723C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

char __fastcall ndisXlateSendNetBufferListsToPacketArray(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  int v3; // r12d
  __int64 v4; // r10
  char v5; // al
  __int64 v6; // r11
  __int64 v7; // rdx
  _MDL *v8; // r15
  unsigned int v9; // r8d
  __int64 v10; // r13
  _MDL *v11; // rbp
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
  _QWORD *v24; // rax
  signed __int32 v25; // ecx
  signed __int32 v26; // ecx
  int v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+30h] [rbp-78h]
  __int64 v30; // [rsp+38h] [rbp-70h]
  _QWORD *v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+48h] [rbp-60h]
  struct _NDIS_STACK_RESERVED *v33; // [rsp+50h] [rbp-58h] BYREF
  char v34; // [rsp+B0h] [rbp+8h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  v4 = *a1;
  v5 = a2;
  v6 = a1[5];
  v7 = 0LL;
  v31 = 0LL;
  v8 = 0LL;
  v9 = *((_DWORD *)a1 + 2);
  v10 = 0LL;
  v11 = (_MDL *)a1[3];
  v12 = 1;
  v29 = *a1;
  v36 = v9;
  v34 = 0;
  v32 = v6;
  v30 = 0LL;
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
            if ( v30 )
              *v31 = v2;
            else
              v30 = v2;
            v31 = (_QWORD *)v2;
            v2 = v17;
            goto LABEL_48;
          }
          v9 = v36;
          v4 = v29;
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
    v9 = v36;
    v4 = v29;
LABEL_49:
    v5 = a2;
    v6 = v32;
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
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v2, 0LL, v3 + 19, v22, v3 & v28);
    ++*(_DWORD *)&v22[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v22, &v33);
    *(_QWORD *)v33 = *(_QWORD *)(v2 + 120);
    v34 |= (*((_BYTE *)a1 + 36) & 2) != 0;
    if ( v34 )
      v22->Private.Flags &= ~0x80u;
    else
      v22->Private.Flags |= 0x80u;
    if ( (*(_DWORD *)(v2 + 136) & 0x800) != 0 )
      v22->Private.NdisPacketFlags |= 0x20u;
    else
      v22->Private.NdisPacketFlags &= ~0x20u;
    v10 = (unsigned int)(v10 + 1);
    v9 = v36;
    v4 = v29;
    *(_MDL **)((char *)&v22[1].Private.Head + v22->Private.NdisPacketOobOffset) = v8;
    v8[2].StartVa = (PVOID)v2;
    v8 = v8->Next;
    if ( !v8 )
      goto LABEL_46;
  }
LABEL_50:
  v7 = v30;
  v12 = 1;
  v6 = v32;
LABEL_51:
  *((_DWORD *)a1 + 8) = v10;
  a1[2] = v2;
  if ( v2 )
  {
    if ( v8 )
      v11 = v8;
    a1[3] = (__int64)v11;
  }
  else
  {
    a1[3] = 0LL;
  }
  if ( v3 || !v2 )
  {
    v12 = 0;
    if ( v2 )
    {
      v24 = (_QWORD *)a1[3];
      if ( v24 && v24 != *(_QWORD **)(v2 + 8) )
      {
        do
        {
          v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 96), 0xFFFFFFFF);
          v24 = (_QWORD *)*v24;
          v26 = v25 - 1;
        }
        while ( v24 );
        if ( !v26 )
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
