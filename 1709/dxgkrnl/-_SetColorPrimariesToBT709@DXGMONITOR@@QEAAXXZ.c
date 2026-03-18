/*
 * XREFs of ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C010BB10
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C01086C8 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0108BA8 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C010BB74 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C01FECD4 (MonitorSetDefaultAdvancedColorParams.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_SetColorPrimariesToBT709(DXGMONITOR *this)
{
  *((_DWORD *)this + 149) = 655;
  *((_DWORD *)this + 150) = 338;
  *((_DWORD *)this + 151) = 307;
  *((_DWORD *)this + 152) = 614;
  *((_DWORD *)this + 153) = 153;
  *((_DWORD *)this + 154) = 61;
  *((_DWORD *)this + 155) = 320;
  *((_DWORD *)this + 156) = 337;
  *((_DWORD *)this + 157) = 3;
}
