/*
 * XREFs of ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C010AA60
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C010A5A8 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 */

bool __fastcall DXGMONITOR::_ValidateMonitorOrientation(DXGMONITOR *this)
{
  int v1; // edx

  if ( (unsigned __int8)DXGMONITOR::_IsVirtualModeSuportDisabled(this) )
    return v1 == 0;
  else
    return (v1 & 0xFFFFFFFD) == 0;
}
