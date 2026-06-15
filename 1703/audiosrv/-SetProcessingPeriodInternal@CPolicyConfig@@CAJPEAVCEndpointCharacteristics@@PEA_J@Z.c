/*
 * XREFs of ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x18009ED34
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180002CB0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098E48 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x18009ECC0 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800BED90 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriodInternal(struct CEndpointCharacteristics *a1, BYTE *a2)
{
  int v2; // ebx
  struct tagPROPVARIANT v4; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
  {
    v2 = -2147467261;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a2 && (unsigned __int64)(*(_QWORD *)a2 - 50000LL) > 0xE7EF0 )
  {
    v2 = -2005139386;
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriodInternal", 3510, v2);
    return (unsigned int)v2;
  }
  v4.bstrblobVal.pData = a2;
  *(_QWORD *)&v4.vt = 65LL;
  v4.hVal.QuadPart = 8LL;
  v2 = CEndpointCharacteristics::SetPropertyStoreProperty(a1, &PKEY_AudioEngine_Period, &v4);
  if ( v2 < 0 )
    goto LABEL_9;
  return (unsigned int)v2;
}
