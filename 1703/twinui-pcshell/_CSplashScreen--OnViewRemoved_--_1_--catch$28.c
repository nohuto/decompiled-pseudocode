/*
 * XREFs of _CSplashScreen::OnViewRemoved_::_1_::catch$28 @ 0x18019AB1E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800711B8 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CSplashScreen::OnViewRemoved_::_1_::catch_28(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x4C,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
    a4);
  return &loc_18006F66B;
}
