/*
 * XREFs of ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C0106110
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C0107E34 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::_ValidateMonitorOrientation(DXGMONITOR *this, int a2)
{
  if ( (*((_DWORD *)this + 6) & 0x80u) != 0 )
    return a2 == 0;
  else
    return (a2 & 0xFFFFFFFD) == 0;
}
