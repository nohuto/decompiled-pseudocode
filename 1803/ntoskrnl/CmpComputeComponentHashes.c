/*
 * XREFs of CmpComputeComponentHashes @ 0x140513000
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpSetComponentNameAtIndex @ 0x14051331C (CmpSetComponentNameAtIndex.c)
 *     CmpExpandPathInfo @ 0x140513354 (CmpExpandPathInfo.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  __m128i v3; // xmm0
  char v4; // cl
  __int64 v5; // r13
  __int16 v6; // bx
  int v7; // r12d
  __int16 v8; // r14
  _WORD *v9; // rdi
  __int16 v10; // si
  __int16 v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  __int64 result; // rax
  __int16 v15; // r15
  __m128i v16; // xmm0
  unsigned int v17; // edx
  __int64 v18; // r13
  WCHAR *v19; // r15
  WCHAR v20; // ax
  __m128i v21; // [rsp+20h] [rbp-48h]
  __m128i v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+90h] [rbp+28h]
  unsigned int v26; // [rsp+A8h] [rbp+40h]

  v3 = *a1;
  v4 = 0;
  v5 = a3;
  v23 = 0;
  v6 = _mm_cvtsi128_si32(v3);
  v21.m128i_i32[1] = v3.m128i_i32[1];
  v22 = v3;
  v21.m128i_i16[0] = v6;
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    v9 = (_WORD *)v3.m128i_i64[1];
    v10 = v3.m128i_i16[1];
    do
    {
      if ( v8 >= 32 )
        break;
      if ( *v9 == 92 )
      {
        ++v8;
        v15 = v22.m128i_i16[0] - v6;
        v22.m128i_i16[0] = v15;
        v22.m128i_i16[1] = v15;
        if ( v8 > 8 && !v4 )
        {
          result = CmpExpandPathInfo(v5);
          if ( (int)result < 0 )
            return result;
          v23 = 1;
        }
        v16 = v22;
        v17 = v8 - 1;
        v26 = v17;
        if ( v17 >= 8 )
          *(__m128i *)(16 * ((unsigned int)(v8 - 9) + 6LL) + *(_QWORD *)(v5 + 160)) = v22;
        else
          *(__m128i *)(16 * (v17 + 2LL) + v5) = v22;
        v22 = v16;
        if ( v15 )
        {
          v18 = (unsigned __int16)(((unsigned __int16)(v15 - 1) >> 1) + 1);
          v19 = (WCHAR *)v22.m128i_i64[1];
          do
          {
            v20 = *v19;
            if ( *v19 >= 0x61u )
            {
              if ( v20 > 0x7Au )
                v20 = RtlUpcaseUnicodeChar(v20);
              else
                v20 -= 32;
            }
            ++v19;
            v7 = v20 + 37 * v7;
            --v18;
          }
          while ( v18 );
          v17 = v26;
          v5 = a3;
        }
        if ( v17 >= 8 )
          *(_DWORD *)(*(_QWORD *)(v5 + 160) + 4LL * (v17 - 8)) = v7;
        else
          *(_DWORD *)(v5 + 4LL * v17) = v7;
        do
        {
          if ( *v9 != 92 )
            break;
          v6 -= 2;
          ++v9;
          v10 -= 2;
          v21.m128i_i16[0] = v6;
        }
        while ( v6 );
        v21.m128i_i64[1] = (__int64)v9;
        v21.m128i_i16[1] = v10;
        v7 = 0;
        v4 = v23;
        v22 = v21;
      }
      else
      {
        ++v9;
        v6 -= 2;
        v10 -= 2;
        v21.m128i_i16[0] = v6;
      }
    }
    while ( v6 );
    if ( v6 )
    {
      return 3221225485LL;
    }
    else
    {
      v11 = v8 + 1;
      if ( v11 <= 8 || v4 || (result = CmpExpandPathInfo(v5), (int)result >= 0) )
      {
        v12 = (unsigned int)(v11 - 1);
        CmpSetComponentNameAtIndex(v5, v12, &v22);
        v13 = CmpHashUnicodeComponent(&v22);
        if ( (unsigned int)v12 >= 8 )
          *(_DWORD *)(*(_QWORD *)(v5 + 160) + 4LL * (unsigned int)(v12 - 8)) = v13;
        else
          *(_DWORD *)(v5 + 4 * v12) = v13;
        *a2 = v11;
        return 0LL;
      }
    }
  }
  else
  {
    result = 0LL;
    *a2 = 0;
  }
  return result;
}
