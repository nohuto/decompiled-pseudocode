/*
 * XREFs of ndisFreeConvertedPacket @ 0x1C004DD84
 * Callers:
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004E550 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004E678 (ndisXlateSendCompletePacketToNetBufferList.c)
 * Callees:
 *     NdisFreePacket @ 0x1C0015C20 (NdisFreePacket.c)
 */

void __fastcall ndisFreeConvertedPacket(struct _NDIS_PACKET *a1, __int64 a2, char a3)
{
  bool v3; // cf
  _MDL *Head; // r8
  __int64 v6; // r9
  _MDL *Tail; // rdx
  unsigned int Flags; // eax

  v3 = a3 != 0;
  Head = a1->Private.Head;
  v6 = v3 ? 0x30 : 0;
  if ( Head )
  {
    Tail = a1->Private.Tail;
    Tail->ByteCount = *(_DWORD *)&a1->MiniportReserved[v6];
    Tail->Next = *(struct _MDL **)&a1->MacReserved[v6 + 8];
    Head->ByteOffset -= *(_DWORD *)(a2 + 16);
    Head->ByteCount += *(_DWORD *)(a2 + 16);
    if ( (Head->MdlFlags & 5) != 0 )
      Head->MappedSystemVa = (char *)Head->MappedSystemVa - *(unsigned int *)(a2 + 16);
  }
  Flags = a1->Private.Flags;
  if ( (Flags & 0x100) != 0 )
  {
    a1->Private.Flags = Flags & 0xFFFFFEFF;
    *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 24] = 0LL;
  }
  NdisFreePacket(a1);
}
