/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400165E0
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1400143E0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140015B90 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x140034FC0 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x140047B98 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v8; // rdi
  HRESULT InterfaceIdFromMMDevice; // ebx
  struct IMMDevice *v10; // rbx
  bool v11; // r14
  const PROPERTYKEY *v12; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // r13d
  _WORD *v14; // r14
  __int64 v15; // rcx
  char *v16; // rax
  IPropertyStore *v17; // rax
  IPropertyStore *v18; // rax
  IMMDeviceCollection *v19; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  struct IMMDevice *v22; // [rsp+58h] [rbp-B0h] BYREF
  IPropertyStore *v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v26; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v27; // [rsp+80h] [rbp-88h] BYREF
  IMMDeviceCollection *v28; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v29; // [rsp+90h] [rbp-78h] BYREF
  IPropertyStore *v30; // [rsp+98h] [rbp-70h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v31; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID v32; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT pvar; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-48h]
  void *Src; // [rsp+C8h] [rbp-40h]
  CLSID *v37; // [rsp+D0h] [rbp-38h]
  GUID *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  __int64 v40; // [rsp+E8h] [rbp-20h]
  __int128 v41; // [rsp+F8h] [rbp-10h] BYREF
  GUID fmtid; // [rsp+108h] [rbp+0h] BYREF
  DWORD pid; // [rsp+118h] [rbp+10h]

  v39 = -2LL;
  v38 = a3;
  v37 = a2;
  v40 = 0LL;
  v23 = 0LL;
  v30 = 0LL;
  v22 = 0LL;
  v32 = 0LL;
  pv = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  pvar = 0LL;
  v35 = 0LL;
  Src = 0LL;
  memset(a6, 0, sizeof(struct APOInitSystemEffects2));
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
                              a1,
                              0LL,
                              &v23);
  if ( InterfaceIdFromMMDevice < 0 )
    goto LABEL_24;
  v10 = v22;
  if ( v22 != a1 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, struct IMMDevice **))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990,
      &v22);
    v10 = v22;
  }
  if ( !v10 )
  {
    InterfaceIdFromMMDevice = -2147418113;
    goto LABEL_24;
  }
  ((void (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))v10->lpVtbl->GetId)(v10, 0LL, &v30);
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v23->lpVtbl->GetValue)(
                              v23,
                              &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
                              &pvar);
  if ( InterfaceIdFromMMDevice < 0 )
    goto LABEL_24;
  v11 = (_WORD)pvar == 72;
  PropVariantClear(&pvar);
  if ( ((unsigned int (__fastcall *)(struct IMMDevice *))v22->lpVtbl->GetState)(v22) || v11 )
    goto LABEL_23;
  v12 = &PKEY_AudioEngine_DeviceFormat;
  v13 = a5;
  if ( a5 == eKeywordDetectorConnector )
    v12 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  fmtid = v12->fmtid;
  pid = v12->pid;
  if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v23->lpVtbl->GetValue)(v23, &fmtid, &pvar) < 0
    || (_WORD)pvar != 65 )
  {
    InterfaceIdFromMMDevice = CoCreateInstance(
                                &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                                0LL,
                                0x17u,
                                &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
                                &v29);
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_24;
    InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v32);
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_24;
    if ( a5 == eKeywordDetectorConnector )
    {
      InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v27);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_24;
      v41 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
      InterfaceIdFromMMDevice = mmdDevGetRelatedInterfaceId(v27, &v41, &v26);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_24;
      InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v29 + 32LL))(
                                  v29,
                                  v26,
                                  0LL,
                                  &pv);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_24;
    }
    else
    {
      InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v29 + 32LL))(
                                  v29,
                                  v32,
                                  0LL,
                                  &pv);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_24;
    }
    InterfaceIdFromMMDevice = CreateKSFormatFromWFXFormat((const struct tWAVEFORMATEX *)pv, &v31);
    v8 = v31;
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_24;
    goto LABEL_19;
  }
  v14 = Src;
  if ( (unsigned int)v35 < 0x12uLL )
  {
    InterfaceIdFromMMDevice = -2147024809;
    goto LABEL_24;
  }
  v15 = *((unsigned __int16 *)Src + 8);
  if ( (unsigned int)v35 < (unsigned __int64)(v15 + 18) )
  {
    InterfaceIdFromMMDevice = -2147024809;
    goto LABEL_24;
  }
  InterfaceIdFromMMDevice = 0;
  if ( (unsigned int)v15 < 0x16 && *(_WORD *)Src == 0xFFFE )
  {
    InterfaceIdFromMMDevice = -2147024809;
  }
  else
  {
    v16 = (char *)CoTaskMemAlloc(v15 + 82);
    v8 = (struct KSDATAFORMAT_WAVEFORMATEX *)v16;
    if ( v16 )
    {
      *(_DWORD *)v16 = (unsigned __int16)v14[8] + 82;
      *(_QWORD *)(v16 + 4) = 0LL;
      *((_DWORD *)v16 + 3) = 0;
      *((GUID *)v16 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
      *((GUID *)v16 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      memcpy_0(v16 + 64, v14, (unsigned __int16)v14[8] + 18LL);
      if ( *v14 == 0xFFFE )
      {
        *((_OWORD *)&v8->DataFormat.Alignment + 2) = *(_OWORD *)(v14 + 12);
      }
      else
      {
        v8->DataFormat.SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
        v8->DataFormat.SubFormat.Data1 = (unsigned __int16)*v14;
      }
    }
    else
    {
      InterfaceIdFromMMDevice = -2147024882;
    }
  }
  if ( InterfaceIdFromMMDevice >= 0 )
  {
LABEL_19:
    ppv = (LPVOID *)&v33;
    InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                                a1,
                                &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                                23LL);
    if ( InterfaceIdFromMMDevice >= 0 )
    {
      if ( (unsigned int)(a5 - 1) <= 1 )
        v13 = eHostProcessConnector;
      LODWORD(ppv) = v13;
      InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, __int64 *, char *))(*(_QWORD *)v33 + 96LL))(
                                  v33,
                                  v8,
                                  v8->DataFormat.FormatSize,
                                  1LL,
                                  ppv,
                                  &v28,
                                  &v24,
                                  (char *)&v24 + 4);
      if ( InterfaceIdFromMMDevice >= 0 )
      {
LABEL_23:
        a6->APOInit.cbSize = 88;
        a6->APOInit.clsid = *v37;
        v17 = v23;
        v23 = 0LL;
        a6->pAPOEndpointProperties = v17;
        v18 = v30;
        v30 = 0LL;
        a6->pAPOSystemEffectsProperties = v18;
        a6->pReserved = 0LL;
        v19 = v28;
        v28 = 0LL;
        a6->pDeviceCollection = v19;
        *(_QWORD *)&a6->nSoftwareIoDeviceInCollection = v24;
        a6->AudioProcessingMode = *v38;
        a6->InitializeForDiscoveryOnly = a4;
      }
    }
  }
LABEL_24:
  CoTaskMemFree(pv);
  CoTaskMemFree(v32);
  CoTaskMemFree(v8);
  PropVariantClear(&pvar);
  CoTaskMemFree(v26);
  v26 = 0LL;
  CoTaskMemFree(v27);
  v27 = 0LL;
  if ( v28 )
    ((void (__fastcall *)(IMMDeviceCollection *))v28->lpVtbl->Release)(v28);
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v22 )
    ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
  if ( v30 )
    ((void (__fastcall *)(IPropertyStore *))v30->lpVtbl->Release)(v30);
  if ( v23 )
    ((void (__fastcall *)(IPropertyStore *))v23->lpVtbl->Release)(v23);
  return (unsigned int)InterfaceIdFromMMDevice;
}
