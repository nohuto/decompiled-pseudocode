/*
 * XREFs of sub_18003FCF8 @ 0x18003FCF8
 * Callers:
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 *     sub_180042934 @ 0x180042934 (sub_180042934.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18003FB24 @ 0x18003FB24 (sub_18003FB24.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_18003FEA8 @ 0x18003FEA8 (sub_18003FEA8.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18003FCF8(unsigned __int16 *a1, __int64 a2, __int64 a3, _OWORD *a4, __int16 a5)
{
  __m128i v9; // xmm0
  int v10; // ebx
  __int64 v11; // rsi
  const void *v12; // rbp
  int v13; // eax
  __m128i v14; // xmm1
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // xmm1_8
  _WORD *i; // rdx
  int v19; // eax
  _WORD *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __m128i Src; // [rsp+30h] [rbp-28h] BYREF

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1714,
      (unsigned int)"LdrpResolveDllName",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( (a5 & 0x200) != 0 )
  {
    v9 = *(__m128i *)a1;
    v10 = 0;
  }
  else
  {
    v19 = sub_18003FB24(a1, a2);
    v9 = *(__m128i *)a2;
    v10 = v19;
  }
  Src = v9;
  if ( v10 >= 0 )
  {
    if ( (a5 & 0x200) != 0 || (v20 = (_WORD *)(a2 + 16), a2 + 16 == *(_QWORD *)(a2 + 8)) )
    {
      v11 = Src.m128i_u16[0];
      v12 = (const void *)Src.m128i_i64[1];
      v10 = sub_18003FEA8(&Src, Src.m128i_u16[0]);
      if ( v10 >= 0 )
      {
        memmove((void *)Src.m128i_i64[1], v12, v11 + 2);
        Src.m128i_i16[0] = v11;
      }
      *(_WORD *)a2 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = v20;
      *(_DWORD *)a2 = 0x1000000;
      *v20 = 0;
    }
    if ( v10 >= 0 )
    {
      v13 = sub_18003FC1C((__int128 *)Src.m128i_i8, a2);
      v10 = v13;
      if ( v13 < 0 )
      {
        v21 = (unsigned int)(v13 + 1073741809);
        if ( (unsigned int)v21 <= 0x2C && (v22 = 0x1C3000000011LL, _bittest64(&v22, v21))
          || v10 == -2147483632
          || v10 == -1073741661 )
        {
          v10 = -1073741515;
        }
        sub_180042420(&Src);
      }
      else
      {
        v14 = Src;
        v15 = _mm_cvtsi128_si32(Src);
        *a4 = Src;
        v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
        for ( i = (_WORD *)(v15 + v16 - 2); (unsigned __int64)i >= v16; --i )
        {
          if ( *i == 92 || *i == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx(a3, (__int64)i);
      }
    }
  }
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1825,
      (unsigned int)"LdrpResolveDllName",
      4,
      "Status: 0x%08lx\n",
      v10);
  return (unsigned int)v10;
}
