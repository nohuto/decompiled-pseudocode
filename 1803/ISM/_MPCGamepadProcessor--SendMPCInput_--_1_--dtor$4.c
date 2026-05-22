/*
 * XREFs of _MPCGamepadProcessor::SendMPCInput_::_1_::dtor$4 @ 0x1800E863A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::SendMPCInput_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 136));
}
