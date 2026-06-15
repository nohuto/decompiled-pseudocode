/*
 * XREFs of ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180088120
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180030718 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800B8198 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 */

__int64 __fastcall CPolicyConfig::SetDevicePipeFormatInternal(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificDevicePipeFormatKey; // ebx
  struct tagPROPVARIANT v10; // [rsp+20h] [rbp-50h] BYREF
  struct _GUID v11; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v12; // [rsp+50h] [rbp-20h] BYREF

  memset(&v10, 0, sizeof(v10));
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificDevicePipeFormatKey = -2004287480;
LABEL_8:
      AudSrvTraceLoggingErrorHelper(
        "CPolicyConfig::SetDevicePipeFormatInternal",
        3890,
        ProcessingModeSpecificDevicePipeFormatKey);
      return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
    }
    v10.bstrblobVal.pData = (BYTE *)a4;
    v10.vt = 65;
    v10.lVal = a4->cbSize + 18;
  }
  else
  {
    v10.vt = 0;
  }
  v11 = *a3;
  ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                &v11,
                                                a2 == eKeywordDetectorConnector,
                                                &v12);
  if ( ProcessingModeSpecificDevicePipeFormatKey < 0 )
    goto LABEL_8;
  ProcessingModeSpecificDevicePipeFormatKey = CEndpointCharacteristics::SetPropertyStoreProperty(this, &v12, &v10);
  if ( ProcessingModeSpecificDevicePipeFormatKey < 0 )
    goto LABEL_8;
  return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
}
