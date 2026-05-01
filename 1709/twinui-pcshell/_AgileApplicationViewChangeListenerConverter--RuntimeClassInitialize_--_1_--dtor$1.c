/*
 * XREFs of _AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801E9B9B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018268 (--1-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 72));
  }
  return result;
}
