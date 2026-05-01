/*
 * XREFs of _AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::catch$2 @ 0x1801F598B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027758 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x8B,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appvieweventhelpers.h",
                           a4);
  return &loc_180190F32;
}
