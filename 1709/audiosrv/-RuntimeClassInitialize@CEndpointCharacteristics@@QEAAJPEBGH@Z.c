/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800B7AFC
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800AF510 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800B38F0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800B3FC8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B81AC (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x1800B9BC8 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x1800BA5B4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C9DB0 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
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
  int v11; // eax
  struct IUnknown *v12; // rax
  struct IUnknown *v13; // rcx
  struct IUnknown *v14; // rcx
  int v15; // eax
  int v16; // eax
  char *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  struct IUnknown *v21; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v22; // [rsp+38h] [rbp-48h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  int v26; // [rsp+58h] [rbp-28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-20h] BYREF
  void *v28; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v29[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct tWAVEFORMATEX *v31; // [rsp+C0h] [rbp+40h] BYREF
  int v32; // [rsp+D8h] [rbp+58h] BYREF

  v29[1] = -2LL;
  ppv = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v6 = 0;
  LOBYTE(v31) = 0;
  *((_QWORD *)this + 25) = 0LL;
  pvar = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v7 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v7 >= 0 )
  {
    v8 = (struct IUnknown **)((char *)this + 16);
    v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)ppv + 40LL))(
           ppv,
           a2,
           (char *)this + 16);
    if ( v7 >= 0 )
    {
      ClassFromEndpointId = GetClassFromEndpointId(a2);
      *((_DWORD *)this + 6) = ClassFromEndpointId;
      v10 = (struct IPropertyStore **)((char *)this + 32);
      if ( ClassFromEndpointId )
      {
        v12 = *v8;
        v28 = &unk_18014AED0;
        v26 = 1;
        v29[0] = v12;
        v11 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
                (char *)this + 32,
                v29,
                &v26,
                &v28);
      }
      else
      {
        v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, char *))(*v8)->lpVtbl[1].AddRef)(
                *v8,
                2LL,
                (char *)this + 32);
      }
      v7 = v11;
      if ( v11 >= 0 )
      {
        v13 = v21;
        if ( v21 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v21, *v8, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
          v13 = v21;
        }
        if ( !v13 )
          goto LABEL_10;
        ((void (__fastcall *)(struct IUnknown *, _QWORD, char *))v13->lpVtbl[1].Release)(v13, 0LL, (char *)this + 56);
        v14 = v22;
        if ( v22 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v22, *v8, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
          v14 = v22;
        }
        if ( !v14 )
        {
LABEL_10:
          v7 = -2147467262;
          goto LABEL_42;
        }
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v14->lpVtbl[1].QueryInterface)(v14, &v32);
        if ( v7 >= 0 )
        {
          *((_DWORD *)this + 37) = v32 != 0;
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
                v16 = v24;
              }
              else
              {
                if ( (_WORD)pvar )
                {
                  v7 = -2147418113;
                  goto LABEL_42;
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
                *((_QWORD *)this + 19) = v24;
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
                v7 = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this, (bool *)&v31);
                if ( v7 < 0 )
                  goto LABEL_42;
                v6 = (char)v31;
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
              if ( a3 && !v32 )
              {
                v31 = 0LL;
                if ( (int)CSpatialProperties::MakeActive(
                            (CEndpointCharacteristics *)((char *)this + 1560),
                            v6,
                            (struct IMMDevice *)*v8,
                            *v10) >= 0
                  && (int)CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, 0, &v31) >= 0
                  && v31 )
                {
                  CEndpointCharacteristics::SetSpatialAudioSettings(this, 1, eHostProcessConnector, v31);
                }
                v19 = SpatialPolicy::DetectComboEndpoint((struct IMMDevice *)*v8);
                if ( v19 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x16A,
                    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                    (const char *)(unsigned int)v19);
              }
            }
          }
        }
      }
    }
  }
LABEL_42:
  PropVariantClear(&pvar);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v7;
}
