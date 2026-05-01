/*
 * XREFs of _LoadDataFromStateRepository_::_1_::catch$3 @ 0x1801E603B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027758 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall LoadDataFromStateRepository_::_1_::catch_3(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 152),
                           (void *)0x66,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           a4);
  return &loc_1800070E2;
}
