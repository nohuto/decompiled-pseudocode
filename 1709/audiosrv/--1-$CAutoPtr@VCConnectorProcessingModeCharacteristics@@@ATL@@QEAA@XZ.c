/*
 * XREFs of ??1?$CAutoPtr@VCConnectorProcessingModeCharacteristics@@@ATL@@QEAA@XZ @ 0x1800AFCD8
 * Callers:
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$4 @ 0x1800B3362 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$4.c)
 * Callees:
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800B1080 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CConnectorProcessingModeCharacteristics>::~CAutoPtr<CConnectorProcessingModeCharacteristics>(
        CConnectorProcessingModeCharacteristics **a1,
        unsigned int a2)
{
  CConnectorProcessingModeCharacteristics *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
