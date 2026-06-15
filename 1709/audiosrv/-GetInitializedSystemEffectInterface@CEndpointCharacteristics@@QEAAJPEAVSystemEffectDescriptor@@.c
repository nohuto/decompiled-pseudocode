/*
 * XREFs of ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800217D0
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B350 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021B6C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021C48 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021D6C (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800B5498 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800B554C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001E4E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystem.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E900 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180020164 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020BD0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x18005AF6C (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x1800BD508 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetInitializedSystemEffectInterface(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct _GUID *a5,
        int a6,
        int a7,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a8,
        CCompositeSystemEffect **a9,
        struct IAudioProcessingObject **a10,
        struct IAudioSystemEffects2 **a11)
{
  CCompositeSystemEffect *v13; // rcx
  CCompositeSystemEffect **v14; // r15
  struct IAudioProcessingObject **v15; // r14
  struct IAudioSystemEffects2 **v16; // r13
  struct _GUID *v17; // r12
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // edx
  __int64 v23; // r10
  __int64 *v24; // r8
  int v25; // r9d
  int v26; // edi
  __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // edi
  int v31; // edx
  SystemEffectChainDescriptor *v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rsi
  SystemEffectChainDescriptor *v35; // rdi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  SystemEffectChainDescriptor *v39; // rax
  int v40; // eax
  unsigned int v41; // esi
  struct IMMDevice *v42; // r10
  __int64 (__fastcall *v43)(CCompositeSystemEffect *, struct IMMDevice *, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **); // rax
  int v44; // eax
  CCompositeSystemEffect *v45; // rax
  void (*v46)(void); // rax
  int v48; // r8d
  int v49; // r9d
  _QWORD *v50; // rdx
  __int64 v51; // rax
  __int64 **v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // r9
  int v56; // [rsp+20h] [rbp-71h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v57; // [rsp+20h] [rbp-71h]
  CCompositeSystemEffect *v58; // [rsp+40h] [rbp-51h] BYREF
  SystemEffectChainDescriptor *v59; // [rsp+48h] [rbp-49h]
  SystemEffectChainDescriptor *v60; // [rsp+50h] [rbp-41h] BYREF
  std::_Ref_count_base *v61; // [rsp+58h] [rbp-39h]
  __int64 v62; // [rsp+60h] [rbp-31h]
  struct _GUID v63; // [rsp+70h] [rbp-21h] BYREF
  struct _GUID v64; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+47h]
  int v67; // [rsp+E8h] [rbp+57h] BYREF
  int v68; // [rsp+F0h] [rbp+5Fh]
  int v69; // [rsp+F8h] [rbp+67h]

  v69 = a4;
  v68 = a3;
  v62 = -2LL;
  v13 = 0LL;
  v58 = 0LL;
  v14 = a9;
  if ( a9 )
    *a9 = 0LL;
  v15 = a10;
  if ( a10 )
    *a10 = 0LL;
  v16 = a11;
  if ( a11 )
    *a11 = 0LL;
  if ( !a2 )
    goto LABEL_50;
  if ( a7 && !CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)a1) )
  {
LABEL_49:
    v13 = v58;
LABEL_50:
    if ( v14 )
    {
      v45 = v13;
      v13 = 0LL;
      v58 = 0LL;
      *v14 = v45;
    }
    v41 = 0;
    goto LABEL_53;
  }
  v59 = 0LL;
  v17 = a5;
  v64 = *a5;
  v63 = v64;
  v18 = 0;
  if ( *(int *)(a2 + 40) <= 0 )
    goto LABEL_15;
  v19 = a2 + 32;
  v20 = 0LL;
  while ( 1 )
  {
    if ( v18 < 0 || v18 >= *(_DWORD *)(v19 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180051873LL);
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v20 + *(_QWORD *)v19) + 20LL) )
      goto LABEL_14;
    v52 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        v19,
                        v18);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v52, &v63) != -1 )
      break;
    v19 = a2 + 32;
LABEL_14:
    ++v18;
    v20 += 16LL;
    if ( v18 >= *(_DWORD *)(a2 + 40) )
      goto LABEL_15;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 56));
  a9 = (CCompositeSystemEffect **)(a2 + 56);
  v53 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
          a2 + 32,
          v18);
  std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v60, v53);
  if ( (int)SystemEffectChainDescriptor::Resolve(v60, (struct SystemEffectDescriptor *)a2) < 0 )
  {
    if ( v61 )
      std::_Ref_count_base::_Decref(v61);
    if ( a2 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 56));
    goto LABEL_57;
  }
  if ( v61 )
    std::_Ref_count_base::_Decref(v61);
  if ( a2 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 56));
LABEL_15:
  v21 = 0;
  v22 = *(_DWORD *)(a2 + 40);
  if ( v22 <= 0 )
    goto LABEL_57;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v23 < 0 || v21 >= v22 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800518BELL);
    }
    v24 = *(__int64 **)(v23 + *(_QWORD *)(a2 + 32));
    v25 = 0;
    v26 = *((_DWORD *)v24 + 2);
    if ( v26 > 0 )
    {
      v27 = *v24;
      while ( 1 )
      {
        v28 = *(_QWORD *)(v27 + 16LL * v25) - *(_QWORD *)&v63.Data1;
        if ( !v28 )
          v28 = *(_QWORD *)(v27 + 16LL * v25 + 8) - *(_QWORD *)v63.Data4;
        if ( !v28 )
          break;
        if ( ++v25 >= v26 )
          goto LABEL_79;
      }
      if ( v25 != -1 )
        break;
    }
LABEL_79:
    ++v21;
    v23 += 16LL;
    if ( v21 >= v22 )
      goto LABEL_57;
  }
  if ( v21 == -1 )
  {
LABEL_57:
    v29 = *(_QWORD *)(a2 + 16);
    if ( !v29 )
      goto LABEL_63;
    v48 = 0;
    v49 = *(_DWORD *)(v29 + 8);
    if ( v49 <= 0 )
      goto LABEL_63;
    while ( 1 )
    {
      v50 = (_QWORD *)(*(_QWORD *)v29 + 16LL * v48);
      v51 = *v50 - *(_QWORD *)&v64.Data1;
      if ( *v50 == *(_QWORD *)&v64.Data1 )
        v51 = v50[1] - *(_QWORD *)v64.Data4;
      if ( !v51 )
        break;
      if ( ++v48 >= v49 )
        goto LABEL_63;
    }
    if ( v48 == -1 )
LABEL_63:
      v29 = 0LL;
  }
  else
  {
    if ( v21 < 0 || v21 >= v22 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800518A8LL);
    }
    v29 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL * v21);
  }
  v30 = a6;
  if ( !v29 && a6 )
    v29 = *(_QWORD *)(a2 + 16);
  v31 = 0;
  v32 = 0LL;
  v59 = 0LL;
  if ( !v29 )
  {
LABEL_41:
    if ( v31 )
    {
      LODWORD(a11) = v69 == 1;
      v60 = v32;
      LODWORD(a9) = v31;
      LODWORD(a10) = *(_DWORD *)(a1 + 148);
      v67 = v68;
      v40 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
              &v58,
              &v67,
              (int *)&a11,
              (int *)&a10,
              (unsigned int *)&a9,
              (_OWORD **)&v60);
      v41 = v40;
      if ( v40 < 0 )
      {
        v55 = (unsigned int)v40;
        v54 = 1135LL;
        goto LABEL_92;
      }
      if ( v15 || v16 )
      {
        v64 = *v17;
        v42 = *(struct IMMDevice **)(a1 + 16);
        v43 = *(__int64 (__fastcall **)(CCompositeSystemEffect *, struct IMMDevice *, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **))(*(_QWORD *)v58 + 24LL);
        if ( v43 == CCompositeSystemEffect::Initialize )
        {
          v44 = CCompositeSystemEffect::Initialize(v58, v42, &v64, v30, a8, v15, v16);
        }
        else
        {
          v57 = a8;
          v44 = ((__int64 (__fastcall *)(CCompositeSystemEffect *, struct IMMDevice *, struct _GUID *, _QWORD))v43)(
                  v58,
                  v42,
                  &v64,
                  v30);
        }
        v41 = v44;
        if ( v44 < 0 )
        {
          v54 = 1139LL;
          goto LABEL_91;
        }
      }
    }
    CoTaskMemFree(v32);
    goto LABEL_49;
  }
  v33 = 56LL;
  if ( !a6 )
    v33 = 40LL;
  v34 = v29 + v33;
  if ( *(int *)(v34 + 8) <= 0 )
  {
LABEL_40:
    v31 = *(_DWORD *)(v34 + 8);
    goto LABEL_41;
  }
  v35 = 0LL;
  v36 = *(int *)(v34 + 8);
  v37 = -1LL;
  if ( v36 != 1 )
    v37 = 0xFFFFFFFFFFFFFFFFuLL / v36;
  if ( v37 >= 0x10 )
  {
    v38 = 16 * v36;
    if ( v38 <= 0x7FFFFFFF )
    {
      v39 = (SystemEffectChainDescriptor *)CoTaskMemAlloc((unsigned int)v38);
      v35 = v39;
      if ( v39 )
      {
        memcpy_0(v39, *(const void **)v34, 16LL * *(int *)(v34 + 8));
        v32 = v35;
        v59 = v35;
        CoTaskMemFree(0LL);
        v30 = a6;
        goto LABEL_40;
      }
    }
  }
  v41 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v56);
  CoTaskMemFree(v35);
  v54 = 1125LL;
LABEL_91:
  v55 = v41;
LABEL_92:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v54,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v55,
    v57);
  CoTaskMemFree(v32);
  v13 = v58;
LABEL_53:
  if ( v13 )
  {
    v46 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v46 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release((volatile signed __int32 *)v13);
    else
      v46();
  }
  return v41;
}
