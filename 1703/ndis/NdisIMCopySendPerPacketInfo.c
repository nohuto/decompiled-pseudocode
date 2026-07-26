/*
 * XREFs of NdisIMCopySendPerPacketInfo @ 0x1C0054A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisIMCopySendPerPacketInfo(PNDIS_PACKET DstPacket, PNDIS_PACKET SrcPacket)
{
  __int64 NdisPacketOobOffset; // rbx
  unsigned __int8 *v4; // rcx
  __int64 v5; // r11
  unsigned __int8 *v6; // r8

  NdisPacketOobOffset = SrcPacket->Private.NdisPacketOobOffset;
  v4 = &DstPacket->Private.ValidCounts + DstPacket->Private.NdisPacketOobOffset;
  v5 = 4LL;
  v6 = v4;
  do
  {
    *(_QWORD *)v6 = *(_QWORD *)&v6[&SrcPacket->Private.ValidCounts + NdisPacketOobOffset - v4];
    v6 += 8;
    --v5;
  }
  while ( v5 );
  *((_QWORD *)v4 + 6) = *(unsigned __int64 *)((char *)&SrcPacket->Reserved[1] + NdisPacketOobOffset);
  *((_QWORD *)v4 + 8) = *(_QWORD *)((char *)&SrcPacket[1].Private.PhysicalCount + NdisPacketOobOffset);
  DstPacket->Private.NdisPacketFlags &= 0xC0u;
  DstPacket->Private.NdisPacketFlags |= SrcPacket->Private.NdisPacketFlags & 0x3F;
}
