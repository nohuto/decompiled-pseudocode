/*
 * XREFs of ?_SetColorPrimariesToBT709@DXGMONITOR@@AEAAXXZ @ 0x1C01E86AC
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C010612C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0106548 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01066DC (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_SetColorPrimariesToBT709(DXGMONITOR *this)
{
  *((_DWORD *)this + 139) = 655;
  *((_DWORD *)this + 140) = 338;
  *((_DWORD *)this + 141) = 307;
  *((_DWORD *)this + 142) = 614;
  *((_DWORD *)this + 143) = 153;
  *((_DWORD *)this + 144) = 61;
  *((_DWORD *)this + 145) = 320;
  *((_DWORD *)this + 146) = 337;
  *((_DWORD *)this + 147) = 3;
}
