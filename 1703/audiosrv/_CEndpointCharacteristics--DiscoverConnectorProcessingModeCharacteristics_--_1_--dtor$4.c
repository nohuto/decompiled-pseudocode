/*
 * XREFs of _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$4 @ 0x1800BCACA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return ATL::CAutoPtr<CConnectorProcessingModeCharacteristics>::~CAutoPtr<CConnectorProcessingModeCharacteristics>(
           (CConnectorProcessingModeCharacteristics **)(a2 + 112),
           a2);
}
