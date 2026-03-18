/*
 * XREFs of CmpComputeComponentHashes @ 0x140500780
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmpExpandPathInfo @ 0x14043C248 (CmpExpandPathInfo.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  __m128i v3; // xmm6
  char v4; // cl
  __int16 v5; // bx
  int v6; // r12d
  __int16 v7; // r14
  _WORD *v8; // rdi
  __int16 v9; // si
  __int16 v10; // r14
  __int64 v11; // r15
  __int16 v12; // ax
  int v13; // ebx
  WCHAR *v14; // rdi
  __int64 v15; // rsi
  WCHAR v16; // ax
  __int64 result; // rax
  __int16 v18; // r15
  unsigned int v19; // edx
  __int64 v20; // r13
  WCHAR *v21; // r15
  WCHAR v22; // ax
  __m128i v23; // [rsp+20h] [rbp-60h]
  __m128i v24; // [rsp+30h] [rbp-50h]
  char v25; // [rsp+A0h] [rbp+20h]
  __int64 v27; // [rsp+B0h] [rbp+30h]
  unsigned int v28; // [rsp+B8h] [rbp+38h]

  v27 = a3;
  v3 = *a1;
  v4 = 0;
  v25 = 0;
  v23.m128i_i32[1] = v3.m128i_i32[1];
  v5 = _mm_cvtsi128_si32(v3);
  v24 = v3;
  v23.m128i_i16[0] = v5;
  if ( !v5 )
  {
    result = 0LL;
    *a2 = 0;
    return result;
  }
  v6 = 0;
  v7 = 0;
  v8 = (_WORD *)v3.m128i_i64[1];
  v9 = v3.m128i_i16[1];
  do
  {
    if ( v7 >= 32 )
      break;
    if ( *v8 == 92 )
    {
      ++v7;
      v18 = v24.m128i_i16[0] - v5;
      v24.m128i_i16[0] = v18;
      v24.m128i_i16[1] = v18;
      if ( v7 > 8 && !v4 )
      {
        result = CmpExpandPathInfo(a3);
        if ( (int)result < 0 )
          return result;
        a3 = v27;
        v25 = 1;
      }
      v19 = v7 - 1;
      v28 = v19;
      if ( v19 >= 8 )
        *(__m128i *)(16 * ((unsigned int)(v7 - 9) + 6LL) + *(_QWORD *)(a3 + 160)) = v24;
      else
        *(__m128i *)(16 * (v19 + 2LL) + a3) = v24;
      if ( v18 )
      {
        v20 = (unsigned __int16)(((unsigned __int16)(v18 - 1) >> 1) + 1);
        v21 = (WCHAR *)v24.m128i_i64[1];
        do
        {
          v22 = *v21;
          if ( *v21 >= 0x61u )
          {
            if ( v22 > 0x7Au )
              v22 = RtlUpcaseUnicodeChar(v22);
            else
              v22 -= 32;
          }
          ++v21;
          v6 = v22 + 37 * v6;
          --v20;
        }
        while ( v20 );
        v19 = v28;
        a3 = v27;
      }
      if ( v19 >= 8 )
        *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (v19 - 8)) = v6;
      else
        *(_DWORD *)(a3 + 4LL * v19) = v6;
      do
      {
        if ( *v8 != 92 )
          break;
        v5 -= 2;
        ++v8;
        v9 -= 2;
        v23.m128i_i16[0] = v5;
      }
      while ( v5 );
      v23.m128i_i64[1] = (__int64)v8;
      v23.m128i_i16[1] = v9;
      v3 = v23;
      v6 = 0;
      v4 = v25;
      v24 = v23;
    }
    else
    {
      ++v8;
      v5 -= 2;
      v9 -= 2;
      v23.m128i_i16[0] = v5;
    }
  }
  while ( v5 );
  if ( v5 )
    return 3221225485LL;
  v10 = v7 + 1;
  if ( v10 > 8 && !v4 )
  {
    result = CmpExpandPathInfo(a3);
    if ( (int)result < 0 )
      return result;
    a3 = v27;
  }
  v11 = (unsigned int)(v10 - 1);
  if ( (unsigned int)v11 >= 8 )
    *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v10 - 9) + 6LL)) = v3;
  else
    *(__m128i *)(a3 + 16 * ((unsigned int)v11 + 2LL)) = v3;
  v12 = _mm_cvtsi128_si32(v3);
  v13 = 0;
  if ( v12 )
  {
    v14 = (WCHAR *)v3.m128i_i64[1];
    v15 = (unsigned __int16)(((unsigned __int16)(v12 - 1) >> 1) + 1);
    do
    {
      v16 = *v14;
      if ( *v14 >= 0x61u )
      {
        if ( v16 > 0x7Au )
          v16 = RtlUpcaseUnicodeChar(v16);
        else
          v16 -= 32;
      }
      ++v14;
      v13 = v16 + 37 * v13;
      --v15;
    }
    while ( v15 );
    a3 = v27;
  }
  if ( (unsigned int)v11 >= 8 )
    *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v10 - 9)) = v13;
  else
    *(_DWORD *)(a3 + 4 * v11) = v13;
  *a2 = v10;
  return 0LL;
}
