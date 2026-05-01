/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::get_SwitchItems_::_1_::dtor$0 @ 0x1801A446E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::get_SwitchItems_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>::~com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
