/*
 * XREFs of ?InterpolateVelocity@CCubicBezierInterpolator@@UEAAJNPEANI@Z @ 0x180098AF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004B360 (memset_0.c)
 */

__int64 __fastcall CCubicBezierInterpolator::InterpolateVelocity(
        CCubicBezierInterpolator *this,
        double a2,
        double *a3,
        unsigned int a4)
{
  if ( a4 )
    memset_0(a3, 0, 8LL * a4);
  return 0LL;
}
