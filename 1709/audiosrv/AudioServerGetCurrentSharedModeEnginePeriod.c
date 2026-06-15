/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003162C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18005A438 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18008222C (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800826FC (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180082E80 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___ @ 0x18008A08C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 */

// Hidden C++ exception states: #wind=43
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  __int64 v7; // r8
  void *v8; // r8
  int EndpointId; // r12d
  int v10; // ebx
  int (*v11)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v12; // xmm6
  __int64 v13; // rbx
  int v14; // edi
  const struct tWAVEFORMATEX *v15; // rax
  struct _GUID *v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rbx
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  struct _GUID v20; // xmm6
  struct IAudioMediaType *v21; // rdi
  struct IAudioMediaTypeVtbl *v22; // rax
  struct IAudioMediaType *v23; // rsi
  LPVOID v24; // r14
  const struct tWAVEFORMATEX *v25; // rax
  __int64 v26; // r15
  double v27; // xmm6_8
  struct _GUID v28; // xmm7
  struct tWAVEFORMATEX *v29; // rcx
  struct tWAVEFORMATEX *v30; // rsi
  struct IAudioMediaTypeVtbl *v31; // rax
  void *v32; // rcx
  struct _GUID v33; // xmm8
  struct IAudioMediaType *v34; // rbx
  struct IAudioMediaTypeVtbl *v35; // rax
  struct IAudioMediaType *v36; // rdi
  const struct tWAVEFORMATEX *v37; // rax
  void *v38; // r14
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  __int64 v40; // rbx
  void *v41; // rax
  void (*v42)(void); // rax
  __int64 *v43; // rdi
  __int64 *i; // rbx
  CEndpointCharacteristics *v46; // [rsp+78h] [rbp-90h] BYREF
  WINBOOL fPending[2]; // [rsp+80h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  struct IAudioMediaType *v49; // [rsp+90h] [rbp-78h] BYREF
  struct IAudioMediaType *v50[2]; // [rsp+98h] [rbp-70h] BYREF
  LPVOID Context[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v52; // [rsp+B8h] [rbp-50h]
  void *v53[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v54; // [rsp+D8h] [rbp-30h]
  unsigned __int16 *v55; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v56[2]; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v57; // [rsp+F8h] [rbp-10h] BYREF
  struct _GUID v58; // [rsp+108h] [rbp+0h] BYREF
  __int64 v59; // [rsp+118h] [rbp+10h] BYREF
  _QWORD *v60; // [rsp+120h] [rbp+18h]
  __int64 v61; // [rsp+128h] [rbp+20h]
  _BYTE v62[16]; // [rsp+130h] [rbp+28h] BYREF
  __int64 *v63; // [rsp+140h] [rbp+38h]
  HANDLE Parameter[6]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v65; // [rsp+178h] [rbp+70h]
  __int128 v66; // [rsp+188h] [rbp+80h] BYREF

  v61 = -2LL;
  v60 = a4;
  v65 = *a3;
  v66 = v65;
  EtwEventActivityIdControl(4LL, &v66);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, Context);
  if ( fPending[0] )
  {
    Context[0] = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v8);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context[0] + 1),
    v7,
    L"AudioServerGetCurrentSharedModeEnginePeriod");
  *(_QWORD *)fPending = 0LL;
  v56[0] = 0LL;
  *(_OWORD *)v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v46 = 0LL;
  v59 = 0LL;
  EndpointId = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( EndpointId < 0 )
    goto LABEL_75;
  EndpointId = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                 g_pEndpointCharacteristicsCache,
                 a2,
                 0LL,
                 &v46);
  if ( EndpointId < 0 )
    goto LABEL_75;
  EndpointId = CEndpointCharacteristics::GetEndpointId(v46, &v55);
  if ( EndpointId < 0 )
    goto LABEL_75;
  EndpointId = DeriveAudioProcessingModeConfiguration(
                 *((_DWORD *)a3 + 4),
                 *((_DWORD *)a3 + 6),
                 *((_DWORD *)a3 + 26),
                 v46,
                 *((_DWORD *)v46 + 37) == 1,
                 0,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                 0,
                 *((_DWORD *)a3 + 10),
                 (GUID *)Context,
                 &v58,
                 &v57,
                 0LL);
  if ( EndpointId < 0 )
    goto LABEL_75;
  EndpointId = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                             + 24LL))(
                 g_DeviceGraphStore,
                 v55,
                 &v59);
  if ( EndpointId < 0 )
    goto LABEL_75;
  v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v59 + 72LL))(v59, v53);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Bu,
      (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
      ((char *)v53[1] - (char *)v53[0]) >> 3);
  }
  v12 = *(struct _GUID *)Context;
  if ( v10 >= 0 )
  {
    v63 = v56;
    v52 = v56;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___(
      (__int64)v62,
      (__int64)v53[0],
      (__int64)v53[1],
      (__int64)Context);
  }
  v13 = v56[0];
  pv = 0LL;
  v49 = 0LL;
  v50[0] = 0LL;
  Context[0] = 0LL;
  if ( v56[0] )
  {
    v14 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56[0] + 48LL))(v56[0]) + 16);
    v15 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
    EndpointId = CAudioMediaType::Create(v15, v14 + 18, (struct IAudioMediaType **)&pv, 0.0, 0);
    if ( EndpointId < 0 )
    {
      if ( !pv )
        goto LABEL_74;
      v17 = *(_QWORD *)pv;
      goto LABEL_18;
    }
    v18 = (__int64 *)pv;
    EndpointId = DeriveDevicePipeFormatFromConnectorFormat(
                   v46,
                   v16,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                   (struct IUnknown *)pv,
                   &v49);
    if ( EndpointId < 0 )
    {
      if ( !v49 )
        goto LABEL_23;
      lpVtbl = v49->lpVtbl;
      goto LABEL_22;
    }
    v20 = v58;
    v21 = v49;
    EndpointId = DeriveMixFormatFromDevicePipeFormat(
                   v46,
                   &v58,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                   (struct IUnknown *)v49,
                   v50,
                   0LL);
    if ( EndpointId < 0 )
    {
      if ( !v50[0] )
      {
LABEL_29:
        if ( !v21 )
        {
LABEL_23:
          if ( v18 )
          {
            v17 = *v18;
LABEL_18:
            (*(void (**)(void))(v17 + 16))();
          }
LABEL_74:
          if ( EndpointId >= 0 )
            goto LABEL_76;
          goto LABEL_75;
        }
        lpVtbl = v21->lpVtbl;
LABEL_22:
        ((void (*)(void))lpVtbl->Release)();
        goto LABEL_23;
      }
      v22 = v50[0]->lpVtbl;
LABEL_28:
      ((void (*)(void))v22->Release)();
      goto LABEL_29;
    }
    v58 = v20;
    v23 = v50[0];
    EndpointId = DeriveStreamFormatFromMixFormat(
                   v46,
                   &v58,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                   (struct IUnknown *)v50[0],
                   (struct IAudioMediaType **)Context);
    if ( EndpointId < 0 )
    {
      if ( Context[0] )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context[0] + 16LL))(Context[0]);
      goto LABEL_34;
    }
    v24 = Context[0];
    v25 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context[0] + 40LL))(Context[0]);
    EndpointId = CloneWaveFormat(v25, (struct tWAVEFORMATEX **)fPending);
    if ( EndpointId < 0 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_34:
      if ( !v23 )
        goto LABEL_29;
      v22 = v23->lpVtbl;
      goto LABEL_28;
    }
    v26 = v56[0];
    v27 = (double)*(int *)((*(__int64 (__fastcall **)(__int64 *))(*v18 + 40))(v18) + 4);
    *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26) * v27 / 10000000.0 + 0.5);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v23 )
      ((void (__fastcall *)(struct IAudioMediaType *))v23->lpVtbl->Release)(v23);
    if ( v21 )
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
    (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
    goto LABEL_71;
  }
  v28 = v57;
  EndpointId = CEndpointCharacteristics::GetMixFormat(
                 (struct _RTL_CRITICAL_SECTION *)v46,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                 &v57,
                 v11,
                 (struct tWAVEFORMATEX **)Context);
  if ( EndpointId < 0 )
  {
    CoTaskMemFree(0LL);
    v29 = (struct tWAVEFORMATEX *)Context[0];
LABEL_45:
    CoTaskMemFree(v29);
    goto LABEL_74;
  }
  v30 = (struct tWAVEFORMATEX *)Context[0];
  EndpointId = CAudioMediaType::Create(
                 (const struct tWAVEFORMATEX *)Context[0],
                 (unsigned int)*((unsigned __int16 *)Context[0] + 8) + 18,
                 v50,
                 0.0,
                 0);
  if ( EndpointId < 0 )
  {
    if ( !v50[0] )
    {
LABEL_50:
      v32 = 0LL;
LABEL_51:
      CoTaskMemFree(v32);
      v29 = v30;
      goto LABEL_45;
    }
    v31 = v50[0]->lpVtbl;
LABEL_49:
    ((void (*)(void))v31->Release)();
    goto LABEL_50;
  }
  v33 = v58;
  v57 = v58;
  v34 = v50[0];
  EndpointId = DeriveStreamFormatFromMixFormat(
                 v46,
                 &v57,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                 (struct IUnknown *)v50[0],
                 &v49);
  if ( EndpointId < 0 )
  {
    if ( !v49 )
    {
LABEL_56:
      if ( !v34 )
        goto LABEL_50;
      v31 = v34->lpVtbl;
      goto LABEL_49;
    }
    v35 = v49->lpVtbl;
LABEL_55:
    ((void (*)(void))v35->Release)();
    goto LABEL_56;
  }
  v36 = v49;
  v37 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v49->lpVtbl->GetAudioFormat)(v49);
  EndpointId = CloneWaveFormat(v37, (struct tWAVEFORMATEX **)fPending);
  if ( EndpointId < 0 )
  {
    v35 = v36->lpVtbl;
    goto LABEL_55;
  }
  v57 = v12;
  v58 = v33;
  *(struct _GUID *)Context = v28;
  EndpointId = DeriveConnectorFormatFromStreamFormat(
                 (struct _RTL_CRITICAL_SECTION *)v46,
                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                 v30,
                 (struct _GUID *)Context,
                 &v58,
                 &v57,
                 *((_DWORD *)a3 + 9),
                 (struct tWAVEFORMATEX **)&pv);
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v36->lpVtbl->Release)(v36);
    if ( v34 )
      ((void (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->Release)(v34);
    v32 = pv;
    goto LABEL_51;
  }
  v57 = v12;
  v38 = pv;
  EndpointId = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                 (__int64)v46,
                 *((_DWORD *)a3 + 5),
                 (const struct tWAVEFORMATEX *)pv,
                 &v57,
                 0,
                 a5,
                 0LL,
                 0LL,
                 0LL);
  Release = v36->lpVtbl->Release;
  if ( EndpointId < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))Release)(v36);
    if ( v34 )
      ((void (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->Release)(v34);
    CoTaskMemFree(v38);
    CoTaskMemFree(v30);
    goto LABEL_74;
  }
  ((void (__fastcall *)(struct IAudioMediaType *))Release)(v36);
  if ( v34 )
    ((void (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->Release)(v34);
  CoTaskMemFree(v38);
  CoTaskMemFree(v30);
LABEL_71:
  v40 = *(_QWORD *)fPending;
  v41 = MIDL_user_allocate(*(unsigned __int16 *)(*(_QWORD *)fPending + 16LL) + 18LL);
  *v60 = v41;
  if ( v41 )
  {
    memcpy_0(v41, *(const void **)fPending, *(unsigned __int16 *)(v40 + 16) + 18LL);
    goto LABEL_74;
  }
  EndpointId = -2147024882;
LABEL_75:
  AudSrvTraceLoggingErrorHelper("AudioServerGetCurrentSharedModeEnginePeriod", 4226, EndpointId);
LABEL_76:
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v46 )
  {
    v42 = *(void (**)(void))(*(_QWORD *)v46 + 16LL);
    if ( (char *)v42 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v46);
    else
      v42();
  }
  CoTaskMemFree(v55);
  v55 = 0LL;
  if ( v53[0] )
  {
    v43 = (__int64 *)v53[1];
    for ( i = (__int64 *)v53[0]; i != v43; ++i )
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(i);
    std::_Deallocate((_QWORD *)v53[0], (signed __int64)(v54 - (unsigned __int64)v53[0]) >> 3, 8uLL);
    v53[0] = 0LL;
    v53[1] = 0LL;
    v54 = 0LL;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v56);
  CoTaskMemFree(*(LPVOID *)fPending);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  EtwEventActivityIdControl(4LL, &v66);
  return (unsigned int)EndpointId;
}
