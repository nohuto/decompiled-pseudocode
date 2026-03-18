/*
 * XREFs of ?_GetDeltaBetweenPoints@DXGMONITOR@@AEAANNNNN@Z @ 0x1C0106498
 * Callers:
 *     ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C01061AC (-_GetColorPrimariesType@DXGMONITOR@@AEAA-AW4ColorPrimaryType@1@XZ.c)
 * Callees:
 *     <none>
 */

double __fastcall DXGMONITOR::_GetDeltaBetweenPoints(DXGMONITOR *this, double a2, double a3, double a4, double a5)
{
  double v5; // xmm3_8
  double v6; // xmm1_8

  if ( a4 >= a2 )
    v5 = a4 - a2;
  else
    v5 = a2 - a4;
  if ( a5 < a3 )
    v6 = a3 - a5;
  else
    v6 = a5 - a3;
  return DXGMONITOR::_GetSqrt(this, v6 * v6 + v5 * v5);
}
