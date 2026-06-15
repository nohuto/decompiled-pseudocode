/*
 * XREFs of ?SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18009EFF8
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800BED90 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x1800CDFFC (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetStreamGroupFormatInternal(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificStreamGroupFormatKey; // ebx
  struct tagPROPVARIANT v10; // [rsp+20h] [rbp-68h] BYREF
  struct _GUID v11; // [rsp+40h] [rbp-48h] BYREF
  struct _tagpropertykey v12; // [rsp+50h] [rbp-38h] BYREF

  memset(&v10, 0, sizeof(v10));
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificStreamGroupFormatKey = -2004287480;
LABEL_7:
      AudSrvTraceLoggingErrorHelper(
        "CPolicyConfig::SetStreamGroupFormatInternal",
        3941,
        ProcessingModeSpecificStreamGroupFormatKey);
      return (unsigned int)ProcessingModeSpecificStreamGroupFormatKey;
    }
    v10.bstrblobVal.pData = (BYTE *)a4;
    v10.vt = 65;
    v10.lVal = a4->cbSize + 18;
  }
  v11 = *a3;
  ProcessingModeSpecificStreamGroupFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(
                                                 &v11,
                                                 a2 == eKeywordDetectorConnector,
                                                 &v12);
  if ( ProcessingModeSpecificStreamGroupFormatKey < 0 )
    goto LABEL_7;
  ProcessingModeSpecificStreamGroupFormatKey = CEndpointCharacteristics::SetPropertyStoreProperty(this, &v12, &v10);
  if ( ProcessingModeSpecificStreamGroupFormatKey < 0 )
    goto LABEL_7;
  return (unsigned int)ProcessingModeSpecificStreamGroupFormatKey;
}
