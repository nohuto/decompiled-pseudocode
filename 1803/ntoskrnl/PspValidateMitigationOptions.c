/*
 * XREFs of PspValidateMitigationOptions @ 0x140573C2C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     PspReadIFEOMitigationOptions @ 0x1404EFDF0 (PspReadIFEOMitigationOptions.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PspValidateMitigationOptions(__m128i *a1, char a2)
{
  char *v3; // r8
  int v4; // eax
  __int64 v5; // r9
  __m128i v6; // xmm0
  int v7; // edx
  unsigned int v8; // r9d
  int v9; // r8d
  __m128i v11; // [rsp+0h] [rbp-40h]
  _DWORD v12[3]; // [rsp+10h] [rbp-30h]
  char v13; // [rsp+1Ch] [rbp-24h] BYREF
  int v14; // [rsp+2Ch] [rbp-14h]
  int v15; // [rsp+30h] [rbp-10h]
  int v16; // [rsp+34h] [rbp-Ch]

  v12[1] = 1;
  v12[0] = 0;
  v12[2] = 2;
  v3 = &v13;
  v4 = 9;
  v5 = 4LL;
  do
  {
    *(_DWORD *)v3 = v4++;
    v3 += 4;
    --v5;
  }
  while ( v5 );
  v6 = *a1;
  v7 = 0;
  v11 = *a1;
  v8 = 0;
  v14 = 17;
  v9 = 30;
  v15 = 25;
  v16 = 27;
  while ( a2
       || (((unsigned __int64)v11.m128i_i64[(unsigned __int64)(unsigned int)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 4) == 0 )
  {
    if ( v8 < 0xA && v12[v8] == v7 )
    {
      ++v8;
    }
    else if ( (((unsigned __int64)v11.m128i_i64[(unsigned __int64)(unsigned int)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 0xF) == 3 )
    {
      return 3221225485LL;
    }
    if ( (unsigned int)++v7 >= 0x1E )
    {
      v11 = v6;
      while ( (((unsigned __int64)v11.m128i_i64[(unsigned __int64)(unsigned int)(4 * v9) >> 6] >> ((4 * v9) & 0x3F)) & 0xF) == 0 )
      {
        if ( (unsigned int)++v9 >= 0x20 )
          return ((_mm_srli_si128(v6, 8).m128i_u64[0] >> 12) & 3) != 0 ? 0xC000000D : 0;
      }
      return 3221225485LL;
    }
  }
  return 3221225485LL;
}
