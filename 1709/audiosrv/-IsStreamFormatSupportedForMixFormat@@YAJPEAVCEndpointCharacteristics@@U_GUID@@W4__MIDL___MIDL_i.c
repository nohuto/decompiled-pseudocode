/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180022BF0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001E4E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystem.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E900 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18001F200 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180020164 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1800207F0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800233B0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18005ACAC (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x18005AF6C (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18005C8C8 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800B554C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x1800BD508 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 */

// Hidden C++ exception states: #wind=64
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  __int64 v6; // rdi
  char *v9; // rsi
  __int64 cbSize; // rbx
  char *v11; // rax
  char *v12; // r13
  __int64 v13; // rbx
  char *v14; // rax
  __int16 v15; // ax
  __int16 v16; // cx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rbx
  char *v20; // rdi
  char *v21; // r12
  char *v22; // rbx
  struct _GUID v23; // xmm6
  int Lfx; // r14d
  struct CEndpointCharacteristics *v25; // r12
  BOOL v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r15
  int v29; // eax
  int v30; // ebx
  int v31; // ecx
  __int64 v32; // r9
  __int64 *v33; // rdx
  int v34; // r8d
  int v35; // r11d
  __int64 v36; // r10
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // r14
  int v41; // ecx
  __int64 v42; // r9
  __int64 *v43; // rdx
  int v44; // r8d
  int v45; // r11d
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rdi
  int v49; // eax
  struct IAudioMediaType *v50; // rbx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  struct IAudioMediaType *v54; // rax
  int v55; // eax
  struct IMMDevice *v56; // rdx
  HRESULT (__stdcall *Reset)(IAudioProcessingObject *); // rax
  int v58; // eax
  void (*Release)(void); // rax
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  CAudioMediaType *v61; // rbx
  CAudioMediaType *v62; // rdi
  __int64 (__fastcall *IsOutputFormatSupported)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax
  struct IAudioProcessingObject *v64; // rdx
  int IsInputFormatSupported; // eax
  void (*v66)(void); // rax
  __int64 (__fastcall *v67)(CAudioMediaType *); // rax
  __int64 (__fastcall *v68)(CAudioMediaType *); // rax
  __int64 v69; // rdi
  struct tWAVEFORMATEX *v70; // rax
  __int64 v72; // rcx
  int v73; // ecx
  int v74; // ecx
  __int64 *v75; // rcx
  __int64 v76; // rax
  __int64 *v77; // rcx
  __int64 v78; // rax
  struct IAudioProcessingObject *v79; // rcx
  struct IAudioSystemEffects2 **v80; // [rsp+28h] [rbp-C9h]
  int v81; // [rsp+28h] [rbp-C9h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v82; // [rsp+28h] [rbp-C9h]
  int v83; // [rsp+28h] [rbp-C9h]
  bool v84; // [rsp+48h] [rbp-A9h]
  struct IAudioMediaType *v85; // [rsp+50h] [rbp-A1h] BYREF
  std::_Ref_count_base *v86; // [rsp+58h] [rbp-99h]
  struct IAudioProcessingObject *v87[3]; // [rsp+60h] [rbp-91h] BYREF
  struct IAudioMediaType *v88; // [rsp+78h] [rbp-79h] BYREF
  std::_Ref_count_base *v89; // [rsp+80h] [rbp-71h]
  struct _GUID v90; // [rsp+88h] [rbp-69h] BYREF
  int v91; // [rsp+98h] [rbp-59h] BYREF
  int v92; // [rsp+A0h] [rbp-51h] BYREF
  int v93; // [rsp+A8h] [rbp-49h] BYREF
  char *v94; // [rsp+B0h] [rbp-41h]
  char *v95; // [rsp+B8h] [rbp-39h]
  struct IAudioMediaType *v96; // [rsp+C0h] [rbp-31h] BYREF
  PROPVARIANT pvar; // [rsp+C8h] [rbp-29h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-21h]
  __int64 v99; // [rsp+D8h] [rbp-19h]
  __int64 v100; // [rsp+E0h] [rbp-11h]
  struct _GUID v101; // [rsp+E8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+4Fh]

  v100 = -2LL;
  v6 = a3;
  v87[0] = 0LL;
  v84 = 1;
  v95 = 0LL;
  v9 = 0LL;
  v94 = 0LL;
  cbSize = Src->cbSize;
  v11 = (char *)CoTaskMemAlloc(cbSize + 18);
  v12 = v11;
  if ( !v11 )
  {
    v95 = 0LL;
    goto LABEL_216;
  }
  memcpy_0(v11, Src, cbSize + 18);
  v95 = v12;
  v13 = a4->cbSize;
  v14 = (char *)CoTaskMemAlloc(v13 + 18);
  v9 = v14;
  if ( !v14 )
  {
    v9 = 0LL;
    v94 = 0LL;
LABEL_216:
    Lfx = -2147024882;
    goto LABEL_107;
  }
  memcpy_0(v14, a4, v13 + 18);
  v94 = v9;
  if ( (*((_WORD *)v12 + 7) & 0xFFF8u) > 0x100 )
  {
    Lfx = -2004287480;
    goto LABEL_107;
  }
  v15 = *(_WORD *)v12;
  if ( *(_WORD *)v12 == 0xFFFE )
  {
    v84 = (v12[18] & 7) == 0;
    goto LABEL_113;
  }
  if ( v15 != 1 )
  {
    if ( v15 != -2 )
      goto LABEL_7;
LABEL_113:
    v72 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v12 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v12 + 3) )
      v72 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v12 + 4);
    if ( v72 )
      goto LABEL_7;
  }
  if ( v15 == -2 )
  {
    if ( (v12[18] & 7) != 0 )
      goto LABEL_7;
    *(GUID *)(v12 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
    *((_WORD *)v12 + 9) = 32;
  }
  else
  {
    *(_WORD *)v12 = 3;
  }
  *((_WORD *)v12 + 7) = 32;
  v73 = (unsigned __int16)(4 * *((_WORD *)v12 + 1));
  *((_WORD *)v12 + 6) = v73;
  *((_DWORD *)v12 + 2) = v73 * *((_DWORD *)v12 + 1);
LABEL_7:
  v16 = *(_WORD *)v9;
  if ( *(_WORD *)v9 == 1 )
    goto LABEL_125;
  if ( v16 == -2 )
  {
    v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v9 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v9 + 3) )
      v17 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v9 + 4);
    if ( !v17 )
    {
LABEL_125:
      if ( v16 == -2 )
      {
        if ( (v9[18] & 7) != 0 )
          goto LABEL_12;
      }
      else if ( v16 == 1 )
      {
        *(_WORD *)v9 = 3;
LABEL_131:
        *((_WORD *)v9 + 7) = 32;
        v74 = (unsigned __int16)(4 * *((_WORD *)v9 + 1));
        *((_WORD *)v9 + 6) = v74;
        *((_DWORD *)v9 + 2) = v74 * *((_DWORD *)v9 + 1);
        goto LABEL_12;
      }
      *(GUID *)(v9 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
      *((_WORD *)v9 + 9) = 32;
      goto LABEL_131;
    }
  }
