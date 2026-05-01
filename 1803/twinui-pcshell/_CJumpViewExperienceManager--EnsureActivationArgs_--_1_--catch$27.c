/*
 * XREFs of _CJumpViewExperienceManager::EnsureActivationArgs_::_1_::catch$27 @ 0x1801767CD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CJumpViewExperienceManager::EnsureActivationArgs_::_1_::catch_27(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 104),
                           (void *)0x316,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
                           a4);
  return &loc_180176790;
}
