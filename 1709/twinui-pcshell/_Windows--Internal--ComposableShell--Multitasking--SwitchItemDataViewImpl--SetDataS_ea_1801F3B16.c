/*
 * XREFs of _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor$11 @ 0x1801F3B16
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
