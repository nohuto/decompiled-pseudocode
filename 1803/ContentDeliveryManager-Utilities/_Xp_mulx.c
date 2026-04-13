/*
 * XREFs of _Xp_mulx @ 0x1800AD370
 * Callers:
 *     _Stodx @ 0x1800A56C8 (_Stodx.c)
 *     _Dtento @ 0x1800AD5A8 (_Dtento.c)
 * Callees:
 *     _Xp_addx @ 0x1800AD088 (_Xp_addx.c)
 *     _Xp_mulh @ 0x1800AD184 (_Xp_mulh.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

double *__fastcall Xp_mulx(double *a1, int a2, double *a3, int a4, char *Src)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  char *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp

  v5 = a4;
  v7 = a2;
  if ( a2 && a4 )
  {
    if ( *a3 == 0.0 || a3[1] == 0.0 )
    {
      Xp_mulh(a1, a2, *a3);
    }
    else
    {
      v9 = &Src[8 * a2];
      memcpy_0(Src, a1, 8LL * a2);
      Xp_mulh(a1, v7, *a3);
      v10 = v5;
      if ( v5 > 1 )
      {
        v11 = 1LL;
        do
        {
          if ( a3[v11] == 0.0 )
            break;
          memcpy_0(v9, Src, 8 * v7);
          Xp_mulh((double *)v9, v7, a3[v11]);
          Xp_addx(a1, v7, (double *)v9, v7);
          ++v11;
        }
        while ( v11 < v10 );
      }
    }
  }
  return a1;
}
