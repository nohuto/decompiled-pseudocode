/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x18009B0C4
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033474 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800986B0 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18009F4C4 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DeriveMixFormatFromDevicePipeFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5,
        struct IAudioMediaType **a6)
{
  int ModeEffect; // r14d
  struct IAudioMediaType *v11; // rdi
  struct IUnknown *v12; // rsi
  struct IAudioProcessingObject *v13; // rcx
  ULONG (__stdcall *v14)(IAudioMediaType *); // rax
  CAudioMediaType *v15; // rcx
  ULONG (__stdcall *v16)(IUnknown *); // rax
  struct IUnknown *v17; // rcx
  ULONG (__stdcall *v18)(IAudioMediaType *); // rax
  int v19; // r14d
  __int64 v20; // rcx
  void (*Release)(void); // rax
  ULONG (__stdcall *v22)(IAudioMediaType *); // rax
  struct IUnknown *v23; // rdx
  struct IUnknown *v24; // rcx
  struct IUnknown *v25; // rcx
  void (*v26)(void); // rax
  ULONG (__stdcall *v27)(IAudioMediaType *); // rax
  ULONG (__stdcall *v28)(IAudioMediaType *); // rax
  void (*v29)(void); // rax
  struct IAudioMediaType *v30; // rcx
  struct IAudioMediaType *v31; // rax
  ULONG (__stdcall *v32)(IUnknown *); // rax
  ULONG (__stdcall *v33)(IAudioMediaType *); // rax
  struct IUnknown *v35; // [rsp+48h] [rbp-39h] BYREF
  int v36; // [rsp+50h] [rbp-31h] BYREF
  struct IUnknown *v37; // [rsp+58h] [rbp-29h] BYREF
  struct IUnknown *v38; // [rsp+60h] [rbp-21h] BYREF
  struct IAudioProcessingObject *v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h] BYREF
  int v41; // [rsp+78h] [rbp-9h] BYREF
  struct IUnknown *v42; // [rsp+80h] [rbp-1h] BYREF
  struct _GUID v43; // [rsp+88h] [rbp+7h] BYREF
  __int64 v44; // [rsp+98h] [rbp+17h]

  v44 = -2LL;
  ModeEffect = 0;
  v11 = 0LL;
  v37 = 0LL;
  v12 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    if ( a4 )
    {
      ATL::AtlComPtrAssign(&v37, a4);
      v11 = (struct IAudioMediaType *)v37;
    }
    goto LABEL_85;
  }
  v43 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(this, &v43, 0, a3, 0LL, &v39, 0LL);
  if ( ModeEffect < 0 )
    goto LABEL_88;
  v13 = v39;
  if ( v39 )
  {
    v36 = 0;
    v35 = 0LL;
    if ( *((_DWORD *)this + 37) )
    {
      *(_QWORD *)&v43.Data1 = a4;
      if ( a4 )
      {
        ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->AddRef)(a4);
        v13 = v39;
      }
      v19 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, struct IUnknown **))v13->lpVtbl->IsOutputFormatSupported)(
              v13,
              a4,
              a4,
              &v35);
      if ( v19 == -2005073917 )
      {
        ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
          &v40,
          v39);
        v41 = 0;
        v20 = v40;
        if ( v40 )
        {
          if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 24LL))(v40, &v41) < 0 || (v41 & 1) == 0 )
            goto LABEL_58;
          v38 = 0LL;
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, struct IUnknown **))v39->lpVtbl->IsInputFormatSupported)(
                 v39,
                 0LL,
                 a4,
                 &v38) < 0 )
            goto LABEL_33;
          v23 = v38;
          if ( a4 != v38 )
          {
            ATL::AtlComPtrAssign((struct IUnknown **)&v43, v38);
            a4 = *(struct IUnknown **)&v43.Data1;
            v23 = v38;
          }
          v24 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
            v23 = v38;
          }
          if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, struct IUnknown **))v39->lpVtbl->IsOutputFormatSupported)(
                 v39,
                 v23,
                 a4,
                 &v35) < 0 )
          {
LABEL_33:
            ModeEffect = -2004287480;
            if ( v38 )
            {
              Release = (void (*)(void))v38->lpVtbl->Release;
              if ( (char *)Release == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v38);
              else
                Release();
            }
            if ( v40 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            if ( a4 )
            {
              v22 = (ULONG (__stdcall *)(IAudioMediaType *))a4->lpVtbl->Release;
              if ( (char *)v22 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)a4);
              else
                ((void (__fastcall *)(struct IUnknown *))v22)(a4);
            }
            if ( !v35 )
              goto LABEL_88;
            v16 = v35->lpVtbl->Release;
            if ( (char *)v16 == (char *)CAudioMediaType::Release )
              goto LABEL_14;
            goto LABEL_45;
          }
          v25 = v38;
          if ( v38 )
          {
            ATL::AtlComPtrAssign(&v42, v38);
            v12 = v42;
            v25 = v38;
          }
          v19 = 0;
          if ( v25 )
          {
            v26 = (void (*)(void))v25->lpVtbl->Release;
            if ( (char *)v26 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v25);
            else
              v26();
            v20 = v40;
          }
          else
          {
LABEL_58:
            v20 = v40;
          }
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v19 >= 0
        && ((int (__fastcall *)(struct IUnknown *, int *))v35->lpVtbl[1].QueryInterface)(v35, &v36) >= 0
        && !v36 )
      {
        v17 = v35;
        if ( v35 )
        {
          ATL::AtlComPtrAssign(&v37, v35);
          v11 = (struct IAudioMediaType *)v37;
          v17 = v35;
        }
        if ( a4 )
        {
          v28 = (ULONG (__stdcall *)(IAudioMediaType *))a4->lpVtbl->Release;
          if ( (char *)v28 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)a4);
          else
            ((void (__fastcall *)(struct IUnknown *))v28)(a4);
          v17 = v35;
        }
        goto LABEL_75;
      }
      ModeEffect = -2004287480;
      if ( !a4 )
        goto LABEL_12;
      v27 = (ULONG (__stdcall *)(IAudioMediaType *))a4->lpVtbl->Release;
      v15 = (CAudioMediaType *)a4;
      if ( (char *)v27 == (char *)CAudioMediaType::Release )
        goto LABEL_10;
      ((void (__fastcall *)(struct IUnknown *))v27)(a4);
    }
    else
    {
      *(_QWORD *)&v43.Data1 = a4;
      if ( a4 )
      {
        ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->AddRef)(a4);
        v13 = v39;
      }
      if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, struct IUnknown **))v13->lpVtbl->IsInputFormatSupported)(
             v13,
             a4,
             a4,
             &v35) >= 0
        && ((int (__fastcall *)(struct IUnknown *, int *))v35->lpVtbl[1].QueryInterface)(v35, &v36) >= 0
        && !v36 )
      {
        v17 = v35;
        if ( v35 )
        {
          ATL::AtlComPtrAssign(&v37, v35);
          v11 = (struct IAudioMediaType *)v37;
          v17 = v35;
        }
        if ( a4 )
        {
          v18 = (ULONG (__stdcall *)(IAudioMediaType *))a4->lpVtbl->Release;
          if ( (char *)v18 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)a4);
          else
            ((void (__fastcall *)(struct IUnknown *))v18)(a4);
          v17 = v35;
        }
