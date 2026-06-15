/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014090
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1400107B0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1400130F0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400336A4 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x14004715C (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
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
  BOOL v6; // r15d
  IPropertyStore *v8; // rbx
  int v9; // eax
  int KSFormatFromWFXFormat; // edi
  int v11; // eax
  int v12; // eax
  bool v13; // di
  const PROPERTYKEY *v14; // rax
  int v15; // r13d
  char *v16; // rsi
  _WORD *v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  PROPVARIANT *v20; // rdi
  IMMDeviceCollection *v21; // rcx
  IPropertyStore *v22; // rax
  IPropertyStore *v23; // rax
  IMMDeviceCollection *v24; // rax
  IMMDeviceCollection *v25; // rcx
  HRESULT Instance; // eax
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int InterfaceIdFromMMDevice; // eax
  void *v31; // rsi
  DWORD LastError; // edi
  int RelatedInterfaceId; // eax
  struct tWAVEFORMATEX *v34; // rsi
  struct tWAVEFORMATEX *v35; // r15
  void *v36; // rcx
  struct tWAVEFORMATEX *v37; // rsi
  void *v38; // rcx
  struct tWAVEFORMATEX *v39; // r15
  void *v40; // rcx
  HRESULT v41; // eax
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // eax
  struct tWAVEFORMATEX *v45; // rsi
  struct tWAVEFORMATEX *v46; // r15
  void *v47; // rcx
  struct tWAVEFORMATEX *v48; // rsi
  void *v49; // rcx
  struct tWAVEFORMATEX *v50; // r15
  __int64 v51; // rdx
  int ppv; // [rsp+28h] [rbp-E0h]
  LPVOID *ppva; // [rsp+28h] [rbp-E0h]
  int ppvb; // [rsp+28h] [rbp-E0h]
  int ppvc; // [rsp+28h] [rbp-E0h]
  LPVOID v57; // [rsp+60h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v58; // [rsp+68h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v59; // [rsp+70h] [rbp-98h] BYREF
  struct tWAVEFORMATEX *v60[2]; // [rsp+78h] [rbp-90h] BYREF
  char v61; // [rsp+88h] [rbp-80h]
  LPVOID pv; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v63; // [rsp+A0h] [rbp-68h] BYREF
  IMMDeviceCollection *v64; // [rsp+A8h] [rbp-60h]
  IPropertyStore *v65; // [rsp+B0h] [rbp-58h] BYREF
  IPropertyStore *v66; // [rsp+B8h] [rbp-50h] BYREF
  UINT v67; // [rsp+C0h] [rbp-48h]
  UINT v68; // [rsp+C4h] [rbp-44h]
  PROPVARIANT pvar; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-38h]
  void *Src; // [rsp+D8h] [rbp-30h]
  __int64 v72; // [rsp+E0h] [rbp-28h] BYREF
  PROPVARIANT *p_pvar; // [rsp+E8h] [rbp-20h] BYREF
  char v74; // [rsp+F0h] [rbp-18h]
  CLSID *v75; // [rsp+F8h] [rbp-10h]
  GUID *v76; // [rsp+100h] [rbp-8h]
  __int64 v77; // [rsp+108h] [rbp+0h]
  PROPVARIANT *v78; // [rsp+110h] [rbp+8h]
  char v79; // [rsp+118h] [rbp+10h]
  GUID fmtid; // [rsp+120h] [rbp+18h] BYREF
  DWORD pid; // [rsp+130h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v77 = -2LL;
  v6 = a4;
  v76 = a3;
  v75 = a2;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  v8 = 0LL;
  v66 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
         a1,
         0LL,
         &v66);
  KSFormatFromWFXFormat = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)(unsigned int)v9,
      ppv);
    goto LABEL_40;
  }
  v72 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
          a1,
          &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
          &v72);
  KSFormatFromWFXFormat = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)(unsigned int)v11,
      ppv);
  }
  else
  {
    if ( v72 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v72 + 40LL))(v72, 0LL, &v65);
      pvar = 0LL;
      v70 = 0LL;
      Src = 0LL;
      p_pvar = &pvar;
      v74 = 1;
      v12 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v66->lpVtbl->GetValue)(
              v66,
              &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
              &pvar);
      KSFormatFromWFXFormat = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v12,
          ppv);
        PropVariantClear(&pvar);
        goto LABEL_125;
      }
      v13 = (_WORD)pvar == 72;
      PropVariantClear(&pvar);
      v64 = 0LL;
      v67 = 0;
      v68 = 0;
      v14 = &PKEY_AudioEngine_DeviceFormat;
      if ( a5 == eKeywordDetectorConnector )
        v14 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
      fmtid = v14->fmtid;
      pid = v14->pid;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v72 + 48LL))(v72) || v13 )
        goto LABEL_34;
      pvar = 0LL;
      v70 = 0LL;
      Src = 0LL;
      v78 = &pvar;
      v79 = 1;
      pv = 0LL;
      v15 = 0;
      if ( a5 == eKeywordDetectorConnector )
        v15 = 3;
      if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v66->lpVtbl->GetValue)(v66, &fmtid, &pvar) >= 0
        && (_WORD)pvar == 65 )
      {
        v16 = 0LL;
        v17 = Src;
        if ( (unsigned int)v70 < 0x12uLL )
        {
          KSFormatFromWFXFormat = -2147024809;
        }
        else
        {
          v18 = *((unsigned __int16 *)Src + 8);
          if ( (unsigned int)v70 < (unsigned __int64)(v18 + 18) )
          {
            KSFormatFromWFXFormat = -2147024809;
          }
          else
          {
            KSFormatFromWFXFormat = 0;
            if ( (unsigned int)v18 < 0x16 && *(_WORD *)Src == 0xFFFE )
            {
              KSFormatFromWFXFormat = -2147024809;
            }
            else
            {
              v16 = (char *)CoTaskMemAlloc(v18 + 82);
              if ( v16 )
              {
                *(_DWORD *)v16 = (unsigned __int16)v17[8] + 82;
                *(_QWORD *)(v16 + 4) = 0LL;
                *((_DWORD *)v16 + 3) = 0;
                *((GUID *)v16 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
                *((GUID *)v16 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
                memcpy_0(v16 + 64, v17, (unsigned __int16)v17[8] + 18LL);
                if ( *v17 == 0xFFFE )
                {
                  *((_OWORD *)v16 + 2) = *(_OWORD *)(v17 + 12);
                }
                else
                {
                  *((GUID *)v16 + 2) = GUID_00000000_0000_0010_8000_00aa00389b71;
                  *((_DWORD *)v16 + 8) = (unsigned __int16)*v17;
                }
              }
              else
              {
                KSFormatFromWFXFormat = -2147024882;
              }
            }
          }
        }
        if ( v16 != pv )
        {
          if ( pv )
            CoTaskMemFree(pv);
          pv = v16;
        }
        if ( KSFormatFromWFXFormat < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x62,
            (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
            (const char *)(unsigned int)KSFormatFromWFXFormat,
            ppv);
          goto LABEL_121;
        }
        v6 = a4;
LABEL_25:
        p_pvar = 0LL;
        ppva = (LPVOID *)&p_pvar;
        v19 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                a1,
                &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                23LL);
        KSFormatFromWFXFormat = v19;
        if ( v19 < 0 )
        {
          v51 = 128LL;
        }
        else
        {
          v20 = p_pvar;
          v21 = v64;
          v64 = 0LL;
          if ( v21 )
            ((void (__fastcall *)(IMMDeviceCollection *))v21->lpVtbl->Release)(v21);
          LODWORD(ppva) = v15;
          v19 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64))*v20 + 13))(
                  v20,
                  pv,
                  *(unsigned int *)pv,
                  1LL);
          KSFormatFromWFXFormat = v19;
          if ( v19 >= 0 )
          {
            if ( p_pvar )
              (*((void (__fastcall **)(PROPVARIANT *))*p_pvar + 2))(p_pvar);
            if ( pv )
              CoTaskMemFree(pv);
            PropVariantClear(&pvar);
LABEL_34:
            a6->APOInit.cbSize = 88;
            a6->APOInit.clsid = *v75;
            v22 = v66;
            v66 = 0LL;
            a6->pAPOEndpointProperties = v22;
            v23 = v65;
            v65 = 0LL;
            a6->pAPOSystemEffectsProperties = v23;
            a6->pReserved = 0LL;
            v24 = v64;
            v25 = 0LL;
            v64 = 0LL;
            a6->pDeviceCollection = v24;
            a6->nSoftwareIoDeviceInCollection = v67;
            a6->nSoftwareIoConnectorIndex = v68;
            a6->AudioProcessingMode = *v76;
            a6->InitializeForDiscoveryOnly = v6;
            KSFormatFromWFXFormat = 0;
LABEL_35:
            if ( !v25 )
              goto LABEL_36;
            ((void (__fastcall *)(IMMDeviceCollection *))v25->lpVtbl->Release)(v25);
LABEL_125:
            v8 = v65;
LABEL_36:
            if ( v8 )
              ((void (__fastcall *)(IPropertyStore *))v8->lpVtbl->Release)(v8);
            goto LABEL_38;
          }
          v51 = 131LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v51,
          (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v19,
          (int)ppva);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&p_pvar);
