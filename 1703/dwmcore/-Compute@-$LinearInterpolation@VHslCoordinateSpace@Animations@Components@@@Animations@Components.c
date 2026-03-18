/*
 * XREFs of ?Compute@?$LinearInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1800C0A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180092ED0 (-Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@.c)
 */

__m128d *__fastcall Components::Animations::LinearInterpolation<Components::Animations::HslCoordinateSpace>::Compute(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double *a4,
        double *a5,
        __m128d *a6)
{
  float v6; // xmm1_4

  return Components::Animations::HslCoordinateSpace::Interpolate(v6, a2, a4, a5, a6);
}
