/*
 * XREFs of AdtpFormatPrefix @ 0x1402C59A0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1402C55DC (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x14053E930 (RtlIntegerToUnicodeString.c)
 */

int __fastcall AdtpFormatPrefix(PUNICODE_STRING Destination, ULONG Value, char a3)
{
  int result; // eax
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF

  String.Buffer = (wchar_t *)&v8;
  *(_DWORD *)&String.Length = 1310720;
  RtlAppendUnicodeToString(Destination, L"%%");
  result = RtlIntegerToUnicodeString(Value, 0xAu, &String);
  if ( result >= 0 )
  {
    result = RtlAppendUnicodeStringToString(Destination, &String);
    if ( a3 == 1 )
      return RtlAppendUnicodeToString(Destination, L"\t");
  }
  return result;
}
