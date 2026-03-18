/*
 * XREFs of PspHardenMitigationOptions @ 0x140579554
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PspHardenMitigationOptions(__m128i *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  char v4; // al
  unsigned int v5; // ecx
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-28h]

  v2 = a1->m128i_i64[0];
  v7 = *a1;
  v3 = a1->m128i_i64[0] - PspHardenedMitigationOptionsMap;
  if ( a1->m128i_i64[0] == (_QWORD)PspHardenedMitigationOptionsMap )
    v3 = _mm_srli_si128(*a1, 8).m128i_u64[0] - *((_QWORD *)&PspHardenedMitigationOptionsMap + 1);
  if ( !v3 )
    return 0LL;
  v4 = v2 & 3;
  if ( (v2 & 3) != 1 )
  {
    v2 = v2 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v7.m128i_i64[0] = v2;
  }
  v5 = v4 != 1 ? 0xC000000D : 0;
  if ( (BYTE1(v2) & 3) != 3 )
  {
    v2 |= 0x300uLL;
    v5 = -1073741811;
    v7.m128i_i64[0] = v2;
  }
  if ( ((v2 >> 12) & 3) != 1 )
  {
    v5 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
    v7.m128i_i64[0] = v2;
  }
  if ( (((unsigned __int8)v2 >> 4) & 3) != 1 )
  {
    v5 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v7.m128i_i64[0] = v2;
  }
  if ( (BYTE2(v2) & 3) != 1 )
  {
    v5 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFCFFFFuLL | 0x10000;
    v7.m128i_i64[0] = v2;
  }
  if ( (unsigned __int8)(((v2 >> 20) & 3) - 1) > 1u && (((unsigned __int64)PspSystemMitigationOptions >> 20) & 3) != 2 )
  {
    v5 = -1073741811;
    v7.m128i_i64[0] = v2 & 0xFFFFFFFFFFCFFFFFuLL | 0x100000;
  }
  result = v5;
  *a1 = v7;
  return result;
}
