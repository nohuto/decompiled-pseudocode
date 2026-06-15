/*
 * XREFs of _SetOffloadDeviceFormat_::_1_::dtor$1 @ 0x1800639EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetOffloadDeviceFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
