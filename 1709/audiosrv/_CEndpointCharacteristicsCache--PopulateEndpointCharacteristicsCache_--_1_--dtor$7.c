/*
 * XREFs of _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$7 @ 0x1800B74C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
