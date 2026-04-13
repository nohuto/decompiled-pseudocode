/*
 * XREFs of _LXp_getw @ 0x1800A08D8
 * Callers:
 *     _Dtento @ 0x1800A02AC (_Dtento.c)
 *     _LDtento @ 0x1800A0DA8 (_LDtento.c)
 * Callees:
 *     <none>
 */

double __fastcall LXp_getw(double *a1, int a2)
{
  double v3; // xmm3_8
  double v4; // xmm2_8
  double v5; // xmm2_8
  double v6; // xmm0_8

  if ( !a2 )
    return 0.0;
  if ( a2 == 1 )
    return *a1;
  v3 = *a1;
  if ( *a1 == 0.0 )
    return *a1;
  v4 = a1[1];
  if ( v4 == 0.0 )
    return *a1;
  if ( a2 == 2 || a1[2] == 0.0 )
    return v4 + v3;
  v5 = v4 + v3;
  if ( a1[3] != 0.0 )
    *((_WORD *)a1 + 8) |= 1u;
  v6 = a1[1];
  if ( v5 - v3 != v6 )
    return v6 + a1[2] + v3;
  return v5 + a1[2];
}
