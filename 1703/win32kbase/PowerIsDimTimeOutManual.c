/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C006D324
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C006D370 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

char __fastcall PowerIsDimTimeOutManual(const unsigned __int16 *a1)
{
  char v1; // bl
  const GUID *v3; // r9
  unsigned int v4; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  if ( !GetConfigUlong(a1, L"ManualDimTimeout", &v4) || !v4 )
    return 0;
  v1 = 1;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0169D71, 0LL, v3, 2u, &pData);
  return v1;
}
