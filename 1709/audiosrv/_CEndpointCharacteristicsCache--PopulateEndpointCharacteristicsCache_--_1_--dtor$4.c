/*
 * XREFs of _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$4 @ 0x1800B749C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
