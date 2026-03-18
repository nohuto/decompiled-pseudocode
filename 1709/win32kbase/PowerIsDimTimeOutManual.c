/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C00050C0
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C000510C (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
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
  if ( dword_1C01880D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x400000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A141, 0LL, v3, 2u, &pData);
  return v1;
}
