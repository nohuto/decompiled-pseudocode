/*
 * XREFs of _EndpointCollection::GetDeviceByIdString_::_1_::dtor$2 @ 0x1800E8951
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointCollection::GetDeviceByIdString_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
