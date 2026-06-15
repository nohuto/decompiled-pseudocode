/*
 * XREFs of ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18009EA34
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000D2D0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800BED90 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x1800CDFA0 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetMixFormatInternal(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX *a4)
{
  __int64 v8; // rbx
  int ProcessingModeSpecificMixFormatKey; // edi
  __int64 v10; // rax
  struct tagPROPVARIANT v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h]
  __int64 v14; // [rsp+50h] [rbp-19h]
  struct _GUID v15; // [rsp+60h] [rbp-9h] BYREF
  struct _tagpropertykey v16; // [rsp+70h] [rbp+7h] BYREF

  v13 = -2LL;
  v8 = 0LL;
  if ( !this )
  {
    ProcessingModeSpecificMixFormatKey = -2147467261;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetMixFormatInternal", 3833, ProcessingModeSpecificMixFormatKey);
    goto LABEL_18;
  }
  memset(&v12, 0, sizeof(v12));
  if ( a2 == eOffloadConnector )
  {
    ProcessingModeSpecificMixFormatKey = 0;
    goto LABEL_18;
  }
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificMixFormatKey = -2004287480;
      goto LABEL_17;
    }
    v12.vt = 65;
    v12.lVal = a4->cbSize + 18;
    v12.bstrblobVal.pData = (BYTE *)a4;
  }
  else
  {
    v12.vt = 0;
  }
  v15 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(
                                         &v15,
                                         a2 == eKeywordDetectorConnector,
                                         &v16);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_17;
  v8 = *((_QWORD *)this + 2);
  v14 = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  ProcessingModeSpecificMixFormatKey = CEndpointCharacteristics::SetPropertyStoreProperty(this, &v16, &v12);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_17;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, a2, 0LL, 0LL, &v15);
  v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&v15.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&v15.Data1 )
    v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)v15.Data4;
  if ( !v10 )
    ProcessingModeSpecificMixFormatKey = CEndpointCharacteristics::SetPropertyStoreProperty(
                                           this,
                                           &PKEY_AudioEngine_MixFormat,
                                           &v12);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_17;
LABEL_18:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
