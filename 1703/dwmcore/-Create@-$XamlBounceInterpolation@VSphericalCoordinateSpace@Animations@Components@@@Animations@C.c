/*
 * XREFs of ?Create@?$XamlBounceInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x1801B8D00
 * Callers:
 *     ?ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x1801B7BDC (-ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall Components::Animations::XamlBounceInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
        unsigned int a1,
        int a2,
        float a3,
        float **a4)
{
  float v4; // xmm6_4
  unsigned int v5; // edi
  int v6; // ebp
  float *v9; // rax
  float *v10; // rbx
  float v11; // xmm0_4

  v4 = a3;
  v5 = 0;
  v6 = 0;
  if ( a2 >= 0 )
    v6 = a2;
  if ( !_finite(a3) || a3 < 1.0 )
    v4 = FLOAT_1_0;
  v9 = (float *)Components::Animations::Interpolation::operator new(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x20uLL);
    *((_DWORD *)v10 + 2) = 1;
    *(_QWORD *)v10 = &Components::Animations::XamlBounceInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = fmaxf(1.01, v4);
    *((_DWORD *)v10 + 6) = v6;
    if ( a1 > 2 )
      a1 = 0;
    *((_DWORD *)v10 + 4) = a1;
    v10[7] = v11;
    *a4 = v10;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
