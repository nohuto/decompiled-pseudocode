/*
 * XREFs of sub_1800F29FC @ 0x1800F29FC
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180037850 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

bool __fastcall sub_1800F29FC(PCWSTR SourceString)
{
  _UNICODE_STRING v3; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceStringa[88]; // [rsp+50h] [rbp-B0h] BYREF

  *(_QWORD *)&v3.Length = 85LL;
  if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, SourceStringa, &v3) < 0 || *(_QWORD *)&v3.Length >= 0x55uLL )
    return 0;
  if ( (unsigned __int64)(2LL * *(_QWORD *)&v3.Length) >= 0xAA )
    _report_rangecheckfailure();
  SourceStringa[*(_QWORD *)&v3.Length] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v3, SourceStringa);
  return !RtlCompareUnicodeStrings(
            DestinationString.Buffer,
            (unsigned __int64)DestinationString.Length >> 1,
            v3.Buffer,
            (unsigned __int64)v3.Length >> 1,
            1u);
}
