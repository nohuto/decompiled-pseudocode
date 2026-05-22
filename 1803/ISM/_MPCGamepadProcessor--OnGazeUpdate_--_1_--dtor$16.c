/*
 * XREFs of _MPCGamepadProcessor::OnGazeUpdate_::_1_::dtor$16 @ 0x1800E84C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::OnGazeUpdate_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 56));
}
