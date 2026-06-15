/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002BA30
 * Callers:
 *     ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001C910 (-ForEachStream@CProcessSubmixProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ?OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ @ 0x18002DF60 (-OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004BFE0 (Create_SpatialAudioDevicePropertyReader.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B38F0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x1800F1970 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800F2598 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x1800F29AC (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800F357C (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800F38E0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800F4394 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1800F4AD0 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F59C0 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  struct SPATIAL_STREAM_PROPERTIES *v5; // rax
  void (__fastcall **v9)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // bl
  HRESULT v14; // eax
  int ActivationFactory; // eax
  void (__fastcall **v16)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v17)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  struct IAudioStreamInfo *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rbx
  __int64 (__fastcall *v21)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **); // rax
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  int v26; // r12d
  bool v27; // r14
  char v28; // bl
  HRESULT v29; // eax
  CSpatialAudioResourceManagerTraceLogger *v31; // rcx
  int v32; // eax
  unsigned int v33; // esi
  int v34; // eax
  int v35; // eax
  void (__fastcall **v36)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  struct Sarm::CEndpointResourcePool *v41; // r14
  int v42; // eax
  const char *v43; // r9
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // ebx
  int v47; // [rsp+20h] [rbp-E0h]
  struct ISaDeviceProxy *v48; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  struct SPATIAL_STREAM_PROPERTIES *v52; // [rsp+50h] [rbp-B0h]
  int v53; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v54; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v55; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v56; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  struct Sarm::CEndpointResourcePool *v64; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID *v65; // [rsp+A8h] [rbp-58h]
  _DWORD v66[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-48h]
  _DWORD v68[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-38h]
  _DWORD v70[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-28h]
  _DWORD v72[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING string; // [rsp+108h] [rbp+8h] BYREF
  HSTRING_HEADER v76; // [rsp+110h] [rbp+10h] BYREF
  HSTRING v77; // [rsp+128h] [rbp+28h] BYREF
  __int64 v78; // [rsp+130h] [rbp+30h] BYREF
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int64 v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  __int64 v82; // [rsp+150h] [rbp+50h]
  __int64 v83; // [rsp+158h] [rbp+58h]
  __int64 v84; // [rsp+160h] [rbp+60h]
  CLSID pClsid; // [rsp+168h] [rbp+68h] BYREF
  void *v86; // [rsp+178h] [rbp+78h] BYREF
  int v87; // [rsp+180h] [rbp+80h]
  int v88; // [rsp+184h] [rbp+84h]
  void *v89; // [rsp+188h] [rbp+88h]
  int v90; // [rsp+190h] [rbp+90h]
  int v91; // [rsp+194h] [rbp+94h]
  BOOL *v92; // [rsp+198h] [rbp+98h]
  __int64 v93; // [rsp+1A0h] [rbp+A0h]
  void *v94; // [rsp+1A8h] [rbp+A8h] BYREF
  int v95; // [rsp+1B0h] [rbp+B0h]
  int v96; // [rsp+1B4h] [rbp+B4h]
  void *v97; // [rsp+1B8h] [rbp+B8h]
  int v98; // [rsp+1C0h] [rbp+C0h]
  int v99; // [rsp+1C4h] [rbp+C4h]
  BOOL *v100; // [rsp+1C8h] [rbp+C8h]
  __int64 v101; // [rsp+1D0h] [rbp+D0h]
  void *v102; // [rsp+1D8h] [rbp+D8h] BYREF
  int v103; // [rsp+1E0h] [rbp+E0h]
  int v104; // [rsp+1E4h] [rbp+E4h]
  void *v105; // [rsp+1E8h] [rbp+E8h]
  int v106; // [rsp+1F0h] [rbp+F0h]
  int v107; // [rsp+1F4h] [rbp+F4h]
  BOOL *v108; // [rsp+1F8h] [rbp+F8h]
  __int64 v109; // [rsp+200h] [rbp+100h]
  void *v110; // [rsp+210h] [rbp+110h] BYREF
  int v111; // [rsp+218h] [rbp+118h]
  int v112; // [rsp+21Ch] [rbp+11Ch]
  void *v113; // [rsp+220h] [rbp+120h]
  int v114; // [rsp+228h] [rbp+128h]
  int v115; // [rsp+22Ch] [rbp+12Ch]
  const char *v116; // [rsp+230h] [rbp+130h]
  __int64 v117; // [rsp+238h] [rbp+138h]
  int *v118; // [rsp+240h] [rbp+140h]
  __int64 v119; // [rsp+248h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v5 = a5;
  v58 = a3;
  v65 = a4;
  v52 = a5;
  v53 = 299;
  if ( (unsigned int)dword_180188330 > 5 )
  {
    v117 = 64LL;
    v116 = "Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice";
    v118 = &v53;
    v119 = 4LL;
    v66[1] = 5;
    v110 = off_180188338;
    v66[0] = ((unsigned int)&unk_180147CC8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v67 = 0LL;
    v111 = *(unsigned __int16 *)off_180188338;
    v113 = &unk_180147CD3;
    v115 = 1;
    v112 = 2;
    v114 = 21;
    EtwEventWriteTransfer(qword_180188350, v66, 0LL, 0LL, 4, &v110, (_DWORD)v48);
    v5 = v52;
    a4 = v65;
  }
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x130,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      0LL);
    __debugbreak();
  }
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x131,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v9 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
  v63 = 0LL;
  v10 = 0LL;
  (*v9)(a2, &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, &v63);
  if ( v63 )
  {
    if ( *((_DWORD *)this + 62) == 17 )
      v11 = (unsigned int)v63 % 0x11;
    else
      v11 = (unsigned int)v63 % *((_DWORD *)this + 62);
    v12 = *((_QWORD *)this + 29);
    if ( v12 )
    {
      v11 = *(_QWORD *)(v12 + 8 * v11);
      if ( v11 )
      {
        while ( *(_DWORD *)(v11 + 112) != (_DWORD)v63 || *(_QWORD *)v11 != v63 )
        {
          v11 = *(_QWORD *)(v11 + 104);
          if ( !v11 )
            goto LABEL_10;
        }
        v10 = v11 + 8;
      }
    }
LABEL_10:
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 16LL))(v63, v11);
    if ( v10 )
      return 0LL;
  }
  if ( *((_QWORD *)this + 72) )
    goto LABEL_22;
  v13 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v60 = 0LL;
    string = 0LL;
    v14 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v14 < 0 )
    {
      RaiseException(v14, 1u, 0, 0LL);
      JUMPOUT(0x18008E845LL);
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v60);
    string = 0LL;
    if ( ActivationFactory < 0 )
      goto LABEL_17;
    v59 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v60 + 64LL))(v60, &v59) >= 0 )
    {
      if ( !v59 )
      {
LABEL_17:
        if ( v60 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
        goto LABEL_19;
      }
      v13 = 1;
    }
    if ( v59 )
      (*(void (**)(void))(*(_QWORD *)v59 + 16LL))();
    goto LABEL_17;
  }
