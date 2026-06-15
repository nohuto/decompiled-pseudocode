/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004039C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800BA578 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800BAB48 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800BB2E0 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___ @ 0x1800C0314 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 */

// Hidden C++ exception states: #wind=59
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  __int64 v7; // rcx
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  int EndpointId; // r12d
  int v11; // ebx
  int (*v12)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v13; // xmm6
  __int64 v14; // rbx
  int v15; // edi
  const struct tWAVEFORMATEX *v16; // rax
  struct _GUID *v17; // rdx
  struct IAudioMediaType *v18; // rbx
  struct _GUID v19; // xmm6
  struct IAudioMediaType *v20; // rdi
  struct IAudioMediaType *v21; // rsi
  LPVOID v22; // r14
  const struct tWAVEFORMATEX *v23; // rax
  __int64 v24; // r15
  double v25; // xmm6_8
  struct _GUID v26; // xmm7
  struct tWAVEFORMATEX *v27; // rsi
  struct _GUID v28; // xmm8
  struct IAudioMediaType *v29; // rbx
  struct IAudioMediaType *v30; // rdi
  const struct tWAVEFORMATEX *v31; // rax
  struct IAudioMediaType *v32; // r14
  unsigned __int16 *v33; // rbx
  void *v34; // rax
  void (*v35)(void); // rax
  __int64 *v36; // rdi
  __int64 *i; // rbx
  CEndpointCharacteristics *v39; // [rsp+78h] [rbp-90h] BYREF
  struct IAudioMediaType *v40; // [rsp+80h] [rbp-88h] BYREF
  struct IAudioMediaType *v41; // [rsp+88h] [rbp-80h] BYREF
  struct IAudioMediaType *v42; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h] BYREF
  void *v44[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-58h]
  unsigned __int16 *v46; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v49; // [rsp+D8h] [rbp-30h]
  struct _GUID v50; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v51; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v52; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v53; // [rsp+110h] [rbp+8h]
  __int64 v54; // [rsp+118h] [rbp+10h]
  _BYTE v55[16]; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v56; // [rsp+130h] [rbp+28h]
  struct _TP_TIMER *v57[6]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v58; // [rsp+168h] [rbp+60h]
  __int128 v59; // [rsp+178h] [rbp+70h] BYREF

  v54 = -2LL;
  v53 = a4;
  v58 = *a3;
  v59 = v58;
  EtwEventActivityIdControl(4LL, &v59);
  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v7,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v57,
    v8[1],
    v9,
    (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod");
  Src = 0LL;
  v47 = 0LL;
  *(_OWORD *)v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v39 = 0LL;
  v52 = 0LL;
  EndpointId = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( EndpointId < 0 )
    goto LABEL_85;
  EndpointId = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                 g_pEndpointCharacteristicsCache,
                 a2,
                 0LL,
                 &v39);
  if ( EndpointId < 0 )
    goto LABEL_85;
  EndpointId = CEndpointCharacteristics::GetEndpointId(v39, &v46);
  if ( EndpointId < 0 )
    goto LABEL_85;
  EndpointId = DeriveAudioProcessingModeConfiguration(
                 *((_DWORD *)a3 + 4),
                 *((_DWORD *)a3 + 6),
                 *((_DWORD *)a3 + 26),
                 v39,
                 *((_DWORD *)v39 + 37) == 1,
                 0,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                 0,
                 *((_DWORD *)a3 + 10),
                 0,
                 (struct _GUID *)pv,
                 &v51,
                 &v50,
                 0LL);
  if ( EndpointId < 0 )
    goto LABEL_85;
  EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
                 g_DeviceGraphStore,
                 v46,
                 &v52);
  if ( EndpointId < 0 )
    goto LABEL_85;
  v11 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v52 + 80LL))(v52, v44);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
      ((char *)v44[1] - (char *)v44[0]) >> 3);
  }
  v13 = *(struct _GUID *)pv;
  if ( v11 >= 0 )
  {
    v56 = &v47;
    v49 = &v47;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___(
      (__int64)v55,
      (__int64)v44[0],
      (__int64)v44[1],
      (__int64)pv);
  }
  v14 = v47;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  pv[0] = 0LL;
  if ( v47 )
  {
    v15 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 48LL))(v47) + 16);
    v16 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
    EndpointId = CAudioMediaType::Create(v16, v15 + 18, &v40, 0.0, 0);
    if ( EndpointId < 0 )
    {
      if ( v40 )
        ((void (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->Release)(v40);
      goto LABEL_84;
    }
    v18 = v40;
    EndpointId = DeriveDevicePipeFormatFromConnectorFormat(v39, v17, *((_DWORD *)a3 + 5), (struct IUnknown *)v40, &v41);
    if ( EndpointId < 0 )
    {
      if ( v41 )
        ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
      if ( v18 )
        ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
      goto LABEL_84;
    }
    v19 = v51;
    v20 = v41;
    EndpointId = DeriveMixFormatFromDevicePipeFormat(v39, &v51, *((_DWORD *)a3 + 5), (struct IUnknown *)v41, &v42, 0LL);
    if ( EndpointId < 0 )
    {
      if ( v42 )
        ((void (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->Release)(v42);
      if ( v20 )
        ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
      if ( v18 )
        ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
      goto LABEL_84;
    }
    v51 = v19;
    v21 = v42;
    EndpointId = DeriveStreamFormatFromMixFormat(
                   v39,
                   &v51,
                   *((_DWORD *)a3 + 5),
                   (struct IUnknown *)v42,
                   (struct IAudioMediaType **)pv);
    if ( EndpointId < 0 )
    {
      if ( pv[0] )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 16LL))(pv[0]);
      if ( v21 )
        ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
      if ( v20 )
        ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
      if ( v18 )
        ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
      goto LABEL_84;
    }
    v22 = pv[0];
    v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 40LL))(pv[0]);
    EndpointId = CloneWaveFormat(v23, (struct tWAVEFORMATEX **)&Src);
    if ( EndpointId < 0 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
      if ( v21 )
        ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
      if ( v20 )
        ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
      if ( v18 )
        ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
      goto LABEL_84;
    }
    v24 = v47;
    v25 = (double)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->GetAudioFormat)(v18) + 4);
    *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24) * v25 / 10000000.0 + 0.5);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
    if ( v20 )
      ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
    ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
    goto LABEL_81;
  }
  v26 = v50;
  EndpointId = CEndpointCharacteristics::GetMixFormat(
                 v39,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                 &v50,
                 v12,
                 (struct tWAVEFORMATEX **)pv);
  if ( EndpointId < 0 )
  {
    CoTaskMemFree(0LL);
    CoTaskMemFree(pv[0]);
    goto LABEL_84;
  }
  v27 = (struct tWAVEFORMATEX *)pv[0];
  EndpointId = CAudioMediaType::Create(
                 (const struct tWAVEFORMATEX *)pv[0],
                 (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
                 &v42,
                 0.0,
                 0);
  if ( EndpointId < 0 )
  {
    if ( v42 )
      ((void (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->Release)(v42);
LABEL_69:
    CoTaskMemFree(0LL);
    CoTaskMemFree(v27);
    goto LABEL_84;
  }
  v28 = v51;
  v50 = v51;
  v29 = v42;
  EndpointId = DeriveStreamFormatFromMixFormat(v39, &v50, *((_DWORD *)a3 + 5), (struct IUnknown *)v42, &v41);
  if ( EndpointId < 0 )
  {
    if ( v41 )
      ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    goto LABEL_69;
  }
  v30 = v41;
  v31 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->GetAudioFormat)(v41);
  EndpointId = CloneWaveFormat(v31, (struct tWAVEFORMATEX **)&Src);
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    goto LABEL_69;
  }
  v50 = v13;
  v51 = v28;
  *(struct _GUID *)pv = v26;
  EndpointId = DeriveConnectorFormatFromStreamFormat(
                 v39,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                 v27,
                 (struct _GUID *)pv,
                 &v51,
                 &v50,
                 *((_DWORD *)a3 + 9),
                 (struct tWAVEFORMATEX **)&v40);
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    CoTaskMemFree(v40);
    CoTaskMemFree(v27);
    goto LABEL_84;
  }
  v50 = v13;
  v32 = v40;
  EndpointId = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                 (__int64)v39,
                 *((_DWORD *)a3 + 5),
                 (unsigned __int16 *)v40,
                 &v50,
                 0,
                 a5,
                 0LL,
                 0LL,
                 0LL);
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
    if ( v29 )
      ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
    CoTaskMemFree(v32);
    CoTaskMemFree(v27);
