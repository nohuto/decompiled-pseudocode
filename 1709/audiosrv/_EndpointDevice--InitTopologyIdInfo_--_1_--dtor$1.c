/*
 * XREFs of _EndpointDevice::InitTopologyIdInfo_::_1_::dtor$1 @ 0x1800E9E6D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointDevice::InitTopologyIdInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
