/*
 * XREFs of ndisNetBufferToPacket @ 0x1C004EA98
 * Callers:
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004EBE4 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004F310 (ndisXlateSendNetBufferListsToPacketArray.c)
 * Callees:
 *     NdisAllocatePacket @ 0x1C0013EF0 (NdisAllocatePacket.c)
 */

__int64 __fastcall ndisNetBufferToPacket(__int64 a1, char a2, PNDIS_PACKET *a3)
{
  NDIS_HANDLE v4; // r8
  __int64 result; // rax
  PNDIS_PACKET v8; // rcx
  $C904170FBB2590AEBC732F3357E65C3B *ProtocolReserved; // r10
  _MDL *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  unsigned int ByteCount; // eax
  unsigned int v15; // r11d
  int Status; // [rsp+38h] [rbp+10h] BYREF
  PNDIS_PACKET Packet; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = ndisRecvPacketPool;
  if ( a2 )
    v4 = ndisSendPacketPool;
  if ( !v4 )
    return 3221225626LL;
  Packet = 0LL;
  NdisAllocatePacket(&Status, &Packet, v4);
  result = (unsigned int)Status;
  if ( !Status )
  {
    v8 = Packet;
    Packet->Private.Head = 0LL;
    ProtocolReserved = ($C904170FBB2590AEBC732F3357E65C3B *)v8->ProtocolReserved;
    if ( !a2 )
      ProtocolReserved = &v8->48;
    *(_DWORD *)ProtocolReserved->MiniportReserved = 0;
    *(_QWORD *)&ProtocolReserved->MacReserved[8] = 0LL;
    v10 = *(_MDL **)(a1 + 8);
    v11 = *(unsigned int *)(a1 + 16);
    v10->ByteOffset += v11;
    v10->ByteCount -= v11;
    if ( (v10->MdlFlags & 5) != 0 )
      v10->MappedSystemVa = (char *)v10->MappedSystemVa + v11;
    v12 = *(_DWORD *)(a1 + 24);
    v13 = 0;
    if ( v12 )
    {
      v8->Private.Head = v10;
      while ( v10 )
      {
        ByteCount = v10->ByteCount;
        v15 = v12 - v13;
        if ( ByteCount >= v12 - v13 )
        {
          *(_DWORD *)ProtocolReserved->MiniportReserved = ByteCount;
          v13 = v12;
          *(_QWORD *)&ProtocolReserved->MacReserved[8] = v10->Next;
          v10->Next = 0LL;
          v10->ByteCount = v15;
          break;
        }
        v10 = v10->Next;
        v13 += ByteCount;
        if ( v13 >= v12 )
          break;
      }
    }
    v8->Private.Head = *(_MDL **)(a1 + 8);
    result = 0LL;
    v8->Private.Tail = v10;
    v8->Private.TotalLength = v13;
    v8->Private.ValidCounts = 0;
    *a3 = v8;
  }
  return result;
}
