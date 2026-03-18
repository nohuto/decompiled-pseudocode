/*
 * XREFs of ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x18002A41C
 * Callers:
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002A570 (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@@Z @ 0x18002C398 (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@@Z.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 */

__int64 __fastcall Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx

  v2 = Components::Animations::Interpolation::operator new(0x10uLL);
  v3 = 0;
  if ( v2 )
  {
    v2[1] = 0LL;
    *v2 = &Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::`vftable';
    *((_DWORD *)v2 + 2) = 1;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
    *a1 = v2;
  else
    return (unsigned int)-2147024882;
  return v3;
}
