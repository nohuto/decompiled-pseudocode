/*
 * XREFs of ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180002760
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800022C4 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180095750 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18009586C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180095998 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800EB368 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800EB41C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180002944 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000B3C0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B720 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystem.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002C760 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180038520 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
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
  struct IAudioProcessingObject **v15; // rsi
  struct IAudioSystemEffects2 **v16; // r14
  int SystemEffectClsidsForMode; // eax
  unsigned int v18; // edi
  void *v19; // rbx
  int v20; // eax
  int (*v21)(CCompositeSystemEffect *__hidden, struct IMMDevice *, struct _GUID *__struct_ptr, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **); // rax
  int v22; // eax
  void (*v23)(void); // rax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  CCompositeSystemEffect *v27; // rax
  CCompositeSystemEffect ***v28; // [rsp+20h] [rbp-50h]
  CCompositeSystemEffect *v29; // [rsp+40h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v34; // [rsp+B8h] [rbp+48h] BYREF
  int v35; // [rsp+C0h] [rbp+50h]
  int v36; // [rsp+C8h] [rbp+58h]

  v36 = a4;
  v35 = a3;
  v32 = -2LL;
  v13 = 0LL;
  v29 = 0LL;
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
    goto LABEL_18;
  if ( !a7 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)a1) )
  {
    LODWORD(a9) = 0;
    pv = 0LL;
    v31 = *a5;
    SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(a2, &v31, a6 != 0, &a9);
    v18 = SystemEffectClsidsForMode;
    if ( SystemEffectClsidsForMode < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x462,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SystemEffectClsidsForMode,
        (int)&pv);
      v19 = pv;
    }
    else
    {
      v19 = pv;
      if ( !(_DWORD)a9 )
      {
LABEL_16:
        CoTaskMemFree(v19);
        goto LABEL_17;
      }
      LODWORD(a11) = v36 == 1;
      *(_QWORD *)&v31.Data1 = pv;
      LODWORD(a10) = *(_DWORD *)(a1 + 148);
      v34 = v35;
      v28 = &a9;
      v20 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
              &v29,
              &v34,
              &a11,
              &a10);
      v18 = v20;
      if ( v20 < 0 )
      {
        v25 = (unsigned int)v20;
        v26 = 1132LL;
      }
      else
      {
        if ( !v15 && !v16 )
          goto LABEL_16;
        v31 = *a5;
        v21 = *(int (**)(CCompositeSystemEffect *__hidden, struct IMMDevice *, struct _GUID *__struct_ptr, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **))(*(_QWORD *)v29 + 24LL);
        if ( v21 == CCompositeSystemEffect::Initialize )
        {
          v22 = CCompositeSystemEffect::Initialize(v29, *(struct IMMDevice **)(a1 + 16), &v31, a6, a8, v15, v16);
        }
        else
        {
          LODWORD(v28) = a8;
          v22 = ((__int64 (__fastcall *)(CCompositeSystemEffect *, _QWORD, struct _GUID *, _QWORD))v21)(
                  v29,
                  *(_QWORD *)(a1 + 16),
                  &v31,
                  (unsigned int)a6);
        }
        v18 = v22;
        if ( v22 >= 0 )
          goto LABEL_16;
        v25 = (unsigned int)v22;
        v26 = 1136LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v25,
        (int)v28);
    }
    CoTaskMemFree(v19);
    v13 = v29;
    goto LABEL_21;
  }
LABEL_17:
  v13 = v29;
LABEL_18:
  if ( v14 )
  {
    v27 = v13;
    v13 = 0LL;
    v29 = 0LL;
    *v14 = v27;
  }
  v18 = 0;
LABEL_21:
  if ( v13 )
  {
    v23 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v23 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release(v13);
    else
      v23();
  }
  return v18;
}
