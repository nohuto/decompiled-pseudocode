/*
 * XREFs of _MPCProcessor::PostHitTestProcessing_::_1_::dtor$3 @ 0x1800CED0F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCProcessor::PostHitTestProcessing_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 104));
}