LABEL_19:
  if ( (unsigned int)dword_180188330 > 4 )
  {
    v93 = 4LL;
    v54 = v13 != 0;
    v92 = &v54;
    v68[1] = 4;
    v68[0] = ((unsigned int)&unk_180147A39 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v86 = off_180188338;
    v69 = 0LL;
    v87 = *(unsigned __int16 *)off_180188338;
    v89 = &unk_180147A44;
    v91 = 1;
    v88 = 2;
    v90 = 38;
    EtwEventWriteTransfer(qword_180188350, v68, 0LL, 0LL, 3, &v86, (_DWORD)v48);
  }
  if ( v13 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    CSpatialAudioResourceManagerTraceLogger::LogExclusiveListenerRequired(v31, *((unsigned __int8 *)this + 145));
    if ( *((_BYTE *)this + 145) )
    {
      if ( !*((_QWORD *)this + 72) )
      {
        wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576);
        v32 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,>((char *)this + 576);
        v33 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x143,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v32,
            v47);
          if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
          return v33;
        }
      }
    }
    if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  }
LABEL_22:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v16 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
  v49 = 0LL;
  v17 = (__int64 (__fastcall *)(CProcessSubmixProxy *, struct IStreamGroupProxy **))v16[15];
  if ( v17 != CAudioStream::GetStreamGroup )
  {
    v18 = a2;
LABEL_84:
    v34 = v17(v18, (struct IStreamGroupProxy **)&v49);
    v23 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v34,
        v47);
      goto LABEL_52;
    }
    goto LABEL_26;
  }
  v18 = (struct IAudioStreamInfo *)*((_QWORD *)a2 + 7);
  v17 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v18 + 80LL);
  if ( v17 != CProcessSubmixProxy::GetConnectedStreamGroup )
    goto LABEL_84;
  v19 = (_QWORD *)*((_QWORD *)v18 + 24);
  if ( !v19 )
  {
    v49 = 0LL;
    goto LABEL_82;
  }
  v49 = v19;
  (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
LABEL_26:
  v20 = v49;
  if ( !v49 )
  {
LABEL_82:
    v23 = -2005139190;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)0x887C010ALL,
      v47);
