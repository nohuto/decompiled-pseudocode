/*
 * XREFs of NdisIMGetCurrentPacketStack @ 0x1C0050E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PNDIS_PACKET_STACK __stdcall NdisIMGetCurrentPacketStack(PNDIS_PACKET Packet, BOOLEAN *StacksRemaining)
{
  unsigned int v2; // r10d
  struct _NDIS_PACKET_STACK *v3; // rcx

  if ( *(_MDL **)((char *)&Packet[1].Private.Head + Packet->Private.NdisPacketOobOffset) )
  {
    *StacksRemaining = 0;
    return 0LL;
  }
  v2 = *(_DWORD *)&Packet[-1].ProtocolReserved[4];
  if ( v2 >= ndisPacketStackSize )
  {
    *StacksRemaining = 0;
    return 0LL;
  }
  v3 = (struct _NDIS_PACKET_STACK *)&Packet[-1].Reserved[6 * (v2 - (unsigned __int64)ndisPacketStackSize) + 1];
  *StacksRemaining = ndisPacketStackSize - v2 != 1;
  return v3;
}
