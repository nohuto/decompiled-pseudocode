/*
 * XREFs of RtlEqualDomainName @ 0x18004DEF0
 * Callers:
 *     RtlEqualComputerName @ 0x1800908B0 (RtlEqualComputerName.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlCanonicalizeDomainName @ 0x18004DF70 (RtlCanonicalizeDomainName.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 */

char __fastcall RtlEqualDomainName(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  __int64 v5; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(a3) = 1;
  v4 = 0;
  if ( (int)RtlCanonicalizeDomainName(&v8, a1, a3) >= 0 )
  {
    LOBYTE(v5) = 1;
    if ( (int)RtlCanonicalizeDomainName(&UnicodeString, a2, v5) >= 0 )
    {
      v4 = RtlEqualUnicodeString(&v8.Length, &UnicodeString.Length, 0);
      RtlFreeAnsiString(&UnicodeString);
    }
    RtlFreeAnsiString(&v8);
  }
  return v4;
}
