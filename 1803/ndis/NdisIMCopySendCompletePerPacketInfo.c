/*
 * XREFs of NdisIMCopySendCompletePerPacketInfo @ 0x1C00544F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisIMCopySendCompletePerPacketInfo(PNDIS_PACKET DstPacket, PNDIS_PACKET SrcPacket)
{
  *(_QWORD *)&DstPacket->MacReserved[DstPacket->Private.NdisPacketOobOffset + 8] = *(_QWORD *)&SrcPacket->MacReserved[SrcPacket->Private.NdisPacketOobOffset + 8];
}
