/*
 * XREFs of _MPCProcessor::PostHitTestProcessing_::_1_::dtor$2 @ 0x1800CED03
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCProcessor::PostHitTestProcessing_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 104));
}
