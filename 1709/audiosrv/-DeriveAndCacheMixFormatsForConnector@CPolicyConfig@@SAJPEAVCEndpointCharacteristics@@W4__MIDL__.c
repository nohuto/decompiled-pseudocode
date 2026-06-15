/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087E20 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800216F8 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022310 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022814 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z @ 0x180036398 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18005A524 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18005A578 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A5A4 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180080228 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18008222C (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800826FC (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180088120 (-SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180088790 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800890D8 (-SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v2; // edi
  struct CEndpointCharacteristics *v3; // r13
  int ConnectorFormatForProcessingMode; // r12d
  __int64 v5; // r15
  unsigned int v6; // ebx
  __int64 SupportedConnectorModesInternal; // rax
  GUID v8; // xmm6
  struct tWAVEFORMATEX *v9; // rsi
  struct _GUID *v10; // rdx
  struct IAudioMediaType *v11; // rbx
  struct IAudioMediaType *v12; // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // r14d
  struct IAudioMediaType *v14; // r14
  const struct tWAVEFORMATEX *v15; // rax
  struct tWAVEFORMATEX *v16; // rax
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  struct IAudioMediaType *v18; // rcx
  void *v19; // rcx
  int (*v20)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int v21; // r13d
  struct IAudioMediaType *v22; // rbx
  CEndpointCharacteristics *v23; // r14
  struct IAudioMediaType *v24; // rdi
  const struct tWAVEFORMATEX *v25; // rax
  struct IAudioMediaType *v26; // r14
  struct tWAVEFORMATEX *v27; // rax
  struct IAudioMediaTypeVtbl *v28; // rax
  struct IAudioMediaType *v29; // rcx
  struct IAudioMediaType *v30; // rcx
  struct IAudioMediaTypeVtbl *v31; // rax
  LPVOID pv; // [rsp+40h] [rbp-51h] BYREF
  struct IAudioMediaType *v35[2]; // [rsp+48h] [rbp-49h] BYREF
  struct _GUID v36; // [rsp+58h] [rbp-39h] BYREF
  struct IAudioMediaType *v37; // [rsp+68h] [rbp-29h] BYREF
  __int64 v38; // [rsp+70h] [rbp-21h]
  struct CEndpointCharacteristics *v39; // [rsp+78h] [rbp-19h]
  struct IAudioMediaType *v40; // [rsp+80h] [rbp-11h] BYREF
  struct IAudioMediaType *v41; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v42; // [rsp+90h] [rbp-1h]
  __int64 v43; // [rsp+98h] [rbp+7h]
  __int64 v44; // [rsp+A0h] [rbp+Fh]

  v44 = -2LL;
  v2 = a2;
  v3 = this;
  v39 = this;
  ConnectorFormatForProcessingMode = 0;
  v43 = 0LL;
  v5 = *((_QWORD *)this + 2);
  v43 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  LODWORD(v41) = *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModesInternal((__int64)v3, v2, 0) + 8);
  v6 = 0;
  v42 = 0;
  if ( (_DWORD)v41 )
  {
    while ( 1 )
    {
      pv = 0LL;
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal((__int64)v3, v2, 0);
      if ( v6 >= *(_DWORD *)(SupportedConnectorModesInternal + 8) )
        v8 = GUID_00000000_0000_0000_0000_000000000000;
      else
        v8 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        SupportedConnectorModesInternal,
                        v6);
      v35[0] = 0LL;
      v40 = 0LL;
      v37 = 0LL;
      v36 = v8;
      ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                           v3,
                                           v2,
                                           &v36,
                                           (struct tWAVEFORMATEX **)&pv);
      if ( ConnectorFormatForProcessingMode < 0 )
        goto LABEL_45;
      v9 = (struct tWAVEFORMATEX *)pv;
      ConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                           (const struct tWAVEFORMATEX *)pv,
                                           (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                                           v35,
                                           0.0,
                                           0);
      if ( ConnectorFormatForProcessingMode < 0 )
        break;
      ConnectorFormatForProcessingMode = ValidateUncompressedWaveFormatEx(v9);
      if ( ConnectorFormatForProcessingMode < 0 )
        break;
      v36 = v8;
      ConnectorFormatForProcessingMode = CPolicyConfig::ConfirmDeviceFormat(v3, v9, &v36, v2, 0);
      if ( ConnectorFormatForProcessingMode < 0 )
        break;
      v11 = v35[0];
      ConnectorFormatForProcessingMode = DeriveDevicePipeFormatFromConnectorFormat(v3, v10, v2, v35[0], &v40);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        if ( v40 )
          ((void (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->Release)(v40);
        if ( v11 )
        {
          lpVtbl = v11->lpVtbl;
          v18 = v11;
          goto LABEL_40;
        }
        goto LABEL_41;
      }
      v36 = v8;
      v12 = v40;
      v13 = a2;
      ConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(v3, &v36, a2, v40, &v37, 0LL);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        if ( v37 )
          ((void (__fastcall *)(struct IAudioMediaType *))v37->lpVtbl->Release)(v37);
        if ( v12 )
          ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
        if ( v11 )
          ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
        CoTaskMemFree(v9);
        pv = 0LL;
        goto LABEL_86;
      }
      v36 = v8;
      v14 = v37;
      v15 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v37->lpVtbl->GetAudioFormat)(v37);
      ConnectorFormatForProcessingMode = CPolicyConfig::SetMixFormatInternal(v3, a2, &v36, v15);
      if ( ConnectorFormatForProcessingMode < 0
        || *(_QWORD *)&v8.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
        && _mm_srli_si128((__m128i)v8, 8).m128i_u64[0] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
        && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v3, a2)
        && (v36 = v8,
            v16 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->GetAudioFormat)(v12),
            ConnectorFormatForProcessingMode = CPolicyConfig::SetDevicePipeFormatInternal(v3, a2, &v36, v16),
            ConnectorFormatForProcessingMode < 0) )
      {
        if ( v14 )
          ((void (__fastcall *)(struct IAudioMediaType *))v14->lpVtbl->Release)(v14);
        if ( v12 )
          ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
        if ( v11 )
          ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
        CoTaskMemFree(v9);
        pv = 0LL;
        goto LABEL_85;
      }
      ((void (__fastcall *)(struct IAudioMediaType *))v14->lpVtbl->Release)(v14);
      if ( v12 )
        ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
      if ( v11 )
        ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
      CoTaskMemFree(v9);
      pv = 0LL;
      v6 = v42 + 1;
      v42 = v6;
      v2 = a2;
      if ( v6 >= (unsigned int)v41 )
        goto LABEL_46;
    }
    v18 = v35[0];
    if ( v35[0] )
    {
      lpVtbl = v35[0]->lpVtbl;
LABEL_40:
      ((void (__fastcall *)(struct IAudioMediaType *))lpVtbl->Release)(v18);
    }
