/*
 * XREFs of Lanczos::Sinc @ 0x180153868
 * Callers:
 *     Lanczos::Lanczos @ 0x180153804 (Lanczos--Lanczos.c)
 * Callees:
 *     sin_0 @ 0x1800C5D98 (sin_0.c)
 */

double __fastcall Lanczos::Sinc(double a1)
{
  if ( a1 == 0.0 )
    return DOUBLE_1_0;
  else
    return sin_0(a1) / a1;
}
