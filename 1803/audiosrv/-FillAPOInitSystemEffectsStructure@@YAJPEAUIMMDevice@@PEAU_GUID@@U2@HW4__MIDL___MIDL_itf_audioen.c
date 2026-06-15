/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18010A760
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x180108740 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010B034 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180002BA0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // di
  const PROPERTYKEY *v16; // rax
  int v17; // r12d
  void *v18; // rcx
  HRESULT Instance; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int InterfaceIdFromMMDevice; // eax
  int RelatedInterfaceId; // eax
  __int64 v24; // rdi
  _QWORD *v25; // rsi
  void *v26; // rcx
  __int128 v27; // rdi
  void *v28; // rcx
  HRESULT v29; // eax
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdi
  void *v34; // rcx
  void *v35; // rcx
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rdx
  PROPVARIANT *v39; // rbx
  __int64 v40; // rcx
  IPropertyStore *v41; // rax
  IPropertyStore *v42; // rax
  IMMDeviceCollection *v43; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  __int128 v46; // [rsp+58h] [rbp-B0h] BYREF
  char v47; // [rsp+68h] [rbp-A0h]
  LPVOID v48; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v49; // [rsp+80h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v51; // [rsp+90h] [rbp-78h] BYREF
  IMMDeviceCollection *v52; // [rsp+98h] [rbp-70h] BYREF
  IPropertyStore *v53; // [rsp+A0h] [rbp-68h] BYREF
  UINT v54; // [rsp+A8h] [rbp-60h] BYREF
  UINT v55; // [rsp+ACh] [rbp-5Ch] BYREF
  LPVOID v56; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT pvar; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *Src; // [rsp+C8h] [rbp-40h]
  IPropertyStore *v60; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-30h] BYREF
  PROPVARIANT *p_pvar; // [rsp+E0h] [rbp-28h] BYREF
  char v63; // [rsp+E8h] [rbp-20h]
  CLSID *v64; // [rsp+F0h] [rbp-18h]
  GUID *v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+100h] [rbp-8h]
  PROPVARIANT *v67; // [rsp+108h] [rbp+0h]
  char v68; // [rsp+110h] [rbp+8h]
  GUID fmtid; // [rsp+118h] [rbp+10h] BYREF
  DWORD pid; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v66 = -2LL;
  v65 = a3;
  v64 = a2;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  *((_QWORD *)&v8 + 1) = 0LL;
  v53 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
         a1,
         0LL,
         &v53);
  KSFormatFromWFXFormat = v9;
  if ( v9 >= 0 )
  {
    v61 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
            &v61);
    KSFormatFromWFXFormat = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 54LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)v12);
LABEL_104:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v61);
      goto LABEL_105;
    }
    if ( !v61 )
    {
      KSFormatFromWFXFormat = -2147418113;
      v12 = 2147549183LL;
      v13 = 55LL;
      goto LABEL_7;
    }
    v60 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v61 + 40LL))(v61, 0LL, &v60);
    pvar = 0LL;
    v58 = 0LL;
    Src = 0LL;
    p_pvar = &pvar;
    v63 = 1;
    v14 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v53->lpVtbl->GetValue)(
            v53,
            &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
            &pvar);
    KSFormatFromWFXFormat = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v14);
      PropVariantClear(&pvar);
LABEL_103:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v60);
      goto LABEL_104;
    }
    v15 = (_WORD)pvar == 72;
    PropVariantClear(&pvar);
    v52 = 0LL;
    v54 = 0;
    v55 = 0;
    v16 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a5 != eKeywordDetectorConnector )
      v16 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v16->fmtid;
    pid = v16->pid;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v61 + 48LL))(v61) || v15 )
      goto LABEL_101;
    pvar = 0LL;
    v58 = 0LL;
    Src = 0LL;
    v67 = &pvar;
    v68 = 1;
    v51 = 0LL;
    v17 = 3;
    if ( a5 != eKeywordDetectorConnector )
      v17 = 0;
    if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v53->lpVtbl->GetValue)(v53, &fmtid, &pvar) >= 0
      && (_WORD)pvar == 65 )
    {
      *(_QWORD *)&v8 = &v51;
      *(_QWORD *)&v46 = &v51;
      *((_QWORD *)&v46 + 1) = 0LL;
      v47 = 1;
      if ( (unsigned int)v58 < 0x12uLL || (unsigned int)v58 < (unsigned __int64)Src->cbSize + 18 )
      {
        KSFormatFromWFXFormat = -2147024809;
      }
      else
      {
        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(Src, (struct KSDATAFORMAT_WAVEFORMATEX **)&v46 + 1);
        if ( !v47 )
          goto LABEL_27;
        v8 = v46;
      }
      v18 = *(void **)v8;
      if ( *((_QWORD *)&v8 + 1) != *(_QWORD *)v8 )
      {
        if ( v18 )
          CoTaskMemFree(v18);
        *(_QWORD *)v8 = *((_QWORD *)&v8 + 1);
      }
LABEL_27:
      if ( KSFormatFromWFXFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x62,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)KSFormatFromWFXFormat);
