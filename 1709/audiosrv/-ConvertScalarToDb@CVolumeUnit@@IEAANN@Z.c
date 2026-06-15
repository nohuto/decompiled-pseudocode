/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800680B4
 * Callers:
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x18006B238 (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18006B29C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x180033A4E (_o_log10_0.c)
 *     pow @ 0x180033A60 (pow.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow(10.0, -9.6) <= a2 )
    return o_log10_0(a2) * 20.0;
  else
    return DOUBLE_N192_0;
}
