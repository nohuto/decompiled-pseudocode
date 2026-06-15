/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E900
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800217D0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180022BF0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001E2B0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001F220 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001F420 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClien.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18005AFE0 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1800DB678 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800DD214 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 */

__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  struct IAudioSystemEffects2 **v7; // r12
  int v8; // edi
  int v9; // esi
  bool v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  void *v16; // rcx
  __int64 v17; // r9
  int v18; // esi
  int v19; // eax
  int v20; // esi
  __int64 v21; // rax
  void **v22; // rdx
  void *v23; // rcx
  int v24; // r14d
  __int64 v25; // r12
  bool v26; // sf
  void **v27; // rdx
  struct _GUID *v28; // r8
  __int64 (__usercall *v29)@<rax>(CAPOWrapperClient *__hidden@<rcx>, struct IMMDevice *@<rdx>, struct _GUID *@<r8>, struct _GUID *__struct_ptr@<r9>, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioSystemEffects2 **); // rax
  int v30; // eax
  int v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // edi
  __int64 v35; // rax
  void **v36; // rdx
  void *v37; // rcx
  CAPOWrapperClient *v38; // rcx
  void (*v39)(void); // rax
  _QWORD *v40; // rdi
  struct IAudioSystemEffects2 **v42; // rbx
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdi
  struct IAudioProcessingObject *v49; // rdx
  void **v50; // rax
  LPCGUID v51; // r8
  LPCGUID v52; // r9
  void *v53; // rcx
  int v54; // eax
  unsigned int v55; // edi
  int v56; // eax
  unsigned int v57; // ebx
  int pdwType; // [rsp+20h] [rbp-E0h]
  void *v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v60)(_QWORD, GUID *, void **); // [rsp+48h] [rbp-B8h] BYREF
  CAPOWrapperClient *v61; // [rsp+50h] [rbp-B0h] BYREF
  int v62; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp-98h] BYREF
  int pvData; // [rsp+6Ch] [rbp-94h] BYREF
  struct IAudioSystemEffects2 **v66; // [rsp+70h] [rbp-90h]
  struct _GUID v67; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID *v68; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  int *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  __int64 v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall ****v75)(_QWORD, GUID *, void **); // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v7 = a7;
  v8 = 0;
  v9 = a4;
  v62 = a4;
  v68 = a3;
  v66 = a7;
  pcbData = 4;
  v12 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"LoadSystemEffectInAudioSrv",
          0x18u,
          0LL,
          &pvData,
          &pcbData)
     || !pvData;
  if ( *((struct IMMDevice **)this + 13) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
    v13 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a2;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( *((int *)this + 16) > 0 )
  {
    while ( 1 )
    {
      v59 = 0LL;
      if ( v12 )
      {
        pv = 0LL;
        v14 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
        v15 = v14;
        if ( v14 < 0 )
        {
          v47 = 772LL;
LABEL_87:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v47,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v14,
            pdwType);
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_89;
        }
        v16 = v59;
        if ( v59 )
        {
          v59 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
        }
        if ( v8 < 0 || v8 >= *((_DWORD *)this + 16) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x1800504A5LL);
        }
        LODWORD(v60) = *((_DWORD *)this + 10);
        v17 = *((_QWORD *)this + 7) + 16LL * v8;
        *(_QWORD *)&v67.Data1 = pv;
        v14 = Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
                &v59,
                (__int64 *)&v67,
                (unsigned int *)&v60,
                v17);
        v15 = v14;
        if ( v14 < 0 )
        {
          v47 = 774LL;
          goto LABEL_87;
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        v60 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v60);
        v43 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                (char *)this + 56,
                (unsigned int)v8);
        v44 = CSystemEffectWrapper::Create(v43, a2, 0LL, *((unsigned int *)this + 10));
        v15 = v44;
        if ( v44 < 0 )
        {
          v46 = 760LL;
          goto LABEL_82;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
        v44 = (**v60)(v60, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v59);
        v15 = v44;
        if ( v44 < 0 )
        {
          v46 = 762LL;
LABEL_82:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v46,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v44,
            pdwType);
          goto LABEL_83;
        }
        v61 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61);
        v45 = (**(__int64 (__fastcall ***)(void *, GUID *, CAPOWrapperClient **))v59)(
                v59,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v61);
        v15 = v45;
        if ( v45 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x2FD,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v45,
            pdwType);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61);
LABEL_83:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v60);
          goto LABEL_89;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v60);
      }
      v18 = *((_DWORD *)this + 20);
      v19 = *((_DWORD *)this + 21);
      if ( v18 == v19 )
      {
        if ( v19 )
        {
          v26 = (v18 & 0x40000000) != 0;
          v20 = 2 * v18;
          if ( v26 )
            goto LABEL_78;
        }
        else
        {
          v20 = 1;
        }
        if ( (unsigned __int64)v20 > 0xFFFFFFF || (v21 = _o__recalloc(*((_QWORD *)this + 9), v20, 8LL)) == 0 )
        {
LABEL_78:
          v15 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x309,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            pdwType);
LABEL_89:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
          return v15;
        }
        *((_DWORD *)this + 21) = v20;
        *((_QWORD *)this + 9) = v21;
      }
      v22 = (void **)(*((_QWORD *)this + 9) + 8LL * *((int *)this + 20));
      if ( !v22 )
        goto LABEL_27;
      *v22 = v59;
      v23 = v59;
      if ( v59 )
        break;
