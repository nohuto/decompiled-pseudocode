/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1800DC55C
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1800DA8A0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800DD214 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180080EF8 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  __int128 v8; // rdi
  int v9; // eax
  int KSFormatFromWFXFormat; // ebx
  int v11; // eax
  int v12; // eax
  bool v13; // di
  const PROPERTYKEY *v14; // rax
  int v15; // r12d
  void *v16; // rcx
  HRESULT Instance; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int InterfaceIdFromMMDevice; // eax
  int RelatedInterfaceId; // eax
  __int64 v22; // rdi
  _QWORD *v23; // rsi
  void *v24; // rcx
  __int128 v25; // rdi
  void *v26; // rcx
  HRESULT v27; // eax
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdi
  void *v32; // rcx
  void *v33; // rcx
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rdx
  PROPVARIANT *v37; // rbx
  __int64 v38; // rcx
  IPropertyStore *v39; // rax
  IPropertyStore *v40; // rax
  IMMDeviceCollection *v41; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  __int128 v44; // [rsp+58h] [rbp-B0h] BYREF
  char v45; // [rsp+68h] [rbp-A0h]
  LPVOID v46; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v47; // [rsp+80h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v49; // [rsp+90h] [rbp-78h] BYREF
  IMMDeviceCollection *v50; // [rsp+98h] [rbp-70h] BYREF
  IPropertyStore *v51; // [rsp+A0h] [rbp-68h] BYREF
  UINT v52; // [rsp+A8h] [rbp-60h] BYREF
  UINT v53; // [rsp+ACh] [rbp-5Ch] BYREF
  LPVOID v54; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT pvar; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *Src; // [rsp+C8h] [rbp-40h]
  IPropertyStore *v58; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-30h] BYREF
  PROPVARIANT *p_pvar; // [rsp+E0h] [rbp-28h] BYREF
  char v61; // [rsp+E8h] [rbp-20h]
  CLSID *v62; // [rsp+F0h] [rbp-18h]
  GUID *v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp-8h]
  PROPVARIANT *v65; // [rsp+108h] [rbp+0h]
  char v66; // [rsp+110h] [rbp+8h]
  GUID fmtid; // [rsp+118h] [rbp+10h] BYREF
  DWORD pid; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v64 = -2LL;
  v63 = a3;
  v62 = a2;
  memset(a6, 0, sizeof(struct APOInitSystemEffects2));
  *((_QWORD *)&v8 + 1) = 0LL;
  v51 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
         a1,
         0LL,
         &v51);
  KSFormatFromWFXFormat = v9;
  if ( v9 >= 0 )
  {
    v59 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
            &v59);
    KSFormatFromWFXFormat = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x39,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v11);
LABEL_103:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v59);
      goto LABEL_104;
    }
    if ( !v59 )
    {
      KSFormatFromWFXFormat = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_103;
    }
    v58 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v59 + 40LL))(v59, 0LL, &v58);
    pvar = 0LL;
    v56 = 0LL;
    Src = 0LL;
    p_pvar = &pvar;
    v61 = 1;
    v12 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v51->lpVtbl->GetValue)(
            v51,
            &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
            &pvar);
    KSFormatFromWFXFormat = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x47,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v12);
      PropVariantClear(&pvar);
LABEL_102:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v58);
      goto LABEL_103;
    }
    v13 = (_WORD)pvar == 72;
    PropVariantClear(&pvar);
    v50 = 0LL;
    v52 = 0;
    v53 = 0;
    v14 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a5 != eKeywordDetectorConnector )
      v14 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v14->fmtid;
    pid = v14->pid;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v59 + 48LL))(v59) || v13 )
      goto LABEL_100;
    pvar = 0LL;
    v56 = 0LL;
    Src = 0LL;
    v65 = &pvar;
    v66 = 1;
    v49 = 0LL;
    v15 = 3;
    if ( a5 != eKeywordDetectorConnector )
      v15 = 0;
    if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v51->lpVtbl->GetValue)(v51, &fmtid, &pvar) >= 0
      && (_WORD)pvar == 65 )
    {
      *(_QWORD *)&v8 = &v49;
      *(_QWORD *)&v44 = &v49;
      *((_QWORD *)&v44 + 1) = 0LL;
      v45 = 1;
      if ( (unsigned int)v56 < 0x12uLL || (unsigned int)v56 < (unsigned __int64)Src->cbSize + 18 )
      {
        KSFormatFromWFXFormat = -2147024809;
      }
      else
      {
        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(Src, (struct KSDATAFORMAT_WAVEFORMATEX **)&v44 + 1);
        if ( !v45 )
          goto LABEL_26;
        v8 = v44;
      }
      v16 = *(void **)v8;
      if ( *((_QWORD *)&v8 + 1) != *(_QWORD *)v8 )
      {
        if ( v16 )
          CoTaskMemFree(v16);
        *(_QWORD *)v8 = *((_QWORD *)&v8 + 1);
      }
LABEL_26:
      if ( KSFormatFromWFXFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x65,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)KSFormatFromWFXFormat);
