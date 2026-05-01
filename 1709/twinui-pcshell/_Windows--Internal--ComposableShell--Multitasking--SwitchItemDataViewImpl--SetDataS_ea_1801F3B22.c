/*
 * XREFs of _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor$23 @ 0x1801F3B22
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018268 (--1-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor_23(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 216) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 216) &= ~2u;
    return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 128));
  }
  return result;
}
