/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B350
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystem.c)
 *     ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x18001ED50 (-GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180020D74 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180021690 (-IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800216F8 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800217D0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021C48 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021D6C (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022310 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsOutOfProcOffloadUsed@@YA_N_N@Z @ 0x18009AC28 (-IsOutOfProcOffloadUsed@@YA_N_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009B88C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CAX_NW4Report.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800B554C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall InitializeStreamAndModeDescriptors(
        size_t a1,
        int a2,
        int a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        __int128 *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        GUID *a14,
        __int64 a15,
        __int64 a16,
        char a17,
        _QWORD *a18,
        unsigned int **a19)
{
  CEndpointCharacteristics *v20; // r15
  char *v21; // rdi
  unsigned int *v22; // rsi
  __int64 v23; // r14
  CCompositeSystemEffect *v24; // rbx
  __int128 v25; // xmm6
  int Lfx; // eax
  unsigned int v27; // ebx
  __int64 (__fastcall *v28)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **); // rax
  struct _GUID *v29; // r13
  struct _GUID **v30; // rax
  struct _GUID *v31; // rcx
  void (__fastcall *v32)(CCompositeSystemEffect *); // rax
  __int64 v33; // rbx
  char *v34; // rax
  _DWORD *v35; // r15
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ebx
  unsigned int *v39; // r13
  unsigned int v40; // eax
  char *v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int128 *v44; // rdx
  GUID *v45; // rax
  unsigned int **v46; // rcx
  __int128 v47; // xmm6
  size_t v48; // rbx
  __int64 *SupportedConnectorModesInternal; // rax
  int InitializedSystemEffectInterface; // eax
  __int64 (__fastcall *v51)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **); // rax
  struct _GUID *v52; // r13
  struct _GUID **v53; // rax
  struct _GUID *v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // r13d
  __int64 v57; // r12
  char *v58; // rax
  char *v59; // r15
  unsigned int v60; // r8d
  int v61; // r12d
  unsigned int v62; // ecx
  void (__fastcall *v63)(size_t); // rax
  char *v64; // rax
  unsigned int *v65; // rax
  char *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  char *v70; // rax
  unsigned int v71; // r10d
  char *v72; // rax
  unsigned int v73; // r10d
  unsigned int i; // r9d
  int v75; // ebx
  void *v76; // rcx
  int StreamEffect; // eax
  __int64 v78; // rdx
  struct _GUID *v79; // rbx
  struct _GUID **v80; // rax
  struct _GUID *v81; // rcx
  struct _GUID *v82; // rbx
  struct _GUID **v83; // rax
  struct _GUID *v84; // rcx
  bool v85; // cl
  bool v86; // bl
  char *v87; // rax
  _DWORD *v88; // rbx
  unsigned int v89; // r8d
  unsigned int v90; // ecx
  __int64 v91; // rdx
  char *v92; // rax
  unsigned int *v93; // rbx
  __int64 v94; // rdx
  int v95; // r15d
  unsigned int v96; // ecx
  __int64 v97; // r13
  char *v98; // rax
  char *v99; // r12
  unsigned int v100; // r8d
  unsigned int v101; // ecx
  struct IAudioSystemEffects2 **v102; // [rsp+28h] [rbp-E0h]
  int v103; // [rsp+30h] [rbp-D8h]
  int v104; // [rsp+38h] [rbp-D0h]
  unsigned int v105[2]; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v106; // [rsp+70h] [rbp-98h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  CCompositeSystemEffect *v108; // [rsp+80h] [rbp-88h] BYREF
  int v109; // [rsp+88h] [rbp-80h]
  unsigned int v110; // [rsp+8Ch] [rbp-7Ch]
  LPVOID v111; // [rsp+90h] [rbp-78h] BYREF
  int v112; // [rsp+98h] [rbp-70h]
  size_t v113[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _GUID **p_pv; // [rsp+B8h] [rbp-50h]
  struct _GUID *v115; // [rsp+C0h] [rbp-48h] BYREF
  char v116; // [rsp+C8h] [rbp-40h]
  size_t Size[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 *v118; // [rsp+E8h] [rbp-20h]
  char *v119; // [rsp+F0h] [rbp-18h]
  unsigned int **v120; // [rsp+F8h] [rbp-10h]
  char *v121; // [rsp+100h] [rbp-8h]
  _QWORD *v122; // [rsp+108h] [rbp+0h]
  __int64 v123; // [rsp+110h] [rbp+8h]
  __int64 v124; // [rsp+118h] [rbp+10h]
  CLSID pClsid; // [rsp+120h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v123 = -2LL;
  v110 = a4;
  v109 = a3;
  v112 = a2;
  v20 = (CEndpointCharacteristics *)a1;
  v113[0] = a1;
  v118 = a7;
  v122 = a18;
  v120 = a19;
  v21 = 0LL;
  v119 = 0LL;
  v22 = 0LL;
  v121 = 0LL;
  LOBYTE(v105[1]) = 0;
  v23 = *(_QWORD *)(a1 + 16);
  v124 = v23;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  if ( !a18 )
  {
    v44 = v118;
    goto LABEL_40;
  }
  if ( (a3 & 0x800000) != 0 )
  {
    if ( v112 )
    {
      v27 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8000FFFFLL,
        (int)v102);
      goto LABEL_85;
    }
    v67 = (char *)CoTaskMemAlloc(0xD8uLL);
    if ( !v67 )
    {
      v27 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL,
        (int)v102);
      goto LABEL_85;
    }
    v21 = v67;
    v119 = v67;
    *(_DWORD *)v67 = 0;
    *((_DWORD *)v67 + 22) = a3;
    *((_QWORD *)v67 + 12) = 0LL;
    *((_DWORD *)v67 + 34) = 0;
    *((_DWORD *)v67 + 28) = 0;
    *(GUID *)&v67[16 * (*((_DWORD *)v67 + 34))++ + 200] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
    *((_DWORD *)v67 + 1) = 1;
    goto LABEL_37;
  }
  if ( !v112 && (a5 & 0xFFFFFFFC) == 0 && a5 != eOffloadConnector )
  {
    v24 = 0LL;
    pv = 0LL;
    v105[0] = 0;
    if ( a5 == eLoopbackConnector )
      goto LABEL_22;
    v108 = 0LL;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v20, a5) )
    {
      v25 = *v118;
      if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v20, a5)
        || (*(_OWORD *)Size = v25, !CEndpointCharacteristics::IsSFXModeSupported(v20, a5, (struct _GUID *)Size)) )
      {
LABEL_19:
        if ( v24 )
        {
          v32 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 16LL);
          if ( (char *)v32 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release(v24);
          else
            v32(v24);
        }
LABEL_22:
        switch ( v110 )
        {
          case 0u:
            LODWORD(v108) = v105[0] + 4;
            v33 = 16LL * (v105[0] + 4);
            v34 = (char *)CoTaskMemAlloc(v33 + 200);
            v35 = v34;
            if ( v34 )
            {
              v21 = v34;
              v119 = v34;
              memset(v34, 0, v33 + 200);
              *(_DWORD *)v21 = 0;
              v38 = v109;
              *((_DWORD *)v21 + 22) = v109;
              *((_QWORD *)v21 + 12) = 0LL;
              v39 = (unsigned int *)(v21 + 136);
              *((_DWORD *)v21 + 34) = 0;
              *((_DWORD *)v21 + 28) = 0;
              v40 = 0;
              LODWORD(v111) = 0;
              if ( v105[0] )
              {
                while ( 1 )
                {
                  v41 = (char *)(16LL * v40);
                  v106 = v41;
                  v42 = *(_QWORD *)&v41[(_QWORD)pv] - *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1;
                  if ( !v42 )
                    v42 = *(_QWORD *)&v41[(_QWORD)pv + 8] - *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4;
                  if ( !v42 )
                  {
                    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(pv, v41, v36, v37, v102, v103, v104) )
                    {
                      if ( RpcImpersonateClient(0LL) >= 0 )
                      {
                        v75 = IsVirtualSurroundAllowedForProcess(a8);
                        RpcRevertToSelf();
                        if ( !v75 )
                          goto LABEL_30;
                      }
                    }
                    v41 = (char *)v106;
                  }
                  if ( *v39 > 0x1F )
                  {
                    v27 = -2147418113;
                    v69 = 304LL;
                    goto LABEL_128;
                  }
                  v35[28] |= 1 << *v39;
                  *(_OWORD *)&v35[4 * (*v39)++ + 50] = *(_OWORD *)((char *)pv + (_QWORD)v41);
LABEL_30:
                  v40 = (_DWORD)v111 + 1;
                  LODWORD(v111) = v40;
                  if ( v40 >= v105[0] )
                  {
                    v38 = v109;
                    break;
                  }
                }
              }
              *(GUID *)&v35[4 * (*v39)++ + 50] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
              *(GUID *)&v35[4 * (*v39)++ + 50] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
              *(GUID *)&v35[4 * (*v39)++ + 50] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
              if ( a17 )
              {
                wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::ReportUsageToService();
                if ( CoGetPSClsid(&GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec, &pClsid) >= 0 )
                  *(GUID *)&v35[4 * (*v39)++ + 50] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
              }
              v35[1] = v38 < 0;
              v20 = (CEndpointCharacteristics *)v113[0];
              v43 = (unsigned int)v108;
              break;
            }
            v69 = 278LL;
LABEL_127:
            v27 = -2147024882;
LABEL_128:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v69,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v27,
              (int)v102);
LABEL_129:
            v76 = pv;
            if ( !pv )
              goto LABEL_85;
            goto LABEL_130;
          case 1u:
            v43 = v105[0] + 2;
            Size[0] = 16LL * (v105[0] + 2) + 200;
            v72 = (char *)CoTaskMemAlloc(Size[0]);
            if ( !v72 )
            {
              v69 = 342LL;
              goto LABEL_127;
            }
            v21 = v72;
            v119 = v72;
            memset(v72, 0, Size[0]);
            *(_DWORD *)v21 = 1;
            v73 = v109;
            *((_DWORD *)v21 + 22) = v109;
            *((_QWORD *)v21 + 12) = 0LL;
            *((_DWORD *)v21 + 28) = 0;
            v39 = (unsigned int *)(v21 + 136);
            *((_DWORD *)v21 + 34) = 0;
            for ( i = 0; i < v105[0]; ++i )
            {
              if ( *v39 > 0x1F )
              {
                v27 = -2147418113;
                v69 = 352LL;
                goto LABEL_128;
              }
              *((_DWORD *)v21 + 28) |= 1 << *v39;
              *(_OWORD *)&v21[16 * (*v39)++ + 200] = *((_OWORD *)pv + i);
            }
            *(GUID *)&v21[16 * (*v39)++ + 200] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
            *(GUID *)&v21[16 * (*v39)++ + 200] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
            *((_DWORD *)v21 + 1) = v73 >> 31;
            break;
          case 2u:
            v43 = 3;
            v70 = (char *)CoTaskMemAlloc(0xF8uLL);
            if ( !v70 )
            {
              v69 = 371LL;
              goto LABEL_127;
            }
            v21 = v70;
            v119 = v70;
            memset(v70, 0, 0xF8uLL);
            *(_DWORD *)v21 = (a5 != eLoopbackConnector) + 1;
            v71 = v109;
            *((_DWORD *)v21 + 22) = v109;
            *((_QWORD *)v21 + 12) = 0LL;
            v39 = (unsigned int *)(v21 + 136);
            *((_DWORD *)v21 + 34) = 3;
            *(GUID *)(v21 + 200) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
            *(GUID *)(v21 + 216) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
            *(GUID *)(v21 + 232) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
            *((_DWORD *)v21 + 28) = 0;
            *((_DWORD *)v21 + 1) = v71 >> 31;
            break;
          default:
            v27 = -2147024809;
            v69 = 388LL;
            goto LABEL_128;
        }
        if ( *v39 <= v43 )
        {
          if ( pv )
            CoTaskMemFree(pv);
LABEL_37:
          v44 = v118;
          *(_OWORD *)(v21 + 116) = *v118;
          *((_DWORD *)v21 + 2) = a5;
          *((_QWORD *)v21 + 10) = a9;
          *((_DWORD *)v21 + 18) = *(unsigned __int16 *)(a9 + 16) + 18;
          *((_QWORD *)v21 + 3) = a11;
          *((_QWORD *)v21 + 4) = a12;
          *((_DWORD *)v21 + 3) = a8;
          *((_QWORD *)v21 + 2) = a13;
          v45 = a14;
          if ( !a14 )
            v45 = &GUID_00000000_0000_0000_0000_000000000000;
          *((GUID *)v21 + 3) = *v45;
          *((_OWORD *)v21 + 9) = *(_OWORD *)a15;
          *((_OWORD *)v21 + 10) = *(_OWORD *)(a15 + 16);
          *((_OWORD *)v21 + 11) = *(_OWORD *)(a15 + 32);
          *((_QWORD *)v21 + 24) = *(_QWORD *)(a15 + 48);
          *((_QWORD *)v21 + 8) = a16;
LABEL_40:
          v46 = v120;
          if ( !v120 )
          {
LABEL_80:
            if ( v122 )
            {
              v64 = v21;
              v21 = 0LL;
              *v122 = v64;
            }
            if ( v46 )
            {
              v65 = v22;
              v22 = 0LL;
              *v46 = v65;
            }
            v27 = 0;
            goto LABEL_85;
          }
          v111 = 0LL;
          v105[0] = 0;
          v47 = *v44;
          v48 = 0LL;
          Size[0] = 0LL;
          pv = 0LL;
          if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v20, a5) )
          {
            *(_OWORD *)v113 = v47;
            if ( (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(v20, (struct _GUID *)v113, a5) )
            {
              *(_OWORD *)v113 = v47;
              SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                                             v20,
                                                             (unsigned int)a5,
                                                             0LL);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(SupportedConnectorModesInternal, v113);
              *(_OWORD *)v113 = v47;
              v102 = (struct IAudioSystemEffects2 **)v113;
              InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                                   v20,
                                                   (char *)v20 + 96 * a5 + 616,
                                                   2LL);
              v27 = InitializedSystemEffectInterface;
              if ( InitializedSystemEffectInterface < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x1F8,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)InitializedSystemEffectInterface,
                  (int)v113);
                goto LABEL_210;
              }
              v48 = Size[0];
              if ( Size[0] )
              {
                p_pv = (struct _GUID **)&v111;
                v115 = 0LL;
                v116 = 1;
                v51 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **))(*(_QWORD *)Size[0] + 32LL);
                if ( v51 == CCompositeSystemEffect::GetClsids )
                  CCompositeSystemEffect::GetClsids((CCompositeSystemEffect *)Size[0], v105, &v115);
                else
                  v51((CCompositeSystemEffect *)Size[0], v105, &v115);
                if ( v116 )
                {
                  v52 = v115;
                  v53 = p_pv;
                  v113[0] = (size_t)p_pv;
                  v54 = *p_pv;
                  if ( v115 != *p_pv )
                  {
                    if ( v54 )
                    {
                      CoTaskMemFree(v54);
                      v53 = (struct _GUID **)v113[0];
                    }
                    *v53 = v52;
                  }
                }
              }
            }
          }
          if ( (v109 & 0x800000) != 0 )
          {
            if ( v112 )
            {
              v27 = -2147418113;
              v94 = 514LL;
LABEL_209:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v94,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)v27,
                (int)v102);
              goto LABEL_210;
            }
            goto LABEL_72;
          }
          if ( v112 )
            goto LABEL_72;
          if ( (a5 == eHostProcessConnector || a5 == eKeywordDetectorConnector) && v110 != 2 )
          {
            v55 = *a6 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
            if ( *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
              v55 = a6[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
            if ( !v55 )
            {
              if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v20, a5) )
              {
                v56 = 1;
                if ( v105[0] > 1 )
                  v56 = v105[0];
                v57 = 16LL * v56;
                v58 = (char *)CoTaskMemAlloc(v57 + 60);
                v59 = v58;
                if ( v58 )
                {
                  v22 = (unsigned int *)v58;
                  v121 = v58;
                  memset(v58, 0, v57 + 60);
                  *(_QWORD *)v22 = v110;
                  v22[14] = 0;
                  v60 = 0;
                  v61 = 1;
                  if ( v105[0] )
                  {
                    while ( 1 )
                    {
                      v62 = *((_DWORD *)v59 + 14);
                      if ( v62 > 0x1F )
                        break;
                      *((_DWORD *)v59 + 8) |= 1 << v62;
                      *(_OWORD *)&v59[16 * (*((_DWORD *)v59 + 14))++ + 60] = *((_OWORD *)v111 + v60);
                      if ( ++v60 >= v105[0] )
                        goto LABEL_66;
                    }
                    v27 = -2147418113;
                    v94 = 545LL;
                    goto LABEL_209;
                  }
LABEL_66:
                  *(_OWORD *)(v59 + 36) = *v118;
                  if ( pv )
                  {
                    (**(void (__fastcall ***)(LPVOID, GUID *, LPVOID *))pv)(
                      pv,
                      &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
                      &v106);
                    if ( v106 )
                    {
LABEL_69:
                      *((_DWORD *)v59 + 13) = v61;
                      if ( *((_DWORD *)v59 + 14) <= v56 )
                      {
                        *((_QWORD *)v59 + 2) = a10;
                        *((_DWORD *)v59 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
                        if ( v106 )
                          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v106 + 16LL))(v106);
                        goto LABEL_72;
                      }
                      v27 = -2147418113;
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x22C,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)0x8000FFFFLL,
                        (int)v102);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v106);
LABEL_210:
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
                      if ( v111 )
                        CoTaskMemFree(v111);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)Size);
                      goto LABEL_85;
                    }
                  }
                  else
                  {
                    v106 = 0LL;
                  }
                  v61 = 0;
                  goto LABEL_69;
                }
                v94 = 537LL;
                goto LABEL_208;
              }
