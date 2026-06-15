/*
 * XREFs of _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$10 @ 0x180082095
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveConnectorFormatFromStreamFormat_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
