/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1404C25CC
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1404C0410 (RtlFormatCurrentUserKeyPath.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407231F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x14073382C (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlLengthSidAsUnicodeString(PSID Sid, PULONG StringLength)
{
  int v4; // ecx

  if ( RtlValidSid(Sid) != 1 )
    return -1073741704;
  if ( *((_BYTE *)Sid + 2) || (v4 = 10, *((_BYTE *)Sid + 3)) )
    v4 = 14;
  *StringLength = 2 * (v4 + 11 * *((unsigned __int8 *)Sid + 1)) + 8;
  return 0;
}
