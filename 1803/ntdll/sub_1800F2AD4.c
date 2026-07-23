/*
 * XREFs of sub_1800F2AD4 @ 0x1800F2AD4
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180037850 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800F2924 @ 0x1800F2924 (sub_1800F2924.c)
 */

bool __fastcall sub_1800F2AD4(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al
  _UNICODE_STRING v6; // [rsp+30h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-D8h] BYREF
  char v8; // [rsp+50h] [rbp-C8h] BYREF

  v6.Buffer = (PWCH)&v8;
  v6.MaximumLength = 170;
  result = 0;
  if ( (int)sub_1800F2924(&v6, a2, a3, a4) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCompareUnicodeStrings(
            DestinationString.Buffer,
            (unsigned __int64)DestinationString.Length >> 1,
            v6.Buffer,
            (unsigned __int64)v6.Length >> 1,
            1u) )
      return 1;
  }
  return result;
}