LABEL_72:
              if ( pv )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
              if ( v111 )
                CoTaskMemFree(v111);
              if ( v48 )
              {
                v63 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 16LL);
                if ( (char *)v63 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release(v48);
                else
                  v63(v48);
              }
              v46 = v120;
              goto LABEL_80;
            }
          }
          if ( !LOBYTE(v105[1]) )
            goto LABEL_72;
          v95 = 1;
          v96 = 1;
          if ( v105[0] > 1 )
            v96 = v105[0];
          LODWORD(v108) = v96;
          v97 = 16LL * v96;
          v98 = (char *)CoTaskMemAlloc(v97 + 60);
          v99 = v98;
          if ( !v98 )
          {
            v94 = 569LL;
LABEL_208:
            v27 = -2147024882;
            goto LABEL_209;
          }
          v22 = (unsigned int *)v98;
          v121 = v98;
          memset(v98, 0, v97 + 60);
          *v22 = v110;
          v22[1] = 0;
          v22[14] = 0;
          v100 = 0;
          if ( v105[0] )
          {
            while ( 1 )
            {
              v101 = *((_DWORD *)v99 + 14);
              if ( v101 > 0x1F )
                break;
              *((_DWORD *)v99 + 8) |= 1 << v101;
              *(_OWORD *)&v99[16 * (*((_DWORD *)v99 + 14))++ + 60] = *((_OWORD *)v111 + v100);
              if ( ++v100 >= v105[0] )
                goto LABEL_199;
            }
            v27 = -2147418113;
            v94 = 578LL;
            goto LABEL_209;
          }
