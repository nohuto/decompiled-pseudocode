/*
 * XREFs of ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00470E8
 * Callers:
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0238D24 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C023C2C4 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::EdidColorDepthMoreThanSDR(DXGMONITOR *this)
{
  return (*((_DWORD *)this + 147) & 0x3C) != 0
      || (*((_DWORD *)this + 148) & 0x3C) != 0
      || (*((_DWORD *)this + 149) & 0x3C) != 0
      || (*((_DWORD *)this + 150) & 0x3C) != 0;
}
