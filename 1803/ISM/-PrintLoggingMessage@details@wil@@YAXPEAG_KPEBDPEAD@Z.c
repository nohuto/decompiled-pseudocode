/*
 * XREFs of ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18000D51C
 * Callers:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18000D5B0 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18002D4DC (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001C04 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _vsnwprintf @ 0x1800E1E44 (_vsnwprintf.c)
 *     _alloca_probe @ 0x1800E3190 (_alloca_probe.c)
 */

void __fastcall wil::details::PrintLoggingMessage(wchar_t *this, unsigned __int16 *a2, va_list a3, const char *a4)
{
  int v6; // eax
  wchar_t Format[2048]; // [rsp+20h] [rbp-1018h] BYREF

  StringCchPrintfW(Format, 2048LL, L"%hs", a2);
  v6 = vsnwprintf(this, 0x7FFuLL, Format, a3);
  if ( v6 < 0 || (unsigned __int64)v6 > 0x7FE )
    this[2047] = 0;
}