LABEL_52:
    if ( v49 )
      (*(void (__fastcall **)(_QWORD *))(*v49 + 16LL))(v49);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v23;
  }
  v48 = 0LL;
  v21 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **))(*v49 + 208LL);
  if ( v21 == CBaseStreamGroupProxy::GetConnectedSaDevice )
  {
    v48 = 0LL;
    v22 = v49[11];
    if ( !v22 )
    {
LABEL_29:
      v23 = -2005139197;
      v24 = 338LL;
LABEL_30:
      v25 = (unsigned int)v23;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)v25,
        v47);
      goto LABEL_50;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v48 = (struct ISaDeviceProxy *)v20[11];
  }
  else
  {
    v35 = v21((CBaseStreamGroupProxy *)v49, &v48);
    v23 = v35;
    if ( v35 < 0 )
    {
      v25 = (unsigned int)v35;
      v24 = 337LL;
      goto LABEL_31;
    }
  }
  if ( !v48 )
    goto LABEL_29;
  v26 = a3 & 0x800000;
  if ( (a3 & 0x800000) == 0 )
  {
    v27 = 0;
    v28 = 0;
    if ( !*((_BYTE *)this + 145) )
    {
LABEL_42:
      if ( (unsigned int)dword_180188330 > 4 )
      {
        v55 = v28 != 0;
        v100 = &v55;
        v101 = 4LL;
        v70[1] = 4;
        v94 = off_180188338;
        v70[0] = ((unsigned int)&unk_180147A39 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v71 = 0LL;
        v95 = *(unsigned __int16 *)off_180188338;
        v97 = &unk_180147A44;
        v99 = 1;
        v96 = 2;
        v98 = 38;
        EtwEventWriteTransfer(qword_180188350, v70, 0LL, 0LL, 3, &v94, (_DWORD)v48);
      }
      if ( v28 )
        v27 = CoGetPSClsid(&GUID_122595e5_20a2_47d3_8604_4a613ff6cca7, &pClsid) >= 0;
      if ( (unsigned int)dword_180188330 > 4 )
      {
        v56 = v27;
        v108 = &v56;
        v109 = 4LL;
        v72[1] = 4;
        v102 = off_180188338;
        v72[0] = ((unsigned int)&unk_180147A10 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v73 = 0LL;
        v103 = *(unsigned __int16 *)off_180188338;
        v105 = &unk_180147A1B;
        v107 = 1;
        v104 = 2;
        v106 = 29;
        EtwEventWriteTransfer(qword_180188350, v72, 0LL, 0LL, 3, &v102, (_DWORD)v48);
      }
      if ( !v27 )
      {
        v23 = 0;
        goto LABEL_50;
      }
      v36 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
      v51 = 0LL;
      v37 = ((__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v36[3])(a2, &v51);
      v23 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x159,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)v37,
          v47);
LABEL_104:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
LABEL_50:
        if ( v48 )
          (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v48 + 16LL))(v48);
        goto LABEL_52;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v51 + 368LL))(v51) )
      {
        v23 = 0;
        goto LABEL_104;
      }
      v50 = 0LL;
      v38 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v48 + 24LL))(v48);
      v39 = Create_SpatialAudioDevicePropertyReader(v38, 0LL, &v50);
      v23 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x160,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)v39,
          v47);
LABEL_103:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v50);
        goto LABEL_104;
      }
      v40 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v50 + 112LL))(v50, &v57);
      v23 = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x163,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)v40,
          v47);
        goto LABEL_103;
      }
      if ( !v57 )
      {
        v23 = 0;
        goto LABEL_103;
      }
      v79 = 0x100000001LL;
      v52 = (struct SPATIAL_STREAM_PROPERTIES *)&v78;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v50);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
      goto LABEL_106;
    }
    v62 = 0LL;
    v77 = 0LL;
    v29 = WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &v76, &v77);
    if ( v29 < 0 )
    {
      RaiseException(v29, 1u, 0, 0LL);
      JUMPOUT(0x18008E990LL);
    }
    if ( (int)RoGetActivationFactory(v77, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v62) >= 0 )
    {
      v77 = 0LL;
      v61 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v62 + 64LL))(v62, &v61) >= 0 )
      {
        if ( !v61 )
          goto LABEL_40;
        v28 = 1;
      }
      if ( v61 )
        (*(void (**)(void))(*(_QWORD *)v61 + 16LL))();
      goto LABEL_40;
    }
    v77 = 0LL;
LABEL_40:
    if ( v62 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    goto LABEL_42;
  }
LABEL_106:
  v64 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(
                                                (char *)this + 152,
                                                v48);
  v41 = v64;
  if ( !v64 )
  {
    v42 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v48, &v64);
    v23 = v42;
    if ( v42 < 0 )
    {
      v25 = (unsigned int)v42;
      v24 = 374LL;
      goto LABEL_31;
    }
    v41 = v64;
    if ( !v64 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x177,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v43);
      __debugbreak();
    }
  }
  v23 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v58, v65, v52, v41);
  if ( v23 < 0 )
  {
    if ( !*((_DWORD *)v41 + 3) && *(_QWORD *)v41 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
    v24 = 385LL;
    goto LABEL_30;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v48);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v26 )
    return 0LL;
  v44 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
  v45 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
          this,
          v44,
          *((_DWORD *)v52 + 2),
          *((_DWORD *)v52 + 3));
  v46 = v45;
  if ( v45 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18B,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v45,
    v47);
  return v46;
}
