/*
 * XREFs of _AppViewSwitchItemDataSource::CreateSwitchItemForView_::_1_::catch$89 @ 0x1801A40C4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AppViewSwitchItemDataSource::CreateSwitchItemForView_::_1_::catch_89(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0xB8,
                            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
                            a4);
  return &loc_18015D9B1;
}