LABEL_75:
        if ( v17 )
        {
          v29 = (void (*)(void))v17->lpVtbl->Release;
          if ( (char *)v29 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v17);
          else
            v29();
        }
        goto LABEL_81;
      }
      ModeEffect = -2004287480;
      if ( a4 )
      {
        v14 = (ULONG (__stdcall *)(IAudioMediaType *))a4->lpVtbl->Release;
        v15 = (CAudioMediaType *)a4;
        if ( (char *)v14 == (char *)CAudioMediaType::Release )
        {
LABEL_10:
          CAudioMediaType::Release(v15);
          goto LABEL_12;
        }
        ((void (__fastcall *)(struct IUnknown *))v14)(a4);
      }
    }
LABEL_12:
    if ( v35 )
    {
      v16 = v35->lpVtbl->Release;
      if ( (char *)v16 == (char *)CAudioMediaType::Release )
      {
LABEL_14:
        CAudioMediaType::Release((CAudioMediaType *)v35);
        goto LABEL_88;
      }
LABEL_45:
      ((void (*)(void))v16)();
    }
LABEL_88:
    AudSrvTraceLoggingErrorHelper("DeriveMixFormatFromDevicePipeFormat", 1347, ModeEffect);
    goto LABEL_89;
  }
  if ( a4 )
  {
    ATL::AtlComPtrAssign(&v37, a4);
    v11 = (struct IAudioMediaType *)v37;
  }
LABEL_81:
  ModeEffect = ValidateAPOInputFormat(v11);
  if ( ModeEffect < 0 )
    goto LABEL_88;
LABEL_85:
  v30 = v11;
  v11 = 0LL;
  v37 = 0LL;
  *a5 = v30;
  if ( a6 )
  {
    v31 = (struct IAudioMediaType *)v12;
    v12 = 0LL;
    v42 = 0LL;
    *a6 = v31;
  }
LABEL_89:
  if ( v39 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v39->lpVtbl->Release)(v39);
  if ( v12 )
  {
    v32 = v12->lpVtbl->Release;
    if ( (char *)v32 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v12);
    else
      ((void (__fastcall *)(struct IUnknown *))v32)(v12);
  }
  if ( v11 )
  {
    v33 = v11->lpVtbl->Release;
    if ( (char *)v33 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v11);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v33)(v11);
  }
  return (unsigned int)ModeEffect;
}
