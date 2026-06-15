/*
 * XREFs of _lambda_c1fb52f6c005678af697d2769b0a97a1_::operator() @ 0x1800B84D4
 * Callers:
 *     wil::details::lambda_call__lambda_c1fb52f6c005678af697d2769b0a97a1___::_lambda_call__lambda_c1fb52f6c005678af697d2769b0a97a1___ @ 0x1800B8254 (wil--details--lambda_call__lambda_c1fb52f6c005678af697d2769b0a97a1___--_lambda_call__lambda_c1fb.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BD81C (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDC84 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

__int64 __fastcall lambda_c1fb52f6c005678af697d2769b0a97a1_::operator()(__int64 a1)
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
      "CPolicyConfig::SetDeviceFormat::<lambda_c1fb52f6c005678af697d2769b0a97a1>::operator ()",
      2705,
      updated);
  if ( **(_DWORD **)(a1 + 16) )
  {
    v3 = CPolicyConfig::SetDeviceFormatHwAudioEngine(
           **(struct CEndpointCharacteristics ***)a1,
           **(const struct tWAVEFORMATEX ***)(a1 + 8));
    if ( v3 < 0 )
      AudSrvTraceLoggingErrorHelper(
        "CPolicyConfig::SetDeviceFormat::<lambda_c1fb52f6c005678af697d2769b0a97a1>::operator ()",
        2712,
        v3);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(**(_QWORD **)a1, 0);
}
