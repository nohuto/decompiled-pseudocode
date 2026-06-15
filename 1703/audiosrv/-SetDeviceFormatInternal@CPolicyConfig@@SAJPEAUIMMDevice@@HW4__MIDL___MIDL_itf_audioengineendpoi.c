/*
 * XREFs of ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E030
 * Callers:
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009D248 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DBFC (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DEA4 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::SetDeviceFormatInternal(
        struct IMMDevice *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct tWAVEFORMATEX *a4)
{
  int AliasedEndpointCharacteristics; // ebx
  LPVOID pv[3]; // [rsp+20h] [rbp-18h] BYREF
  struct CEndpointCharacteristics *v10; // [rsp+40h] [rbp+8h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[0] = 0LL;
  v10 = 0LL;
  if ( a1 )
  {
    AliasedEndpointCharacteristics = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, pv);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics((const unsigned __int16 *)pv[0], 0, &v10);
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        CEndpointCharacteristics::ClearMixFormatCache(v10);
        if ( !a2
          || !a4
          || (AliasedEndpointCharacteristics = CPolicyConfig::SetDeviceFormatHwAudioEngine(v10, a4),
              AliasedEndpointCharacteristics >= 0) )
        {
          AliasedEndpointCharacteristics = CPolicyConfig::SetDeviceFormatSwAudioEngine(v10, a3, a4);
          if ( AliasedEndpointCharacteristics >= 0 )
            goto LABEL_10;
        }
      }
    }
  }
  else
  {
    AliasedEndpointCharacteristics = -2147467261;
  }
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatInternal", 2766, AliasedEndpointCharacteristics);
LABEL_10:
  if ( v10 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v10 + 16LL))(v10);
  CoTaskMemFree(pv[0]);
  return (unsigned int)AliasedEndpointCharacteristics;
}
