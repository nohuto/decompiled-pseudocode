/*
 * XREFs of _MPCClickerProcessor::OnGazeUpdate_::_1_::dtor$6 @ 0x1800E5F2E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCClickerProcessor::OnGazeUpdate_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 40));
}
