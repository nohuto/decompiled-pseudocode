/*
 * XREFs of _Xp_setw @ 0x1800A0198
 * Callers:
 *     _Stodx @ 0x180098630 (_Stodx.c)
 *     _Xp_setn @ 0x1800A0178 (_Xp_setn.c)
 *     _Dtento @ 0x1800A02AC (_Dtento.c)
 * Callees:
 *     _Dscale @ 0x18009F844 (_Dscale.c)
 *     _Dint @ 0x1800B2E20 (_Dint.c)
 *     _Dunscale @ 0x1800B2F38 (_Dunscale.c)
 */

__int64 __fastcall Xp_setw(__int64 a1, int a2, double a3)
{
  double v3; // xmm6_8
  __int16 v6; // ax
  double v7; // xmm0_8
  double v8; // xmm6_8
  double v9; // xmm6_8
  double v11; // [rsp+50h] [rbp+8h] BYREF
  __int16 v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = a3;
  v3 = a3;
  if ( a2 <= 0 )
    return a1;
  if ( a2 == 1 )
  {
LABEL_13:
    *(double *)a1 = v3;
    return a1;
  }
  v6 = Dunscale(&v12, &v11);
  if ( !v6 )
  {
    v3 = v11;
    goto LABEL_13;
  }
  if ( v6 <= 0 )
  {
    Dint(&v11, 26LL);
    Dscale(&v11, v12);
    v7 = v11;
    *(double *)a1 = v11;
    v8 = a3 - v7;
    *(double *)(a1 + 8) = a3 - v7;
    if ( a2 > 2 )
    {
      if ( v8 == 0.0 )
      {
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      else
      {
        Dunscale(&v12, a1 + 8);
        Dint(a1 + 8, 26LL);
        Dscale((_WORD *)(a1 + 8), v12);
        v9 = v8 - *(double *)(a1 + 8);
        *(double *)(a1 + 16) = v9;
        if ( a2 > 3 && v9 != 0.0 )
          *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
  }
  else
  {
    *(double *)a1 = v11;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return a1;
}
