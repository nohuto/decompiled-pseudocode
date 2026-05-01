/*
 * XREFs of _AgileRegistrationList::Register_::_1_::dtor$3 @ 0x1801E776C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018268 (--1-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall AgileRegistrationList::Register_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 96));
  }
  return result;
}