LABEL_12:
  v18 = v6;
  v19 = 96 * v6;
  v20 = (char *)a1 + 96 * v6 + 232;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v20);
  v21 = (char *)a1 + v19;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v21 + 616));
  v22 = (char *)a1 + v19;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v22 + 1000));
  if ( !*((_DWORD *)a1 + v18 + 10) )
  {
    v25 = a1;
    Lfx = CEndpointCharacteristics::GetLfx(a1, a3, 0LL, v87, v80);
    goto LABEL_84;
  }
  v23 = *a2;
  Lfx = 0;
  v87[0] = 0LL;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v20);
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v21 + 616));
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v22 + 1000));
  v25 = a1;
  if ( !*((_DWORD *)a1 + v18 + 10) )
    goto LABEL_84;
  v26 = 1;
  v27 = *((_QWORD *)a1 + 7);
  if ( !v27 )
    goto LABEL_19;
  pvar = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v28 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
         v27,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v26 = v98 == 0;
  }
  PropVariantClear(&pvar);
  if ( v26 || a3 == eKeywordDetectorConnector )
  {
LABEL_19:
    v29 = 1;
    v28 = 0LL;
  }
  else
  {
    v29 = 0;
  }
  v90 = v23;
  if ( v29 )
  {
    v90 = v23;
    *(struct _GUID *)&v87[1] = v23;
    if ( v20[52] && (v30 = 0, *((int *)v20 + 10) > 0) )
    {
      while ( 1 )
      {
        if ( v30 < 0 || v30 >= *((_DWORD *)v20 + 10) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180052139LL);
        }
        if ( *(_BYTE *)(*(_QWORD *)(v28 + *((_QWORD *)v20 + 4)) + 20LL) )
        {
          v75 = *(__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                               (__int64)(v20 + 32),
                               v30);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v75, &v87[1]) != -1 )
            break;
        }
        ++v30;
        v28 += 16LL;
        if ( v30 >= *((_DWORD *)v20 + 10) )
          goto LABEL_27;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
      v96 = (struct IAudioMediaType *)(v20 + 56);
      v76 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
              (__int64)(v20 + 32),
              v30);
      std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v88, v76);
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  (SystemEffectChainDescriptor *)v88,
                  (struct SystemEffectDescriptor *)v20) >= 0 )
      {
        if ( v89 )
          std::_Ref_count_base::_Decref(v89);
        if ( v20 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
LABEL_27:
        v25 = a1;
        goto LABEL_28;
      }
      if ( v89 )
        std::_Ref_count_base::_Decref(v89);
      if ( v20 != (char *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
      v25 = a1;
    }
    else
    {
LABEL_28:
      v31 = 0;
      if ( *((int *)v20 + 10) > 0 )
      {
        v32 = 0LL;
        while ( 1 )
        {
          if ( v32 < 0 || v31 >= *((_DWORD *)v20 + 10) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180052182LL);
          }
          v33 = *(__int64 **)(v32 + *((_QWORD *)v20 + 4));
          v34 = 0;
          v35 = *((_DWORD *)v33 + 2);
          if ( v35 > 0 )
          {
            v36 = *v33;
            while ( 1 )
            {
              v37 = *(_QWORD *)(v36 + 16LL * v34) - (unsigned __int64)v87[1];
              if ( !v37 )
                v37 = *(_QWORD *)(v36 + 16LL * v34 + 8) - (unsigned __int64)v87[2];
              if ( !v37 )
                break;
              if ( ++v34 >= v35 )
                goto LABEL_149;
            }
            if ( v34 != -1 )
              break;
          }
LABEL_149:
          ++v31;
          v32 += 16LL;
          if ( v31 >= *((_DWORD *)v20 + 10) )
            goto LABEL_154;
        }
        if ( v31 != -1 )
        {
          if ( v31 < 0 || v31 >= *((_DWORD *)v20 + 10) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x18005216CLL);
          }
          v38 = *(_QWORD *)(*((_QWORD *)v20 + 4) + 16LL * v31);
LABEL_42:
          if ( !v38 )
            goto LABEL_84;
          goto LABEL_43;
        }
      }
    }
