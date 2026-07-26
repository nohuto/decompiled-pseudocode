/*
 * XREFs of ndisMEvaluateMagicPacketWake @ 0x1C0049FD8
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004A570 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0049D24 (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C004A6A8 (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(__int64 a1)
{
  if ( ndisAcOnLine
    && *(_QWORD *)(a1 + 4488)
    && !*(_DWORD *)(a1 + 464)
    && *(_DWORD *)(a1 + 5756) == 1
    && *(_QWORD *)(a1 + 5536)
    && !*(_DWORD *)(a1 + 5752) )
  {
    if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
