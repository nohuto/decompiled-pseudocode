/*
 * XREFs of NdisPacketSize @ 0x1C0015FD0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C0015A30 (NdisAllocatePacketPoolEx.c)
 *     ndisMIsLoopbackPacket @ 0x1C00562A0 (ndisMIsLoopbackPacket.c)
 * Callees:
 *     <none>
 */

UINT __stdcall NdisPacketSize(UINT ProtocolReservedSize)
{
  unsigned int v1; // r9d
  UINT v2; // eax
  UINT v3; // eax

  if ( 48 * ndisPacketStackSize + 56 < 48 * ndisPacketStackSize + 16 )
    return 0;
  if ( 48 * ndisPacketStackSize + 152 < 48 * ndisPacketStackSize + 56 )
    return 0;
  v1 = 48 * ndisPacketStackSize + 152;
  if ( ProtocolReservedSize + 96 < 0x60 )
    return 0;
  if ( ProtocolReservedSize + 103 < ProtocolReservedSize + 96 )
    return 0;
  v2 = ((ProtocolReservedSize + 103) & 0xFFFFFFF8) + 48 * ndisPacketStackSize + 152;
  if ( v2 < v1 )
    return 0;
  v3 = v2 + 15;
  if ( ((ProtocolReservedSize + 103) & 0xFFFFFFF8) + v1 + 15 < ((ProtocolReservedSize + 103) & 0xFFFFFFF8) + v1 )
    return 0;
  else
    return v3 & 0xFFFFFFF0;
}