LABEL_154:
    if ( !*((_QWORD *)v20 + 2)
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*((__int64 **)v20 + 2), &v90) == -1 )
    {
      v38 = 0LL;
    }
    else
    {
      v38 = *((_QWORD *)v20 + 2);
    }
    goto LABEL_42;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v20, &v90) == -1 )
    goto LABEL_84;
LABEL_43:
  v87[1] = 0LL;
  v87[0] = 0LL;
  if ( !v20 )
    goto LABEL_80;
  v88 = 0LL;
  v101 = v23;
  v90 = v23;
  v39 = 0;
  if ( *((int *)v20 + 10) > 0 )
  {
    v40 = 0LL;
    while ( 1 )
    {
      if ( v39 < 0 || v39 >= *((_DWORD *)v20 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180052277LL);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v40 + *((_QWORD *)v20 + 4)) + 20LL) )
      {
        v77 = *(__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                             (__int64)(v20 + 32),
                             v39);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v77, &v90) != -1 )
          break;
      }
      ++v39;
      v40 += 16LL;
      if ( v39 >= *((_DWORD *)v20 + 10) )
        goto LABEL_50;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
    v96 = (struct IAudioMediaType *)(v20 + 56);
    v78 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
            (__int64)(v20 + 32),
            v39);
    std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v85, v78);
    if ( (int)SystemEffectChainDescriptor::Resolve(
                (SystemEffectChainDescriptor *)v85,
                (struct SystemEffectDescriptor *)v20) < 0 )
    {
      if ( v86 )
        std::_Ref_count_base::_Decref(v86);
      if ( v20 != (char *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
LABEL_174:
      if ( !*((_QWORD *)v20 + 2)
        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           *((__int64 **)v20 + 2),
                           &v101) == -1 )
      {
        v48 = 0LL;
      }
      else
      {
        v48 = *((_QWORD *)v20 + 2);
      }
      goto LABEL_64;
    }
    if ( v86 )
      std::_Ref_count_base::_Decref(v86);
    if ( v20 != (char *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
  }
LABEL_50:
  v41 = 0;
  if ( *((int *)v20 + 10) <= 0 )
    goto LABEL_174;
  v42 = 0LL;
  while ( 1 )
  {
    if ( v42 < 0 || v41 >= *((_DWORD *)v20 + 10) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800522C0LL);
    }
    v43 = *(__int64 **)(v42 + *((_QWORD *)v20 + 4));
    v44 = 0;
    v45 = *((_DWORD *)v43 + 2);
    if ( v45 > 0 )
    {
      v46 = *v43;
      while ( 1 )
      {
        v47 = *(_QWORD *)(v46 + 16LL * v44) - *(_QWORD *)&v90.Data1;
        if ( !v47 )
          v47 = *(_QWORD *)(v46 + 16LL * v44 + 8) - *(_QWORD *)v90.Data4;
        if ( !v47 )
          break;
        if ( ++v44 >= v45 )
          goto LABEL_170;
      }
      if ( v44 != -1 )
        break;
    }
LABEL_170:
    ++v41;
    v42 += 16LL;
    if ( v41 >= *((_DWORD *)v20 + 10) )
      goto LABEL_174;
  }
  if ( v41 == -1 )
    goto LABEL_174;
  if ( v41 < 0 || v41 >= *((_DWORD *)v20 + 10) )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x1800522AALL);
  }
  v48 = *(_QWORD *)(*((_QWORD *)v20 + 4) + 16LL * v41);
