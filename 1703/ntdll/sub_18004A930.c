/*
 * XREFs of sub_18004A930 @ 0x18004A930
 * Callers:
 *     sub_180019768 @ 0x180019768 (sub_180019768.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 * Callees:
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     sub_1800473D0 @ 0x1800473D0 (sub_1800473D0.c)
 *     sub_18004AB20 @ 0x18004AB20 (sub_18004AB20.c)
 *     sub_18004BC44 @ 0x18004BC44 (sub_18004BC44.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18004A930(__m128i *a1, __m128i *a2, _UNICODE_STRING *a3, _OWORD *a4, __int64 a5, __int16 a6)
{
  __m128i v10; // xmm0
  int v11; // ebx
  __int64 v12; // rsi
  const void *v13; // rbp
  int v14; // eax
  __m128i v15; // xmm1
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // xmm1_8
  const WCHAR *i; // rdx
  int v20; // eax
  __m128i *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __m128i Src; // [rsp+30h] [rbp-28h] BYREF

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1689,
      (unsigned int)"LdrpResolveDllName",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( (a6 & 0x200) != 0 )
  {
    v10 = *a1;
    v11 = 0;
  }
  else
  {
    v20 = sub_18004BC44(a1, a2);
    v10 = *a2;
    v11 = v20;
  }
  Src = v10;
  if ( v11 >= 0 )
  {
    if ( !a5 || (v11 = sub_180021AE0(0LL, (PUNICODE_STRING)&Src, a6, a5, 0LL), v11 == -1073741515) )
    {
      v11 = 0;
      if ( (a6 & 0x200) != 0 || (v21 = a2 + 1, &a2[1] == (__m128i *)a2->m128i_i64[1]) )
      {
        v12 = Src.m128i_u16[0];
        v13 = (const void *)Src.m128i_i64[1];
        v11 = sub_1800473D0((__int64)&Src, Src.m128i_u16[0]);
        if ( v11 >= 0 )
        {
          memmove((void *)Src.m128i_i64[1], v13, v12 + 2);
          Src.m128i_i16[0] = v12;
        }
        a2->m128i_i16[0] = 0;
      }
      else
      {
        a2->m128i_i64[1] = (__int64)v21;
        a2->m128i_i32[0] = 0x1000000;
        v21->m128i_i16[0] = 0;
      }
      if ( v11 >= 0 )
      {
        v14 = sub_18004AB20(&Src, a2);
        v11 = v14;
        if ( v14 < 0 )
        {
          v22 = v14 + 1073741809;
          if ( v22 <= 0x2C && (v23 = 0x1C3000000011LL, _bittest64(&v23, (int)v22))
            || v11 == -2147483632
            || v11 == -1073741661 )
          {
            v11 = -1073741515;
          }
          sub_18004C4D8(&Src);
        }
        else
        {
          v15 = Src;
          v16 = _mm_cvtsi128_si32(Src);
          *a4 = Src;
          v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
          for ( i = (const WCHAR *)(v16 + v17 - 2); (unsigned __int64)i >= v17; --i )
          {
            if ( *i == 92 || *i == 47 )
            {
              ++i;
              break;
            }
          }
          RtlInitUnicodeStringEx(a3, i);
        }
      }
    }
  }
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1813,
      (unsigned int)"LdrpResolveDllName",
      4,
      "Status: 0x%08lx\n",
      v11);
  return (unsigned int)v11;
}
