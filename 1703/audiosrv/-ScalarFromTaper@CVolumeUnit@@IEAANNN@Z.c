/*
 * XREFs of ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x18007C39C
 * Callers:
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x18008712C (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     pow @ 0x180049B90 (pow.c)
 */

double __fastcall CVolumeUnit::ScalarFromTaper(CVolumeUnit *this, double a2, double a3)
{
  double v3; // xmm3_8
  double v4; // xmm1_8
  double v5; // xmm0_8

  v3 = a2;
  if ( *(_DWORD *)this == 1 )
  {
    if ( a2 > 1.0 )
    {
      v4 = DOUBLE_N1_75;
      v5 = 2.0 - v3;
    }
    else
    {
      v4 = DOUBLE_1_75;
      v5 = v3;
    }
    return pow(v5, v4);
  }
  else if ( *(_DWORD *)this == 2 )
  {
    return pow(a2, 1.75) * a3;
  }
  return v3;
}
