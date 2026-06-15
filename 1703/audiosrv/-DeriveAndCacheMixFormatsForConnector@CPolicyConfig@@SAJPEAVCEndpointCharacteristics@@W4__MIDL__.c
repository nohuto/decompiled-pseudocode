/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D760 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180041BCC (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180041C10 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180079C78 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098F40 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18009AB70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x18009B0C4 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18009E44C (-SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18009EA34 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18009EFF8 (-SetStreamGroupFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector(
        struct CEndpointCharacteristics *this,
        unsigned int a2)
{
  struct CEndpointCharacteristics *v3; // rsi
  int v4; // edi
  int ConnectorFormatForProcessingMode; // r12d
  __int64 v6; // r15
  unsigned int v7; // ebx
  char *SupportedConnectorModes; // rax
  GUID v9; // xmm6
  struct tWAVEFORMATEX *v10; // r14
  struct _GUID *v11; // rdx
  CAudioMediaType *v12; // rbx
  CAudioMediaType *v13; // rdi
  CAudioMediaType *v14; // rsi
  const struct tWAVEFORMATEX *v15; // rax
  unsigned __int64 v16; // rax
  struct tWAVEFORMATEX *v17; // rax
  __int64 (__fastcall *v18)(CAudioMediaType *); // rax
  __int64 (__fastcall *v19)(CAudioMediaType *); // rax
  __int64 (__fastcall *v20)(CAudioMediaType *); // rax
  __int64 (__fastcall *v21)(CAudioMediaType *); // rax
  __int64 (__fastcall *v22)(CAudioMediaType *); // rax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  bool v24; // zf
  CAudioMediaType *v25; // rcx
  void (*v26)(void); // rax
  __int64 (__fastcall *v27)(CAudioMediaType *); // rax
  void (*v28)(void); // rax
  void *v29; // rcx
  int (*v30)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  void (*v31)(void); // rax
  bool v32; // zf
  struct IAudioMediaType *v33; // rbx
  CAudioMediaType *v34; // rdi
  const struct tWAVEFORMATEX *v35; // rax
  CAudioMediaType *v36; // rsi
  struct tWAVEFORMATEX *v37; // rax
  __int64 (__fastcall *v38)(CAudioMediaType *); // rax
  __int64 (__fastcall *v39)(CAudioMediaType *); // rax
  __int64 (__fastcall *v40)(CAudioMediaType *); // rax
  __int64 (__fastcall *v41)(CAudioMediaType *); // rax
  void (*v42)(void); // rax
  __int64 (__fastcall *v43)(CAudioMediaType *); // rax
  void (*v44)(void); // rax
  void (*v45)(void); // rax
  LPVOID pv; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v48; // [rsp+40h] [rbp-51h]
  struct IAudioMediaType *v49[2]; // [rsp+48h] [rbp-49h] BYREF
  struct _GUID v50; // [rsp+58h] [rbp-39h] BYREF
  struct CEndpointCharacteristics *v51; // [rsp+68h] [rbp-29h]
  struct IAudioMediaType *v52; // [rsp+70h] [rbp-21h] BYREF
  __int64 v53; // [rsp+78h] [rbp-19h]
  struct IAudioMediaType *v54; // [rsp+80h] [rbp-11h] BYREF
  struct IAudioMediaType *v55; // [rsp+88h] [rbp-9h] BYREF
  __int64 v56; // [rsp+90h] [rbp-1h]
  __int64 v57; // [rsp+98h] [rbp+7h]

  v57 = -2LL;
  v3 = this;
  v51 = this;
  v4 = 0;
  ConnectorFormatForProcessingMode = 0;
  v56 = 0LL;
  v6 = *((_QWORD *)this + 2);
  v56 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  LODWORD(v55) = *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(v3, a2, 0) + 2);
  v7 = 0;
  v48 = 0;
  if ( (_DWORD)v55 )
  {
    while ( 1 )
    {
      pv = 0LL;
      SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v3, a2, 0);
      if ( v7 >= *((_DWORD *)SupportedConnectorModes + 2) )
        v9 = GUID_00000000_0000_0000_0000_000000000000;
      else
        v9 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        (__int64)SupportedConnectorModes,
                        v7);
      v49[0] = 0LL;
      v54 = 0LL;
      v52 = 0LL;
      v50 = v9;
      ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                           v3,
                                           a2,
                                           &v50,
                                           (struct tWAVEFORMATEX **)&pv);
      if ( ConnectorFormatForProcessingMode < 0 )
        goto LABEL_61;
      v10 = (struct tWAVEFORMATEX *)pv;
      ConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                           (const struct tWAVEFORMATEX *)pv,
                                           (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                                           v49,
                                           0.0,
                                           0);
      if ( ConnectorFormatForProcessingMode < 0
        || (ConnectorFormatForProcessingMode = ValidateUncompressedWaveFormatEx(v10),
            ConnectorFormatForProcessingMode < 0)
        || (v50 = v9,
            ConnectorFormatForProcessingMode = CPolicyConfig::ConfirmDeviceFormat(v3, v10, &v50, a2, 0),
            ConnectorFormatForProcessingMode < 0) )
      {
        v25 = (CAudioMediaType *)v49[0];
        if ( !v49[0] )
          goto LABEL_119;
        Release = v49[0]->lpVtbl->Release;
        v24 = (char *)Release == (char *)CAudioMediaType::Release;
        goto LABEL_41;
      }
      v50 = v9;
      v12 = (CAudioMediaType *)v49[0];
      ConnectorFormatForProcessingMode = DeriveDevicePipeFormatFromConnectorFormat(
                                           v3,
                                           v11,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                           v49[0],
                                           &v54);
      if ( ConnectorFormatForProcessingMode < 0 )
        break;
      v50 = v9;
      v13 = (CAudioMediaType *)v54;
      ConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(
                                           v3,
                                           &v50,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                           v54,
                                           &v52,
                                           0LL);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        if ( v52 )
        {
          v26 = (void (*)(void))v52->lpVtbl->Release;
          if ( (char *)v26 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v52);
          else
            v26();
        }
        if ( v13 )
        {
          v27 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v13 + 16LL);
          if ( v27 == CAudioMediaType::Release )
            CAudioMediaType::Release(v13);
          else
            v27(v13);
        }
LABEL_52:
        if ( !v12 )
          goto LABEL_119;
        Release = *(ULONG (__stdcall **)(IAudioMediaType *))(*(_QWORD *)v12 + 16LL);
        v24 = (char *)Release == (char *)CAudioMediaType::Release;
        goto LABEL_40;
      }
      v50 = v9;
      v14 = (CAudioMediaType *)v52;
      v15 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v52->lpVtbl->GetAudioFormat)(v52);
      ConnectorFormatForProcessingMode = CPolicyConfig::SetMixFormatInternal(
                                           v51,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                           &v50,
                                           v15);
      if ( ConnectorFormatForProcessingMode < 0 )
        goto LABEL_30;
      v16 = *(_QWORD *)&v9.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&v9.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v16 = _mm_srli_si128((__m128i)v9, 8).m128i_u64[0] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v16 )
      {
        if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v51, a2) )
        {
          v50 = v9;
          v17 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v13 + 40LL))(v13);
          ConnectorFormatForProcessingMode = CPolicyConfig::SetDevicePipeFormatInternal(
                                               v51,
                                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                               &v50,
                                               v17);
          if ( ConnectorFormatForProcessingMode < 0 )
          {
LABEL_30:
            if ( v14 )
            {
              v21 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v14 + 16LL);
              if ( v21 == CAudioMediaType::Release )
                CAudioMediaType::Release(v14);
              else
                v21(v14);
            }
            if ( v13 )
            {
              v22 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v13 + 16LL);
              if ( v22 == CAudioMediaType::Release )
                CAudioMediaType::Release(v13);
              else
                v22(v13);
            }
            if ( !v12 )
              goto LABEL_119;
            Release = *(ULONG (__stdcall **)(IAudioMediaType *))(*(_QWORD *)v12 + 16LL);
            v24 = (char *)Release == (char *)CAudioMediaType::Release;
