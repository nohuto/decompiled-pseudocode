/*
 * XREFs of ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032D48 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032FD4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BD37C (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BD430 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z @ 0x18000E550 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z.c)
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013980 (-Release@-$RuntimeClass@U-$InterfaceList@UICompositeSystemEffect@@U-$InterfaceList@UIAudioProces.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800139E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180033410 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z @ 0x180079FB4 (-IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z.c)
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18007B524 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetInitializedSystemEffectInterface(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        struct _GUID *a5,
        int a6,
        int a7,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a8,
        CCompositeSystemEffect **a9,
        struct IAudioProcessingObject **a10,
        struct IAudioSystemEffects2 **a11)
{
  CCompositeSystemEffect *v14; // rcx
  CCompositeSystemEffect **v15; // r15
  int v16; // edi
  __int64 v17; // rcx
  struct _GUID v18; // xmm0
  int v19; // edi
  int v20; // r8d
  struct _GUID v21; // kr00_16
  __int64 v22; // rdx
  __int64 *v23; // rcx
  int v24; // r9d
  int v25; // r11d
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 *v28; // rax
  volatile signed __int32 *v29; // rsi
  __int64 v30; // rdi
  volatile signed __int32 *v31; // r15
  __int64 v32; // rcx
  volatile signed __int32 *v33; // r14
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(); // rax
  int v36; // eax
  int v37; // ecx
  int v38; // edi
  __int64 v39; // r9
  __int64 *v40; // rdx
  int v41; // r8d
  int v42; // r11d
  __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // r11
  unsigned int v46; // r14d
  int v47; // ecx
  void *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rax
  unsigned int v52; // esi
  CCompositeSystemEffect *v54; // rax
  void *v55; // rdi
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  void *v59; // rax
  int v60; // eax
  struct IMMDevice *v61; // r10
  int (*v62)(CCompositeSystemEffect *__hidden, struct IMMDevice *, struct _GUID *__struct_ptr, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **); // rax
  int v63; // eax
  void (*v64)(void); // rax
  volatile signed __int32 *v65; // rdi
  unsigned __int64 v66; // r9
  __int64 v67; // rdx
  int v68; // [rsp+20h] [rbp-E0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v69; // [rsp+20h] [rbp-E0h]
  CCompositeSystemEffect *v70; // [rsp+50h] [rbp-B0h] BYREF
  int v71; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v72; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v73; // [rsp+68h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-90h] BYREF
  void *v75; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v77; // [rsp+88h] [rbp-78h]
  PROPVARIANT pvar; // [rsp+90h] [rbp-70h] BYREF
  __int64 v79; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-50h] BYREF
  void *v83; // [rsp+B8h] [rbp-48h] BYREF
  struct _GUID v84; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+D8h] [rbp-28h]
  volatile signed __int32 *v87; // [rsp+E0h] [rbp-20h]
  struct _GUID v88; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  int v91; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v92; // [rsp+160h] [rbp+60h]
  int v93; // [rsp+168h] [rbp+68h]

  v93 = a4;
  v92 = a3;
  v85 = -2LL;
  v14 = 0LL;
  v70 = 0LL;
  v15 = a9;
  if ( a9 )
    *a9 = 0LL;
  if ( a10 )
    *a10 = 0LL;
  if ( a11 )
    *a11 = 0LL;
  if ( !a2 )
    goto LABEL_70;
  if ( (int)CEndpointCharacteristics::UpdateAPOEnableStatus(a1, a3) >= 0
    && (!a7 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)a1)) )
  {
    v16 = 0;
    v17 = *(_QWORD *)(a1 + 32);
    if ( !v17 )
      goto LABEL_15;
    pvar = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
           v17,
           &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      LOBYTE(v16) = (_DWORD)v79 == 1;
    }
    PropVariantClear(&pvar);
    if ( !v16 || (unsigned int)CEndpointCharacteristics::IsCriticalAPO(a1, a3) )
    {
LABEL_15:
      v75 = 0LL;
      v18 = *a5;
      v88 = v18;
      v19 = 0;
      v20 = *(_DWORD *)(a2 + 40);
      v21 = v18;
      if ( v20 > 0 )
      {
        v22 = 0LL;
        while ( 1 )
        {
          if ( v22 < 0 || v19 >= v20 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180065504LL);
          }
          v23 = *(__int64 **)(v22 + *(_QWORD *)(a2 + 32));
          if ( *((_BYTE *)v23 + 16) )
          {
            if ( v19 >= v20 )
              goto LABEL_120;
            v24 = 0;
            v25 = *((_DWORD *)v23 + 2);
            if ( v25 > 0 )
            {
              v26 = *v23;
              while ( 1 )
              {
                v27 = *(_QWORD *)(v26 + 16LL * v24) - *(_QWORD *)&v18.Data1;
                if ( !v27 )
                  v27 = *(_QWORD *)(v26 + 16LL * v24 + 8) - *(_QWORD *)v18.Data4;
                if ( !v27 )
                  break;
                if ( ++v24 >= v25 )
                  goto LABEL_76;
              }
              if ( v24 != -1 )
                break;
            }
          }
LABEL_76:
          ++v19;
          v22 += 16LL;
          if ( v19 >= v20 )
            goto LABEL_47;
        }
        Microsoft::WRL::Wrappers::CriticalSection::Lock(a2 + 56, (__int64)&lpCriticalSection);
        if ( v19 < 0 || v19 >= *(_DWORD *)(a2 + 40) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
LABEL_120:
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x1800654EELL);
        }
        v28 = (__int64 *)(*(_QWORD *)(a2 + 32) + 16LL * v19);
        v29 = (volatile signed __int32 *)v28[1];
        v30 = *v28;
        if ( v29 )
        {
          _InterlockedIncrement(v29 + 2);
          v21 = v18;
        }
        v87 = v29;
        v86 = v30;
        v31 = *(volatile signed __int32 **)(v30 + 32);
        v32 = *(_QWORD *)(v30 + 24);
        if ( v31 )
        {
          _InterlockedIncrement(v31 + 2);
          v21 = v18;
        }
        v33 = v31;
        v77 = v31;
        v76 = v32;
        *(_BYTE *)(v30 + 16) = 0;
        v81 = v30;
        v82 = a2;
        v34 = *(_QWORD *)(v32 + 56);
        if ( !v34 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x1800653CCLL);
        }
        v35 = *(__int64 (__fastcall **)())(*(_QWORD *)v34 + 16LL);
        if ( v35 == std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call )
          v36 = lambda_2cdbfdbf6a906d093ee55c9100591272_::operator()(v34 + 8, a2, v30);
        else
          v36 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64 *))v35)(v34, &v82, &v81);
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x63,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v36,
            v68);
          std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(&v76);
          if ( v29 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v29);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          v15 = a9;
          goto LABEL_97;
        }
        if ( !*(_BYTE *)(v30 + 16) )
        {
          v33 = 0LL;
          v77 = 0LL;
          if ( v31 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v31);
        }
        if ( v33 )
        {
          if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
          {
            v65 = v77;
            (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v77)(v77, -1LL);
            if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
          }
          v21 = v18;
        }
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v29)(v29, -1LL);
            if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          }
          v21 = v18;
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        v15 = a9;
      }
LABEL_47:
      v37 = 0;
      v38 = *(_DWORD *)(a2 + 40);
      if ( v38 > 0 )
      {
        v39 = 0LL;
        while ( 1 )
        {
          if ( v39 < 0 || v37 >= v38 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180065530LL);
          }
          v40 = *(__int64 **)(v39 + *(_QWORD *)(a2 + 32));
          v41 = 0;
          v42 = *((_DWORD *)v40 + 2);
          if ( v42 > 0 )
          {
            v43 = *v40;
            while ( 1 )
            {
              v44 = *(_QWORD *)(v43 + 16LL * v41) - *(_QWORD *)&v21.Data1;
              if ( !v44 )
                v44 = *(_QWORD *)(v43 + 16LL * v41 + 8) - *(_QWORD *)v21.Data4;
              if ( !v44 )
                break;
              if ( ++v41 >= v42 )
                goto LABEL_94;
            }
            if ( v41 != -1 )
              break;
          }
LABEL_94:
          ++v37;
          v39 += 16LL;
          if ( v37 >= v38 )
            goto LABEL_97;
        }
        if ( v37 != -1 )
        {
          if ( v37 < 0 || v37 >= v38 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x18006551ALL);
          }
          v45 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL * v37);
          goto LABEL_61;
        }
      }
LABEL_97:
      if ( !*(_QWORD *)(a2 + 16)
        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(_QWORD *)(a2 + 16), &v88) == -1 )
      {
        v45 = 0LL;
      }
LABEL_61:
      v46 = a6;
      if ( !v45 && a6 )
        v45 = *(_QWORD *)(a2 + 16);
      v47 = 0;
      v48 = 0LL;
      v75 = 0LL;
      if ( v45 )
      {
        if ( a6 )
          v49 = 56LL;
        else
          v49 = 40LL;
        v50 = v49 + v45;
        v51 = *(int *)(v49 + v45 + 8);
        if ( (int)v51 > 0 )
        {
          v55 = 0LL;
          v56 = v51;
          v57 = -1LL;
          if ( v56 != 1 )
            v57 = 0xFFFFFFFFFFFFFFFFuLL / v56;
          if ( v57 < 0x10
            || (v58 = 16 * v56, v58 > 0x7FFFFFFF)
            || (v59 = CoTaskMemAlloc((unsigned int)v58), (v55 = v59) == 0LL) )
          {
            v52 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x251,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              v68);
            CoTaskMemFree(v55);
            v67 = 1127LL;
            goto LABEL_127;
          }
          memcpy_0(v59, *(const void **)v50, 16LL * *(int *)(v50 + 8));
          v48 = v55;
          v75 = v55;
          CoTaskMemFree(0LL);
        }
        v47 = *(_DWORD *)(v50 + 8);
      }
      if ( !v47 )
      {
LABEL_68:
        CoTaskMemFree(v48);
        goto LABEL_69;
      }
      v72 = v93 == 1;
      v83 = v48;
      v91 = v47;
      v71 = *(_DWORD *)(a1 + 148);
      v73 = v92;
      v60 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
              (unsigned int)&v70,
              (unsigned int)&v73,
              (unsigned int)&v72,
              (unsigned int)&v71,
              (__int64)&v91,
              (__int64)&v83);
      v52 = v60;
      if ( v60 < 0 )
      {
        v66 = (unsigned int)v60;
        v67 = 1137LL;
LABEL_128:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v67,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v66,
          v69);
        CoTaskMemFree(v48);
        v14 = v70;
        goto LABEL_73;
      }
      if ( !a10 && !a11 )
        goto LABEL_68;
      v84 = *a5;
      v61 = *(struct IMMDevice **)(a1 + 16);
      v62 = *(int (**)(CCompositeSystemEffect *__hidden, struct IMMDevice *, struct _GUID *__struct_ptr, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **))(*(_QWORD *)v70 + 24LL);
      if ( v62 == CCompositeSystemEffect::Initialize )
      {
        v63 = CCompositeSystemEffect::Initialize(v70, v61, &v84, v46, a8, a10, a11);
      }
      else
      {
        v69 = a8;
        v63 = ((__int64 (__fastcall *)(CCompositeSystemEffect *, struct IMMDevice *, struct _GUID *, _QWORD))v62)(
                v70,
                v61,
                &v84,
                v46);
      }
      v52 = v63;
      if ( v63 >= 0 )
        goto LABEL_68;
      v67 = 1141LL;
LABEL_127:
      v66 = v52;
      goto LABEL_128;
    }
  }
LABEL_69:
  v14 = v70;
LABEL_70:
  if ( v15 )
  {
    v54 = v14;
    v14 = 0LL;
    v70 = 0LL;
    *v15 = v54;
  }
  v52 = 0;
LABEL_73:
  if ( v14 )
  {
    v64 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v64 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      v64();
  }
  return v52;
}
