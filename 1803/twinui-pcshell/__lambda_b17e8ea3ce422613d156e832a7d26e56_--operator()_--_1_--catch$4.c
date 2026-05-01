/*
 * XREFs of __lambda_b17e8ea3ce422613d156e832a7d26e56_::operator()_::_1_::catch$4 @ 0x1800A04C2
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010892C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_b17e8ea3ce422613d156e832a7d26e56_::operator()_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x8B,
    (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
    a4);
  return &loc_1800A0456;
}
