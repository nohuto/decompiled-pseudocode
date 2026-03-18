/*
 * XREFs of CmpComputeComponentHashes @ 0x140564870
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpExpandPathInfo @ 0x140564BA0 (CmpExpandPathInfo.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, unsigned __int64 a2, __int64 a3)
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
  __int64 v19; // r13
  WCHAR *v20; // r15
  WCHAR v21; // ax
  __m128i v22; // [rsp+20h] [rbp-60h]
  __m128i v23; // [rsp+30h] [rbp-50h]
  char v24; // [rsp+A0h] [rbp+20h]
  __int16 *v25; // [rsp+A8h] [rbp+28h]
  __int64 v26; // [rsp+B0h] [rbp+30h]
  unsigned int v27; // [rsp+B8h] [rbp+38h]

  v26 = a3;
  v25 = (__int16 *)a2;
  v3 = *a1;
  v4 = 0;
  v24 = 0;
  v22.m128i_i32[1] = v3.m128i_i32[1];
  v5 = _mm_cvtsi128_si32(v3);
  v23 = v3;
  v22.m128i_i16[0] = v5;
  if ( !v5 )
  {
    result = 0LL;
    *(_WORD *)a2 = 0;
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
      v18 = v23.m128i_i16[0] - v5;
      v23.m128i_i16[0] = v18;
      v23.m128i_i16[1] = v18;
      if ( v7 > 8 && !v4 )
      {
        result = CmpExpandPathInfo(a3, a2);
        if ( (int)result < 0 )
          return result;
        a3 = v26;
        v24 = 1;
      }
      a2 = (unsigned int)(v7 - 1);
      v27 = a2;
      if ( (unsigned int)a2 >= 8 )
        *(__m128i *)(16 * ((unsigned int)(v7 - 9) + 6LL) + *(_QWORD *)(a3 + 160)) = v23;
      else
        *(__m128i *)(16 * ((unsigned int)a2 + 2LL) + a3) = v23;
      if ( v18 )
      {
        v19 = (unsigned __int16)(((unsigned __int16)(v18 - 1) >> 1) + 1);
        v20 = (WCHAR *)v23.m128i_i64[1];
        do
        {
          v21 = *v20;
          if ( *v20 >= 0x61u )
          {
            if ( v21 > 0x7Au )
              v21 = RtlUpcaseUnicodeChar(v21);
            else
              v21 -= 32;
          }
          ++v20;
          v6 = v21 + 37 * v6;
          --v19;
        }
        while ( v19 );
        a2 = v27;
        a3 = v26;
      }
      if ( (unsigned int)a2 >= 8 )
        *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(a2 - 8)) = v6;
      else
        *(_DWORD *)(a3 + 4LL * (unsigned int)a2) = v6;
      do
      {
        if ( *v8 != 92 )
          break;
        v5 -= 2;
        ++v8;
        v9 -= 2;
        v22.m128i_i16[0] = v5;
      }
      while ( v5 );
      v22.m128i_i64[1] = (__int64)v8;
      v22.m128i_i16[1] = v9;
      v3 = v22;
      v6 = 0;
      v4 = v24;
      v23 = v22;
    }
    else
    {
      ++v8;
      v5 -= 2;
      v9 -= 2;
      v22.m128i_i16[0] = v5;
    }
  }
  while ( v5 );
  if ( v5 )
    return 3221225485LL;
  v10 = v7 + 1;
  if ( v10 > 8 && !v4 )
  {
    result = CmpExpandPathInfo(a3, a2);
    if ( (int)result < 0 )
      return result;
    a3 = v26;
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
    a3 = v26;
  }
  if ( (unsigned int)v11 >= 8 )
    *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v10 - 9)) = v13;
  else
    *(_DWORD *)(a3 + 4 * v11) = v13;
  *v25 = v10;
  return 0LL;
}