LABEL_121:
        if ( pv )
          CoTaskMemFree(pv);
        PropVariantClear(&pvar);
        v8 = v65;
        v25 = v64;
        goto LABEL_35;
      }
      v57 = 0LL;
      if ( a5 == eKeywordDetectorConnector )
      {
        v63 = 0LL;
        v59 = 0LL;
        v58 = 0LL;
        Instance = CoCreateInstance(
                     &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                     0LL,
                     0x17u,
                     &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5,
                     (LPVOID *)&v58);
        KSFormatFromWFXFormat = Instance;
        if ( Instance < 0 )
        {
          v28 = (unsigned int)Instance;
          v29 = 107LL;
LABEL_80:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v29,
            (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
            (const char *)v28,
            ppvb);
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v58);
          if ( v59 )
            CoTaskMemFree(v59);
          if ( v63 )
            CoTaskMemFree(v63);
LABEL_114:
          if ( v57 )
            CoTaskMemFree(v57);
          goto LABEL_121;
        }
        v57 = 0LL;
        InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v57);
        KSFormatFromWFXFormat = InterfaceIdFromMMDevice;
        if ( InterfaceIdFromMMDevice < 0 )
        {
          v28 = (unsigned int)InterfaceIdFromMMDevice;
          v29 = 108LL;
          goto LABEL_80;
        }
        *(_OWORD *)v60 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
        v31 = v63;
        if ( v63 )
        {
          LastError = GetLastError();
          CoTaskMemFree(v31);
          SetLastError(LastError);
        }
        v63 = 0LL;
        RelatedInterfaceId = mmdDevGetRelatedInterfaceId(v57, v60, &v63);
        KSFormatFromWFXFormat = RelatedInterfaceId;
        if ( RelatedInterfaceId < 0 )
        {
          v28 = (unsigned int)RelatedInterfaceId;
          v29 = 109LL;
          goto LABEL_80;
        }
        v60[0] = (struct tWAVEFORMATEX *)&v59;
        v60[1] = 0LL;
        v61 = 1;
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, LPVOID, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)&v58->wFormatTag + 32LL))(
                                  v58,
                                  v63,
                                  0LL,
                                  &v60[1]);
        if ( v61 )
        {
          v34 = v60[1];
          v35 = v60[0];
          v36 = *(void **)v60[0];
          if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
          {
            if ( v36 )
              CoTaskMemFree(v36);
            *(_QWORD *)&v35->wFormatTag = v34;
          }
          v6 = a4;
        }
        if ( KSFormatFromWFXFormat < 0 )
        {
          v29 = 111LL;
LABEL_79:
          v28 = (unsigned int)KSFormatFromWFXFormat;
          goto LABEL_80;
        }
        v60[0] = (struct tWAVEFORMATEX *)&pv;
        v60[1] = 0LL;
        v61 = 1;
        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v59, (struct KSDATAFORMAT_WAVEFORMATEX **)&v60[1]);
        if ( v61 )
        {
          v37 = v60[0];
          v38 = *(void **)v60[0];
          v39 = v60[1];
          if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
          {
            if ( v38 )
              CoTaskMemFree(v38);
            *(_QWORD *)&v37->wFormatTag = v39;
          }
          v6 = a4;
        }
        if ( KSFormatFromWFXFormat < 0 )
        {
          v29 = 112LL;
          goto LABEL_79;
        }
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v58);
        if ( v59 )
          CoTaskMemFree(v59);
        v40 = v63;
        if ( v63 )
          goto LABEL_88;
        goto LABEL_89;
      }
      v58 = 0LL;
      v59 = 0LL;
      v41 = CoCreateInstance(
              &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
              0LL,
              0x17u,
              &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5,
              (LPVOID *)&v59);
      KSFormatFromWFXFormat = v41;
      if ( v41 >= 0 )
      {
        v57 = 0LL;
        v44 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v57);
        KSFormatFromWFXFormat = v44;
        if ( v44 >= 0 )
        {
          v60[0] = (struct tWAVEFORMATEX *)&v58;
          v60[1] = 0LL;
          v61 = 1;
          KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, LPVOID, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)&v59->wFormatTag + 32LL))(
                                    v59,
                                    v57,
                                    0LL,
                                    &v60[1]);
          if ( v61 )
          {
            v45 = v60[1];
            v46 = v60[0];
            v47 = *(void **)v60[0];
            if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
            {
              if ( v47 )
                CoTaskMemFree(v47);
              *(_QWORD *)&v46->wFormatTag = v45;
            }
            v6 = a4;
          }
          if ( KSFormatFromWFXFormat >= 0 )
          {
            v60[0] = (struct tWAVEFORMATEX *)&pv;
            v60[1] = 0LL;
            v61 = 1;
            KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(v58, (struct KSDATAFORMAT_WAVEFORMATEX **)&v60[1]);
            if ( v61 )
            {
              v48 = v60[0];
              v49 = *(void **)v60[0];
              v50 = v60[1];
              if ( v60[1] != *(struct tWAVEFORMATEX **)v60[0] )
              {
                if ( v49 )
                  CoTaskMemFree(v49);
                *(_QWORD *)&v48->wFormatTag = v50;
              }
              v6 = a4;
            }
            if ( KSFormatFromWFXFormat >= 0 )
            {
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v59);
              v40 = v58;
              if ( v58 )
LABEL_88:
                CoTaskMemFree(v40);
LABEL_89:
              if ( v57 )
                CoTaskMemFree(v57);
              goto LABEL_25;
            }
            v43 = 123LL;
          }
          else
          {
            v43 = 122LL;
          }
          v42 = (unsigned int)KSFormatFromWFXFormat;
        }
        else
        {
          v42 = (unsigned int)v44;
          v43 = 121LL;
        }
      }
      else
      {
        v42 = (unsigned int)v41;
        v43 = 120LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)v42,
        ppvc);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v59);
      if ( v58 )
        CoTaskMemFree(v58);
      goto LABEL_114;
    }
    KSFormatFromWFXFormat = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
      (const char *)0x8000FFFFLL,
      ppv);
  }
LABEL_38:
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
LABEL_40:
  if ( v66 )
    ((void (__fastcall *)(IPropertyStore *))v66->lpVtbl->Release)(v66);
  return (unsigned int)KSFormatFromWFXFormat;
}