LABEL_84:
    if ( EndpointId >= 0 )
      goto LABEL_86;
    goto LABEL_85;
  }
  ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
  if ( v29 )
    ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
  CoTaskMemFree(v32);
  CoTaskMemFree(v27);
LABEL_81:
  v33 = (unsigned __int16 *)Src;
  v34 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
  *v53 = v34;
  if ( v34 )
  {
    memcpy_0(v34, Src, v33[8] + 18LL);
    goto LABEL_84;
  }
  EndpointId = -2147024882;
LABEL_85:
  AudSrvTraceLoggingErrorHelper("AudioServerGetCurrentSharedModeEnginePeriod", 4538, EndpointId);
LABEL_86:
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v39 )
  {
    v35 = *(void (**)(void))(*(_QWORD *)v39 + 16LL);
    if ( (char *)v35 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v39);
    else
      v35();
  }
  CoTaskMemFree(v46);
  v46 = 0LL;
  if ( v44[0] )
  {
    v36 = (__int64 *)v44[1];
    for ( i = (__int64 *)v44[0]; i != v36; ++i )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(i);
    std::_Deallocate((_QWORD *)v44[0], (signed __int64)(v45 - (unsigned __int64)v44[0]) >> 3, 8uLL);
    v44[0] = 0LL;
    v44[1] = 0LL;
    v45 = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
  CoTaskMemFree(Src);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v57);
  EtwEventActivityIdControl(4LL, &v59);
  return (unsigned int)EndpointId;
}
