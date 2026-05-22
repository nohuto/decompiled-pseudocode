/*
 * XREFs of _MPCGestureHandlerManager::IsInjecting_::_1_::dtor$45 @ 0x1800CF17B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGestureHandlerManager::IsInjecting_::_1_::dtor_45(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 104));
}
