/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x1801F97C4
 * Callers:
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0_0 @ 0x1801F98FB (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0_0.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$2 @ 0x1801F9A37 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$6 @ 0x1801F9B1D (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$6.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$7 @ 0x1801F9B4A (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1801F9368 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(wil::details *this, wchar_t *a2, wchar_t *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW(a2, (size_t)a3, (wchar_t *)L"std::exception: %hs", v5);
  }
}
