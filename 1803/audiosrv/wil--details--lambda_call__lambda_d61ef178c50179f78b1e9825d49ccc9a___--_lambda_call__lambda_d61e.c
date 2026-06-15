/*
 * XREFs of wil::details::lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___::_lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___ @ 0x18009A1A4
 * Callers:
 *     _GetFxClsids_::_1_::dtor$3 @ 0x1800684E4 (_GetFxClsids_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::UpdateAPOEnableStatus_::_1_::dtor$0 @ 0x18006AC3C (_CEndpointCharacteristics--UpdateAPOEnableStatus_--_1_--dtor$0.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$5 @ 0x1800C6DFC (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::GetAvailableConnectorCount_::_1_::dtor$1 @ 0x1800EB110 (_CEndpointCharacteristics--GetAvailableConnectorCount_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x18010AF8A (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x18010AFA2 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___::_lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
