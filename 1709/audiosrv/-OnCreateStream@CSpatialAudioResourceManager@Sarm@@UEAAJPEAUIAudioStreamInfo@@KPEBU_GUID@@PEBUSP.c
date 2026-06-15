/*
 * XREFs of ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18000D750 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18001B6B0 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18002EA94 (-IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18002EEE4 (-IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008D084 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x1800BEC20 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800BFD4C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x1800C01C0 (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800C0DE8 (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1800C1150 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C1BE4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1800C236C (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C334C (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x1800D3704 (Create_SpatialAudioDevicePropertyReader.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnCreateStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  const char *v9; // r9
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CAudioStream *, struct IStreamGroupProxy **); // rax
  int StreamGroup; // eax
  unsigned int v13; // ebx
  __int64 (__fastcall *v14)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **); // rax
  int ConnectedSaDevice; // eax
  int v16; // r12d
  CSpatialAudioResourceManagerTraceLogger *v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  struct Sarm::CEndpointResourcePool *v29; // rdi
  int v30; // eax
  const char *v31; // r9
  __int64 v32; // rax
  int v33; // eax
  int v34; // [rsp+20h] [rbp-81h]
  struct ISaDeviceProxy *v35; // [rsp+30h] [rbp-71h] BYREF
  struct Sarm::CEndpointResourcePool *v36; // [rsp+38h] [rbp-69h] BYREF
  CBaseStreamGroupProxy *v37; // [rsp+40h] [rbp-61h] BYREF
  __int64 v38; // [rsp+48h] [rbp-59h] BYREF
  int v39; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-4Dh]
  struct SPATIAL_STREAM_PROPERTIES *v41; // [rsp+58h] [rbp-49h]
  struct _GUID *v42; // [rsp+60h] [rbp-41h]
  _DWORD v43[14]; // [rsp+68h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v41 = a5;
  v42 = a4;
  v40 = a3;
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnCreateStream", 0x12Cu);
  memset(v43, 0, sizeof(v43));
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x130,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v9);
    __debugbreak();
  }
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x131,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v9);
    __debugbreak();
  }
  if ( !a5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x132,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v9);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 72) && Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(this) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    CSpatialAudioResourceManagerTraceLogger::LogExclusiveListenerRequired(v18, *((unsigned __int8 *)this + 145));
    if ( *((_BYTE *)this + 145) )
    {
      if ( !*((_QWORD *)this + 72) )
      {
        wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576);
        v19 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,>((char *)this + 576);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x13E,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v19,
            v34);
          if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
          return v20;
        }
      }
    }
    if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v10 = *(_QWORD *)a2;
  v37 = 0LL;
  v11 = *(__int64 (__fastcall **)(CAudioStream *, struct IStreamGroupProxy **))(v10 + 120);
  if ( v11 == CAudioStream::GetStreamGroup )
    StreamGroup = CAudioStream::GetStreamGroup(a2, &v37);
  else
    StreamGroup = v11(a2, &v37);
  v13 = StreamGroup;
  if ( StreamGroup < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x148,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)StreamGroup,
      v34);
LABEL_19:
    if ( v37 )
      (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v37 + 16LL))(v37);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return v13;
  }
  if ( !v37 )
  {
    v13 = -2005139190;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)0x887C010ALL,
      v34);
    goto LABEL_19;
  }
  v35 = 0LL;
  v14 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **))(*(_QWORD *)v37 + 208LL);
  if ( v14 == CBaseStreamGroupProxy::GetConnectedSaDevice )
    ConnectedSaDevice = CBaseStreamGroupProxy::GetConnectedSaDevice(v37, &v35);
  else
    ConnectedSaDevice = v14(v37, &v35);
  v13 = ConnectedSaDevice;
  if ( ConnectedSaDevice < 0 )
  {
    v21 = (unsigned int)ConnectedSaDevice;
    v22 = 332LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v22,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v21,
      v34);
    goto LABEL_17;
  }
  if ( !v35 )
  {
    v13 = -2005139197;
    v23 = 333LL;
LABEL_66:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v13,
      v34);
LABEL_17:
    if ( v35 )
      (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v35 + 16LL))(v35);
    goto LABEL_19;
  }
  v16 = a3 & 0x800000;
  if ( !v16 )
  {
    if ( !Sarm::CSpatialAudioResourceManager::IsAppPinningEnabled(this) )
    {
      v13 = 0;
      goto LABEL_17;
    }
    v24 = *(_QWORD *)a2;
    v36 = 0LL;
    v25 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct Sarm::CEndpointResourcePool **))(v24 + 24))(
            a2,
            &v36);
    v13 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x154,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v25,
        v34);
LABEL_53:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
      goto LABEL_17;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct Sarm::CEndpointResourcePool *))(*(_QWORD *)v36 + 368LL))(v36) )
    {
      v13 = 0;
      goto LABEL_53;
    }
    v38 = 0LL;
    v26 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v35 + 24LL))(v35);
    v27 = Create_SpatialAudioDevicePropertyReader(v26, 0LL, &v38);
    v13 = v27;
    if ( v27 < 0 )
    {
      v28 = 347LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v28,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v27,
        v34);
LABEL_52:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
      goto LABEL_53;
    }
    v27 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 112LL))(v38, &v39);
    v13 = v27;
    if ( v27 < 0 )
    {
      v28 = 350LL;
      goto LABEL_49;
    }
    if ( !v39 )
    {
      v13 = 0;
      goto LABEL_52;
    }
    v43[2] = 1;
    v43[3] = 1;
    v41 = (struct SPATIAL_STREAM_PROPERTIES *)v43;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
  }
  v36 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find((char *)this + 152);
  v29 = v36;
  if ( !v36 )
  {
    v30 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v35, &v36);
    v13 = v30;
    if ( v30 < 0 )
    {
      v21 = (unsigned int)v30;
      v22 = 369LL;
      goto LABEL_58;
    }
    v29 = v36;
    if ( !v36 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x172,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v31);
      __debugbreak();
    }
  }
  v13 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v40, v42, v41, v29);
  if ( (v13 & 0x80000000) != 0 )
  {
    if ( !*((_DWORD *)v29 + 3) && *(_QWORD *)v29 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
    v23 = 380LL;
    goto LABEL_66;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !v16 )
  {
    v32 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v33 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
            this,
            v32,
            *((_DWORD *)v41 + 2),
            *((_DWORD *)v41 + 3));
    v13 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x186,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v33,
        v34);
      return v13;
    }
  }
  return 0LL;
}
