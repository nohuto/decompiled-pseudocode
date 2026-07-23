/*
 * XREFs of LdrpResolveDllName @ 0x18004DA64
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x180035624 (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x180052E80 (LdrpAppCompatRedirect.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18004DC14 (LdrpGetNtPathFromDosPath.c)
 *     LdrpAllocateUnicodeString @ 0x18004DCF0 (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18004DD58 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpResolveDllName(__m128i *a1, __m128i *a2, _UNICODE_STRING *a3, _OWORD *a4, __int16 a5)
{
  __m128i v9; // xmm0
  int v10; // ebx
  __int64 v11; // rsi
  const void *v12; // rbp
  int NtPathFromDosPath; // eax
  __m128i v14; // xmm1
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // xmm1_8
  const WCHAR *i; // rdx
  int FullPath; // eax
  __m128i *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __m128i Src; // [rsp+30h] [rbp-28h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1714,
      (unsigned int)"LdrpResolveDllName",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( (a5 & 0x200) != 0 )
  {
    v9 = *a1;
    v10 = 0;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    v9 = *a2;
    v10 = FullPath;
  }
  Src = v9;
  if ( v10 >= 0 )
  {
    if ( (a5 & 0x200) != 0 || (v20 = a2 + 1, &a2[1] == (__m128i *)a2->m128i_i64[1]) )
    {
      v11 = Src.m128i_u16[0];
      v12 = (const void *)Src.m128i_i64[1];
      v10 = LdrpAllocateUnicodeString(&Src, Src.m128i_u16[0]);
      if ( v10 >= 0 )
      {
        memmove((void *)Src.m128i_i64[1], v12, v11 + 2);
        Src.m128i_i16[0] = v11;
      }
      a2->m128i_i16[0] = 0;
    }
    else
    {
      a2->m128i_i64[1] = (__int64)v20;
      a2->m128i_i32[0] = 0x1000000;
      v20->m128i_i16[0] = 0;
    }
    if ( v10 >= 0 )
    {
      NtPathFromDosPath = LdrpGetNtPathFromDosPath(&Src, a2);
      v10 = NtPathFromDosPath;
      if ( NtPathFromDosPath < 0 )
      {
        v21 = NtPathFromDosPath + 1073741809;
        if ( v21 <= 0x2C && (v22 = 0x1C3000000011LL, _bittest64(&v22, (int)v21))
          || v10 == -2147483632
          || v10 == -1073741661 )
        {
          v10 = -1073741515;
        }
        LdrpFreeUnicodeString(&Src);
      }
      else
      {
        v14 = Src;
        v15 = _mm_cvtsi128_si32(Src);
        *a4 = Src;
        v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
        for ( i = (const WCHAR *)(v15 + v16 - 2); (unsigned __int64)i >= v16; --i )
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
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1825,
      (unsigned int)"LdrpResolveDllName",
      4,
      "Status: 0x%08lx\n",
      v10);
  return (unsigned int)v10;
}
