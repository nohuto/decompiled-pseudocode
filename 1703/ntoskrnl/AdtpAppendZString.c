/*
 * XREFs of AdtpAppendZString @ 0x140733F54
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x140734438 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     AdtpAppendString @ 0x140733DAC (AdtpAppendString.c)
 */

__int64 __fastcall AdtpAppendZString(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a3);
  return AdtpAppendString(a1, a2, &DestinationString, a4);
}
