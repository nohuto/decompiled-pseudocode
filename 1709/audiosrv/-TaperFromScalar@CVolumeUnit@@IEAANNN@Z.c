/*
 * XREFs of ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18000996C
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x1800098F4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18006AA14 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18006B0F8 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 * Callees:
 *     pow @ 0x180033A60 (pow.c)
 */

double __fastcall CVolumeUnit::TaperFromScalar(CVolumeUnit *this, double a2, double a3)
{
  double v3; // xmm3_8
  double v4; // xmm0_8

  v3 = a2;
  if ( *(_DWORD *)this == 1 )
  {
    v4 = a2;
    if ( a2 > 1.0 )
      return 2.0 - pow(a2, -0.5714285714285714);
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
      return v3;
    v4 = a2 / a3;
  }
  return pow(v4, 0.5714285714285714);
}
