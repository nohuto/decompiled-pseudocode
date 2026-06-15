/*
 * XREFs of _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$10 @ 0x1800B74E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
