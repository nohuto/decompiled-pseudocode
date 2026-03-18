/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x140155864
 * Callers:
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140722C44 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400A09D0 (RtlSidDominatesForTrust.c)
 */

char __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char result; // al
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  *a4 = RtlSidDominatesForTrust(a1, a2, &v6);
  result = v6;
  if ( !v6 )
LABEL_5:
    *a4 = -1073741790;
  return result;
}
