/*
 * XREFs of ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C023BF3C
 * Callers:
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C022F228 (MonitorSetDefaultAdvancedColorParams.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C023AECC (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C023BD94 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C023C2C4 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_SetColorPrimariesToBT709(DXGMONITOR *this)
{
  *((_DWORD *)this + 154) = 655;
  *((_DWORD *)this + 155) = 338;
  *((_DWORD *)this + 156) = 307;
  *((_DWORD *)this + 157) = 614;
  *((_DWORD *)this + 158) = 153;
  *((_DWORD *)this + 159) = 61;
  *((_DWORD *)this + 160) = 320;
  *((_DWORD *)this + 161) = 337;
  *((_DWORD *)this + 162) = 3;
}
