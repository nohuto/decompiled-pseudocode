/*
 * XREFs of _GetDevicePropertyStore_::_1_::dtor$0 @ 0x1800845DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetDevicePropertyStore_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