LABEL_64:
  v49 = 0;
  v50 = 0LL;
  v88 = 0LL;
  if ( !v48 )
    goto LABEL_74;
  if ( *(int *)(v48 + 48) > 0 )
  {
    v85 = 0LL;
    v51 = *(int *)(v48 + 48);
    if ( *(_DWORD *)(v48 + 48) )
    {
      v52 = -1LL;
      if ( v51 != 1 )
        v52 = 0xFFFFFFFFFFFFFFFFuLL / v51;
      if ( v52 < 0x10 )
        goto LABEL_180;
      v53 = 16 * v51;
      if ( v53 > 0x7FFFFFFF )
      {
        v50 = 0LL;
        v85 = 0LL;
        goto LABEL_180;
      }
    }
    else
    {
      LODWORD(v53) = 0;
    }
    v54 = (struct IAudioMediaType *)CoTaskMemAlloc((unsigned int)v53);
    v50 = v54;
    v85 = v54;
    if ( v54 )
    {
      memcpy_0(v54, *(const void **)(v48 + 40), 16LL * *(int *)(v48 + 48));
      v85 = 0LL;
      v88 = v50;
      CoTaskMemFree(0LL);
      v85 = 0LL;
      goto LABEL_73;
    }
LABEL_180:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x272,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v80);
    CoTaskMemFree(v50);
    v85 = 0LL;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x465,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v83);
    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v88);
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v87[1]);
    Lfx = -2147024882;
    goto LABEL_84;
  }
LABEL_73:
  v49 = *(_DWORD *)(v48 + 48);
LABEL_74:
  if ( v49 )
  {
    v93 = 0;
    v96 = v50;
    v91 = v49;
    v92 = *((_DWORD *)v25 + 37);
    LODWORD(v85) = 1;
    v55 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
            &v87[1],
            &v85,
            &v93,
            &v92,
            (unsigned int *)&v91,
            (_OWORD **)&v96);
    Lfx = v55;
    if ( v55 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x46F,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v55,
        v81);
      ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v88);
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v87[1]);
      goto LABEL_84;
    }
    v90 = v23;
    v56 = (struct IMMDevice *)*((_QWORD *)v25 + 2);
    Reset = v87[1]->lpVtbl->Reset;
    if ( (char *)Reset == (char *)CCompositeSystemEffect::Initialize )
    {
      v58 = CCompositeSystemEffect::Initialize((CCompositeSystemEffect *)v87[1], v56, &v90, 0, a3, v87, 0LL);
    }
    else
    {
      v82 = a3;
      v58 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IMMDevice *, struct _GUID *, _QWORD))Reset)(
              v87[1],
              v56,
              &v90,
              0LL);
    }
    Lfx = v58;
    if ( v58 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x473,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v58,
        v82);
      CoTaskMemFree(v50);
      v88 = 0LL;
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v87[1]);
      goto LABEL_84;
    }
  }
  CoTaskMemFree(v50);
  v88 = 0LL;
