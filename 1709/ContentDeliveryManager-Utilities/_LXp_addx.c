/*
 * XREFs of _LXp_addx @ 0x1800A0868
 * Callers:
 *     _Stoldx @ 0x180098C34 (_Stoldx.c)
 *     _LXp_mulx @ 0x1800A0B70 (_LXp_mulx.c)
 * Callees:
 *     _LXp_addh @ 0x1800A0514 (_LXp_addh.c)
 */

long double *__fastcall LXp_addx(long double *a1, int a2, double *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    LXp_addh(a1, a2, *a3);
    ++i;
  }
  return a1;
}
