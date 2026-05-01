/*
 * XREFs of _CSplashScreen::OnViewRemoved_::_1_::catch$34 @ 0x180138A9C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010892C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CSplashScreen::OnViewRemoved_::_1_::catch_34(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x4C,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
    a4);
  return &loc_180138A7C;
}
