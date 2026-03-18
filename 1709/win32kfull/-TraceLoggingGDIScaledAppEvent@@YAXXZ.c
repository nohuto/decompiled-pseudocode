/*
 * XREFs of ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01406D0
 * Callers:
 *     SetAppCompatFlags @ 0x1C00759F0 (SetAppCompatFlags.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void TraceLoggingGDIScaledAppEvent(void)
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7DB8, v0, v1, 2u, &pData);
  }
}
