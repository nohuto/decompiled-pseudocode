/*
 * XREFs of ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00121E8
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C01086C8 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C010BAEC (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::EdidColorDepthMoreThanSDR(DXGMONITOR *this)
{
  return (*((_DWORD *)this + 142) & 0x3C) != 0
      || (*((_DWORD *)this + 143) & 0x3C) != 0
      || (*((_DWORD *)this + 144) & 0x3C) != 0
      || (*((_DWORD *)this + 145) & 0x3C) != 0;
}
