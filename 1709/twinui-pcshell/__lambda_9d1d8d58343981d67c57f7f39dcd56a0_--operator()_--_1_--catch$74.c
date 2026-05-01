/*
 * XREFs of __lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()_::_1_::catch$74 @ 0x1801EF2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180073C98 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()_::_1_::catch_74(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x61,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
    a4);
  return &loc_18013A609;
}
