/*
 * XREFs of ?Compute@?$XamlInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B84B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::XamlInterpolation<Components::Animations::SphericalCoordinateSpace>::Compute(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  double (*v8)(void); // rax
  __int64 v9; // rcx

  v8 = *(double (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( a1[4] )
    v8();
  else
    v8();
  return Components::Animations::SphericalCoordinateSpace::Interpolate(v9, a3, a4, a5, a6);
}
