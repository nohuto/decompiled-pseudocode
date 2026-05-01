/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetProcessIdForAppViewId_::_1_::catch$4 @ 0x1800B1D34
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetProcessIdForAppViewId_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x6D,
                            (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                            a4);
  return &loc_18001F6CB;
}
