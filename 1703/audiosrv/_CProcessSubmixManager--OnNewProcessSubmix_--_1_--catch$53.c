/*
 * XREFs of _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$53 @ 0x18005BE67
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A1724 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch_53(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x1B6,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                            a4);
  return &loc_18002DDBC;
}
