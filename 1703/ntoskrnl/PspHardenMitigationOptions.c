/*
 * XREFs of PspHardenMitigationOptions @ 0x140452338
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PspHardenMitigationOptions(__m128i *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __m128i v5; // [rsp+0h] [rbp-28h]

  v1 = 0;
  v2 = a1->m128i_i64[0];
  v3 = a1->m128i_i64[0] - PspHardenedMitigationOptionsMap;
  v5 = *a1;
  if ( !v3 )
    v3 = _mm_srli_si128(*a1, 8).m128i_u64[0] - *((_QWORD *)&PspHardenedMitigationOptionsMap + 1);
  if ( !v3 )
    return 0LL;
  if ( (v2 & 3) != 1 )
  {
    v1 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v5.m128i_i64[0] = v2;
  }
  if ( (BYTE1(v2) & 3) != 3 )
  {
    v1 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFFFCFFuLL | 0x300;
    v5.m128i_i64[0] = v2;
  }
  if ( ((v2 >> 12) & 3) != 1 )
  {
    v1 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
    v5.m128i_i64[0] = v2;
  }
  if ( ((v2 >> 4) & 3) != 1 )
  {
    v1 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v5.m128i_i64[0] = v2;
  }
  if ( (BYTE2(v2) & 3) != 1 )
  {
    v1 = -1073741811;
    v2 = v2 & 0xFFFFFFFFFFFCFFFFuLL | 0x10000;
    v5.m128i_i64[0] = v2;
  }
  if ( ((v2 >> 20) & 3) != 1 && ((v2 >> 20) & 3) != 2 && (((unsigned __int64)PspSystemMitigationOptions >> 20) & 3) != 2 )
  {
    v1 = -1073741811;
    v5.m128i_i64[0] = v2 & 0xFFFFFFFFFFCFFFFFuLL | 0x100000;
  }
  result = v1;
  *a1 = v5;
  return result;
}