LABEL_80:
  if ( v87[1] )
  {
    Release = (void (*)(void))v87[1]->lpVtbl->Release;
    if ( (char *)Release == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release((volatile signed __int32 *)v87[1]);
    else
      Release();
  }
  Lfx = 0;
LABEL_84:
  if ( Lfx < 0 )
    goto LABEL_107;
  if ( v87[0] )
  {
    v87[1] = 0LL;
    v88 = 0LL;
    v85 = 0LL;
    Lfx = CAudioMediaType::Create(
            (const struct tWAVEFORMATEX *)v9,
            (unsigned int)*((unsigned __int16 *)v9 + 8) + 18,
            (struct IAudioMediaType **)&v87[1],
            0.0,
            0);
    if ( Lfx < 0 )
    {
      if ( v85 )
        ((void (__fastcall *)(struct IAudioMediaType *))v85->lpVtbl->Release)(v85);
      v79 = v87[1];
      if ( !v87[1] )
        goto LABEL_107;
    }
    else
    {
      Lfx = CAudioMediaType::Create(
              (const struct tWAVEFORMATEX *)v12,
              (unsigned int)*((unsigned __int16 *)v12 + 8) + 18,
              &v88,
              0.0,
              0);
      if ( Lfx >= 0 )
      {
        lpVtbl = v87[0]->lpVtbl;
        v61 = (CAudioMediaType *)v88;
        v62 = (CAudioMediaType *)v87[1];
        if ( *((_DWORD *)v25 + 37) )
        {
          v64 = v87[1];
          IsOutputFormatSupported = (__int64 (__fastcall *)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsOutputFormatSupported;
        }
        else
        {
          IsOutputFormatSupported = (__int64 (__fastcall *)(CAPOWrapperClient *, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))lpVtbl->IsInputFormatSupported;
          v64 = v87[1];
          if ( IsOutputFormatSupported == CAPOWrapperClient::IsInputFormatSupported )
          {
            IsInputFormatSupported = CAPOWrapperClient::IsInputFormatSupported(
                                       (CAPOWrapperClient *)v87[0],
                                       (struct IAudioMediaType *)v87[1],
                                       v88,
                                       &v85);
LABEL_91:
            Lfx = IsInputFormatSupported;
            if ( IsInputFormatSupported < 0 )
            {
              if ( v85 )
                ((void (__fastcall *)(struct IAudioMediaType *))v85->lpVtbl->Release)(v85);
              if ( v61 )
                (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v61 + 16LL))(v61);
              if ( v62 )
                (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v62 + 16LL))(v62);
              goto LABEL_107;
            }
            if ( IsInputFormatSupported == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
              Lfx = 1;
            if ( v85 )
            {
              v66 = (void (*)(void))v85->lpVtbl->Release;
              if ( (char *)v66 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v85);
              else
                v66();
            }
            if ( v61 )
            {
              v67 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v61 + 16LL);
              if ( v67 == CAudioMediaType::Release )
                CAudioMediaType::Release(v61);
              else
                v67(v61);
            }
            if ( v62 )
            {
              v68 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v62 + 16LL);
              if ( v68 == CAudioMediaType::Release )
                CAudioMediaType::Release(v62);
              else
                v68(v62);
            }
            goto LABEL_103;
          }
        }
        IsInputFormatSupported = IsOutputFormatSupported(
                                   (CAPOWrapperClient *)v87[0],
                                   (struct IAudioMediaType *)v64,
                                   v88,
                                   &v85);
        goto LABEL_91;
      }
      if ( v85 )
        ((void (__fastcall *)(struct IAudioMediaType *))v85->lpVtbl->Release)(v85);
      if ( v88 )
        ((void (__fastcall *)(struct IAudioMediaType *))v88->lpVtbl->Release)(v88);
      v79 = v87[1];
      if ( !v87[1] )
        goto LABEL_107;
    }
    ((void (__fastcall *)(struct IAudioProcessingObject *))v87[1]->lpVtbl->Release)(v79);
    goto LABEL_107;
  }
  if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v12) )
  {
    Lfx = -2004287480;
    goto LABEL_107;
  }
  if ( *((_DWORD *)v12 + 1) == *((_DWORD *)v9 + 1)
    && *((_WORD *)v12 + 1) == *((_WORD *)v9 + 1)
    && v84
    && !(unsigned int)ValidateWaveFormatEx(Src) )
  {
    Lfx = 0;
    goto LABEL_107;
  }
  Lfx = 1;
LABEL_103:
  if ( a6 && Lfx )
  {
    v69 = a4->cbSize;
    v70 = (struct tWAVEFORMATEX *)operator new[](v69 + 18, (const struct std::nothrow_t *)&std::nothrow);
    *a6 = v70;
    if ( v70 )
    {
      memcpy_0(v70, a4, v69 + 18);
      Lfx = 1;
      goto LABEL_107;
    }
    goto LABEL_216;
  }
LABEL_107:
  CoTaskMemFree(v9);
  v94 = 0LL;
  CoTaskMemFree(v12);
  v95 = 0LL;
  if ( v87[0] )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v87[0]->lpVtbl->Release)(v87[0]);
  return (unsigned int)Lfx;
}
