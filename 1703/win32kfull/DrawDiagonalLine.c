/*
 * XREFs of DrawDiagonalLine @ 0x1C0239760
 * Callers:
 *     DrawDiagonal @ 0x1C02396A0 (DrawDiagonal.c)
 *     FillTriangle @ 0x1C02399A4 (FillTriangle.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, __m128i *a2, int a3, __int64 a4, __int16 a5)
{
  unsigned int v5; // r10d
  int v9; // r9d
  int v10; // r8d
  int v11; // ecx
  int v12; // r11d
  int v13; // esi
  int v14; // edi
  char *v15; // r14
  int v16; // eax
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int32 v21; // eax
  int v22; // eax
  int v23; // eax
  __int32 v24; // ecx
  __int64 v25; // rdx
  __m128i v27; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v28[48]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = 0;
  if ( a2->m128i_i32[0] >= a2->m128i_i32[2] || a2->m128i_i32[1] >= a2->m128i_i32[3] )
    return 0LL;
  v9 = _mm_cvtsi128_si32(*a2);
  v10 = _mm_srli_si128(*a2, 8).m128i_i32[1] - HIDWORD(a2->m128i_i64[0]);
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  v27 = *a2;
  v12 = v11 - v9;
  if ( v10 < v11 - v9 )
  {
    v14 = 1;
    v13 = v12 / v10;
  }
  else
  {
    v13 = 1;
    v14 = v10 / v12;
  }
  v15 = &v27.m128i_i8[12];
  v16 = v27.m128i_i32[3] - v14;
  v17 = v11 - v13;
  v27.m128i_i32[3] -= v14;
  v27.m128i_i32[2] = v17;
  if ( a3 < 0 )
    v15 = &v27.m128i_i8[4];
  if ( v9 <= v17 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v27.m128i_i32[1] > v16 )
      {
LABEL_25:
        if ( v5 )
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v28, v5);
        return (unsigned __int16)v13 | ((unsigned __int16)v14 << 16);
      }
      if ( (a5 & 0x800) == 0 )
        break;
      if ( v14 <= 1 )
      {
        v23 = *(_DWORD *)v15;
        if ( (a5 & 2) != 0 )
        {
          v19 = 3 * v18;
          v28[2 * v19 + 1] = v23;
          v28[2 * v19 + 2] = a2->m128i_i32[2] - v9;
          goto LABEL_19;
        }
        v24 = a2->m128i_i32[0];
        v25 = 3 * v18;
        v28[2 * v25 + 1] = v23;
        v28[2 * v25] = v24;
        v28[2 * v25 + 3] = v14;
        v28[2 * v25 + 2] = v13 + v9 - v24;
        *(_QWORD *)&v28[2 * v25 + 4] = 0LL;
      }
      else
      {
        v20 = 3 * v18;
        v28[2 * v20] = v9;
        v28[2 * v20 + 2] = v13;
        *(_QWORD *)&v28[2 * v20 + 4] = 0LL;
        if ( (a5 & 1) != 0 )
        {
          v21 = a2->m128i_i32[1];
          v28[6 * v18 + 1] = v21;
          v28[6 * v18 + 3] = *(_DWORD *)v15 + v14 - v21;
        }
        else
        {
          v22 = a2->m128i_i32[3] - *(_DWORD *)v15;
          v28[6 * v18 + 1] = *(_DWORD *)v15;
          v28[6 * v18 + 3] = v22;
        }
      }
LABEL_21:
      ++v18;
      v27.m128i_i32[0] = v13 + v9;
      ++v5;
      *(_DWORD *)v15 -= a3 * v14;
      if ( v18 == 8 )
      {
        GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v28, 8u);
        v5 = 0;
        v18 = 0LL;
      }
      v9 = v27.m128i_i32[0];
      if ( v27.m128i_i32[0] > v27.m128i_i32[2] )
        goto LABEL_25;
      v16 = v27.m128i_i32[3];
    }
    v19 = 3 * v18;
    v28[2 * v19 + 1] = *(_DWORD *)v15;
    v28[2 * v19 + 2] = v13;
LABEL_19:
    v28[2 * v19] = v9;
    v28[2 * v19 + 3] = v14;
    *(_QWORD *)&v28[2 * v19 + 4] = 0LL;
    goto LABEL_21;
  }
  return (unsigned __int16)v13 | ((unsigned __int16)v14 << 16);
}
