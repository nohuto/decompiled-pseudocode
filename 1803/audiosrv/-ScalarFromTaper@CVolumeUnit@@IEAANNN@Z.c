/*
 * XREFs of ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x18004E328
 * Callers:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E28C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800A480C (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     pow @ 0x18006188A (pow.c)
 */

double __fastcall CVolumeUnit::ScalarFromTaper(CVolumeUnit *this, double a2, double a3)
{
  double v3; // xmm3_8
  double v4; // xmm1_8

  v3 = a2;
  if ( *(_DWORD *)this == 1 )
  {
    if ( a2 > 1.0 )
    {
      v4 = DOUBLE_N1_75;
      v3 = 2.0 - v3;
    }
    else
    {
      v4 = DOUBLE_1_75;
    }
    return pow(v3, v4);
  }
  else if ( *(_DWORD *)this == 2 )
  {
    return pow(a2, 1.75) * a3;
  }
  return v3;
}
