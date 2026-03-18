/*
 * XREFs of ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00102D8
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C010612C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0108BC4 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::EdidColorDepthMoreThanSDR(DXGMONITOR *this)
{
  return (*((_DWORD *)this + 132) & 0x1C) != 0
      || (*((_DWORD *)this + 133) & 0x1C) != 0
      || (*((_DWORD *)this + 134) & 0x1C) != 0
      || (*((_DWORD *)this + 135) & 0x1C) != 0;
}
