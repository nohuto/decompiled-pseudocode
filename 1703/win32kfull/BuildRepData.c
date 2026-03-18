/*
 * XREFs of BuildRepData @ 0x1C0036BA0
 * Callers:
 *     BuildShrinkAAInfo @ 0x1C0001B40 (BuildShrinkAAInfo.c)
 *     BuildExpandAAInfo @ 0x1C0036860 (BuildExpandAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildRepData(__int64 a1, int a2, int a3)
{
  int v3; // r13d
  __m128i v4; // xmm2
  int v5; // r14d
  __m128i v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r11d
  int *v11; // r12
  int *v12; // r10
  char v13; // r9
  int v14; // eax
  int v15; // r11d
  int v16; // r15d
  _WORD *v17; // r9
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int i; // eax
  __int64 result; // rax
  __int64 v24; // [rsp+0h] [rbp-49h]
  _WORD *v25; // [rsp+8h] [rbp-41h]
  int v26; // [rsp+10h] [rbp-39h]
  int v27; // [rsp+14h] [rbp-35h]
  __int128 v28; // [rsp+20h] [rbp-29h]
  __int128 v29; // [rsp+30h] [rbp-19h]
  __int128 v30; // [rsp+30h] [rbp-19h]
  __m128i v31; // [rsp+40h] [rbp-9h]
  __int128 v32; // [rsp+50h] [rbp+7h]
  int v34; // [rsp+B8h] [rbp+6Fh] BYREF
  int v35; // [rsp+C0h] [rbp+77h] BYREF
  unsigned __int8 v36; // [rsp+C8h] [rbp+7Fh]

  v35 = a3;
  v34 = a2;
  v3 = 0;
  v4 = *(__m128i *)a1;
  v5 = -1;
  v6 = *(__m128i *)(a1 + 32);
  v24 = 0LL;
  v29 = *(_OWORD *)(a1 + 16);
  v7 = *(_OWORD *)(a1 + 48);
  v8 = HIDWORD(*(_QWORD *)a1);
  v9 = _mm_cvtsi128_si32(*(__m128i *)a1);
  v31 = v6;
  *(_QWORD *)&v28 = v4.m128i_i64[0];
  HIDWORD(v32) = HIDWORD(v7);
  v25 = (_WORD *)_mm_srli_si128(v6, 8).m128i_u64[0];
  v27 = v9;
  if ( v9 >= v4.m128i_i32[1] )
  {
    if ( v9 <= v4.m128i_i32[1] )
      return 0LL;
    v10 = v8;
    v11 = &v35;
    LODWORD(v8) = v9;
    v12 = &v34;
  }
  else
  {
    v10 = v9;
    v11 = &v34;
    v12 = &v35;
  }
  v36 = 0;
  v13 = 0;
  v26 = 2 * v8;
  v14 = v10 + 2 * v8;
  v15 = 2 * v10;
  v16 = 0;
  v31.m128i_i16[1] = 0;
  if ( a3 >= SHIDWORD(v29) )
    return 0LL;
  while ( 1 )
  {
    v14 -= v15;
    if ( v14 < 0 )
    {
      ++*v11;
      if ( v5 != -1 )
        *v25++ = v16;
      v14 += v26;
      v16 = 0;
      a3 = v35;
      v13 = 0;
      a2 = v34;
    }
    ++v13;
    if ( a3 < SDWORD2(v29) || a2 < (int)v29 || a2 >= SDWORD1(v29) || a3 >= SHIDWORD(v29) )
    {
      if ( v5 != -1 )
        goto LABEL_19;
    }
    else
    {
      ++v16;
      if ( v5 == -1 )
      {
        LODWORD(v24) = a3;
        v36 = v13 - 1;
        v5 = a2;
        v31.m128i_i8[2] = v13 - 1;
      }
      v3 = a2;
      HIDWORD(v24) = a3;
    }
    ++*v12;
    a3 = v35;
    if ( v35 >= SHIDWORD(v29) )
      break;
    a2 = v34;
  }
  if ( v5 == -1 )
    return 0LL;
LABEL_19:
  v17 = v25;
  if ( v16 && (*v25 = v16, v17 = v25 + 1, v18 = v14 - v15, v18 >= 0) )
  {
    LOBYTE(v19) = 0;
    do
    {
      LOBYTE(v19) = v19 + 1;
      v18 -= v15;
    }
    while ( v18 >= 0 );
    v31.m128i_i8[3] = v19;
  }
  else
  {
    LOBYTE(v19) = 0;
  }
  v20 = v5;
  if ( v27 < v4.m128i_i32[1] )
  {
    v19 = 2;
    v21 = 2;
    do
    {
LABEL_24:
      if ( v20 <= (int)v29 )
        break;
      --v20;
      --v21;
    }
    while ( v21 );
    goto LABEL_25;
  }
  v21 = v36;
  v19 = (unsigned __int8)v19;
  if ( v36 )
    goto LABEL_24;
LABEL_25:
  for ( i = v3; v19; --v19 )
  {
    if ( i >= DWORD1(v29) - 1 )
      break;
    ++i;
  }
  v31.m128i_i8[1] = i - v3;
  DWORD1(v30) = v3 + 1;
  DWORD2(v28) = v5;
  *((_QWORD *)&v30 + 1) = v24 + 0x100000000LL;
  HIDWORD(v28) = v3 - v5 + 1;
  result = 1LL;
  *(_OWORD *)a1 = v28;
  LODWORD(v30) = v5;
  *(_OWORD *)(a1 + 16) = v30;
  *(_QWORD *)&v32 = v17;
  DWORD2(v32) = 1;
  v31.m128i_i8[0] = v5 - v20;
  *(__m128i *)(a1 + 32) = v31;
  *(_OWORD *)(a1 + 48) = v32;
  return result;
}