LABEL_94:
        if ( v49 )
          CoTaskMemFree(v49);
        PropVariantClear(&pvar);
        goto LABEL_101;
      }
      goto LABEL_87;
    }
    v46 = 0LL;
    if ( a5 == eKeywordDetectorConnector )
    {
      v54 = 0LL;
      pv = 0LL;
      v47 = 0LL;
      Instance = CoCreateInstance(
                   &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                   0LL,
                   0x17u,
                   &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
                   (LPVOID *)&v47);
      KSFormatFromWFXFormat = Instance;
      if ( Instance < 0 )
      {
        v18 = (unsigned int)Instance;
        v19 = 110LL;
LABEL_50:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v19,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
        if ( pv )
          CoTaskMemFree(pv);
        if ( v54 )
          CoTaskMemFree(v54);
LABEL_81:
        if ( v46 )
          CoTaskMemFree(v46);
        goto LABEL_94;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v46,
        0LL);
      InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v46);
      KSFormatFromWFXFormat = InterfaceIdFromMMDevice;
      if ( InterfaceIdFromMMDevice < 0 )
      {
        v18 = (unsigned int)InterfaceIdFromMMDevice;
        v19 = 111LL;
        goto LABEL_50;
      }
      v44 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v54,
        0LL);
      RelatedInterfaceId = mmdDevGetRelatedInterfaceId(v46, &v44, &v54);
      KSFormatFromWFXFormat = RelatedInterfaceId;
      if ( RelatedInterfaceId < 0 )
      {
        v18 = (unsigned int)RelatedInterfaceId;
        v19 = 112LL;
        goto LABEL_50;
      }
      *(_QWORD *)&v44 = &pv;
      *((_QWORD *)&v44 + 1) = 0LL;
      v45 = 1;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, LPVOID, _QWORD, char *))(*(_QWORD *)&v47->wFormatTag + 32LL))(
                                v47,
                                v54,
                                0LL,
                                (char *)&v44 + 8);
      if ( v45 )
      {
        v22 = *((_QWORD *)&v44 + 1);
        v23 = (_QWORD *)v44;
        v24 = *(void **)v44;
        if ( *((_QWORD *)&v44 + 1) != *(_QWORD *)v44 )
        {
          if ( v24 )
            CoTaskMemFree(v24);
          *v23 = v22;
        }
      }
      if ( KSFormatFromWFXFormat < 0 )
      {
        v19 = 114LL;
LABEL_49:
        v18 = (unsigned int)KSFormatFromWFXFormat;
        goto LABEL_50;
      }
      *(_QWORD *)&v44 = &v49;
      *((_QWORD *)&v44 + 1) = 0LL;
      v45 = 1;
      KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(
                                (const struct tWAVEFORMATEX *)pv,
                                (struct KSDATAFORMAT_WAVEFORMATEX **)&v44 + 1);
      if ( v45 )
      {
        v25 = v44;
        v26 = *(void **)v44;
        if ( *((_QWORD *)&v44 + 1) != *(_QWORD *)v44 )
        {
          if ( v26 )
            CoTaskMemFree(v26);
          *(_QWORD *)v25 = *((_QWORD *)&v25 + 1);
        }
      }
      if ( KSFormatFromWFXFormat < 0 )
      {
        v19 = 115LL;
        goto LABEL_49;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v54 )
        CoTaskMemFree(v54);
