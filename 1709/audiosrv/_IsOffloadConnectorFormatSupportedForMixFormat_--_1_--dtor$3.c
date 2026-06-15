/*
 * XREFs of _IsOffloadConnectorFormatSupportedForMixFormat_::_1_::dtor$3 @ 0x18008517F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsOffloadConnectorFormatSupportedForMixFormat_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
