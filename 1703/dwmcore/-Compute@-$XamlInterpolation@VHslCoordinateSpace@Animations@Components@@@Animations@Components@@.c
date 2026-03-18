/*
 * XREFs of ?Compute@?$XamlInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B83D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__m128d *__fastcall Components::Animations::XamlInterpolation<Components::Animations::HslCoordinateSpace>::Compute(
        _DWORD *a1,
        float a2,
        __int64 a3,
        double *a4,
        double *a5,
        __m128d *a6)
{
  double (*v7)(void); // rax
  __int64 v8; // rdx
  double v9; // xmm6_8

  v7 = *(double (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( a1[4] )
  {
    if ( a1[4] == 1 )
    {
      v9 = 1.0 - v7();
    }
    else if ( a2 >= 0.5 )
    {
      v9 = (1.0 - v7()) * 0.5 + 0.5;
    }
    else
    {
      v9 = v7() * 0.5;
    }
  }
  else
  {
    v9 = v7();
  }
  return Components::Animations::HslCoordinateSpace::Interpolate(v9, v8, a4, a5, a6);
}
