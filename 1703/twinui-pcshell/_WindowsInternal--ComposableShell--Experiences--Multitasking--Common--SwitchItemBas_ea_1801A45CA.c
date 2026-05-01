/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::get_ApplicationId_::_1_::catch$1 @ 0x1801A45CA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::get_ApplicationId_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x2D,
                           (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemBase.h",
                           a4);
  return &loc_1801659CA;
}
