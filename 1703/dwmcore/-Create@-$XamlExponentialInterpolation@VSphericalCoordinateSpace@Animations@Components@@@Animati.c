/*
 * XREFs of ?Create@?$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B90D0
 * Callers:
 *     ?ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180021054 (-ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpac.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall Components::Animations::XamlExponentialInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
        unsigned int a1,
        float a2,
        float **a3)
{
  float v3; // xmm6_4
  unsigned int v6; // ebx
  float *v7; // rax
  float *v8; // rdi

  v3 = a2;
  v6 = 0;
  if ( !_finite(a2) )
    v3 = 0.0;
  v7 = (float *)Components::Animations::Interpolation::operator new(0x20uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x20uLL);
    *((_DWORD *)v8 + 2) = 1;
    *(_QWORD *)v8 = &Components::Animations::XamlExponentialInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v8[6] = v3;
    if ( a1 > 2 )
      a1 = 0;
    *((_DWORD *)v8 + 4) = a1;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
