/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18002FB2C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180079C64 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18009AB70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x18009B0C4 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18009B958 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___ @ 0x18009FC28 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009FDAC (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int128 *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  int AliasedEndpointCharacteristics; // r12d
  int v8; // ebx
  int (*v9)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v10; // xmm6
  __int64 v11; // rbx
  int v12; // edi
  const struct tWAVEFORMATEX *v13; // rax
  struct _GUID *v14; // rdx
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  struct _GUID v16; // xmm6
  struct IAudioMediaType *v17; // rbx
  struct IAudioMediaTypeVtbl *v18; // rax
  struct IAudioMediaType *v19; // rdi
  struct IAudioMediaTypeVtbl *v20; // rax
  struct IAudioMediaType *v21; // rsi
  LPVOID v22; // r14
  const struct tWAVEFORMATEX *v23; // rax
  __int64 v24; // r15
  double v25; // xmm6_8
  struct _GUID v26; // xmm7
  struct tWAVEFORMATEX *v27; // rcx
  struct tWAVEFORMATEX *v28; // rsi
  struct IAudioMediaTypeVtbl *v29; // rax
  struct IAudioMediaType *v30; // rcx
  struct _GUID v31; // xmm8
  struct IAudioMediaType *v32; // rbx
  struct IAudioMediaTypeVtbl *v33; // rax
  struct IAudioMediaType *v34; // rdi
  const struct tWAVEFORMATEX *v35; // rax
  struct IAudioMediaType *v36; // r14
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  unsigned __int16 *v38; // rbx
  void *v39; // rax
  CEndpointCharacteristics *v41; // [rsp+60h] [rbp-A0h] BYREF
  struct IAudioMediaType *v42; // [rsp+68h] [rbp-98h] BYREF
  struct IAudioMediaType *v43; // [rsp+70h] [rbp-90h] BYREF
  struct IAudioMediaType *v44; // [rsp+78h] [rbp-88h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v46; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v47; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID pv[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v50; // [rsp+C0h] [rbp-40h]
  struct _GUID v51; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v53; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-8h]
  _QWORD *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  _BYTE v57[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v58; // [rsp+120h] [rbp+20h]
  __int128 v59; // [rsp+128h] [rbp+28h]
  __int128 v60; // [rsp+138h] [rbp+38h] BYREF

  v56 = -2LL;
  v55 = a4;
  v59 = *a3;
  v60 = v59;
  EtwEventActivityIdControl(4LL, &v60);
  Src[0] = 0LL;
  v48 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v52 = 0LL;
  AliasedEndpointCharacteristics = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_73;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v41);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_73;
  AliasedEndpointCharacteristics = CEndpointCharacteristics::GetEndpointId(v41, &v47);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_73;
  AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                     *((_DWORD *)a3 + 4),
                                     *((_DWORD *)a3 + 6),
                                     v41,
                                     *((_DWORD *)v41 + 37) == 1,
                                     0,
                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                                     0,
                                     *((_DWORD *)a3 + 10),
                                     (GUID *)pv,
                                     &v51,
                                     &v46,
                                     0LL);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_73;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                     g_DeviceGraphStore,
                                     v47,
                                     &v52);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_73;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v52 + 72LL))(v52, &v53);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Eu,
      (__int64)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
      (__int64)(*((_QWORD *)&v53 + 1) - v53) >> 3);
  }
  v10 = *(struct _GUID *)pv;
  if ( v8 >= 0 )
  {
    v58 = &v48;
    v50 = &v48;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___(
      (__int64)v57,
      v53,
      *((__int64 *)&v53 + 1),
      (__int64)pv);
  }
  v11 = v48;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  pv[0] = 0LL;
  if ( v48 )
  {
    v12 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 48LL))(v48) + 16);
    v13 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
    AliasedEndpointCharacteristics = CAudioMediaType::Create(v13, v12 + 18, &v42, 0.0, 0);
    if ( AliasedEndpointCharacteristics < 0 )
    {
      if ( !v42 )
        goto LABEL_72;
      lpVtbl = v42->lpVtbl;
      goto LABEL_16;
    }
    v16 = v51;
    v46 = v51;
    v17 = v42;
    AliasedEndpointCharacteristics = DeriveDevicePipeFormatFromConnectorFormat(
                                       v41,
                                       v14,
                                       *((_DWORD *)a3 + 5),
                                       (struct IUnknown *)v42,
                                       &v43);
    if ( AliasedEndpointCharacteristics < 0 )
    {
      if ( !v43 )
        goto LABEL_21;
      v18 = v43->lpVtbl;
      goto LABEL_20;
    }
    v51 = v16;
    v19 = v43;
    AliasedEndpointCharacteristics = DeriveMixFormatFromDevicePipeFormat(
                                       v41,
                                       &v51,
                                       *((_DWORD *)a3 + 5),
                                       (struct IUnknown *)v43,
                                       &v44,
                                       0LL);
    if ( AliasedEndpointCharacteristics < 0 )
    {
      if ( !v44 )
      {
LABEL_27:
        if ( !v19 )
        {
LABEL_21:
          if ( v17 )
          {
            lpVtbl = v17->lpVtbl;
LABEL_16:
            ((void (*)(void))lpVtbl->Release)();
          }
LABEL_72:
          if ( AliasedEndpointCharacteristics >= 0 )
            goto LABEL_74;
          goto LABEL_73;
        }
        v18 = v19->lpVtbl;
LABEL_20:
        ((void (*)(void))v18->Release)();
        goto LABEL_21;
      }
      v20 = v44->lpVtbl;
LABEL_26:
      ((void (*)(void))v20->Release)();
      goto LABEL_27;
    }
    v51 = v16;
    v21 = v44;
    AliasedEndpointCharacteristics = DeriveStreamFormatFromMixFormat(
                                       v41,
                                       &v51,
                                       *((_DWORD *)a3 + 5),
                                       (struct IUnknown *)v44,
                                       (struct IAudioMediaType **)pv);
    if ( AliasedEndpointCharacteristics < 0 )
    {
      if ( pv[0] )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 16LL))(pv[0]);
      goto LABEL_32;
    }
    v22 = pv[0];
    v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 40LL))(pv[0]);
    AliasedEndpointCharacteristics = CloneWaveFormat(v23, (struct tWAVEFORMATEX **)Src);
    if ( AliasedEndpointCharacteristics < 0 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_32:
      if ( !v21 )
        goto LABEL_27;
      v20 = v21->lpVtbl;
      goto LABEL_26;
    }
    v24 = v48;
    v25 = (double)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->GetAudioFormat)(v17) + 4);
    *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24) * v25 / 10000000.0 + 0.5);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
    if ( v19 )
      ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
    ((void (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->Release)(v17);
    goto LABEL_69;
  }
  v26 = v46;
  AliasedEndpointCharacteristics = CEndpointCharacteristics::GetMixFormat(
                                     v41,
                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                                     &v46,
                                     v9,
                                     (struct tWAVEFORMATEX **)pv);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    CoTaskMemFree(0LL);
    v27 = (struct tWAVEFORMATEX *)pv[0];
LABEL_43:
    CoTaskMemFree(v27);
    goto LABEL_72;
  }
  v28 = (struct tWAVEFORMATEX *)pv[0];
  AliasedEndpointCharacteristics = CAudioMediaType::Create(
                                     (const struct tWAVEFORMATEX *)pv[0],
                                     (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
                                     &v44,
                                     0.0,
                                     0);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    if ( !v44 )
    {
LABEL_48:
      v30 = 0LL;
LABEL_49:
      CoTaskMemFree(v30);
      v27 = v28;
      goto LABEL_43;
    }
    v29 = v44->lpVtbl;
LABEL_47:
    ((void (*)(void))v29->Release)();
    goto LABEL_48;
  }
  v31 = v51;
  v46 = v51;
  v32 = v44;
  AliasedEndpointCharacteristics = DeriveStreamFormatFromMixFormat(
                                     v41,
                                     &v46,
                                     *((_DWORD *)a3 + 5),
                                     (struct IUnknown *)v44,
                                     &v43);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    if ( !v43 )
    {
LABEL_54:
      if ( !v32 )
        goto LABEL_48;
      v29 = v32->lpVtbl;
      goto LABEL_47;
    }
    v33 = v43->lpVtbl;
