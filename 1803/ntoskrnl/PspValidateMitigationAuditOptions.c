/*
 * XREFs of PspValidateMitigationAuditOptions @ 0x140574090
 * Callers:
 *     PspReadIFEOMitigationAuditOptions @ 0x1404EFE64 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PspValidateMitigationAuditOptions(__int128 *a1)
{
  char *v1; // rdx
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r11
  __int64 v6; // r9
  __int128 v7; // xmm0
  int v8; // r8d
  char v9; // r10
  _DWORD v11[4]; // [rsp+0h] [rbp-70h]
  __int128 v12; // [rsp+10h] [rbp-60h]
  _DWORD v13[3]; // [rsp+20h] [rbp-50h]
  char v14; // [rsp+2Ch] [rbp-44h] BYREF
  __m128i si128; // [rsp+3Ch] [rbp-34h]
  __m128i v16; // [rsp+4Ch] [rbp-24h]

  v13[0] = 1;
  v13[1] = 7;
  v13[2] = 9;
  v1 = &v14;
  v2 = 11;
  v3 = 4LL;
  do
  {
    *(_DWORD *)v1 = v2++;
    v1 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0;
  v5 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = 0LL;
  v11[0] = 11;
  v7 = *a1;
  v8 = 30;
  v12 = *a1;
  v16 = _mm_load_si128((const __m128i *)&_xmm);
  do
  {
    v9 = (*(_QWORD *)&v13[2 * ((unsigned __int64)(4 * v4) >> 6) - 4] >> ((4 * v4) & 0x3F)) & 3;
    if ( (unsigned int)v5 < 0xF && v13[v5] == v4 )
    {
      v5 = (unsigned int)(v5 + 1);
    }
    else if ( v9 )
    {
      return 3221225485LL;
    }
    if ( (_DWORD)v6 || v11[v6] != v4 )
    {
      if ( v9 == 3 )
        return 3221225485LL;
    }
    else
    {
      v6 = 1LL;
    }
    ++v4;
  }
  while ( v4 < 0x1E );
  v12 = v7;
  while ( ((*(_QWORD *)&v13[2 * ((unsigned __int64)(unsigned int)(4 * v8) >> 6) - 4] >> ((4 * v8) & 0x3F)) & 3) == 0 )
  {
    if ( (unsigned int)++v8 >= 0x20 )
      return 0LL;
  }
  return 3221225485LL;
}
