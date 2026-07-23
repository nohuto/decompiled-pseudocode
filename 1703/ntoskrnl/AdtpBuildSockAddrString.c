/*
 * XREFs of AdtpBuildSockAddrString @ 0x140733A88
 * Callers:
 *     AdtpPackageParameters @ 0x140155F00 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     AdtpBuildIPv4Strings @ 0x140732D5C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140732EB4 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14073300C (AdtpBuildMacStrings.c)
 */

__int64 __fastcall AdtpBuildSockAddrString(_WORD *a1, UNICODE_STRING *a2, _BYTE *a3, UNICODE_STRING *a4, _BYTE *a5)
{
  unsigned int v5; // ebx
  int v8; // eax

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0;
  v8 = (unsigned __int16)*a1;
  switch ( v8 )
  {
    case 2:
      return (unsigned int)AdtpBuildIPv4Strings(a1, (__int64)a2, a3, (__int64)a4, a5);
    case 23:
      return (unsigned int)AdtpBuildIPv6Strings(a1, (__int64)a2, a3, (__int64)a4, a5);
    case 33:
      return (unsigned int)AdtpBuildMacStrings((__int64)a1, (__int64)a2, a3);
  }
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(a2, L"-");
    *a3 = 0;
  }
  if ( a4 && a5 )
  {
    RtlInitUnicodeString(a4, L"-");
    *a5 = 0;
  }
  return v5;
}
