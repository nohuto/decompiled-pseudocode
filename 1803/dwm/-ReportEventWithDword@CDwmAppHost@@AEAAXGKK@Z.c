/*
 * XREFs of ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007180
 * Callers:
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001A20 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022F0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x1400070EC (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 * Callees:
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001D20 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400072AC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall CDwmAppHost::ReportEventWithDword(CDwmAppHost *this, WORD a2, DWORD a3)
{
  CDwmAppHost *v5; // rcx
  unsigned __int16 v6[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  __int16 v9; // [rsp+44h] [rbp-14h]

  *(_QWORD *)v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  StringCchPrintfW(v6, 0xBuLL, L"0x%x");
  CDwmAppHost::ReportEventW(v5, a2, a3, v6);
}
