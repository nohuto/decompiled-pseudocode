/*
 * XREFs of ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C011C754
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void TraceLoggingMouseWheelRoutingValueAtStartup(void)
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  int v2; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+64h] [rbp-24h]

  UPDWORDPointer(8220LL);
  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
    {
      v6 = 0;
      v4 = &v2;
      v2 = (int)v1;
      v5 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EAE98, v0, v1, 3u, &pData);
    }
  }
}
