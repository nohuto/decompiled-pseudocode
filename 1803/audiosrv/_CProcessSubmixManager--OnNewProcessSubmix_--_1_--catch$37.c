/*
 * XREFs of _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$37 @ 0x1800695E9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A6AEC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch_37(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x22D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           a4);
  return &loc_180022D56;
}