LABEL_41:
    v19 = v9;
    goto LABEL_42;
  }
LABEL_46:
  if ( !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v3, v2) )
    goto LABEL_85;
  pv = 0LL;
  v35[0] = 0LL;
  v36 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDevicePipeFormat(
                                       (struct _RTL_CRITICAL_SECTION *)v3,
                                       v2,
                                       &v36,
                                       v20,
                                       (struct tWAVEFORMATEX **)&pv);
  if ( ConnectorFormatForProcessingMode < 0 )
  {
LABEL_45:
    v19 = pv;
LABEL_42:
    CoTaskMemFree(v19);
LABEL_84:
    pv = 0LL;
    goto LABEL_85;
  }
  v9 = (struct tWAVEFORMATEX *)pv;
  ConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                       (const struct tWAVEFORMATEX *)pv,
                                       (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                                       v35,
                                       0.0,
                                       0);
  if ( ConnectorFormatForProcessingMode < 0 )
  {
LABEL_49:
    if ( v35[0] )
      ((void (__fastcall *)(struct IAudioMediaType *))v35[0]->lpVtbl->Release)(v35[0]);
    goto LABEL_41;
  }
  v37 = 0LL;
  v38 = 0LL;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetAPOSupportedProcessingModes(
                                       v3,
                                       v2,
                                       (struct CAudioSignalProcessingModeArray *)&v37);
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v37);
    goto LABEL_49;
  }
  v21 = 0;
  v22 = v35[0];
  if ( (int)v38 <= 0 )
  {
LABEL_81:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v37);
    if ( v22 )
      ((void (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->Release)(v22);
    CoTaskMemFree(v9);
    v3 = v39;
    goto LABEL_84;
  }
  v23 = v39;
  while ( 1 )
  {
    v40 = 0LL;
    v41 = 0LL;
    v36 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v37, v21);
    if ( CEndpointCharacteristics::IsConnectorModeSupported(v23, v2, &v36) )
      goto LABEL_64;
    v36 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v37, v21);
    ConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(v23, &v36, v2, v22, &v40, &v41);
    if ( ConnectorFormatForProcessingMode < 0 )
      break;
    v36 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v37, v21);
    v24 = v40;
    v25 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->GetAudioFormat)(v40);
    ConnectorFormatForProcessingMode = CPolicyConfig::SetMixFormatInternal(v23, a2, &v36, v25);
    if ( ConnectorFormatForProcessingMode < 0 )
    {
      v29 = v41;
      if ( v41 )
      {
        v28 = v41->lpVtbl;
LABEL_67:
        ((void (__fastcall *)(struct IAudioMediaType *))v28->Release)(v29);
      }
      if ( !v24 )
        goto LABEL_71;
      v30 = v24;
      v31 = v24->lpVtbl;
LABEL_70:
      ((void (__fastcall *)(struct IAudioMediaType *))v31->Release)(v30);
      goto LABEL_71;
    }
    v26 = v41;
    if ( v41 )
    {
      v36 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)&v37,
                               v21);
      v27 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v26->lpVtbl->GetAudioFormat)(v26);
      ConnectorFormatForProcessingMode = CPolicyConfig::SetStreamGroupFormatInternal(v39, a2, &v36, v27);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        v28 = v26->lpVtbl;
        v29 = v26;
        goto LABEL_67;
      }
    }
    if ( v26 )
      ((void (__fastcall *)(struct IAudioMediaType *))v26->lpVtbl->Release)(v26);
    ((void (__fastcall *)(struct IAudioMediaType *))v24->lpVtbl->Release)(v24);
    v23 = v39;
    v2 = a2;
LABEL_64:
    if ( ++v21 >= (int)v38 )
      goto LABEL_81;
  }
  if ( v41 )
    ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
  v30 = v40;
  if ( v40 )
  {
    v31 = v40->lpVtbl;
    goto LABEL_70;
  }
LABEL_71:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v37);
  if ( v22 )
    ((void (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->Release)(v22);
  CoTaskMemFree(v9);
  pv = 0LL;
  v3 = v39;
LABEL_85:
  v13 = a2;
LABEL_86:
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    CEndpointCharacteristics::ClearMixFormatCache((struct IPropertyStore **)v3, v13 == eKeywordDetectorConnector);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        ConnectorFormatForProcessingMode);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
