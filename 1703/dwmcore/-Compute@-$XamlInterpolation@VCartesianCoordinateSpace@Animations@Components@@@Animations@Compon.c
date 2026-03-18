/*
 * XREFs of ?Compute@?$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180028B50
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x1800905A0 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?EvaluateCurve@?$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x18001FD90 (-EvaluateCurve@-$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::XamlInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        _DWORD *a1,
        float a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  double (*v7)(void); // rax
  double v8; // xmm1_8
  __int64 v9; // rdx
  __int64 v10; // rcx

  v7 = *(double (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( !a1[4] )
    goto LABEL_4;
  if ( a1[4] != 1 )
  {
    v7();
    return Components::Animations::CartesianCoordinateSpace::Interpolate(v10, v9, a4, a5, a6);
  }
  v8 = 1.0 - a2;
  if ( (char *)v7 == (char *)Components::Animations::XamlExponentialInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve )
    Components::Animations::XamlExponentialInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve(
      (__int64)a1,
      v8);
  else
LABEL_4:
    v7();
  return Components::Animations::CartesianCoordinateSpace::Interpolate(v10, v9, a4, a5, a6);
}
