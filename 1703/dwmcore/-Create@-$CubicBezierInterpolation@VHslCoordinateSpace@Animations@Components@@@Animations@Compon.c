/*
 * XREFs of ?Create@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x1800C8ACC
 * Callers:
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18002C5CC (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::Create(
        float a1,
        float a2,
        float a3,
        float a4,
        float **a5)
{
  float v5; // xmm7_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm8_4
  unsigned int v9; // edi
  float *v10; // rax
  float *v11; // rbx

  v5 = a4;
  v6 = a2;
  if ( a1 < 0.0 )
    v7 = 0.0;
  else
    v7 = fminf(a1, 1.0);
  if ( a3 < 0.0 )
    v8 = 0.0;
  else
    v8 = fminf(a3, 1.0);
  v9 = 0;
  if ( !_finite(a2) )
    v6 = 0.0;
  if ( !_finite(a4) )
    v5 = FLOAT_1_0;
  v10 = (float *)Components::Animations::Interpolation::operator new(0x20uLL);
  v11 = v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x20uLL);
    *((_DWORD *)v11 + 2) = 1;
    *(_QWORD *)v11 = &Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v11[4] = v7;
    v11[5] = v6;
    v11[6] = v8;
    v11[7] = v5;
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
