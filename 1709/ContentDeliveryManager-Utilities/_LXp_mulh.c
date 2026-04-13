/*
 * XREFs of _LXp_mulh @ 0x1800A0984
 * Callers:
 *     _LXp_mulx @ 0x1800A0B70 (_LXp_mulx.c)
 * Callees:
 *     _LDscale @ 0x1800A050C (_LDscale.c)
 *     _LXp_addh @ 0x1800A0514 (_LXp_addh.c)
 *     _Feraise @ 0x1800B2A44 (_Feraise.c)
 *     _LDtest @ 0x1800B2FD4 (_LDtest.c)
 *     _LDint @ 0x1800B2FDC (_LDint.c)
 *     _LDunscale @ 0x1800B2FE4 (_LDunscale.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

long double *__fastcall LXp_mulh(long double *a1, int a2, double a3)
{
  __int64 v3; // r15
  __int16 v5; // ax
  __int16 v6; // si
  int v7; // eax
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rsi
  signed __int64 v11; // r12
  int v12; // edx
  double *v13; // rcx
  double v14; // xmm0_8
  __int64 i; // rax
  double v16; // xmm0_8
  _WORD v18[2]; // [rsp+20h] [rbp-60h] BYREF
  int v19; // [rsp+24h] [rbp-5Ch]
  double v20; // [rsp+28h] [rbp-58h] BYREF
  long double v21[4]; // [rsp+30h] [rbp-50h] BYREF

  v3 = a2;
  if ( a2 > 0 )
  {
    v21[0] = a3 * *a1;
    v5 = LDtest(v21);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( v5 == 2 )
        Feraise(1);
      *a1 = v21[0];
      if ( v6 > 0 && (int)v3 > 1 )
        a1[1] = 0.0;
      return a1;
    }
    *a1 = 0.0;
  }
  v7 = 0;
  v19 = 0;
  v8 = 1;
  if ( (int)v3 > 0 )
  {
    v9 = 0LL;
    v10 = 1LL;
    v11 = (char *)v21 - (char *)a1;
    do
    {
      if ( v10 < 4 )
      {
        v12 = v7 + v8;
        v13 = &a1[v10 + v9];
        while ( v12 < (int)v3 )
        {
          v14 = *v13;
          if ( *v13 == 0.0 )
            break;
          *v13 = 0.0;
          ++v8;
          ++v12;
          ++v10;
          *(double *)((char *)v13++ + v11) = v14 * a3;
          if ( v10 >= 4 )
            goto LABEL_18;
        }
        v21[v10] = 0.0;
        v10 = 8LL;
        v8 = 8;
      }
LABEL_18:
      if ( v21[0] == 0.0 )
        break;
      v20 = v21[0];
      LDunscale(v18, &v20);
      LDint(&v20, 26LL);
      LDscale(&v20, v18[0]);
      LXp_addh(a1, v3, v20);
      LXp_addh(a1, v3, v21[0] - v20);
      for ( i = 1LL; i < v10; ++i )
      {
        v16 = v21[i];
        v21[i - 1] = v16;
        if ( v16 == 0.0 )
          break;
      }
      ++v9;
      v7 = v19 + 1;
      v11 -= 8LL;
      --v8;
      ++v19;
      --v10;
    }
    while ( v9 < v3 );
  }
  return a1;
}
