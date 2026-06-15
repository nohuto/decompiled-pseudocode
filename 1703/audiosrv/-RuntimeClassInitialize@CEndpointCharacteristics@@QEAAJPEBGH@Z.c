/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800455E8 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800330C0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@@Z @ 0x18003DC7C (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180041F34 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180042F88 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@@Z @ 0x1800C0118 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@@Details@WRL@Micr.c)
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
  _QWORD *v10; // r14
  int v11; // eax
  struct IUnknown *v12; // rcx
  struct IUnknown *v13; // rcx
  int v14; // eax
  int v15; // eax
  char *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  int ppv; // [rsp+20h] [rbp-50h]
  struct IUnknown *v21; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v22; // [rsp+38h] [rbp-38h] BYREF
  LPVOID v23; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-28h] BYREF
  PROPVARIANT pvar; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  __int64 v27; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct tWAVEFORMATEX *v29; // [rsp+B0h] [rbp+40h] BYREF
  int v30; // [rsp+C8h] [rbp+58h] BYREF

  v24[1] = -2LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v6 = 0;
  LOBYTE(v29) = 0;
  *((_QWORD *)this + 25) = 0LL;
  pvar = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v7 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v23);
  if ( v7 >= 0 )
  {
    v8 = (struct IUnknown **)((char *)this + 16);
    v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)v23 + 40LL))(
           v23,
           a2,
           (char *)this + 16);
    if ( v7 >= 0 )
    {
      ClassFromEndpointId = GetClassFromEndpointId(a2);
      *((_DWORD *)this + 6) = ClassFromEndpointId;
      v10 = (_QWORD *)((char *)this + 32);
      if ( ClassFromEndpointId )
      {
        v24[0] = *v8;
        v11 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &>(
                (char *)this + 32,
                v24);
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
        v12 = v21;
        if ( v21 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v21, *v8, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990);
          v12 = v21;
        }
        if ( !v12 )
          goto LABEL_45;
        ((void (__fastcall *)(struct IUnknown *, _QWORD, char *))v12->lpVtbl[1].Release)(v12, 0LL, (char *)this + 56);
        v13 = v22;
        if ( v22 != *v8 )
        {
          ATL::AtlComQIPtrAssign(&v22, *v8, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
          v13 = v22;
        }
        if ( !v13 )
        {
LABEL_45:
          v7 = -2147467262;
          goto LABEL_37;
        }
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v13->lpVtbl[1].QueryInterface)(v13, &v30);
        if ( v7 >= 0 )
        {
          *((_DWORD *)this + 37) = v30 != 0;
          v7 = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this, a3 != 0);
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v10 + 40LL))(
                   *v10,
                   &PKEY_AudioEngine_LatencyCoefficient,
                   &pvar);
            if ( v7 >= 0 )
            {
              if ( (_WORD)pvar == 19 )
              {
                v14 = v26;
              }
              else
              {
                if ( (_WORD)pvar )
                {
                  v7 = -2147418113;
                  goto LABEL_37;
                }
                v14 = 0;
              }
              *((_DWORD *)this + 36) = v14;
              PropVariantClear(&pvar);
              if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v10 + 40LL))(
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
              PropVariantClear(&pvar);
              if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)*v10 + 40LL))(
                     *v10,
                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                     &pvar) < 0
                || (v15 = 1, (_WORD)pvar != 19) )
              {
                v15 = 0;
              }
              *((_DWORD *)this + 44) = v15;
              *((_DWORD *)this + 41) = 0;
              *((_DWORD *)this + 43) = 0;
              *((_DWORD *)this + 45) = 0;
              if ( a3 )
              {
                v7 = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this, (bool *)&v29);
                if ( v7 < 0 )
                  goto LABEL_37;
                v6 = (char)v29;
              }
              v16 = (char *)this + 660;
              v17 = 4LL;
              do
              {
                *(v16 - 384) = 1;
                *v16 = 1;
                v16[384] = 1;
                v16 += 96;
                --v17;
              }
              while ( v17 );
              if ( a3 && !v30 )
              {
                v29 = 0LL;
                if ( (int)CSpatialProperties::MakeActive(
                            (CEndpointCharacteristics *)((char *)this + 1504),
                            v6,
                            (struct IMMDevice *)*v8) >= 0
                  && (int)CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, 0, &v29) >= 0
                  && v29 )
                {
                  CEndpointCharacteristics::SetSpatialAudioSettings(this, 1u, eHostProcessConnector, v29);
                }
                v18 = SpatialPolicy::DetectComboEndpoint((struct IMMDevice *)*v8);
                if ( v18 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x15D,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                    (const char *)(unsigned int)v18,
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
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v23 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)v7;
}
