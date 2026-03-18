/*
 * XREFs of ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00B81F0
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00B6F48 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BEC74 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C01078E4 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C022DB18 (MonitorDisableMonitorVirtualModeSupport.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C02344E0 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGMONITOR::_IsVirtualModeSuportDisabled(DXGMONITOR *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 145) || (*((_DWORD *)this + 10) & 0x80u) != 0 )
    return 1;
  return v1;
}
