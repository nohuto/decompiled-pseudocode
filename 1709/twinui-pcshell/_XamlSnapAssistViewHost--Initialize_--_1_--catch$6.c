/*
 * XREFs of _XamlSnapAssistViewHost::Initialize_::_1_::catch$6 @ 0x1801F3E57
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027758 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall XamlSnapAssistViewHost::Initialize_::_1_::catch_6(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x55,
                            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                            a4);
  return &loc_18016EDCD;
}
