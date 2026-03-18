/*
 * XREFs of BuildRepData @ 0x1C0075F40
 * Callers:
 *     BuildShrinkAAInfo @ 0x1C0006610 (BuildShrinkAAInfo.c)
 *     BuildExpandAAInfo @ 0x1C0074300 (BuildExpandAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildRepData(__int64 a1, int a2, int a3)
{
  char v3; // r9
  __m128i v4; // xmm2
  int v5; // r15d
  __m128i v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rax
  int v9; // ecx
  _WORD *v10; // r12
  int v11; // ebx
  int *v12; // r13
  int *v13; // r10
  int v14; // r11d
  int v15; // eax
  int v16; // ebx
  int v17; // esi
  int v18; // eax
  unsigned __int8 v19; // cl
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int i; // eax
  __int64 result; // rax
  int v25; // [rsp+0h] [rbp-80h]
  __int64 v26; // [rsp+4h] [rbp-7Ch]
  int v27; // [rsp+Ch] [rbp-74h]
  int v28; // [rsp+10h] [rbp-70h]
  __int128 v29; // [rsp+20h] [rbp-60h]
  __int128 v30; // [rsp+30h] [rbp-50h]
  __int128 v31; // [rsp+30h] [rbp-50h]
  __m128i v32; // [rsp+40h] [rbp-40h]
  __int128 v33; // [rsp+50h] [rbp-30h]
  int v35; // [rsp+B8h] [rbp+38h] BYREF
  int v36; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v37; // [rsp+C8h] [rbp+48h]

  v36 = a3;
  v35 = a2;
  v3 = 0;
  v4 = *(__m128i *)a1;
  v5 = -1;
  v6 = *(__m128i *)(a1 + 32);
  v25 = 0;
  v30 = *(_OWORD *)(a1 + 16);
  v7 = *(_OWORD *)(a1 + 48);
  v8 = HIDWORD(*(_QWORD *)a1);
  v9 = _mm_cvtsi128_si32(*(__m128i *)a1);
  v32 = v6;
  v26 = 0LL;
  v10 = (_WORD *)_mm_srli_si128(v6, 8).m128i_u64[0];
  *(_QWORD *)&v29 = v4.m128i_i64[0];
  HIDWORD(v33) = HIDWORD(v7);
  v28 = v9;
  if ( v9 >= v4.m128i_i32[1] )
  {
    if ( v9 <= v4.m128i_i32[1] )
      return 0LL;
    v11 = v8;
    v12 = &v36;
    LODWORD(v8) = v9;
    v13 = &v35;
  }
  else
  {
    v11 = v9;
    v12 = &v35;
    v13 = &v36;
  }
  v37 = 0;
  v14 = 0;
  v27 = 2 * v8;
  v15 = v11 + 2 * v8;
  v16 = 2 * v11;
  v32.m128i_i16[1] = 0;
  if ( a3 >= SHIDWORD(v30) )
    return 0LL;
  v17 = DWORD1(v30);
  while ( 1 )
  {
    v15 -= v16;
    if ( v15 < 0 )
    {
      ++*v12;
      if ( v5 != -1 )
        *v10++ = v14;
      v15 += v27;
      v14 = 0;
      a3 = v36;
      v3 = 0;
      a2 = v35;
    }
    ++v3;
    if ( a3 < SDWORD2(v30) || a2 < (int)v30 || a2 >= v17 || a3 >= SHIDWORD(v30) )
    {
      if ( v5 != -1 )
        goto LABEL_21;
    }
    else
    {
      ++v14;
      if ( v5 == -1 )
      {
        LODWORD(v26) = a3;
        v37 = v3 - 1;
        v5 = a2;
        v32.m128i_i8[2] = v3 - 1;
        v17 = DWORD1(v30);
      }
      v25 = a2;
      HIDWORD(v26) = a3;
    }
    ++*v13;
    a3 = v36;
    if ( v36 >= SHIDWORD(v30) )
      break;
    a2 = v35;
  }
  if ( v5 == -1 )
    return 0LL;
LABEL_21:
  if ( v14 && (*v10 = v14, ++v10, v18 = v15 - v16, v18 >= 0) )
  {
    v19 = 0;
    do
    {
      ++v19;
      v18 -= v16;
    }
    while ( v18 >= 0 );
    v32.m128i_i8[3] = v19;
  }
  else
  {
    v19 = 0;
  }
  if ( v28 < v4.m128i_i32[1] )
  {
    v20 = 2;
    v21 = v5;
    v22 = 2;
    do
    {
LABEL_26:
      if ( v21 <= (int)v30 )
        break;
      --v21;
      --v22;
    }
    while ( v22 );
    goto LABEL_27;
  }
  v22 = v37;
  v20 = v19;
  v21 = v5;
  if ( v37 )
    goto LABEL_26;
LABEL_27:
  for ( i = v25; v20; --v20 )
  {
    if ( i >= v17 - 1 )
      break;
    ++i;
  }
  v32.m128i_i8[1] = i - v25;
  DWORD1(v31) = v25 + 1;
  DWORD2(v29) = v5;
  *((_QWORD *)&v31 + 1) = v26 + 0x100000000LL;
  HIDWORD(v29) = v25 - v5 + 1;
  result = 1LL;
  *(_OWORD *)a1 = v29;
  LODWORD(v31) = v5;
  *(_OWORD *)(a1 + 16) = v31;
  *(_QWORD *)&v33 = v10;
  DWORD2(v33) = 1;
  v32.m128i_i8[0] = v5 - v21;
  *(__m128i *)(a1 + 32) = v32;
  *(_OWORD *)(a1 + 48) = v33;
  return result;
}
