/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x180050038 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800497AC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180050E64 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180051DF8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800521D4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x180054E10 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005ED9C (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x1800EE6F0 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        int a3)
{
  char v6; // r12
  int v7; // ebx
  struct IUnknown **v8; // rsi
  int ClassFromEndpointId; // eax
  struct IPropertyStore **v10; // r14
  struct IUnknown *v11; // rcx
  int v12; // eax
  struct IUnknown *v13; // rcx
  struct IUnknown *v14; // rcx
  int v15; // eax
  int v16; // eax
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  int ppv; // [rsp+20h] [rbp-60h]
  struct IUnknown *v23; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v24; // [rsp+38h] [rbp-48h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h]
  int v28; // [rsp+58h] [rbp-28h] BYREF
  LPVOID v29; // [rsp+60h] [rbp-20h] BYREF
  void *v30; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct tWAVEFORMATEX *v33; // [rsp+C0h] [rbp+40h] BYREF
  int v34; // [rsp+D8h] [rbp+58h] BYREF

  v31[1] = -2LL;
  v29 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v6 = 0;
  LOBYTE(v33) = 0;
  *((_QWORD *)this + 25) = 0LL;
  pvar = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v7 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v29);
  if ( v7 >= 0 )
  {
    v8 = (struct IUnknown **)((char *)this + 16);
    v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)v29 + 40LL))(
           v29,
           a2,
           (char *)this + 16);
    if ( v7 >= 0 )
    {
      ClassFromEndpointId = GetClassFromEndpointId(a2);
      *((_DWORD *)this + 6) = ClassFromEndpointId;
      v10 = (struct IPropertyStore **)((char *)this + 32);
      v11 = *v8;
      if ( ClassFromEndpointId )
      {
        v30 = &unk_180189070;
        v28 = 1;
        v31[0] = v11;
        v12 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
                (char *)this + 32,
                v31,
                &v28,
                &v30);
      }
      else
      {
        v12 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, char *))v11->lpVtbl[1].AddRef)(
                v11,
                2LL,
                (char *)this + 32);
      }
      v7 = v12;
      if ( v12 >= 0 )
      {
        v13 = v23;
        if ( v23 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v23, *v8, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
          v13 = v23;
        }
        if ( !v13 )
          goto LABEL_45;
        ((void (__fastcall *)(struct IUnknown *, _QWORD, char *))v13->lpVtbl[1].Release)(v13, 0LL, (char *)this + 56);
        v14 = v24;
        if ( v24 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v24, *v8, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
          v14 = v24;
        }
        if ( !v14 )
        {
LABEL_45:
          v7 = -2147467262;
          goto LABEL_37;
        }
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v14->lpVtbl[1].QueryInterface)(v14, &v34);
        if ( v7 >= 0 )
        {
          *((_DWORD *)this + 37) = v34 != 0;
          PropVariantClear(&pvar);
          if ( ((int (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))(*v10)->lpVtbl->GetValue)(
                 *v10,
                 &PKEY_Endpoint_KeywordDetector_ConnectorId,
                 &pvar) < 0
            || (v15 = 1, (_WORD)pvar != 19) )
          {
            v15 = 0;
          }
          *((_DWORD *)this + 44) = v15;
          v7 = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this, a3 != 0);
          if ( v7 >= 0 )
          {
            v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v10)->lpVtbl->GetValue)(
                   *v10,
                   &PKEY_AudioEngine_LatencyCoefficient,
                   &pvar);
            if ( v7 >= 0 )
            {
              if ( (_WORD)pvar == 19 )
              {
                v16 = v26;
              }
              else
              {
                if ( (_WORD)pvar )
                {
                  v7 = -2147418113;
                  goto LABEL_37;
                }
                v16 = 0;
              }
              *((_DWORD *)this + 36) = v16;
              PropVariantClear(&pvar);
              if ( ((int (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v10)->lpVtbl->GetValue)(
                     *v10,
                     &PKEY_MMDEVAPI_ActiveTime,
                     &pvar) >= 0
                && (_WORD)pvar == 21 )
              {
                *((_QWORD *)this + 19) = v26;
              }
              else
              {
                *((_QWORD *)this + 19) = 0LL;
              }
              *((_DWORD *)this + 41) = 0;
              *((_DWORD *)this + 43) = 0;
              *((_DWORD *)this + 45) = 0;
              if ( a3 )
              {
                v7 = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this, (bool *)&v33);
                if ( v7 < 0 )
                  goto LABEL_37;
                v6 = (char)v33;
              }
              v17 = (char *)this + 668;
              v18 = 4LL;
              do
              {
                *(v17 - 384) = 1;
                *v17 = 1;
                v17[384] = 1;
                v17 += 96;
                --v18;
              }
              while ( v18 );
              if ( a3 && !v34 )
              {
                v33 = 0LL;
                if ( (int)CSpatialProperties::MakeActive(
                            (CEndpointCharacteristics *)((char *)this + 1624),
                            v6,
                            (struct IMMDevice *)*v8,
                            *v10) >= 0
                  && (int)CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, 0, &v33) >= 0
                  && v33 )
                {
                  LOBYTE(v19) = 1;
                  CEndpointCharacteristics::SetSpatialAudioSettings(
                    (struct IMMDevice **)this,
                    v19,
                    eHostProcessConnector,
                    v33);
                }
                v20 = SpatialPolicy::DetectComboEndpoint((struct IMMDevice *)*v8);
                if ( v20 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x167,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                    (const char *)(unsigned int)v20,
                    ppv);
              }
            }
          }
        }
      }
    }
  }
LABEL_37:
  PropVariantClear(&pvar);
  if ( v23 )
    ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
  if ( v24 )
    ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
  return (unsigned int)v7;
}
