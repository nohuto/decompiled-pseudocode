/*
 * XREFs of _FXp_addh @ 0x18009EE1C
 * Callers:
 *     _FXp_addx @ 0x18009F164 (_FXp_addx.c)
 *     _FXp_mulh @ 0x18009F27C (_FXp_mulh.c)
 *     _FXp_setn @ 0x18009F560 (_FXp_setn.c)
 * Callees:
 *     _FDscale @ 0x18009EC4C (_FDscale.c)
 *     _Feraise @ 0x1800B2A44 (_Feraise.c)
 *     _FDtest @ 0x1800B2A74 (_FDtest.c)
 *     _FDint @ 0x1800B2AC0 (_FDint.c)
 *     _FDunscale @ 0x1800B2B98 (_FDunscale.c)
 */

float *__fastcall FXp_addh(float *a1, int a2, float a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // r15
  float *v11; // r12
  __int16 v12; // ax
  float v13; // xmm1_4
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  __int64 i; // rdx
  float v19; // xmm1_4
  __int64 v20; // rax
  float v21; // xmm0_4
  __int64 v22; // rdx
  float v23; // xmm0_4
  __int64 v24; // rax
  float v25; // xmm0_4
  int v26; // r15d
  unsigned __int16 *v27; // rbx
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rax
  int v31; // ebx
  float v33[4]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v34; // [rsp+90h] [rbp+48h] BYREF
  __int16 v35; // [rsp+98h] [rbp+50h] BYREF
  float v36; // [rsp+A0h] [rbp+58h] BYREF
  float v37; // [rsp+A8h] [rbp+60h] BYREF

  v36 = a3;
  v3 = 0LL;
  v37 = a3;
  v5 = a2;
  if ( !a2 )
    return a1;
  v6 = FDunscale(&v34, &v37);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v8 = 256;
    v9 = 0;
    v10 = v5;
    if ( (int)v5 <= 0 )
      return a1;
    v11 = a1 - 1;
    while ( 1 )
    {
      v33[0] = a1[v3];
      v12 = FDunscale(&v35, v33);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        v30 = v9;
        v31 = v9 + 1;
        a1[v30] = v36;
        if ( v31 < (int)v5 )
          a1[v31] = 0.0;
        return a1;
      }
      v13 = v36;
      v14 = v35 - v34;
      if ( v14 > -12 || v36 == 0.0 )
      {
        if ( v14 < 12 || v36 == 0.0 )
        {
          v19 = v36 + a1[v3];
          a1[v3] = v19;
          if ( v19 == 0.0 )
          {
            v20 = v3;
            do
            {
              if ( ++v20 >= v10 )
                break;
              v21 = a1[v20];
              a1[v20 - 1] = v21;
            }
            while ( v21 != 0.0 );
            a1[v10 - 1] = 0.0;
            v19 = a1[v3];
            if ( v19 == 0.0 )
              return a1;
          }
          v36 = v19;
          FDunscale(&v34, &v36);
          v22 = (unsigned int)v34;
          if ( v8 - 12 < (int)v22 )
          {
            LOWORD(v22) = v34 - v8 + 12;
            FDint(&v36, v22);
            FDscale((unsigned __int16 *)&v36, v34);
            v23 = a1[v3] - v36;
            a1[v3] = v23;
            if ( v23 == 0.0 )
            {
              v24 = v3;
              do
              {
                if ( ++v24 >= v10 )
                  break;
                v25 = a1[v24];
                a1[v24 - 1] = v25;
              }
              while ( v25 != 0.0 );
              a1[v10 - 1] = 0.0;
            }
            --v3;
            --v11;
            if ( --v9 )
            {
              v37 = *v11;
              FDunscale(&v35, &v37);
              v8 = v35;
            }
            else
            {
              v8 = 256;
            }
            goto LABEL_50;
          }
          v26 = v9 + 1;
          if ( v9 + 1 == (_DWORD)v5 )
            return a1;
          v36 = a1[v3];
          v27 = (unsigned __int16 *)&a1[v9];
          FDunscale(&v35, v27);
          FDint(v27, 12LL);
          FDscale(v27, v35);
          v28 = a1[v3];
          v8 = v35;
          v29 = v36 - v28;
          v36 = v36 - v28;
          if ( v36 == 0.0 )
            v37 = v28;
          else
            v37 = v29;
          FDunscale(&v34, &v37);
          v9 = v26;
          v10 = v5;
        }
        else
        {
          v8 = v35;
          ++v9;
        }
        ++v3;
        ++v11;
      }
      else
      {
        v15 = v9;
        v16 = v3;
        do
        {
          v17 = v15;
          ++v16;
          ++v15;
        }
        while ( v16 < v10 && a1[v16] != 0.0 );
        if ( v15 >= (int)v5 - 1 )
        {
          if ( v15 == (_DWORD)v5 )
            v15 = v17;
        }
        else
        {
          ++v15;
        }
        for ( i = v15; i > v3; --i )
          a1[i] = a1[i - 1];
        v36 = 0.0;
        a1[v3] = v13;
      }
LABEL_50:
      if ( v9 >= (int)v5 )
        return a1;
    }
  }
  if ( v6 == 2 || (v7 = FDtest(a1), v7 <= 0) )
  {
    *a1 = v36;
  }
  else if ( v7 != 2 && ((HIWORD(v36) ^ *((_WORD *)a1 + 1)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = FNan._Float;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}
