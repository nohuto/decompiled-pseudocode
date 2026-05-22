/*
 * XREFs of _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$4 @ 0x1800E810E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AnimationDataProvider::AnimationDataProvider_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>((__int64 *)(a2 + 144));
}
