/*
 * XREFs of _AgileRegistrationList::Unregister_::_1_::dtor$0 @ 0x180198E64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AgileRegistrationList::Unregister_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>::~com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
