/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$5 @ 0x1800690EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceGraphForStream_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>(a2 + 96);
}
