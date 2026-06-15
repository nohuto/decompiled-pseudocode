/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamInfo@@@Z @ 0x180007950 (--4-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamI.c)
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18000799C (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEB.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180007C00 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000D8A0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180012310 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18007581C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     McTemplateU0 @ 0x1800906F8 (McTemplateU0.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall BuildDeviceGraphForStream(
        int a1,
        struct IAudioStreamInfo *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        CBaseStreamGroupProxy *a8,
        _OWORD *a9,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a10,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a11,
        struct tWAVEFORMATEX *Src,
        int a13,
        struct IAudioGraphCallback *a14,
        unsigned int a15,
        char a16,
        __int64 a17,
        struct SYSTEM_AUDIO_STREAM *a18)
{
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v22; // r15
  int v23; // ecx
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v24; // r13
  int v25; // eax
  int v26; // edx
  int v27; // r14d
  struct StreamGroupParams *v28; // rdi
  int v29; // eax
  __int64 v30; // rcx
  struct ProcessSubmixParams *v31; // rsi
  unsigned int v32; // eax
  CProcessSubmixProxy *v33; // rbx
  int (*v34)(CDeviceGraphManager *__hidden, struct StreamGroupParams *, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct IStreamGroupProxy **); // rax
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v35; // r9
  unsigned int v36; // r15d
  int StreamGroup; // eax
  CBaseStreamGroupProxy *v38; // rcx
  __int64 (__fastcall *v39)(CBaseStreamGroupProxy *__hidden, struct ProcessSubmixParams *, unsigned int, struct IProcessSubmixProxy **); // rax
  int ProcessSubmix; // eax
  CBaseStreamGroupProxy **v41; // rcx
  int (*v42)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *); // r10
  int Stream; // eax
  __int64 v44; // rcx
  struct IStreamGroupProxy **v46; // [rsp+28h] [rbp-99h]
  int v47; // [rsp+28h] [rbp-99h]
  unsigned int v48; // [rsp+28h] [rbp-99h]
  struct IStreamGroupProxy **v49; // [rsp+28h] [rbp-99h]
  int v50; // [rsp+28h] [rbp-99h]
  CProcessSubmixProxy *v51; // [rsp+68h] [rbp-59h] BYREF
  CBaseStreamGroupProxy **v52; // [rsp+70h] [rbp-51h] BYREF
  struct IStreamGroupProxy *v53; // [rsp+78h] [rbp-49h] BYREF
  char v54; // [rsp+80h] [rbp-41h]
  struct StreamGroupParams *v55; // [rsp+88h] [rbp-39h] BYREF
  CBaseStreamGroupProxy ***v56; // [rsp+90h] [rbp-31h]
  struct IProcessSubmixProxy *v57; // [rsp+98h] [rbp-29h] BYREF
  char v58; // [rsp+A0h] [rbp-21h]
  struct ProcessSubmixParams *v59[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+2Fh]

  v60 = -2LL;
  if ( (a5 & 0x1000004) != 0 || (a5 & 0xFFF8) != 0 || a6 == 1 && a5 < 0 || (a5 & 0x8000000) != 0 && a5 >= 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x435,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL,
      (int)v46);
    return 2147942487LL;
  }
  v55 = 0LL;
  v22 = a11;
  if ( a11 )
    v23 = *((_DWORD *)a11 + 13);
  else
    v23 = 0;
  *(_OWORD *)v59 = *a9;
  v24 = a10;
  v25 = DeriveStreamGroupParametersForStream(
          a1,
          a7,
          a13,
          *((_QWORD *)a10 + 4),
          v46,
          (__int64)v59,
          a16,
          a5 & 1,
          Src,
          v23,
          (__int64)&v55);
  v27 = v25;
  v28 = v55;
  if ( v25 >= 0 )
  {
    v59[0] = 0LL;
    v29 = DeriveProcessSubmixParametersForStream(a3, v26, a4, a13, (__int64)v55, (__int64)v59);
    v27 = v29;
    v31 = v59[0];
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x43E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v29,
        v48);
    }
    else
    {
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0(v30, &AudioResourceManager_StreamSettings_Derived);
      v32 = RpcImpersonateClient(0LL);
      if ( !v32 )
      {
        v33 = 0LL;
        v51 = 0LL;
        if ( a17 )
        {
          wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=(&v51);
LABEL_30:
          *((_QWORD *)v24 + 13) = *(_QWORD *)v28;
          v52 = (CBaseStreamGroupProxy **)v24;
          LOBYTE(v53) = 1;
          v33 = v51;
          v42 = *(int (**)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v51 + 24LL);
          if ( v42 == CProcessSubmixProxy::CreateStream )
            Stream = CProcessSubmixProxy::CreateStream(v51, a2, v24, a14, a18);
          else
            Stream = ((__int64 (__fastcall *)(CProcessSubmixProxy *, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))v42)(
                       v51,
                       a2,
                       v24,
                       a14,
                       a18);
          v27 = Stream;
          if ( Stream < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x468,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)Stream,
              v50);
          }
          else
          {
            if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
              McTemplateU0(v44, &AudioResourceManager_Stream_Created);
            v27 = 0;
          }
          *((_QWORD *)v24 + 13) = 0LL;
          goto LABEL_37;
        }
        a8 = 0LL;
        v52 = &a8;
        v53 = 0LL;
        v54 = 1;
        v34 = *(int (**)(CDeviceGraphManager *__hidden, struct StreamGroupParams *, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct IStreamGroupProxy **))(*(_QWORD *)g_DeviceGraphManager + 56LL);
        v35 = v22;
        v36 = a15;
        if ( v34 == CDeviceGraphManager::GetStreamGroup )
        {
          StreamGroup = CDeviceGraphManager::GetStreamGroup(g_DeviceGraphManager, v28, a15, v35, &v53);
        }
        else
        {
          v49 = &v53;
          StreamGroup = ((__int64 (__fastcall *)(CDeviceGraphManager *, struct StreamGroupParams *, _QWORD, struct AUDIO_DEVICE_MODE_DESCRIPTOR *))v34)(
                          g_DeviceGraphManager,
                          v28,
                          a15,
                          v35);
        }
        v27 = StreamGroup;
        if ( v54 )
        {
          v38 = *v52;
          *v52 = v53;
          if ( v38 )
            (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v38 + 16LL))(v38);
        }
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x44B,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v27,
            (int)v49);
        }
        else
        {
          wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=(&v51);
          if ( !v31 )
          {
LABEL_28:
            if ( a8 )
              (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a8 + 16LL))(a8);
            goto LABEL_30;
          }
          v52 = 0LL;
          v56 = &v52;
          v57 = 0LL;
          v58 = 1;
          v39 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ProcessSubmixParams *, unsigned int, struct IProcessSubmixProxy **))(*(_QWORD *)a8 + 312LL);
          if ( v39 == CBaseStreamGroupProxy::GetProcessSubmix )
            ProcessSubmix = CBaseStreamGroupProxy::GetProcessSubmix(a8, v31, v36, &v57);
          else
            ProcessSubmix = v39(a8, v31, v36, &v57);
          v27 = ProcessSubmix;
          if ( v58 )
          {
            v41 = *v56;
            *v56 = (CBaseStreamGroupProxy **)v57;
            if ( v41 )
              (*((void (__fastcall **)(CBaseStreamGroupProxy **))*v41 + 2))(v41);
          }
          if ( v27 >= 0 )
          {
            wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=(&v51);
            *((_DWORD *)v24 + 33) = 1;
            if ( v52 )
              (*((void (__fastcall **)(CBaseStreamGroupProxy **))*v52 + 2))(v52);
            goto LABEL_28;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x454,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v27,
            (int)v49);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
          v33 = v51;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&a8);
LABEL_37:
        if ( v33 )
          (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v33 + 16LL))(v33);
        RpcRevertToSelf();
        goto LABEL_40;
      }
      v27 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x443,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v32,
              v48);
    }
LABEL_40:
    if ( v31 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v31);
      operator delete(v31, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x43A,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v25,
    v47);
LABEL_42:
  if ( v28 )
  {
    operator delete(*((void **)v28 + 7), (const struct std::nothrow_t *)0x10);
    *((_QWORD *)v28 + 7) = 0LL;
    CoTaskMemFree(*((LPVOID *)v28 + 2));
    *((_QWORD *)v28 + 2) = 0LL;
    CoTaskMemFree(*(LPVOID *)v28);
    *(_QWORD *)v28 = 0LL;
    operator delete(v28, (const struct std::nothrow_t *)0x40);
  }
  return (unsigned int)v27;
}
