/*
 * XREFs of PopApplyAdminPolicy @ 0x14075EDCC
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PopApplyAdminPolicy(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // xmm3_8
  __m128i v4; // xmm2
  int v5; // r8d
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax

  v2 = *a2;
  v3 = a2[1].m128i_i64[0];
  v4 = *a2;
  v5 = _mm_cvtsi128_si32(*a2);
  if ( (unsigned int)(v5 - 2) > 3 )
    return 3221225485LL;
  if ( (unsigned int)(v2.m128i_i32[1] - 2) > 3 )
    return 3221225485LL;
  if ( v5 > v2.m128i_i32[1] )
    return 3221225485LL;
  v6 = _mm_srli_si128(v2, 8).m128i_u64[0];
  if ( (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) > HIDWORD(v6) || (unsigned int)v3 > HIDWORD(v3) )
    return 3221225485LL;
  v7 = v4.m128i_i64[0] - PopAdminPolicy;
  if ( v4.m128i_i64[0] == (_QWORD)PopAdminPolicy )
  {
    v7 = v6 - *((_QWORD *)&PopAdminPolicy + 1);
    if ( v6 == *((_QWORD *)&PopAdminPolicy + 1) )
      v7 = v3 - qword_1403AA930;
  }
  result = 0LL;
  if ( v7 )
  {
    PopAdminPolicy = (__int128)v4;
    qword_1403AA930 = v3;
  }
  return result;
}
