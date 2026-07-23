/*
 * XREFs of EmpInfParseGetGuidFromName @ 0x1408063F0
 * Callers:
 *     EmpParseCallbacks @ 0x14080571C (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140805944 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140805F54 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140806A50 (EmpInfParseGetValueFromSectionAndKeyName.c)
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
