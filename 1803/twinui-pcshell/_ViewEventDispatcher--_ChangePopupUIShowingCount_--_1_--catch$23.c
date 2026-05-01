/*
 * XREFs of _ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::catch$23 @ 0x1801CFC5E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 216),
                           (void *)0x4C1,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           a4);
  return &loc_1801CFC1E;
}
