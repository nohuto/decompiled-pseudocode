/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B070
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 * Callees:
 *     McTemplateU0 @ 0x1800021C0 (McTemplateU0.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180019D70 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180019FB0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CEE0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18001E380 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180097DA8 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall BuildDeviceGraphForStream(
        __int64 a1,
        struct IAudioStreamInfo *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        CProcessSubmixProxy *a8,
        _OWORD *a9,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a10,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a11,
        void *Src,
        int a13,
        struct IAudioGraphCallback *a14,
        unsigned int a15,
        char a16,
        __int64 a17,
        struct SYSTEM_AUDIO_STREAM *a18)
{
  struct ProcessSubmixParams *v19; // rsi
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v20; // r13
  int v21; // edx
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v22; // r12
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // r14d
  struct StreamGroupParams *v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rsi
  bool v30; // al
  unsigned int v31; // eax
  CProcessSubmixProxy *v32; // rbx
  unsigned int v33; // r15d
  __int64 (__fastcall *v34)(CDeviceGraphManager *, const unsigned __int16 **, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct IStreamGroupProxy **); // rax
  int StreamGroup; // eax
  CProcessSubmixProxy *v36; // rcx
  CProcessSubmixProxy *v37; // rcx
  __int64 (__fastcall *v38)(CBaseStreamGroupProxy *__hidden, struct ProcessSubmixParams *, unsigned int, struct IProcessSubmixProxy **); // rax
  int ProcessSubmix; // eax
  CProcessSubmixProxy **v40; // rcx
  CProcessSubmixProxy *v41; // r14
  CProcessSubmixProxy **v42; // rcx
  int (*v43)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int, struct SYSTEM_AUDIO_STREAM *); // rax
  int Stream; // eax
  __int64 v45; // rcx
  struct IStreamGroupProxy **v47; // [rsp+28h] [rbp-99h]
  unsigned int v48; // [rsp+28h] [rbp-99h]
  struct IStreamGroupProxy **v49; // [rsp+28h] [rbp-99h]
  int v50; // [rsp+28h] [rbp-99h]
  int v51; // [rsp+28h] [rbp-99h]
  CProcessSubmixProxy **v52; // [rsp+68h] [rbp-59h] BYREF
  struct IStreamGroupProxy *v53; // [rsp+70h] [rbp-51h] BYREF
  char v54; // [rsp+78h] [rbp-49h]
  CProcessSubmixProxy *v55; // [rsp+80h] [rbp-41h] BYREF
  struct StreamGroupParams *v56; // [rsp+88h] [rbp-39h] BYREF
  CProcessSubmixProxy ***v57; // [rsp+90h] [rbp-31h]
  struct IProcessSubmixProxy *v58; // [rsp+98h] [rbp-29h] BYREF
  char v59; // [rsp+A0h] [rbp-21h]
  __int64 v60[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+3Fh]

  v61 = -2LL;
  if ( (a5 & 0x1000004) != 0 || (a5 & 0xFFF8) != 0 || a6 == 1 && a5 < 0 || (a5 & 0x88000000) == 0x8000000 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x453,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL,
      (int)v47);
    return 2147942487LL;
  }
  v19 = 0LL;
  v56 = 0LL;
  v20 = a11;
  if ( a11 )
    v21 = *((_DWORD *)a11 + 13);
  else
    v21 = 0;
  *(_OWORD *)v60 = *a9;
  v22 = a10;
  v23 = a13;
  v24 = DeriveStreamGroupParametersForStream(
          a1,
          a7,
          a13,
          *((_QWORD *)a10 + 4),
          v47,
          (__int128 *)v60,
          a16,
          (a5 & 1) != 0,
          (unsigned __int16 *)Src,
          v21,
          (LPVOID **)&v56);
  v26 = v24;
  v27 = v56;
  if ( v24 >= 0 )
  {
    v60[0] = 0LL;
    if ( !v23 && !*((_BYTE *)v56 + 48) )
    {
      v28 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v28 )
      {
        v28[1] = 0LL;
        v28[2] = 0LL;
        *v28 = 0LL;
      }
      else
      {
        v28 = 0LL;
      }
      if ( !v28 )
      {
        v26 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x393,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          v48);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          v51);
        goto LABEL_59;
      }
      v29 = *v28;
      *v28 = a3;
      if ( a3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v30 = a4 != 3 && a4 != 8;
      *((_BYTE *)v28 + 8) = v30;
      v28[2] = v27;
      v19 = (struct ProcessSubmixParams *)v28;
      v60[0] = (__int64)v28;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0(v25, (__int64)&AudioResourceManager_StreamSettings_Derived);
    v31 = RpcImpersonateClient(0LL);
    if ( !v31 )
    {
      v32 = 0LL;
      v55 = 0LL;
      v33 = a15;
      if ( a17 )
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(&v55);
        v32 = v55;
LABEL_49:
        *((_QWORD *)v22 + 13) = *(_QWORD *)v27;
        v52 = (CProcessSubmixProxy **)v22;
        LOBYTE(v53) = 1;
        v43 = *(int (**)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v32 + 24LL);
        if ( v43 == CProcessSubmixProxy::CreateStream )
        {
          Stream = CProcessSubmixProxy::CreateStream(v32, a2, v22, a14, v33, a18);
        }
        else
        {
          v50 = v33;
          Stream = ((__int64 (__fastcall *)(CProcessSubmixProxy *, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *))v43)(
                     v32,
                     a2,
                     v22,
                     a14);
        }
        v26 = Stream;
        if ( Stream < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x486,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)Stream,
            v50);
        }
        else
        {
          if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
            McTemplateU0(v45, (__int64)&AudioResourceManager_Stream_Created);
          v26 = 0;
        }
        *((_QWORD *)v22 + 13) = 0LL;
        goto LABEL_56;
      }
      a8 = 0LL;
      v52 = &a8;
      v53 = 0LL;
      v54 = 1;
      v34 = *(__int64 (__fastcall **)(CDeviceGraphManager *, const unsigned __int16 **, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct IStreamGroupProxy **))(*(_QWORD *)g_DeviceGraphManager + 56LL);
      if ( v34 == CDeviceGraphManager::GetStreamGroup )
      {
        StreamGroup = CDeviceGraphManager::GetStreamGroup(
                        g_DeviceGraphManager,
                        (const unsigned __int16 **)v27,
                        a15,
                        v20,
                        &v53);
      }
      else
      {
        v49 = &v53;
        StreamGroup = ((__int64 (__fastcall *)(CDeviceGraphManager *, struct StreamGroupParams *, _QWORD, struct AUDIO_DEVICE_MODE_DESCRIPTOR *))v34)(
                        g_DeviceGraphManager,
                        v27,
                        a15,
                        v20);
      }
      v26 = StreamGroup;
      if ( v54 )
      {
        v36 = *v52;
        *v52 = v53;
        if ( v36 )
          (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v36 + 16LL))(v36);
      }
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x469,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v26,
          (int)v49);
      }
      else
      {
        v37 = a8;
        v32 = a8;
        v55 = a8;
        if ( a8 )
        {
          (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)a8 + 8LL))(a8);
          v37 = a8;
        }
        if ( !v19 )
          goto LABEL_47;
        v52 = 0LL;
        v57 = &v52;
        v58 = 0LL;
        v59 = 1;
        v38 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ProcessSubmixParams *, unsigned int, struct IProcessSubmixProxy **))(*(_QWORD *)v37 + 312LL);
        if ( v38 == CBaseStreamGroupProxy::GetProcessSubmix )
          ProcessSubmix = CBaseStreamGroupProxy::GetProcessSubmix(v37, v19, v33, &v58);
        else
          ProcessSubmix = v38(v37, v19, v33, &v58);
        v26 = ProcessSubmix;
        if ( v59 )
        {
          v40 = *v57;
          *v57 = (CProcessSubmixProxy **)v58;
          if ( v40 )
            (*((void (__fastcall **)(CProcessSubmixProxy **))*v40 + 2))(v40);
        }
        if ( v26 >= 0 )
        {
          v41 = v32;
          v42 = v52;
          v32 = (CProcessSubmixProxy *)v52;
          v55 = (CProcessSubmixProxy *)v52;
          if ( v52 )
          {
            (*((void (__fastcall **)(CProcessSubmixProxy **))*v52 + 1))(v52);
            v42 = v52;
          }
          if ( v41 )
          {
            (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v41 + 16LL))(v41);
            v42 = v52;
          }
          *((_DWORD *)v22 + 33) = 1;
          if ( v42 )
            (*((void (__fastcall **)(CProcessSubmixProxy **))*v42 + 2))(v42);
          v37 = a8;
LABEL_47:
          if ( v37 )
            (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v37 + 16LL))(v37);
          goto LABEL_49;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x472,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v26,
          (int)v49);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&a8);
LABEL_56:
      if ( v32 )
        (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v32 + 16LL))(v32);
      RpcRevertToSelf();
      goto LABEL_59;
    }
    v26 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x461,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v31,
            v48);
LABEL_59:
    if ( v19 )
    {
      if ( *(_QWORD *)v19 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 16LL))(*(_QWORD *)v19);
      operator delete(v19, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_63;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x458,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v24,
    v48);
LABEL_63:
  if ( v27 )
  {
    operator delete(*((void **)v27 + 7), (const struct std::nothrow_t *)0x10);
    *((_QWORD *)v27 + 7) = 0LL;
    CoTaskMemFree(*((LPVOID *)v27 + 2));
    *((_QWORD *)v27 + 2) = 0LL;
    CoTaskMemFree(*(LPVOID *)v27);
    *(_QWORD *)v27 = 0LL;
    operator delete(v27, (const struct std::nothrow_t *)0x40);
  }
  return (unsigned int)v26;
}
