/*
 * XREFs of PspValidateMitigationOptions @ 0x14044C848
 * Callers:
 *     PspReadIFEOMitigationOptions @ 0x1404A0D20 (PspReadIFEOMitigationOptions.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateMitigationOptions(__m128i *a1, char a2)
{
  int v2; // r10d
  int v3; // r9d
  __m128i v4; // xmm0
  __m128i v6; // [rsp+0h] [rbp-18h]

  v2 = 0;
  v3 = 30;
  if ( a2 )
  {
LABEL_2:
    v4 = *a1;
    v6 = *a1;
    while ( (((unsigned __int64)v6.m128i_i64[(unsigned __int64)(unsigned int)(4 * v3) >> 6] >> ((4 * v3) & 0x3F)) & 0xF) == 0 )
    {
      if ( (unsigned int)++v3 >= 0x20 )
      {
        if ( (((unsigned __int64)a1->m128i_i64[0] >> 12) & 3) != 3
          && (WORD1(a1->m128i_i64[0]) & 3) != 3
          && (((unsigned __int64)a1->m128i_i64[0] >> 20) & 3) != 3
          && (BYTE3(a1->m128i_i64[0]) & 3) != 3
          && (((unsigned __int64)a1->m128i_i64[0] >> 28) & 3) != 3
          && (HIDWORD(a1->m128i_i64[0]) & 3) != 3
          && (((unsigned __int64)a1->m128i_i64[0] >> 52) & 3) != 3
          && (HIBYTE(a1->m128i_i64[0]) & 3) != 3
          && (((unsigned __int64)a1->m128i_i64[0] >> 60) & 3) != 3
          && (_mm_srli_si128(v4, 8).m128i_u8[0] & 3) != 3
          && (_mm_srli_si128(*a1, 8).m128i_i8[1] & 3) != 3
          && ((_mm_srli_si128(*a1, 8).m128i_u64[0] >> 12) & 3) == 0 )
        {
          return 0LL;
        }
        return 3221225485LL;
      }
    }
  }
  else
  {
    v6 = *a1;
    while ( (((unsigned __int64)v6.m128i_i64[(unsigned __int64)(unsigned int)(4 * v2) >> 6] >> ((4 * v2) & 0x3F)) & 4) == 0 )
    {
      if ( (unsigned int)++v2 >= 0x1E )
        goto LABEL_2;
    }
  }
  return 3221225485LL;
}
