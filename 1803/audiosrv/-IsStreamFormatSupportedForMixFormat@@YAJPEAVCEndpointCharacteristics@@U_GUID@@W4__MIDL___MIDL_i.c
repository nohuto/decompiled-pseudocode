/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800022C4
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180001740 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800BB044 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1800026D0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18000271C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180002760 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180002B80 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800365C0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800368F0 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180038520 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BF5F8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800EB41C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  __int64 v6; // r13
  bool v8; // r12
  struct tWAVEFORMATEX *v9; // rsi
  __int64 cbSize; // rbx
  struct tWAVEFORMATEX *v11; // rax
  struct tWAVEFORMATEX *v12; // r15
  int v13; // r14d
  __int64 v14; // rbx
  struct tWAVEFORMATEX *v15; // rax
  __int128 v16; // xmm6
  struct IAudioMediaType *v17; // rbx
  __int64 v18; // r8
  int Lfx; // eax
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  CAudioMediaType *v21; // rbx
  bool v22; // zf
  CAudioMediaType *v23; // rdi
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // rax
  struct IAudioMediaType *v25; // rdx
  int IsInputFormatSupported; // eax
  void (*Release)(void); // rax
  unsigned int (__fastcall *v28)(CAudioMediaType *__hidden); // rax
  unsigned int (__fastcall *v29)(CAudioMediaType *__hidden); // rax
  __int64 v30; // rbx
  struct tWAVEFORMATEX *v31; // rax
  struct IAudioSystemEffects2 **v33; // [rsp+28h] [rbp-89h]
  struct IAudioMediaType *v34; // [rsp+68h] [rbp-49h] BYREF
  struct IAudioProcessingObject *v35; // [rsp+70h] [rbp-41h] BYREF
  struct IAudioMediaType *v36; // [rsp+78h] [rbp-39h] BYREF
  struct IAudioMediaType *v37[2]; // [rsp+88h] [rbp-29h] BYREF
  struct tWAVEFORMATEX *v38; // [rsp+98h] [rbp-19h]
  struct tWAVEFORMATEX *v39; // [rsp+A0h] [rbp-11h]
  __int64 v40; // [rsp+A8h] [rbp-9h]

  v40 = -2LL;
  v6 = a3;
  v35 = 0LL;
  v8 = 1;
  v39 = 0LL;
  v9 = 0LL;
  v38 = 0LL;
  cbSize = Src->cbSize;
  v11 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v12 = v11;
  if ( v11 )
  {
    memcpy_0(v11, Src, cbSize + 18);
    v13 = 0;
  }
  else
  {
    v13 = -2147024882;
  }
  v39 = v12;
  if ( v13 < 0 )
    goto LABEL_40;
  v14 = a4->cbSize;
  v15 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v14 + 18);
  v9 = v15;
  if ( v15 )
  {
    memcpy_0(v15, a4, v14 + 18);
    v13 = 0;
  }
  else
  {
    v13 = -2147024882;
  }
  v38 = v9;
  if ( v13 < 0 )
    goto LABEL_40;
  if ( (v12->wBitsPerSample & 0xFFF8u) > 0x100 )
  {
    v13 = -2004287480;
    goto LABEL_40;
  }
  if ( v12->wFormatTag == 0xFFFE )
    v8 = (v12[1].wFormatTag & 7) == 0;
  ConvertPCMWfxToIEEEFloat(v12);
  ConvertPCMWfxToIEEEFloat(v9);
  v37[0] = (struct IAudioMediaType *)((char *)this + 96 * v6 + 232);
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v37[0]);
  v36 = (struct IAudioMediaType *)((char *)this + 96 * v6 + 616);
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v36);
  v34 = (struct IAudioMediaType *)((char *)this + 96 * v6 + 1000);
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v34);
  if ( !*((_DWORD *)this + v6 + 10) )
  {
    Lfx = CEndpointCharacteristics::GetLfx(this, a3, 0LL, &v35, v33);
    goto LABEL_16;
  }
  v16 = (__int128)*a2;
  v13 = 0;
  v35 = 0LL;
  v17 = v37[0];
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v37[0]);
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v36);
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v34);
  if ( *((_DWORD *)this + v6 + 10) )
  {
    if ( (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this)
      || (v18 = 0LL, a3 == eKeywordDetectorConnector) )
    {
      v18 = 1LL;
    }
    *(_OWORD *)v37 = v16;
    if ( (unsigned __int8)SystemEffectDescriptor::IsModeSupportedForStreaming(v17, v37, v18) )
    {
      *(_OWORD *)v37 = v16;
      Lfx = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
              this,
              v17,
              1LL,
              0LL,
              v37,
              0,
              0,
              a3,
              0LL,
              &v35,
              0LL);
LABEL_16:
      v13 = Lfx;
    }
  }
  if ( v13 < 0 )
    goto LABEL_40;
  if ( !v35 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(v12) )
    {
      v13 = -2004287480;
      goto LABEL_40;
    }
    if ( v12->nSamplesPerSec == v9->nSamplesPerSec
      && v12->nChannels == v9->nChannels
      && v8
      && !(unsigned int)ValidateWaveFormatEx(Src) )
    {
      v13 = 0;
      goto LABEL_40;
    }
    v13 = 1;
    goto LABEL_36;
  }
  v36 = 0LL;
  v37[0] = 0LL;
  v34 = 0LL;
  v13 = CAudioMediaType::Create(v9, (unsigned int)v9->cbSize + 18, &v36, 0.0, 0);
  if ( v13 < 0 )
  {
    if ( v36 )
      ((void (__fastcall *)(struct IAudioMediaType *))v36->lpVtbl->Release)(v36);
    goto LABEL_40;
  }
  v13 = CAudioMediaType::Create(v12, (unsigned int)v12->cbSize + 18, v37, 0.0, 0);
  if ( v13 < 0 )
  {
    if ( v37[0] )
      ((void (__fastcall *)(struct IAudioMediaType *))v37[0]->lpVtbl->Release)(v37[0]);
    if ( v36 )
      ((void (__fastcall *)(struct IAudioMediaType *))v36->lpVtbl->Release)(v36);
    goto LABEL_40;
  }
  lpVtbl = v35->lpVtbl;
  v21 = (CAudioMediaType *)v37[0];
  v22 = *((_DWORD *)this + 37) == 0;
  v23 = (CAudioMediaType *)v36;
  if ( !v22 )
  {
    v25 = v36;
    IsOutputFormatSupported = lpVtbl->IsOutputFormatSupported;
    goto LABEL_68;
  }
  IsOutputFormatSupported = lpVtbl->IsInputFormatSupported;
  v25 = v36;
  if ( (char *)IsOutputFormatSupported != (char *)CAPOWrapperClient::IsInputFormatSupported )
  {
LABEL_68:
    IsInputFormatSupported = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))IsOutputFormatSupported)(
                               v35,
                               v25,
                               v37[0],
                               &v34);
    goto LABEL_24;
  }
  IsInputFormatSupported = CAPOWrapperClient::IsInputFormatSupported((CAPOWrapperClient *)v35, v36, v37[0], &v34);
