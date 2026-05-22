/*
 * XREFs of _MPCGestureHandlerManager::IsInjecting_::_1_::dtor$49 @ 0x1800E6617
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGestureHandlerManager::IsInjecting_::_1_::dtor_49(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 104));
}
