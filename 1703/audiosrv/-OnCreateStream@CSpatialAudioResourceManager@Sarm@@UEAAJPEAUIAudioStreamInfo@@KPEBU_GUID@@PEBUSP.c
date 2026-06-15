/*
 * XREFs of ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002B790
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800A1B70 (-reset@-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AD6C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800C248C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x1800C2854 (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C3EF8 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1800C4644 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnCreateStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        const struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  struct Sarm::CEndpointResourcePool *v17; // rdi
  const char *v18; // r9
  int v19; // [rsp+20h] [rbp-A1h]
  struct ISaDeviceProxy *v20; // [rsp+30h] [rbp-91h] BYREF
  int v21; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-81h]
  __int64 v23; // [rsp+48h] [rbp-79h] BYREF
  struct Sarm::CEndpointResourcePool *v24; // [rsp+50h] [rbp-71h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-69h] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v27; // [rsp+68h] [rbp-59h]
  void *v28; // [rsp+70h] [rbp-51h]
  int v29; // [rsp+78h] [rbp-49h]
  int v30; // [rsp+7Ch] [rbp-45h]
  void *v31; // [rsp+80h] [rbp-41h]
  int v32; // [rsp+88h] [rbp-39h]
  int v33; // [rsp+8Ch] [rbp-35h]
  const char *v34; // [rsp+90h] [rbp-31h]
  int v35; // [rsp+98h] [rbp-29h]
  int v36; // [rsp+9Ch] [rbp-25h]
  int *v37; // [rsp+A0h] [rbp-21h]
  int v38; // [rsp+A8h] [rbp-19h]
  int v39; // [rsp+ACh] [rbp-15h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v22 = a3;
  v21 = 245;
  if ( (unsigned int)dword_18012A220 > 5 )
  {
    v36 = 0;
    v39 = 0;
    v34 = "Sarm::CSpatialAudioResourceManager::OnCreateStream";
    v37 = &v21;
    v35 = 51;
    v38 = 4;
    v27 = 0LL;
    v26[1] = 5;
    v28 = off_18012A228;
    v26[0] = ((unsigned int)&unk_1800FAFA8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v29 = *(unsigned __int16 *)off_18012A228;
    v31 = &unk_1800FAFB3;
    v19 = 4;
    v30 = 2;
    v32 = 21;
    v33 = 1;
    EtwEventWriteTransfer(qword_18012A240, v26, 0LL, 0LL);
  }
  if ( (a3 & 0x800000) == 0 )
    return 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFC,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !a5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFD,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 64, (__int64)&lpCriticalSection);
  v10 = *(_QWORD *)a2;
  v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v10 + 112))(a2, &v23);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = v23;
    if ( !v23 )
    {
      v12 = -2005139190;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010ALL,
        v19);
      goto LABEL_33;
    }
    v20 = 0LL;
    wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v20);
    v14 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v13 + 208LL))(v13, &v20);
    v12 = v14;
    if ( v14 < 0 )
    {
      v15 = 263LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v14,
        v19);
LABEL_32:
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v20);
      goto LABEL_33;
    }
    if ( v20 )
    {
      v24 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find((char *)this + 112);
      v17 = v24;
      if ( !v24 )
      {
        v14 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v20, &v24);
        v12 = v14;
        if ( v14 < 0 )
        {
          v15 = 270LL;
          goto LABEL_22;
        }
        v17 = v24;
        if ( !v24 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x10F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            v18);
          __debugbreak();
        }
      }
      v12 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v22, a4, a5, v17);
      if ( v12 >= 0 )
      {
        v12 = 0;
        goto LABEL_32;
      }
      if ( !*((_DWORD *)v17 + 3) && *(_QWORD *)v17 )
        ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 112);
      v16 = 281LL;
    }
    else
    {
      v12 = -2005139197;
      v16 = 264LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v12,
      v19);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x103,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v11,
    v19);
LABEL_33:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v23);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v12;
}
