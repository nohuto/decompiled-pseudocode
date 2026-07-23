/*
 * XREFs of sub_1800F5630 @ 0x1800F5630
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180046220 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800F5394 @ 0x1800F5394 (sub_1800F5394.c)
 */

bool __fastcall sub_1800F5630(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al
  _UNICODE_STRING v6; // [rsp+30h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-D8h] BYREF
  char v8; // [rsp+50h] [rbp-C8h] BYREF

  v6.Buffer = (PWCH)&v8;
  v6.MaximumLength = 170;
  result = 0;
  if ( (int)sub_1800F5394(&v6, a2, a3, a4) >= 0 )
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
