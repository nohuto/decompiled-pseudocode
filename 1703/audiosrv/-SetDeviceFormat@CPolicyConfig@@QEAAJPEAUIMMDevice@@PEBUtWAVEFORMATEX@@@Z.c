/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DBFC
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18009D148 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18009D5E0 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x18009DE00 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DEA4 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E030 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::SetDeviceFormat(
        CPolicyConfig *this,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3)
{
  int AliasedEndpointCharacteristics; // ebx
  struct IUnknown *v7; // rcx
  int updated; // eax
  int v9; // eax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *v12; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v13[2]; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+28h] BYREF
  struct CEndpointCharacteristics *v15; // [rsp+88h] [rbp+38h] BYREF

  v13[1] = (struct IUnknown *)-2LL;
  v14 = 0;
  v13[0] = 0LL;
  v12 = 0LL;
  pv = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    AliasedEndpointCharacteristics = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(
                                       a2,
                                       &pv);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
                                         this,
                                         pv,
                                         0LL,
                                         &v12);
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics((const unsigned __int16 *)pv, 0, &v15);
        if ( AliasedEndpointCharacteristics >= 0 )
        {
          v7 = v13[0];
          if ( v13[0] != a2 )
          {
            ATL::AtlComQIPtrAssign(v13, a2, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990);
            v7 = v13[0];
          }
          if ( !v7
            || (AliasedEndpointCharacteristics = ((__int64 (__fastcall *)(struct IUnknown *, int *))v7->lpVtbl[3].Release)(
                                                   v7,
                                                   &v14),
                AliasedEndpointCharacteristics >= 0) )
          {
            AliasedEndpointCharacteristics = CPolicyConfig::SetDeviceFormatInternal(
                                               (struct IMMDevice *)a2,
                                               v14,
                                               eHostProcessConnector,
                                               a3);
            if ( AliasedEndpointCharacteristics >= 0 )
              goto LABEL_18;
            updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v15, 0, eHostProcessConnector, v12);
            if ( updated < 0 )
              AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormat", 2689, updated);
            if ( v14 )
            {
              v9 = CPolicyConfig::SetDeviceFormatHwAudioEngine(v15, v12);
              if ( v9 < 0 )
                AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormat", 2694, v9);
            }
            CEndpointCharacteristics::ClearMixFormatCache(v15);
          }
        }
      }
    }
  }
  else
  {
    AliasedEndpointCharacteristics = -2147467261;
  }
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormat", 2702, AliasedEndpointCharacteristics);
LABEL_18:
  if ( v15 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v15 + 16LL))(v15);
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v12);
  v12 = 0LL;
  if ( v13[0] )
    ((void (__fastcall *)(struct IUnknown *))v13[0]->lpVtbl->Release)(v13[0]);
  return (unsigned int)AliasedEndpointCharacteristics;
}