LABEL_95:
        if ( v51 )
          CoTaskMemFree(v51);
        PropVariantClear(&pvar);
        goto LABEL_102;
      }
      goto LABEL_88;
    }
    v48 = 0LL;
    if ( a5 == eKeywordDetectorConnector )
    {
      v56 = 0LL;
      pv = 0LL;
      v49 = 0LL;
      Instance = CoCreateInstance(
                   &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                   0LL,
                   0x17u,
                   &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5,
                   (LPVOID *)&v49);
      KSFormatFromWFXFormat = Instance;
      if ( Instance < 0 )
      {
        v20 = (unsigned int)Instance;
        v21 = 107LL;
LABEL_51:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v49);
        if ( pv )
          CoTaskMemFree(pv);
        if ( v56 )
          CoTaskMemFree(v56);
LABEL_82:
        if ( v48 )
          CoTaskMemFree(v48);
        goto LABEL_95;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v48,
        0LL);
      InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v48);
      KSFormatFromWFXFormat = InterfaceIdFromMMDevice;
      if ( InterfaceIdFromMMDevice < 0 )
      {
        v20 = (unsigned int)InterfaceIdFromMMDevice;
        v21 = 108LL;
        goto LABEL_51;
      }
      v46 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v56,
        0LL);
      RelatedInterfaceId = mmdDevGetRelatedInterfaceId(v48, &v46, &v56);
      KSFormatFromWFXFormat = RelatedInterfaceId;
      if ( RelatedInterfaceId < 0 )
      {
        v20 = (unsigned int)RelatedInterfaceId;
        v21 = 109LL;
        goto LABEL_51;
      }
      *(_QWORD *)&v46 = &pv;
      *((_QWORD *)&v46 + 1) = 0LL;
      v47 = 1;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, LPVOID, _QWORD, char *))(*(_QWORD *)&v49->wFormatTag + 32LL))(
                                v49,
                                v56,
                                0LL,
                                (char *)&v46 + 8);
      if ( v47 )
      {
        v24 = *((_QWORD *)&v46 + 1);
        v25 = (_QWORD *)v46;
        v26 = *(void **)v46;
        if ( *((_QWORD *)&v46 + 1) != *(_QWORD *)v46 )
        {
          if ( v26 )
            CoTaskMemFree(v26);
          *v25 = v24;
        }
      }
      if ( KSFormatFromWFXFormat < 0 )
      {
        v21 = 111LL;
LABEL_50:
        v20 = (unsigned int)KSFormatFromWFXFormat;
        goto LABEL_51;
      }
      *(_QWORD *)&v46 = &v51;
      *((_QWORD *)&v46 + 1) = 0LL;
      v47 = 1;
      KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(
                                (const struct tWAVEFORMATEX *)pv,
                                (struct KSDATAFORMAT_WAVEFORMATEX **)&v46 + 1);
      if ( v47 )
      {
        v27 = v46;
        v28 = *(void **)v46;
        if ( *((_QWORD *)&v46 + 1) != *(_QWORD *)v46 )
        {
          if ( v28 )
            CoTaskMemFree(v28);
          *(_QWORD *)v27 = *((_QWORD *)&v27 + 1);
        }
      }
      if ( KSFormatFromWFXFormat < 0 )
      {
        v21 = 112LL;
        goto LABEL_50;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v49);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v56 )
        CoTaskMemFree(v56);
