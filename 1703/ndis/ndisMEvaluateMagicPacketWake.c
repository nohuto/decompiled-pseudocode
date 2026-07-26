/*
 * XREFs of ndisMEvaluateMagicPacketWake @ 0x1C004B168
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004B68C (ndisMValidatePMWakePacket.c)
 * Callees:
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C004AE8C (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C004B768 (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(__int64 a1)
{
  if ( ndisAcOnLine
    && *(_QWORD *)(a1 + 4488)
    && !*(_DWORD *)(a1 + 464)
    && *(_DWORD *)(a1 + 5836) == 1
    && *(_QWORD *)(a1 + 5616)
    && !*(_DWORD *)(a1 + 5832) )
  {
    if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
