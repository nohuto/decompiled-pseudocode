/*
 * XREFs of _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$9 @ 0x180081A4B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
