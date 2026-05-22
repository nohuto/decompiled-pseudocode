/*
 * XREFs of _MPCGestureHandlerManager::DownLevelTo2D_::_1_::dtor$54 @ 0x1800E65F3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGestureHandlerManager::DownLevelTo2D_::_1_::dtor_54(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 48));
}