LABEL_53:
    ((void (*)(void))v33->Release)();
    goto LABEL_54;
  }
  v34 = v43;
  v35 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->GetAudioFormat)(v43);
  AliasedEndpointCharacteristics = CloneWaveFormat(v35, (struct tWAVEFORMATEX **)Src);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v33 = v34->lpVtbl;
    goto LABEL_53;
  }
  v46 = v10;
  v51 = v31;
  *(struct _GUID *)pv = v26;
  AliasedEndpointCharacteristics = DeriveConnectorFormatFromStreamFormat(
                                     v41,
                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                                     v28,
                                     (struct _GUID *)pv,
                                     &v51,
                                     &v46,
                                     *((_DWORD *)a3 + 9),
                                     (struct tWAVEFORMATEX **)&v42);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->Release)(v34);
    if ( v32 )
      ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
    v30 = v42;
    goto LABEL_49;
  }
  v46 = v10;
  v36 = v42;
  AliasedEndpointCharacteristics = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                     (__int64)v41,
                                     *((_DWORD *)a3 + 5),
                                     (unsigned __int16 *)v42,
                                     &v46,
                                     0,
                                     a5,
                                     0LL,
                                     0LL,
                                     0LL);
  Release = v34->lpVtbl->Release;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    ((void (__fastcall *)(struct IAudioMediaType *))Release)(v34);
    if ( v32 )
      ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
    CoTaskMemFree(v36);
    CoTaskMemFree(v28);
    goto LABEL_72;
  }
  ((void (__fastcall *)(struct IAudioMediaType *))Release)(v34);
  if ( v32 )
    ((void (__fastcall *)(struct IAudioMediaType *))v32->lpVtbl->Release)(v32);
  CoTaskMemFree(v36);
  CoTaskMemFree(v28);
LABEL_69:
  v38 = (unsigned __int16 *)Src[0];
  v39 = MIDL_user_allocate(*((unsigned __int16 *)Src[0] + 8) + 18LL);
  *v55 = v39;
  if ( v39 )
  {
    memcpy_0(v39, Src[0], v38[8] + 18LL);
    goto LABEL_72;
  }
  AliasedEndpointCharacteristics = -2147024882;
LABEL_73:
  AudSrvTraceLoggingErrorHelper("AudioServerGetCurrentSharedModeEnginePeriod", 4235, AliasedEndpointCharacteristics);
LABEL_74:
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v41 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v41 + 16LL))(v41);
  CoTaskMemFree(v47);
  v47 = 0LL;
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64 **)&v53);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v48);
  CoTaskMemFree(Src[0]);
  EtwEventActivityIdControl(4LL, &v60);
  return (unsigned int)AliasedEndpointCharacteristics;
}
