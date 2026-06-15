/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800BA578
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B94C8 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18000271C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052E78 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180095750 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800BC56C (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1800BF4B0 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BF5F8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800EB368 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall DeriveDevicePipeFormatFromConnectorFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        __int32 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v8; // rdi
  struct IUnknown *v9; // rsi
  struct IUnknown *v10; // rbx
  const struct tWAVEFORMATEX *v11; // rax
  int v12; // r15d
  int v13; // eax
  const struct tWAVEFORMATEX *v14; // rax
  struct tWAVEFORMATEX *v15; // r14
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  const struct tWAVEFORMATEX *v17; // rax
  __int64 v18; // r14
  struct IAudioMediaType *v19; // rax
  struct IAudioProcessingObject **v21; // [rsp+28h] [rbp-61h]
  LPVOID pv; // [rsp+38h] [rbp-51h] BYREF
  int v23; // [rsp+40h] [rbp-49h] BYREF
  struct IAudioProcessingObject *v24; // [rsp+48h] [rbp-41h] BYREF
  struct IUnknown *v25; // [rsp+50h] [rbp-39h] BYREF
  struct IUnknown *v26; // [rsp+58h] [rbp-31h] BYREF
  struct IUnknown *v27; // [rsp+60h] [rbp-29h] BYREF
  struct IAudioMediaType **v28; // [rsp+68h] [rbp-21h]
  __int64 v29; // [rsp+70h] [rbp-19h]
  _DWORD v30[6]; // [rsp+78h] [rbp-11h] BYREF
  GUID v31; // [rsp+90h] [rbp+7h]

  v29 = -2LL;
  v28 = a5;
  v8 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  v11 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *, struct _GUID *))a4->lpVtbl[1].Release)(
                                        a4,
                                        a2);
  v23 = ValidateUncompressedWaveFormatEx(v11);
  v12 = v23;
  if ( v23 < 0 )
    goto LABEL_66;
  v13 = (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3)
      ? CEndpointCharacteristics::GetEndpointEffect(this, 0, a3, 0LL, &v24, 0LL)
      : CEndpointCharacteristics::GetGfx(
          this,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
          0LL,
          &v24,
          (struct IAudioSystemEffects2 **)v21);
  v12 = v13;
  if ( v13 < 0 )
    goto LABEL_66;
  if ( v23 == 1 )
  {
    memset_0(v30, 0, 0x28uLL);
    if ( !v24 )
    {
LABEL_8:
      v12 = -2004287480;
      goto LABEL_66;
    }
    pv = 0LL;
    if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, LPVOID *))v24->lpVtbl->IsOutputFormatSupported)(
           v24,
           0LL,
           a4,
           &pv) )
    {
      v12 = -2004287480;
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      goto LABEL_66;
    }
    v30[0] = 196606;
    v30[1] = *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    v30[3] = 2097160;
    v30[2] = 8 * *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    v30[4] = 2097174;
    v30[5] = 3;
    v31 = GUID_00000003_0000_0010_8000_00aa00389b71;
    v12 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v30, 0x28u, (struct IAudioMediaType **)&v26, 0.0, 0);
    if ( v12 < 0 )
    {
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      v9 = v26;
      goto LABEL_65;
    }
    ATL::AtlComPtrAssign(&v25, a4);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    v9 = v26;
    v10 = v25;
  }
  else
  {
    pv = 0LL;
    v14 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4);
    if ( (int)CloneWaveFormat(v14, (struct tWAVEFORMATEX **)&pv) < 0 )
    {
      v12 = -2004287480;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_66;
    }
    v15 = (struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v12 = CAudioMediaType::Create(v15, (unsigned int)v15->cbSize + 18, (struct IAudioMediaType **)&v25, 0.0, 0);
    if ( v12 < 0 )
    {
      CoTaskMemFree(v15);
      pv = 0LL;
      v10 = v25;
      goto LABEL_65;
    }
    v10 = v25;
    if ( v25 )
    {
      ATL::AtlComPtrAssign(&v26, v25);
      v9 = v26;
    }
    CoTaskMemFree(v15);
    pv = 0LL;
  }
  if ( v24 )
  {
    v23 = 0;
    pv = 0LL;
    lpVtbl = v24->lpVtbl;
    if ( *((_DWORD *)this + 37) )
    {
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, LPVOID *))lpVtbl->IsOutputFormatSupported)(
             v24,
             v10,
             v9,
             &pv) < 0 )
      {
        v12 = -2004287480;
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_66;
      }
      if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v23) < 0 )
      {
        v12 = -2004287480;
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_66;
      }
      if ( v23 )
      {
        v12 = -2004287480;
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_66;
      }
    }
    else
    {
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, LPVOID *))lpVtbl->IsInputFormatSupported)(
             v24,
             v10,
             v9,
             &pv) < 0 )
      {
        v12 = -2004287480;
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_66;
      }
      if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v23) < 0 )
      {
        v12 = -2004287480;
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_66;
      }
      if ( v23 )
      {
        v12 = -2004287480;
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_66;
      }
    }
    if ( pv )
    {
      ATL::AtlComPtrAssign(&v27, (struct IUnknown *)pv);
      v8 = (struct IAudioMediaType *)v27;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
  }
  else if ( v9 )
  {
    ATL::AtlComPtrAssign(&v27, v9);
    v8 = (struct IAudioMediaType *)v27;
  }
  v12 = ValidateAPOInputFormat(v8);
  if ( v12 >= 0 )
  {
    if ( !*((_DWORD *)this + 37) )
    {
      v17 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v10->lpVtbl[1].Release)(v10);
      if ( !IsDolbyMatFormat(v17) )
      {
        v18 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->GetAudioFormat)(v8);
        if ( *(_DWORD *)(v18 + 4) != *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4)
                                               + 4) )
          goto LABEL_8;
      }
    }
    v19 = v8;
    v8 = 0LL;
    v27 = 0LL;
    *v28 = v19;
LABEL_65:
    if ( v12 >= 0 )
      goto LABEL_67;
  }
LABEL_66:
  AudSrvTraceLoggingErrorHelper("DeriveDevicePipeFormatFromConnectorFormat", 1261, v12);
LABEL_67:
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v24 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v24->lpVtbl->Release)(v24);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v12;
}
