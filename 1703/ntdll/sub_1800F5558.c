/*
 * XREFs of sub_1800F5558 @ 0x1800F5558
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180046220 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F9FF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

bool __fastcall sub_1800F5558(PCWSTR SourceString)
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
