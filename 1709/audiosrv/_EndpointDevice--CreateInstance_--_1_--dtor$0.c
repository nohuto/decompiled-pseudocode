/*
 * XREFs of _EndpointDevice::CreateInstance_::_1_::dtor$0 @ 0x1800E944A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointDevice::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