LABEL_40:
            v25 = v12;
LABEL_41:
            if ( v24 )
              goto LABEL_117;
            ((void (__fastcall *)(CAudioMediaType *))Release)(v25);
LABEL_119:
            v29 = v10;
            goto LABEL_120;
          }
        }
      }
      v18 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v14 + 16LL);
      if ( v18 == CAudioMediaType::Release )
        CAudioMediaType::Release(v14);
      else
        v18(v14);
      if ( v13 )
      {
        v19 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v13 + 16LL);
        if ( v19 == CAudioMediaType::Release )
          CAudioMediaType::Release(v13);
        else
          v19(v13);
      }
      v4 = 0;
      if ( v12 )
      {
        v20 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
        if ( v20 == CAudioMediaType::Release )
          CAudioMediaType::Release(v12);
        else
          v20(v12);
      }
      CoTaskMemFree(v10);
      pv = 0LL;
      v7 = v48 + 1;
      v48 = v7;
      v3 = v51;
      if ( v7 >= (unsigned int)v55 )
        goto LABEL_62;
    }
    if ( v54 )
    {
      v28 = (void (*)(void))v54->lpVtbl->Release;
      if ( (char *)v28 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v54);
      else
        v28();
    }
    goto LABEL_52;
  }
LABEL_62:
  if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v3, a2) )
  {
    pv = 0LL;
    v49[0] = 0LL;
    v50 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDevicePipeFormat(
                                         v3,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                         &v50,
                                         v30,
                                         (struct tWAVEFORMATEX **)&pv);
    if ( ConnectorFormatForProcessingMode >= 0 )
    {
      v10 = (struct tWAVEFORMATEX *)pv;
      ConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                           (const struct tWAVEFORMATEX *)pv,
                                           (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                                           v49,
                                           0.0,
                                           0);
      if ( ConnectorFormatForProcessingMode >= 0 )
      {
        v52 = 0LL;
        v53 = 0LL;
        ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetAPOSupportedProcessingModes(
                                             v3,
                                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                             (struct CAudioSignalProcessingModeArray *)&v52);
        if ( ConnectorFormatForProcessingMode >= 0 )
        {
          v48 = 0;
          v33 = v49[0];
          if ( (int)v53 <= 0 )
          {
LABEL_113:
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v52);
            if ( v33 )
            {
              v31 = (void (*)(void))v33->lpVtbl->Release;
              v32 = (char *)v31 == (char *)CAudioMediaType::Release;
              goto LABEL_115;
            }
            goto LABEL_119;
          }
          while ( 1 )
          {
            v54 = 0LL;
            v55 = 0LL;
            v50 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)&v52,
                                     v4);
            if ( !CEndpointCharacteristics::IsConnectorModeSupported(v3, a2, &v50) )
            {
              v50 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)&v52,
                                       v4);
              ConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(
                                                   v3,
                                                   &v50,
                                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                                   v33,
                                                   &v54,
                                                   &v55);
              if ( ConnectorFormatForProcessingMode < 0 )
              {
                if ( v55 )
                {
                  v44 = (void (*)(void))v55->lpVtbl->Release;
                  if ( (char *)v44 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v55);
                  else
                    v44();
                }
                if ( v54 )
                {
                  v45 = (void (*)(void))v54->lpVtbl->Release;
                  if ( (char *)v45 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v54);
                  else
                    v45();
                }
LABEL_102:
                ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v52);
                if ( !v33 )
                  goto LABEL_119;
                v31 = (void (*)(void))v33->lpVtbl->Release;
                v32 = (char *)v31 == (char *)CAudioMediaType::Release;
LABEL_115:
                v25 = (CAudioMediaType *)v33;
LABEL_116:
                if ( v32 )
LABEL_117:
                  CAudioMediaType::Release(v25);
                else
                  v31();
                goto LABEL_119;
              }
              v50 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)&v52,
                                       v4);
              v34 = (CAudioMediaType *)v54;
              v35 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v54->lpVtbl->GetAudioFormat)(v54);
              ConnectorFormatForProcessingMode = CPolicyConfig::SetMixFormatInternal(
                                                   v3,
                                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                                   &v50,
                                                   v35);
              if ( ConnectorFormatForProcessingMode < 0 )
              {
                if ( v55 )
                {
                  v42 = (void (*)(void))v55->lpVtbl->Release;
                  if ( (char *)v42 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v55);
                  else
                    v42();
                }
                if ( v34 )
                {
                  v43 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v34 + 16LL);
                  if ( v43 == CAudioMediaType::Release )
                    CAudioMediaType::Release(v34);
                  else
                    v43(v34);
                }
                goto LABEL_102;
              }
              v36 = (CAudioMediaType *)v55;
              if ( v55 )
              {
                v50 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         (__int64)&v52,
                                         v48);
                v37 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 40LL))(v36);
                ConnectorFormatForProcessingMode = CPolicyConfig::SetStreamGroupFormatInternal(
                                                     v51,
                                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                                     &v50,
                                                     v37);
                if ( ConnectorFormatForProcessingMode < 0 )
                {
                  v40 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 16LL);
                  if ( v40 == CAudioMediaType::Release )
                    CAudioMediaType::Release(v36);
                  else
                    v40(v36);
                  if ( v34 )
                  {
                    v41 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v34 + 16LL);
                    if ( v41 == CAudioMediaType::Release )
                      CAudioMediaType::Release(v34);
                    else
                      v41(v34);
                  }
                  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v52);
                  if ( v33 )
                  {
                    v31 = (void (*)(void))v33->lpVtbl->Release;
                    v32 = (char *)v31 == (char *)CAudioMediaType::Release;
                    goto LABEL_115;
                  }
                  goto LABEL_119;
                }
              }
              if ( v36 )
              {
                v38 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 16LL);
                if ( v38 == CAudioMediaType::Release )
                  CAudioMediaType::Release(v36);
                else
                  v38(v36);
              }
              v39 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v34 + 16LL);
              if ( v39 == CAudioMediaType::Release )
                CAudioMediaType::Release(v34);
              else
                v39(v34);
              v3 = v51;
              v4 = v48;
            }
            v48 = ++v4;
            if ( v4 >= (int)v53 )
              goto LABEL_113;
          }
        }
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v52);
      }
      v25 = (CAudioMediaType *)v49[0];
      if ( v49[0] )
      {
        v31 = (void (*)(void))v49[0]->lpVtbl->Release;
        v32 = (char *)v31 == (char *)CAudioMediaType::Release;
        goto LABEL_116;
      }
      goto LABEL_119;
    }
LABEL_61:
    v29 = pv;
LABEL_120:
    CoTaskMemFree(v29);
    pv = 0LL;
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    CEndpointCharacteristics::ClearMixFormatCache(v51);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
        ConnectorFormatForProcessingMode);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
