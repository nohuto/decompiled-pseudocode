/*
 * XREFs of AdtpDbInitializePrivilegeObject @ 0x14014CBC8
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1405D1108 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 */

__int64 AdtpDbInitializePrivilegeObject()
{
  unsigned __int16 v0; // bx
  const WCHAR **v1; // r14
  unsigned int v2; // edi
  _QWORD *v3; // rsi
  const WCHAR *v4; // rdx

  v0 = 0;
  AdtpWellKnownPrivilegeMaxLen = 0;
  v1 = (const WCHAR **)off_1402BB3A0;
  v2 = 0;
  v3 = &AdtpKnownPrivilege;
  do
  {
    v4 = *v1;
    v3[2] = (int)(v2 + 2);
    RtlInitUnicodeString((PUNICODE_STRING)((char *)&AdtpKnownPrivilege + 24 * v2), v4);
    if ( v0 < *(_WORD *)v3 )
    {
      v0 = *(_WORD *)v3;
      AdtpWellKnownPrivilegeMaxLen = *(_WORD *)v3;
    }
    ++v2;
    ++v1;
    v3 += 3;
  }
  while ( v2 < 0x23 );
  return 0LL;
}
