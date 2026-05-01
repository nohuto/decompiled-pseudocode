/*
 * XREFs of _XamlAltTabViewHost::Initialize_::_1_::catch$8 @ 0x1802173EB
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall XamlAltTabViewHost::Initialize_::_1_::catch_8(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x59,
                            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                            a4);
  return &loc_18021734E;
}
