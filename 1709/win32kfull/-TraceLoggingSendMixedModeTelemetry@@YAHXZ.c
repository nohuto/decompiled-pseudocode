/*
 * XREFs of ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C0043080
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 TraceLoggingSendMixedModeTelemetry(void)
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E754D, v0, v1, 2u, &pData);
  return 1LL;
}
