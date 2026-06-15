/*
 * XREFs of _EndpointRequiresAC97VistaShim_::_1_::dtor$5 @ 0x18008B11B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointRequiresAC97VistaShim_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
