/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B94C8
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDFF8 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180050DD4 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180052E4C (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___::_lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___ @ 0x180063950 (wil--details--lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___--_lambda_call__lambda_8ed1.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180095B88 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180095BDC (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180095C9C (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800B8B74 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800BA578 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800BAB48 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800BE2F8 (-SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BE914 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800BEF98 (-SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BF5F8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=34
__int64 __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector(struct CEndpointCharacteristics *a1, __int32 a2)
{
  int v2; // esi
  struct IAudioMediaType *v3; // r14
  unsigned int v4; // r13d
  char *SupportedConnectorModesInternal; // rax
  GUID v6; // xmm6
  int ConnectorFormatForProcessingMode; // eax
  unsigned int v8; // r12d
  struct tWAVEFORMATEX *v9; // r15
  int v10; // eax
  struct IAudioMediaType *v11; // rdi
  struct _GUID *v12; // rdx
  int v13; // eax
  struct IUnknown *v14; // rbx
  int v15; // eax
  struct IAudioMediaType *v16; // rsi
  const struct tWAVEFORMATEX *v17; // rax
  unsigned __int64 v18; // rax
  struct tWAVEFORMATEX *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  int APOSupportedProcessingModes; // eax
  int v23; // r15d
  int v24; // eax
  struct IAudioMediaType *v25; // rbx
  struct IUnknown *v26; // rdi
  const struct tWAVEFORMATEX *v27; // rax
  struct tWAVEFORMATEX *v28; // rax
  __int64 v30; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v31; // [rsp+38h] [rbp-69h] BYREF
  struct CEndpointCharacteristics *v32; // [rsp+40h] [rbp-61h] BYREF
  struct _GUID v33; // [rsp+48h] [rbp-59h] BYREF
  struct IAudioMediaType *v34; // [rsp+58h] [rbp-49h] BYREF
  __int64 v35; // [rsp+60h] [rbp-41h]
  struct IUnknown *v36; // [rsp+68h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-31h] BYREF
  struct IAudioMediaType *v38[2]; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-19h]
  struct IUnknown *v40; // [rsp+90h] [rbp-11h] BYREF
  __int128 v41; // [rsp+98h] [rbp-9h] BYREF
  char v42; // [rsp+A8h] [rbp+7h]
  __int64 v43; // [rsp+B0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v43 = -2LL;
  v32 = a1;
  v31 = a2;
  v38[0] = (struct IAudioMediaType *)&v32;
  v38[1] = (struct IAudioMediaType *)&v31;
  v41 = *(_OWORD *)v38;
  v42 = 1;
  v39 = *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(a1, a2, 0) + 2);
  v2 = 0;
  v3 = 0LL;
  v40 = 0LL;
  v4 = 0;
  if ( v39 )
  {
    while ( 1 )
    {
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(v32, v31, 0);
      if ( v4 >= *((_DWORD *)SupportedConnectorModesInternal + 2) )
        v6 = GUID_00000000_0000_0000_0000_000000000000;
      else
        v6 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        (__int64)SupportedConnectorModesInternal,
                        v4);
      pv = 0LL;
      v33 = v6;
      ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                           v32,
                                           v31,
                                           &v33,
                                           (struct tWAVEFORMATEX **)&pv);
      v8 = ConnectorFormatForProcessingMode;
      v9 = (struct tWAVEFORMATEX *)pv;
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC27,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)ConnectorFormatForProcessingMode);
        goto LABEL_45;
      }
      v34 = 0LL;
      v10 = CAudioMediaType::Create(
              (const struct tWAVEFORMATEX *)pv,
              (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
              &v34,
              0.0,
              0);
      v8 = v10;
      v11 = v34;
      if ( v10 < 0 )
      {
        v21 = 3114LL;
        goto LABEL_40;
      }
      v10 = ValidateUncompressedWaveFormatEx(v9);
      v8 = v10;
      if ( v10 < 0 )
        break;
      v33 = v6;
      v10 = CPolicyConfig::ConfirmDeviceFormat(v32, v9, &v33, v31, 0);
      v8 = v10;
      if ( v10 < 0 )
      {
        v21 = 3123LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_41;
      }
      v36 = 0LL;
      v13 = DeriveDevicePipeFormatFromConnectorFormat(v32, v12, v31, v11, (struct IAudioMediaType **)&v36);
      v8 = v13;
      v14 = v36;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC3B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_34;
      }
      v38[0] = 0LL;
      v33 = v6;
      v15 = DeriveMixFormatFromDevicePipeFormat(v32, &v33, v31, (struct IAudioMediaType *)v36, v38, 0LL);
      v8 = v15;
      v16 = v38[0];
      if ( v15 < 0 )
      {
        v20 = 3139LL;
        goto LABEL_30;
      }
      v33 = v6;
      v17 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v38[0]->lpVtbl->GetAudioFormat)(v38[0]);
      v15 = CPolicyConfig::SetMixFormatInternal(v32, v31, &v33, v17);
      v8 = v15;
      if ( v15 < 0 )
      {
        v20 = 3142LL;
        goto LABEL_30;
      }
      v18 = *(_QWORD *)&v6.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&v6.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v18 = _mm_srli_si128((__m128i)v6, 8).m128i_u64[0] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v18 && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v32, v31) )
      {
        v33 = v6;
        v19 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v14->lpVtbl[1].Release)(v14);
        v15 = CPolicyConfig::SetDevicePipeFormatInternal(v32, v31, &v33, v19);
        v8 = v15;
        if ( v15 < 0 )
        {
          v20 = 3147LL;
LABEL_30:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v15);
          if ( v16 )
            ((void (__fastcall *)(struct IAudioMediaType *))v16->lpVtbl->Release)(v16);
