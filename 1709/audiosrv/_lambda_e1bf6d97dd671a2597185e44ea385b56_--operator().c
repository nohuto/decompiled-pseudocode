/*
 * XREFs of _lambda_e1bf6d97dd671a2597185e44ea385b56_::operator() @ 0x18007F85C
 * Callers:
 *     wil::details::lambda_call__lambda_e1bf6d97dd671a2597185e44ea385b56___::_lambda_call__lambda_e1bf6d97dd671a2597185e44ea385b56___ @ 0x18007F468 (wil--details--lambda_call__lambda_e1bf6d97dd671a2597185e44ea385b56___--_lambda_call__lambda_e1bf.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18008767C (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x180087B64 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B8530 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

__int64 __fastcall lambda_e1bf6d97dd671a2597185e44ea385b56_::operator()(__int64 a1)
{
  int updated; // eax
  int v3; // eax

  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              **(CEndpointCharacteristics ***)a1,
              0,
              eHostProcessConnector,
              **(const struct tWAVEFORMATEX ***)(a1 + 8));
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper(
      "CPolicyConfig::SetDeviceFormat::<lambda_e1bf6d97dd671a2597185e44ea385b56>::operator ()",
      2694,
      updated);
  if ( **(_DWORD **)(a1 + 16) )
  {
    v3 = CPolicyConfig::SetDeviceFormatHwAudioEngine(
           **(struct CEndpointCharacteristics ***)a1,
           **(const struct tWAVEFORMATEX ***)(a1 + 8));
    if ( v3 < 0 )
      AudSrvTraceLoggingErrorHelper(
        "CPolicyConfig::SetDeviceFormat::<lambda_e1bf6d97dd671a2597185e44ea385b56>::operator ()",
        2701,
        v3);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(**(struct IPropertyStore ****)a1, 0);
}
