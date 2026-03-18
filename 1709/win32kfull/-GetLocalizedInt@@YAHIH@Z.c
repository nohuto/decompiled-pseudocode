/*
 * XREFs of ?GetLocalizedInt@@YAHIH@Z @ 0x1C00834F8
 * Callers:
 *     SetIconMetrics @ 0x1C0082F1C (SetIconMetrics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GetLocalizedInt(__int64 a1)
{
  ULONG Value; // [rsp+20h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D0h] BYREF
  WCHAR SourceString[80]; // [rsp+40h] [rbp-B8h] BYREF

  if ( !(unsigned int)RtlLoadStringOrError(a1, SourceString, 80LL) )
    return 4294966171LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
  return Value;
}