LABEL_85:
      if ( v46 )
        CoTaskMemFree(v46);
LABEL_87:
      p_pvar = 0LL;
      ppv = (LPVOID *)&p_pvar;
      v35 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
              a1,
              &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
              23LL);
      KSFormatFromWFXFormat = v35;
      if ( v35 < 0 )
      {
        v36 = 131LL;
LABEL_93:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v36,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v35);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
        goto LABEL_94;
      }
      v37 = p_pvar;
      v38 = (__int64)v50;
      v50 = 0LL;
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      LODWORD(ppv) = v15;
      v35 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))*v37
             + 13))(
              v37,
              v49,
              *(unsigned int *)v49,
              1LL,
              ppv,
              &v50,
              &v52,
              &v53);
      KSFormatFromWFXFormat = v35;
      if ( v35 < 0 )
      {
        v36 = 134LL;
        goto LABEL_93;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
      if ( v49 )
        CoTaskMemFree(v49);
      PropVariantClear(&pvar);
LABEL_100:
      a6->APOInit.cbSize = 88;
      a6->APOInit.clsid = *v62;
      v39 = v51;
      v51 = 0LL;
      a6->pAPOEndpointProperties = v39;
      v40 = v58;
      v58 = 0LL;
      a6->pAPOSystemEffectsProperties = v40;
      a6->pReserved = 0LL;
      v41 = v50;
      v50 = 0LL;
      a6->pDeviceCollection = v41;
      a6->nSoftwareIoDeviceInCollection = v52;
      a6->nSoftwareIoConnectorIndex = v53;
      a6->AudioProcessingMode = *v63;
      a6->InitializeForDiscoveryOnly = a4;
      KSFormatFromWFXFormat = 0;
LABEL_101:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v50);
      goto LABEL_102;
    }
    v47 = 0LL;
    pv = 0LL;
    v27 = CoCreateInstance(
            &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
            0LL,
            0x17u,
            &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
            &pv);
    KSFormatFromWFXFormat = v27;
    if ( v27 >= 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v46,
        0LL);
      v30 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v46);
      KSFormatFromWFXFormat = v30;
      if ( v30 >= 0 )
      {
        *(_QWORD *)&v44 = &v47;
        *((_QWORD *)&v44 + 1) = 0LL;
        v45 = 1;
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, char *))(*(_QWORD *)pv + 32LL))(
                                  pv,
                                  v46,
                                  0LL,
                                  (char *)&v44 + 8);
        if ( v45 )
        {
          v31 = *((_QWORD *)&v44 + 1);
          v32 = *(void **)v44;
          if ( *((_QWORD *)&v44 + 1) != *(_QWORD *)v44 )
          {
            if ( v32 )
              CoTaskMemFree(v32);
            *(_QWORD *)v44 = v31;
          }
        }
        if ( KSFormatFromWFXFormat >= 0 )
        {
          *(_QWORD *)&v44 = &v49;
          *((_QWORD *)&v44 + 1) = 0LL;
          v45 = 1;
          KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v47, (struct KSDATAFORMAT_WAVEFORMATEX **)&v44 + 1);
          if ( v45 )
          {
            v33 = *(void **)v44;
            v34 = *((_QWORD *)&v44 + 1);
            if ( *((_QWORD *)&v44 + 1) != *(_QWORD *)v44 )
            {
              if ( v33 )
                CoTaskMemFree(v33);
              *(_QWORD *)v44 = v34;
            }
          }
          if ( KSFormatFromWFXFormat >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
            if ( v47 )
              CoTaskMemFree(v47);
            goto LABEL_85;
          }
          v29 = 126LL;
        }
        else
        {
          v29 = 125LL;
        }
        v28 = (unsigned int)KSFormatFromWFXFormat;
      }
      else
      {
        v28 = (unsigned int)v30;
        v29 = 124LL;
      }
    }
    else
    {
      v28 = (unsigned int)v27;
      v29 = 123LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v29,
      (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)v28);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
    if ( v47 )
      CoTaskMemFree(v47);
    goto LABEL_81;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x35,
    (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
    (const char *)(unsigned int)v9);
LABEL_104:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v51);
  return (unsigned int)KSFormatFromWFXFormat;
}
