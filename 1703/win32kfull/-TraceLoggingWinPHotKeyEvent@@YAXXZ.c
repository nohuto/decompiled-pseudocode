/*
 * XREFs of ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C0197E40
 * Callers:
 *     ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C019DC90 (-WinlogonHotkeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void TraceLoggingWinPHotKeyEvent(void)
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB851, v0, v1, 2u, &pData);
  }
}
