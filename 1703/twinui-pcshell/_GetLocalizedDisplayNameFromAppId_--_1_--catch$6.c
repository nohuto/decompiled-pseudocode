/*
 * XREFs of _GetLocalizedDisplayNameFromAppId_::_1_::catch$6 @ 0x18019A208
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall GetLocalizedDisplayNameFromAppId_::_1_::catch_6(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 152),
                           (void *)0xBD,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
                           a4);
  return &loc_180050423;
}
