/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::get_Item_::_1_::catch$0 @ 0x1801A4361
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::get_Item_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x23,
                           (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemCollectionEventArgs.h",
                           a4);
  return &loc_180160A45;
}
