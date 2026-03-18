/*
 * XREFs of ?Compute@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8280
 * Callers:
 *     <none>
 * Callees:
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 */

__m128d *__fastcall Components::Animations::StepInterpolation<Components::Animations::HslCoordinateSpace>::Compute(
        __int64 a1,
        float a2,
        __int64 a3,
        double *a4,
        double *a5,
        __m128d *a6)
{
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx

  v9 = (int)floorf_0(a2 / *(float *)(a1 + 36));
  if ( a2 == 1.0 )
    --v9;
  v10 = *(_DWORD *)(a1 + 20) + v9;
  if ( a2 == 0.0 && *(_DWORD *)(a1 + 28) )
  {
    --v10;
  }
  else if ( a2 == 1.0 && *(_DWORD *)(a1 + 32) )
  {
    ++v10;
  }
  return Components::Animations::HslCoordinateSpace::Interpolate(
           (double)v10 / (double)*(int *)(a1 + 16),
           v8,
           a4,
           a5,
           a6);
}
