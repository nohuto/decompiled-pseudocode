/*
 * XREFs of RtlEqualDomainName @ 0x180069A40
 * Callers:
 *     RtlEqualComputerName @ 0x1800E99D0 (RtlEqualComputerName.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 */

BOOLEAN __cdecl RtlEqualDomainName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  BOOLEAN v2; // bl
  _UNICODE_STRING String2a; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING String1a; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( (int)RtlCanonicalizeDomainName(&String1a) >= 0 )
  {
    if ( (int)RtlCanonicalizeDomainName(&String2a) >= 0 )
    {
      v2 = RtlEqualUnicodeString(&String1a, &String2a, 0);
      RtlFreeUnicodeString(&String2a);
    }
    RtlFreeUnicodeString(&String1a);
  }
  return v2;
}
