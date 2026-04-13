/*
 * XREFs of __lambda_ff70887c7dc239c1b1c39abf69cf1ecd_::operator()_::_1_::catch$3 @ 0x1800B789D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180022168 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_ff70887c7dc239c1b1c39abf69cf1ecd_::operator()_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x11B,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           a4);
  return &loc_180049364;
}
