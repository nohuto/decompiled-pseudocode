/*
 * XREFs of ndisMEvaluateMagicPacketWake @ 0x1C0048BC4
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004912C (ndisMValidatePMWakePacket.c)
 * Callees:
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0048914 (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C0049264 (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(__int64 a1)
{
  if ( ndisAcOnLine
    && *(_QWORD *)(a1 + 4488)
    && !*(_DWORD *)(a1 + 464)
    && *(_DWORD *)(a1 + 5740) == 1
    && *(_QWORD *)(a1 + 5520)
    && !*(_DWORD *)(a1 + 5736) )
  {
    if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
