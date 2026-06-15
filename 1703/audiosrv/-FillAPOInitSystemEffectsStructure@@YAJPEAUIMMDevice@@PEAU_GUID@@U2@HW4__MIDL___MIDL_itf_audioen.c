/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1800D04D0
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1800CE870 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800D09EC (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180003FCC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IUnknown *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v9; // r14
  HRESULT InterfaceIdFromMMDevice; // ebx
  struct IUnknown *v11; // rcx
  bool v12; // r15
  const PROPERTYKEY *v13; // rax
  const struct tWAVEFORMATEX *v14; // rcx
  LPVOID v15; // rdx
  IPropertyStore *v16; // rax
  IPropertyStore *v17; // rax
  IMMDeviceCollection *v18; // rax
  IPropertyStore *v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  struct IUnknown *v22; // [rsp+68h] [rbp-A0h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v23; // [rsp+70h] [rbp-98h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v25; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v26; // [rsp+88h] [rbp-80h] BYREF
  IMMDeviceCollection *v27; // [rsp+90h] [rbp-78h]
  LPVOID ppv; // [rsp+98h] [rbp-70h] BYREF
  IPropertyStore *v29; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID v30; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-58h]
  PROPVARIANT pvar; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-48h]
  const struct tWAVEFORMATEX *v34; // [rsp+C8h] [rbp-40h]
  CLSID *v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  __int128 v38; // [rsp+E8h] [rbp-20h] BYREF
  GUID fmtid; // [rsp+F8h] [rbp-10h] BYREF
  DWORD pid; // [rsp+108h] [rbp+0h]

  v36 = -2LL;
  v35 = a2;
  v37 = 0LL;
  v20 = 0LL;
  v29 = 0LL;
  v22 = 0LL;
  v30 = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v23 = 0LL;
  v31 = 0LL;
  ppv = 0LL;
  v27 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  pvar = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(a6, 0, sizeof(struct APOInitSystemEffects2));
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, IPropertyStore **))a1->lpVtbl[1].AddRef)(
                              a1,
                              0LL,
                              &v20);
  if ( InterfaceIdFromMMDevice >= 0 )
  {
    v11 = v22;
    if ( v22 != a1 )
    {
      ATL::AtlComQIPtrAssign(&v22, a1, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990);
      v11 = v22;
    }
    if ( !v11 )
    {
      InterfaceIdFromMMDevice = -2147418113;
      goto LABEL_32;
    }
    ((void (__fastcall *)(struct IUnknown *, _QWORD, IPropertyStore **))v11->lpVtbl[1].Release)(v11, 0LL, &v29);
    InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v20->lpVtbl->GetValue)(
                                v20,
                                &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
                                &pvar);
    if ( InterfaceIdFromMMDevice >= 0 )
    {
      v12 = (_WORD)pvar == 72;
      PropVariantClear(&pvar);
      if ( ((unsigned int (__fastcall *)(struct IUnknown *))v22->lpVtbl[2].QueryInterface)(v22) || v12 )
      {
LABEL_31:
        a6->APOInit.cbSize = 88;
        a6->APOInit.clsid = *v35;
        v16 = v20;
        v20 = 0LL;
        a6->pAPOEndpointProperties = v16;
        v17 = v29;
        v29 = 0LL;
        a6->pAPOSystemEffectsProperties = v17;
        a6->pReserved = 0LL;
        v18 = v27;
        v27 = 0LL;
        a6->pDeviceCollection = v18;
        *(_QWORD *)&a6->nSoftwareIoDeviceInCollection = v21;
        a6->AudioProcessingMode = *a3;
        a6->InitializeForDiscoveryOnly = a4;
        goto LABEL_32;
      }
      v13 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
      if ( a5 != eKeywordDetectorConnector )
        v13 = &PKEY_AudioEngine_DeviceFormat;
      fmtid = v13->fmtid;
      pid = v13->pid;
      if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v20->lpVtbl->GetValue)(v20, &fmtid, &pvar) >= 0
        && (_WORD)pvar == 65 )
      {
        if ( (unsigned int)v33 < 0x12uLL || (unsigned int)v33 < (unsigned __int64)v34->cbSize + 18 )
        {
          InterfaceIdFromMMDevice = -2147024809;
          goto LABEL_32;
        }
        v14 = v34;
LABEL_26:
        InterfaceIdFromMMDevice = CreateKSFormatFromWFXFormat(v14, &v23);
        if ( InterfaceIdFromMMDevice < 0
          || (InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))a1->lpVtbl[1].QueryInterface)(
                                          a1,
                                          &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                                          23LL),
              InterfaceIdFromMMDevice < 0) )
        {
          v9 = v23;
          goto LABEL_32;
        }
        v9 = v23;
        InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD))(*(_QWORD *)v31 + 96LL))(
                                    v31,
                                    v23,
                                    v23->DataFormat.FormatSize);
        if ( InterfaceIdFromMMDevice < 0 )
          goto LABEL_32;
        goto LABEL_31;
      }
      InterfaceIdFromMMDevice = CoCreateInstance(
                                  &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                                  0LL,
                                  0x17u,
                                  &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
                                  &ppv);
      if ( InterfaceIdFromMMDevice >= 0 )
      {
        InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a1->lpVtbl[1].Release)(a1, &v30);
        if ( InterfaceIdFromMMDevice >= 0 )
        {
          if ( a5 != eKeywordDetectorConnector )
          {
            v15 = v30;
            goto LABEL_24;
          }
          InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v26);
          if ( InterfaceIdFromMMDevice >= 0 )
          {
            v38 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
            InterfaceIdFromMMDevice = mmdDevGetRelatedInterfaceId(v26, &v38, &v25);
            if ( InterfaceIdFromMMDevice >= 0 )
            {
              v15 = v25;
LABEL_24:
              InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)ppv + 32LL))(
                                          ppv,
                                          v15,
                                          0LL,
                                          &pv);
              if ( InterfaceIdFromMMDevice < 0 )
                goto LABEL_32;
              v14 = (const struct tWAVEFORMATEX *)pv;
              goto LABEL_26;
            }
          }
        }
      }
    }
  }
LABEL_32:
  CoTaskMemFree(pv);
  CoTaskMemFree(v30);
  CoTaskMemFree(v9);
  PropVariantClear(&pvar);
  CoTaskMemFree(v25);
  v25 = 0LL;
  CoTaskMemFree(v26);
  v26 = 0LL;
  if ( v27 )
    ((void (__fastcall *)(IMMDeviceCollection *))v27->lpVtbl->Release)(v27);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v29 )
    ((void (__fastcall *)(IPropertyStore *))v29->lpVtbl->Release)(v29);
  if ( v20 )
    ((void (__fastcall *)(IPropertyStore *))v20->lpVtbl->Release)(v20);
  return (unsigned int)InterfaceIdFromMMDevice;
}
