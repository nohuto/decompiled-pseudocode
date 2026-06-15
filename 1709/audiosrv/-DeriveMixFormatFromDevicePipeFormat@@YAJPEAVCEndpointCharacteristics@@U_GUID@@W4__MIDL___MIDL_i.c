/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800826FC
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18000A478 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021C48 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1800895F0 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DeriveMixFormatFromDevicePipeFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5,
        struct IAudioMediaType **a6)
{
  int ModeEffect; // r14d
  struct IAudioMediaType *v11; // rdi
  struct IUnknown *v12; // rsi
  struct IAudioProcessingObject *v13; // rcx
  struct IUnknown *v14; // rcx
  int v15; // r14d
  __int64 v16; // rcx
  struct IUnknown *v17; // rdx
  struct IUnknown *v18; // rcx
  struct IUnknown *v19; // rcx
  struct IAudioMediaType *v20; // rcx
  struct IAudioMediaType *v21; // rax
  struct IUnknown *v23; // [rsp+48h] [rbp-39h] BYREF
  int v24; // [rsp+50h] [rbp-31h] BYREF
  struct IUnknown *v25; // [rsp+58h] [rbp-29h] BYREF
  struct IUnknown *v26; // [rsp+60h] [rbp-21h] BYREF
  struct IAudioProcessingObject *v27; // [rsp+68h] [rbp-19h] BYREF
  int v28; // [rsp+70h] [rbp-11h] BYREF
  __int64 v29; // [rsp+78h] [rbp-9h] BYREF
  struct IUnknown *v30; // [rsp+80h] [rbp-1h] BYREF
  struct _GUID v31; // [rsp+88h] [rbp+7h] BYREF
  __int64 v32; // [rsp+98h] [rbp+17h]

  v32 = -2LL;
  ModeEffect = 0;
  v11 = 0LL;
  v25 = 0LL;
  v12 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    if ( a4 )
    {
      ATL::AtlComPtrAssign(&v25, a4);
      v11 = (struct IAudioMediaType *)v25;
    }
    goto LABEL_61;
  }
  v31 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(this, &v31, 0, a3, 0LL, &v27, 0LL);
  if ( ModeEffect < 0 )
  {
LABEL_64:
    AudSrvTraceLoggingErrorHelper("DeriveMixFormatFromDevicePipeFormat", 1349, ModeEffect);
    goto LABEL_65;
  }
  v13 = v27;
  if ( v27 )
  {
    v24 = 0;
    v23 = 0LL;
    if ( !*((_DWORD *)this + 37) )
    {
      *(_QWORD *)&v31.Data1 = a4;
      if ( a4 )
      {
        ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->AddRef)(a4);
        v13 = v27;
      }
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, struct IUnknown **))v13->lpVtbl->IsInputFormatSupported)(
             v13,
             a4,
             a4,
             &v23) >= 0
        && ((int (__fastcall *)(struct IUnknown *, int *))v23->lpVtbl[1].QueryInterface)(v23, &v24) >= 0
        && !v24 )
      {
        v14 = v23;
        if ( v23 )
        {
          ATL::AtlComPtrAssign(&v25, v23);
          v11 = (struct IAudioMediaType *)v25;
          v14 = v23;
        }
        if ( a4 )
        {
          ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
          v14 = v23;
        }
LABEL_53:
        if ( v14 )
          ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
        goto LABEL_57;
      }
      ModeEffect = -2004287480;
      if ( a4 )
        ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
LABEL_10:
      if ( v23 )
        ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
      goto LABEL_64;
    }
    *(_QWORD *)&v31.Data1 = a4;
    if ( a4 )
    {
      ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->AddRef)(a4);
      v13 = v27;
    }
    v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, struct IUnknown **))v13->lpVtbl->IsOutputFormatSupported)(
            v13,
            a4,
            a4,
            &v23);
    if ( v15 == -2005073917 )
    {
      ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
        &v29,
        v27);
      v28 = 0;
      v16 = v29;
      if ( v29 )
      {
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 24LL))(v29, &v28) >= 0 && (v28 & 1) != 0 )
        {
          v26 = 0LL;
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, struct IUnknown **))v27->lpVtbl->IsInputFormatSupported)(
                 v27,
                 0LL,
                 a4,
                 &v26) < 0 )
            goto LABEL_26;
          v17 = v26;
          if ( a4 != v26 )
          {
            ATL::AtlComPtrAssign((struct IUnknown **)&v31, v26);
            a4 = *(struct IUnknown **)&v31.Data1;
            v17 = v26;
          }
          v18 = v23;
          if ( v23 )
          {
            v23 = 0LL;
            ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
            v17 = v26;
          }
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, struct IUnknown **))v27->lpVtbl->IsOutputFormatSupported)(
                 v27,
                 v17,
                 a4,
                 &v23) < 0 )
          {
LABEL_26:
            ModeEffect = -2004287480;
            if ( v26 )
              ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
LABEL_30:
            if ( a4 )
              ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
            goto LABEL_10;
          }
          v19 = v26;
          if ( v26 )
          {
            ATL::AtlComPtrAssign(&v30, v26);
            v12 = v30;
            v19 = v26;
          }
          v15 = 0;
          if ( v19 )
            ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
        }
        v16 = v29;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v15 >= 0
      && ((int (__fastcall *)(struct IUnknown *, int *))v23->lpVtbl[1].QueryInterface)(v23, &v24) >= 0
      && !v24 )
    {
      v14 = v23;
      if ( v23 )
      {
        ATL::AtlComPtrAssign(&v25, v23);
        v11 = (struct IAudioMediaType *)v25;
        v14 = v23;
      }
      if ( a4 )
      {
        ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
        v14 = v23;
      }
      goto LABEL_53;
    }
    ModeEffect = -2004287480;
    goto LABEL_30;
  }
  if ( a4 )
  {
    ATL::AtlComPtrAssign(&v25, a4);
    v11 = (struct IAudioMediaType *)v25;
  }
LABEL_57:
  ModeEffect = ValidateAPOInputFormat(v11);
  if ( ModeEffect < 0 )
    goto LABEL_64;
LABEL_61:
  v20 = v11;
  v11 = 0LL;
  v25 = 0LL;
  *a5 = v20;
  if ( a6 )
  {
    v21 = (struct IAudioMediaType *)v12;
    v12 = 0LL;
    v30 = 0LL;
    *a6 = v21;
  }
LABEL_65:
  if ( v27 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v27->lpVtbl->Release)(v27);
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  if ( v11 )
    ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
  return (unsigned int)ModeEffect;
}
