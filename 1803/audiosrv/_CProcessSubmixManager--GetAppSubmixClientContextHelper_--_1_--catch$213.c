/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$213 @ 0x1800D6D41
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A6AEC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch_213(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 248) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 232),
                            (void *)0x1AC,
                            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                            a4);
  return &loc_1800D6CF8;
}