LABEL_86:
      if ( v48 )
        CoTaskMemFree(v48);
LABEL_88:
      p_pvar = 0LL;
      ppv = (LPVOID *)&p_pvar;
      v37 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
              a1,
              &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
              23LL);
      KSFormatFromWFXFormat = v37;
      if ( v37 < 0 )
      {
        v38 = 128LL;
LABEL_94:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
        goto LABEL_95;
      }
      v39 = p_pvar;
      v40 = (__int64)v52;
      v52 = 0LL;
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      LODWORD(ppv) = v17;
      v37 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))*v39
             + 13))(
              v39,
              v51,
              *(unsigned int *)v51,
              1LL,
              ppv,
              &v52,
              &v54,
              &v55);
      KSFormatFromWFXFormat = v37;
      if ( v37 < 0 )
      {
        v38 = 131LL;
        goto LABEL_94;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
      if ( v51 )
        CoTaskMemFree(v51);
      PropVariantClear(&pvar);
LABEL_101:
      a6->APOInit.cbSize = 88;
      a6->APOInit.clsid = *v64;
      v41 = v53;
      v53 = 0LL;
      a6->pAPOEndpointProperties = v41;
      v42 = v60;
      v60 = 0LL;
      a6->pAPOSystemEffectsProperties = v42;
      a6->pReserved = 0LL;
      v43 = v52;
      v52 = 0LL;
      a6->pDeviceCollection = v43;
      a6->nSoftwareIoDeviceInCollection = v54;
      a6->nSoftwareIoConnectorIndex = v55;
      a6->AudioProcessingMode = *v65;
      a6->InitializeForDiscoveryOnly = a4;
      KSFormatFromWFXFormat = 0;
LABEL_102:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v52);
      goto LABEL_103;
    }
    v49 = 0LL;
    pv = 0LL;
    v29 = CoCreateInstance(
            &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
            0LL,
            0x17u,
            &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5,
            &pv);
    KSFormatFromWFXFormat = v29;
    if ( v29 >= 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v48,
        0LL);
      v32 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v48);
      KSFormatFromWFXFormat = v32;
      if ( v32 >= 0 )
      {
        *(_QWORD *)&v46 = &v49;
        *((_QWORD *)&v46 + 1) = 0LL;
        v47 = 1;
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, char *))(*(_QWORD *)pv + 32LL))(
                                  pv,
                                  v48,
                                  0LL,
                                  (char *)&v46 + 8);
        if ( v47 )
        {
          v33 = *((_QWORD *)&v46 + 1);
          v34 = *(void **)v46;
          if ( *((_QWORD *)&v46 + 1) != *(_QWORD *)v46 )
          {
            if ( v34 )
              CoTaskMemFree(v34);
            *(_QWORD *)v46 = v33;
          }
        }
        if ( KSFormatFromWFXFormat >= 0 )
        {
          *(_QWORD *)&v46 = &v51;
          *((_QWORD *)&v46 + 1) = 0LL;
          v47 = 1;
          KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v49, (struct KSDATAFORMAT_WAVEFORMATEX **)&v46 + 1);
          if ( v47 )
          {
            v35 = *(void **)v46;
            v36 = *((_QWORD *)&v46 + 1);
            if ( *((_QWORD *)&v46 + 1) != *(_QWORD *)v46 )
            {
              if ( v35 )
                CoTaskMemFree(v35);
              *(_QWORD *)v46 = v36;
            }
          }
          if ( KSFormatFromWFXFormat >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
            if ( v49 )
              CoTaskMemFree(v49);
            goto LABEL_86;
          }
          v31 = 123LL;
        }
        else
        {
          v31 = 122LL;
        }
        v30 = (unsigned int)KSFormatFromWFXFormat;
      }
      else
      {
        v30 = (unsigned int)v32;
        v31 = 121LL;
      }
    }
    else
    {
      v30 = (unsigned int)v29;
      v31 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)v30);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
    if ( v49 )
      CoTaskMemFree(v49);
    goto LABEL_82;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
    (const char *)(unsigned int)v9);
LABEL_105:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
  return (unsigned int)KSFormatFromWFXFormat;
}
