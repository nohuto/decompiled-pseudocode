/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x180053E94
 * Callers:
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x1800021CC (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceByType @ 0x180056510 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, __int64 a2)
{
  __int64 AceByType; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  int v8; // ecx
  int v9; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-1Ch] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  unsigned __int16 v12; // [rsp+2Ch] [rbp-14h]

  v10 = 0;
  v11 = 0;
  v9 = 0;
  v12 = 256;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(a1, 21LL, &v9);
    v6 = AceByType;
    if ( !AceByType )
      goto LABEL_3;
    if ( (*(_DWORD *)(AceByType + 4) & 0xFF000000) != 0 )
      return 3221225485LL;
    if ( (*(_BYTE *)(AceByType + 1) & 0x40) == 0 )
      break;
    if ( !RtlpValidTrustSubjectContext(a2, AceByType + 8, v5, &v10) )
      return 3221225506LL;
LABEL_3:
    ++v9;
    if ( !v6 )
      return v10;
  }
  v8 = *(_DWORD *)(AceByType + 10) - v11;
  if ( !v8 )
    v8 = *(unsigned __int16 *)(AceByType + 14) - v12;
  if ( !v8 && *(_BYTE *)(AceByType + 9) == 1 && !*(_DWORD *)(AceByType + 16) )
    goto LABEL_3;
  return 3221225485LL;
}
