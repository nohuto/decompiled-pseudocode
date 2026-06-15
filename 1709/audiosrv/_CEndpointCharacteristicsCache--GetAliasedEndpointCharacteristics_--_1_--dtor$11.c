/*
 * XREFs of _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$11 @ 0x18003972F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
