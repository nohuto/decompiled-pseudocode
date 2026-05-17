/*
 * XREFs of sub_18010C3D8 @ 0x18010C3D8
 * Callers:
 *     sub_18010E1E0 @ 0x18010E1E0 (sub_18010E1E0.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_18010C3D8(PCWSTR SourceString, PCWSTR a2)
{
  UNICODE_STRING v4; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v4, a2);
  return RtlCompareUnicodeStrings(
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           (__int64)v4.Buffer,
           (unsigned __int64)v4.Length >> 1,
           1);
}
