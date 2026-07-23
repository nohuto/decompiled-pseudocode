/*
 * XREFs of EmpInfParseGetGuidFromName @ 0x140834760
 * Callers:
 *     EmpParseCallbacks @ 0x140833A88 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140833CB0 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x1408342C0 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x14083484C (EmpParseTargetRules.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140834DC8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

int __fastcall EmpInfParseGetGuidFromName(__int64 a1, __int64 a2, __int64 a3, GUID *a4)
{
  const CHAR *ValueFromSectionAndKeyName; // rax
  int result; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-88h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+50h] [rbp-68h] BYREF

  GuidString.Buffer = (wchar_t *)&v9;
  GuidString.MaximumLength = 78;
  ValueFromSectionAndKeyName = (const CHAR *)EmpInfParseGetValueFromSectionAndKeyName(a1, a2, a3);
  if ( !ValueFromSectionAndKeyName )
    return -1073741275;
  RtlInitAnsiString(&DestinationString, ValueFromSectionAndKeyName);
  result = RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0);
  if ( result >= 0 )
    return RtlGUIDFromString(&GuidString, a4);
  return result;
}