LABEL_28:
      ++*((_DWORD *)this + 20);
      if ( v23 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      if ( ++v8 >= *((_DWORD *)this + 16) )
      {
        v9 = v62;
        goto LABEL_32;
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v59 + 8LL))(v59);
LABEL_27:
    v23 = v59;
    goto LABEL_28;
  }
LABEL_32:
  v24 = 0;
  if ( *((int *)this + 20) <= 0 )
  {
LABEL_57:
    if ( *((_DWORD *)this + 20) == 1 )
    {
      if ( a6 )
      {
        if ( *((int *)this + 20) <= 0 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18005068CLL);
        }
        v40 = (_QWORD *)*((_QWORD *)this + 9);
        if ( *v40 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 8LL))(*v40);
        *a6 = (struct IAudioProcessingObject *)*v40;
      }
      if ( v7 )
      {
        if ( *((int *)this + 24) <= 0 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x1800506A2LL);
        }
        v42 = (struct IAudioSystemEffects2 **)*((_QWORD *)this + 11);
        if ( *v42 )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))(*v42)->lpVtbl->AddRef)(*v42);
        *v7 = *v42;
      }
    }
    else
    {
      if ( a6 )
      {
        v54 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioProcessingObject **))this)(
                this,
                &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                a6);
        v55 = v54;
        if ( v54 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x337,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v54,
            pdwType);
          return v55;
        }
      }
      if ( v7 )
      {
        v56 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
                this,
                &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                v7);
        v57 = v56;
        if ( v56 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x33A,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v56,
            pdwType);
          return v57;
        }
      }
    }
    return 0LL;
  }
  v25 = 0LL;
  while ( 1 )
  {
    v61 = 0LL;
    v59 = 0LL;
    if ( v24 < 0 || v24 >= *((_DWORD *)this + 20) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180050676LL);
    }
    v26 = (***(int (__fastcall ****)(_QWORD, GUID *, CAPOWrapperClient **))(v25 + *((_QWORD *)this + 9)))(
            *(_QWORD *)(v25 + *((_QWORD *)this + 9)),
            &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6,
            &v61) < 0;
    v67 = *v68;
    if ( v26 )
    {
      v48 = *((_QWORD *)this + 7);
      v49 = *(struct IAudioProcessingObject **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                 (char *)this + 72,
                                                 (unsigned int)v24);
      v50 = &v59;
      if ( !v66 )
        v50 = 0LL;
      v30 = InitializeSystemEffectsInterface(
              a2,
              v49,
              (struct _GUID *)(v48 + 16LL * v24),
              &v67,
              v9,
              a5,
              (struct IAudioSystemEffects2 **)v50);
    }
    else
    {
      v27 = &v59;
      if ( !v66 )
        v27 = 0LL;
      v28 = (struct _GUID *)(*((_QWORD *)this + 7) + 16LL * v24);
      v29 = *(__int64 (__usercall **)@<rax>(CAPOWrapperClient *__hidden@<rcx>, struct IMMDevice *@<rdx>, struct _GUID *@<r8>, struct _GUID *__struct_ptr@<r9>, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioSystemEffects2 **))(*(_QWORD *)v61 + 24LL);
      if ( v29 == CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP )
      {
        v30 = CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
                v61,
                a2,
                v28,
                &v67,
                v9,
                a5,
                (struct IAudioSystemEffects2 **)v27);
      }
      else
      {
        pdwType = v9;
        v30 = ((__int64 (__fastcall *)(CAPOWrapperClient *, struct IMMDevice *, struct _GUID *, struct _GUID *))v29)(
                v61,
                a2,
                v28,
                &v67);
      }
    }
    LODWORD(v60) = v30;
    v31 = v30;
    if ( v30 < 0 )
      break;
    v32 = *((_DWORD *)this + 24);
    v33 = *((_DWORD *)this + 25);
    if ( v32 == v33 )
    {
      if ( v33 )
      {
        v26 = (v32 & 0x40000000) != 0;
        v34 = 2 * v32;
        if ( v26 )
          goto LABEL_95;
      }
      else
      {
        v34 = 1;
      }
      if ( (unsigned __int64)v34 > 0xFFFFFFF || (v35 = _o__recalloc(*((_QWORD *)this + 11), v34, 8LL)) == 0 )
      {
LABEL_95:
        v31 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31D,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          pdwType);
        goto LABEL_102;
      }
      *((_DWORD *)this + 25) = v34;
      *((_QWORD *)this + 11) = v35;
    }
    v36 = (void **)(*((_QWORD *)this + 11) + 8LL * *((int *)this + 24));
    if ( v36 )
    {
      *v36 = v59;
      v37 = v59;
      if ( !v59 )
        goto LABEL_50;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v59 + 8LL))(v59);
    }
    v37 = v59;
LABEL_50:
    ++*((_DWORD *)this + 24);
    if ( v37 )
    {
      v59 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      v39 = *(void (**)(void))(*(_QWORD *)v38 + 16LL);
      if ( (char *)v39 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::Release(v38);
      else
        v39();
    }
    ++v24;
    v25 += 8LL;
    if ( v24 >= *((_DWORD *)this + 20) )
    {
      v7 = v66;
      goto LABEL_57;
    }
    v9 = v62;
  }
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CCompositeSystemEffect::Initialize");
    v62 = 807;
    v71 = &v62;
    v72 = 4LL;
    v73 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)this + 56, (unsigned int)v24);
    v75 = &v60;
    v74 = 16LL;
    v76 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180110C4F, v51, v52, 6u, &pData);
    v31 = (int)v60;
  }
  if ( v31 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x329,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v31,
      pdwType);
LABEL_102:
  v53 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 16LL))(v53);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61);
  return (unsigned int)v31;
}
