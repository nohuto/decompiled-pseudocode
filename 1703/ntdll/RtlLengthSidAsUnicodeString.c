/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x180044000
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1800410E0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 * Callees:
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
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