LABEL_34:
          if ( v14 )
            ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
LABEL_41:
          if ( v11 )
            ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
LABEL_45:
          CoTaskMemFree(v9);
          pv = 0LL;
          goto LABEL_59;
        }
        if ( v3 != (struct IAudioMediaType *)v14 )
        {
          ATL::AtlComPtrAssign(&v40, v14);
          v3 = (struct IAudioMediaType *)v40;
        }
      }
      ((void (__fastcall *)(struct IAudioMediaType *))v16->lpVtbl->Release)(v16);
      v2 = 0;
      if ( v14 )
        ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
      if ( v11 )
        ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
      CoTaskMemFree(v9);
      pv = 0LL;
      if ( ++v4 >= v39 )
        goto LABEL_24;
    }
    v21 = 3116LL;
    goto LABEL_40;
  }
LABEL_24:
  if ( !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v32, v31) )
  {
LABEL_58:
    v42 = 0;
    v8 = 0;
    goto LABEL_59;
  }
  if ( !v3 )
  {
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC57,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_59;
  }
  v34 = 0LL;
  v35 = 0LL;
  APOSupportedProcessingModes = CEndpointCharacteristics::GetAPOSupportedProcessingModes(
                                  v32,
                                  v31,
                                  (struct CAudioSignalProcessingModeArray *)&v34);
  v8 = APOSupportedProcessingModes;
  if ( APOSupportedProcessingModes < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)APOSupportedProcessingModes);
    goto LABEL_69;
  }
  v23 = v35;
  if ( (int)v35 <= 0 )
  {
LABEL_57:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
    goto LABEL_58;
  }
  while ( 1 )
  {
    v33 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v34, v2);
    if ( CEndpointCharacteristics::IsConnectorModeSupported(v32, v31, &v33) )
      goto LABEL_56;
    v38[0] = 0LL;
    v36 = 0LL;
    v33 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v34, v2);
    v24 = DeriveMixFormatFromDevicePipeFormat(v32, &v33, v31, v3, (struct IAudioMediaType **)&v36, v38);
    v8 = v24;
    v25 = v38[0];
    v26 = v36;
    if ( v24 < 0 )
      break;
    v33 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v34, v2);
    v27 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v26->lpVtbl[1].Release)(v26);
    v24 = CPolicyConfig::SetMixFormatInternal(v32, v31, &v33, v27);
    v8 = v24;
    if ( v24 < 0 )
    {
      v30 = 3193LL;
      goto LABEL_65;
    }
    if ( v25 )
    {
      v33 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v34, v2);
      v28 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->GetAudioFormat)(v25);
      v24 = CPolicyConfig::SetStreamGroupFormatInternal(v32, v31, &v33, v28);
      v8 = v24;
      if ( v24 < 0 )
      {
        v30 = 3200LL;
        goto LABEL_65;
      }
    }
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
    if ( v25 )
      ((void (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->Release)(v25);
LABEL_56:
    if ( ++v2 >= v23 )
      goto LABEL_57;
  }
  v30 = 3188LL;
LABEL_65:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v24);
  if ( v26 )
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
  if ( v25 )
    ((void (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->Release)(v25);
LABEL_69:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
LABEL_59:
  if ( v3 )
    ((void (__fastcall *)(struct IAudioMediaType *))v3->lpVtbl->Release)(v3);
  wil::details::lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___::_lambda_call__lambda_8ed1f0cb9149247dc30433d8b8e17d28___((__int64 **)&v41);
  return v8;
}