LABEL_24:
  v13 = IsInputFormatSupported;
  if ( IsInputFormatSupported >= 0 )
  {
    if ( IsInputFormatSupported == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
      v13 = 1;
    if ( v34 )
    {
      Release = (void (*)(void))v34->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v34);
      else
        Release();
    }
    if ( v21 )
    {
      v28 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v21 + 16LL);
      if ( v28 == CAudioMediaType::Release )
        CAudioMediaType::Release(v21);
      else
        v28(v21);
    }
    if ( v23 )
    {
      v29 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v23 + 16LL);
      if ( v29 == CAudioMediaType::Release )
        CAudioMediaType::Release(v23);
      else
        v29(v23);
    }
LABEL_36:
    if ( a6 && v13 )
    {
      v30 = a4->cbSize;
      v31 = (struct tWAVEFORMATEX *)operator new[](v30 + 18, (const struct std::nothrow_t *)&std::nothrow);
      *a6 = v31;
      if ( v31 )
      {
        memcpy_0(v31, a4, v30 + 18);
        v13 = 1;
      }
      else
      {
        v13 = -2147024882;
      }
    }
    goto LABEL_40;
  }
  if ( v34 )
    ((void (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->Release)(v34);
  if ( v21 )
    (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v23 )
    (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_40:
  CoTaskMemFree(v9);
  v38 = 0LL;
  CoTaskMemFree(v12);
  v39 = 0LL;
  if ( v35 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v35->lpVtbl->Release)(v35);
  return (unsigned int)v13;
}
