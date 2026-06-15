/*
 * XREFs of _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$2 @ 0x1800BDFDD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
