/*
 * XREFs of _FXp_mulh @ 0x1800AC4DC
 * Callers:
 *     _FXp_mulx @ 0x1800AC6C0 (_FXp_mulx.c)
 *     _FXp_setn @ 0x1800AC7C4 (_FXp_setn.c)
 * Callees:
 *     _FDscale @ 0x1800ABEA0 (_FDscale.c)
 *     _FXp_addh @ 0x1800AC07C (_FXp_addh.c)
 *     _Feraise @ 0x1800BFA9C (_Feraise.c)
 *     _FDtest @ 0x1800BFACC (_FDtest.c)
 *     _FDint @ 0x1800BFB18 (_FDint.c)
 *     _FDunscale @ 0x1800BFBF0 (_FDunscale.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

float *__fastcall FXp_mulh(float *a1, int a2, float a3)
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
  float *v13; // rcx
  float v14; // xmm0_4
  __int64 i; // rax
  float v16; // xmm0_4
  float v18; // [rsp+20h] [rbp-50h] BYREF
  __int16 v19; // [rsp+24h] [rbp-4Ch] BYREF
  int v20; // [rsp+28h] [rbp-48h]
  float v22[4]; // [rsp+30h] [rbp-40h] BYREF

  v3 = a2;
  if ( a2 > 0 )
  {
    v22[0] = a3 * *a1;
    v5 = FDtest(v22);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( v5 == 2 )
        Feraise(1);
      *a1 = v22[0];
      if ( v6 > 0 && (int)v3 > 1 )
        a1[1] = 0.0;
      return a1;
    }
    *a1 = 0.0;
  }
  v7 = 0;
  v20 = 0;
  v8 = 1;
  if ( (int)v3 > 0 )
  {
    v9 = 0LL;
    v10 = 1LL;
    v11 = (char *)v22 - (char *)a1;
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
          *(float *)((char *)v13++ + v11) = v14 * a3;
          if ( v10 >= 4 )
            goto LABEL_18;
        }
        v22[v10] = 0.0;
        v10 = 8LL;
        v8 = 8;
      }
LABEL_18:
      if ( v22[0] == 0.0 )
        break;
      v18 = v22[0];
      FDunscale(&v19, &v18);
      FDint(&v18, 12LL);
      FDscale((unsigned __int16 *)&v18, v19);
      FXp_addh(a1, v3, v18);
      FXp_addh(a1, v3, v22[0] - v18);
      for ( i = 1LL; i < v10; ++i )
      {
        v16 = v22[i];
        v22[i - 1] = v16;
        if ( v16 == 0.0 )
          break;
      }
      ++v9;
      v7 = v20 + 1;
      v11 -= 4LL;
      --v8;
      ++v20;
      --v10;
    }
    while ( v9 < v3 );
  }
  return a1;
}
