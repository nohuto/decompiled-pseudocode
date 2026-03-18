/*
 * XREFs of ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C0202910
 * Callers:
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C010BB74 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(DXGMONITOR *this, unsigned int a2)
{
  double v2; // xmm0_8
  unsigned int v3; // edx
  __int64 v4; // rax

  v2 = (double)(int)(1LL << (a2 >> 5));
  v3 = a2 & 0x1F;
  if ( v3 )
  {
    v4 = v3;
    do
    {
      v2 = v2 * 1.021900057792664;
      --v4;
    }
    while ( v4 );
  }
  return (unsigned int)(int)(v2 * 50.0 * 10000.0);
}
