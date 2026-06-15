/*
 * XREFs of _CPolicyConfig::GetPropertyStoreProperty_::_1_::dtor$0_0 @ 0x180037C14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::GetPropertyStoreProperty_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
