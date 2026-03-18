/*
 * XREFs of NtUserDrawMenuBarTemp @ 0x1C01D7CF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 NtUserDrawMenuBarTemp()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EAE04, v0, v1, 2u, &pData);
  return 0LL;
}
