/*
 * XREFs of ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0238D24
 * Callers:
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00ADCCC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C022F2FC (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C022F3AC (MonitorSetSDRWhiteLevel.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C023C2C4 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00470E8 (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall DXGMONITOR::EdidSupportsHDR(DXGMONITOR *this)
{
  char v1; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 676)
    && (*((_BYTE *)this + 615) || *((_BYTE *)this + 614))
    && DXGMONITOR::EdidColorDepthMoreThanSDR(this) )
  {
    return 1;
  }
  return v1;
}