LABEL_199:
          *(_OWORD *)(v99 + 36) = *v118;
          if ( pv )
          {
            (**(void (__fastcall ***)(LPVOID, GUID *, LPVOID *))pv)(
              pv,
              &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
              &v106);
            if ( v106 )
            {
LABEL_204:
              *((_DWORD *)v99 + 13) = v95;
              if ( *((_DWORD *)v99 + 14) > (unsigned int)v108 )
              {
                v27 = -2147418113;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x24D,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)0x8000FFFFLL,
                  (int)v102);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v106);
                goto LABEL_210;
              }
              *((_QWORD *)v99 + 2) = a10;
              *((_DWORD *)v99 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v106);
              goto LABEL_72;
            }
          }
          else
          {
            v106 = 0LL;
          }
          v95 = 0;
          goto LABEL_204;
        }
        v27 = -2147418113;
        v69 = 392LL;
        goto LABEL_128;
      }
      *(_OWORD *)Size = v25;
      v104 = 0;
      v103 = 0;
      v102 = (struct IAudioSystemEffects2 **)Size;
      Lfx = CEndpointCharacteristics::GetInitializedSystemEffectInterface(v20, (char *)v20 + 96 * a5 + 232, 1LL);
      v27 = Lfx;
      if ( Lfx >= 0 )
      {
LABEL_11:
        v24 = v108;
        if ( v108 )
        {
          p_pv = (struct _GUID **)&pv;
          v115 = 0LL;
          v116 = 1;
          v28 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **))(*(_QWORD *)v108 + 32LL);
          if ( v28 == CCompositeSystemEffect::GetClsids )
            CCompositeSystemEffect::GetClsids(v108, v105, &v115);
          else
            v28(v108, v105, &v115);
          if ( v116 )
          {
            v29 = v115;
            v30 = p_pv;
            Size[0] = (size_t)p_pv;
            v31 = *p_pv;
            if ( v115 != *p_pv )
            {
              if ( v31 )
              {
                CoTaskMemFree(v31);
                v30 = (struct _GUID **)Size[0];
              }
              *v30 = v29;
            }
          }
        }
        goto LABEL_19;
      }
      v68 = 259LL;
    }
    else
    {
      Lfx = CEndpointCharacteristics::GetLfx(v20, a5, &v108, 0LL, v102);
      v27 = Lfx;
      if ( Lfx >= 0 )
        goto LABEL_11;
      v68 = 264LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v68,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)Lfx,
      (int)v102);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
    goto LABEL_129;
  }
  v106 = 0LL;
  v105[0] = 0;
  Size[0] = 0LL;
  LODWORD(v111) = 0;
  if ( a5 != eOffloadConnector || v112 )
    goto LABEL_166;
  pv = 0LL;
  *(_OWORD *)v113 = *v118;
  v108 = 0LL;
  StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                   v20,
                   (struct _GUID *)v113,
                   0,
                   eOffloadConnector,
                   &v108,
                   0LL,
                   0LL);
  v27 = StreamEffect;
  if ( StreamEffect < 0 )
  {
    v78 = 403LL;
LABEL_137:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v78,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)StreamEffect,
      (int)v102);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
    goto LABEL_175;
  }
  *(_OWORD *)v113 = *v118;
  pv = 0LL;
  StreamEffect = CEndpointCharacteristics::GetModeEffect(
                   v20,
                   (struct _GUID *)v113,
                   0,
                   eOffloadConnector,
                   (struct ICompositeSystemEffect **)&pv,
                   0LL,
                   0LL);
  v27 = StreamEffect;
  if ( StreamEffect < 0 )
  {
    v78 = 404LL;
    goto LABEL_137;
  }
  if ( v108 )
  {
    p_pv = (struct _GUID **)&v106;
    v115 = 0LL;
    v116 = 1;
    (*(void (__fastcall **)(CCompositeSystemEffect *, unsigned int *, struct _GUID **))(*(_QWORD *)v108 + 32LL))(
      v108,
      v105,
      &v115);
    if ( v116 )
    {
      v79 = v115;
      v80 = p_pv;
      v113[0] = (size_t)p_pv;
      v81 = *p_pv;
      if ( v115 != *p_pv )
      {
        if ( v81 )
        {
          CoTaskMemFree(v81);
          v80 = (struct _GUID **)v113[0];
        }
        *v80 = v79;
      }
    }
  }
  if ( pv )
  {
    p_pv = (struct _GUID **)Size;
    v115 = 0LL;
    v116 = 1;
    (*(void (__fastcall **)(LPVOID, LPVOID *, struct _GUID **))(*(_QWORD *)pv + 32LL))(pv, &v111, &v115);
    if ( v116 )
    {
      v82 = v115;
      v83 = p_pv;
      v113[0] = (size_t)p_pv;
      v84 = *p_pv;
      if ( v115 != *p_pv )
      {
        if ( v84 )
        {
          CoTaskMemFree(v84);
          v83 = (struct _GUID **)v113[0];
        }
        *v83 = v82;
      }
    }
  }
  v85 = v105[0] || (_DWORD)v111;
  v86 = IsOutOfProcOffloadUsed(v85);
  LOBYTE(v105[1]) = v86;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v108);
  if ( !v86 )
  {
LABEL_166:
    v92 = (char *)CoTaskMemAlloc(0xD8uLL);
    v93 = (unsigned int *)v92;
    if ( v92 )
    {
      v21 = v92;
      v119 = v92;
      memset(v92, 0, 0xD8uLL);
      *v93 = v110;
      v93[22] = v109;
      *((_QWORD *)v93 + 12) = 0LL;
      v93[34] = 0;
      v93[1] = 0;
      goto LABEL_168;
    }
    v91 = 463LL;
LABEL_173:
    v27 = -2147024882;
    goto LABEL_174;
  }
  if ( v110 )
  {
    v27 = -2147024809;
    v91 = 450LL;
    goto LABEL_174;
  }
  LODWORD(v108) = v105[0];
  v113[0] = 16LL * v105[0] + 200;
  v87 = (char *)CoTaskMemAlloc(v113[0]);
  v88 = v87;
  if ( !v87 )
  {
    v91 = 426LL;
    goto LABEL_173;
  }
  v21 = v87;
  v119 = v87;
  memset(v87, 0, v113[0]);
  *v88 = 0;
  v88[22] = v109;
  *((_QWORD *)v88 + 12) = 0LL;
  v88[34] = 0;
  v88[28] = 0;
  v89 = 0;
  if ( v105[0] )
  {
    while ( 1 )
    {
      v90 = v88[34];
      if ( v90 > 0x1F )
        break;
      v88[28] |= 1 << v90;
      *(_OWORD *)&v88[4 * v88[34]++ + 50] = *((_OWORD *)v106 + v89);
      if ( ++v89 >= v105[0] )
        goto LABEL_162;
    }
    v27 = -2147418113;
    v91 = 437LL;
    goto LABEL_174;
  }
LABEL_162:
  v88[1] = 0;
  if ( v88[34] <= (unsigned int)v108 )
  {
LABEL_168:
    if ( Size[0] )
      CoTaskMemFree((LPVOID)Size[0]);
    if ( v106 )
      CoTaskMemFree(v106);
    goto LABEL_37;
  }
  v27 = -2147418113;
  v91 = 445LL;
LABEL_174:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v91,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v27,
    (int)v102);
LABEL_175:
  if ( Size[0] )
    CoTaskMemFree((LPVOID)Size[0]);
  v76 = v106;
  if ( v106 )
LABEL_130:
    CoTaskMemFree(v76);
LABEL_85:
  if ( v22 )
    CoTaskMemFree(v22);
  if ( v21 )
    CoTaskMemFree(v21);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v27;
}
