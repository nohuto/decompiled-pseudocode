/*
 * XREFs of AdtpAppendZString @ 0x1407E0E48
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x1407E1334 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     AdtpAppendString @ 0x1407E0CA4 (AdtpAppendString.c)
 */

__int64 __fastcall AdtpAppendZString(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a3);
  return AdtpAppendString(a1, a2, &DestinationString, a4);
}
