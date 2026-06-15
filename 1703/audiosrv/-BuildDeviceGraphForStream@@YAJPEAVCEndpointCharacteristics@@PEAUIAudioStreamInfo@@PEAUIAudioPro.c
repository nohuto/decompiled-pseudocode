/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008C70
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180004470 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007920 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007F30 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     TemplateEventDescriptor @ 0x18000B310 (TemplateEventDescriptor.c)
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18002ABF0 (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEB.c)
 *     wil::scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___ @ 0x18002EE6C (wil--scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___.c)
 *     wil::ScopeExit__lambda_46818ec810044a4765cde12cca0092dd___ @ 0x18002F0EC (wil--ScopeExit__lambda_46818ec810044a4765cde12cca0092dd___.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamInfo@@@Z @ 0x18007C92C (--4-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamI.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACD5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall BuildDeviceGraphForStream(
        __int64 a1,
        struct IAudioStreamInfo *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int128 *a8,
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
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v21; // r15
  int v22; // ecx
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v23; // r13
  int v24; // ebx
  int v25; // eax
  int v26; // edx
  int v27; // r14d
  struct StreamGroupParams *v28; // rdi
  int v29; // eax
  __int64 v30; // rcx
  struct ProcessSubmixParams *v31; // rsi
  unsigned int v32; // eax
  unsigned int v33; // r8d
  CProcessSubmixProxy *v34; // rbx
  struct IStreamGroupProxy **v35; // rdx
  __int64 (__fastcall *v36)(CDeviceGraphManager *, struct StreamGroupParams *, int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct IStreamGroupProxy **); // rax
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v37; // r9
  unsigned int v38; // r15d
  int StreamGroup; // eax
  __int64 v40; // rcx
  CProcessSubmixProxy *v41; // r10
  struct IProcessSubmixProxy **v42; // r9
  CBaseStreamGroupProxy *v43; // r10
  __int64 (__fastcall *v44)(CBaseStreamGroupProxy *__hidden, struct ProcessSubmixParams *, unsigned int, struct IProcessSubmixProxy **); // rax
  int ProcessSubmix; // eax
  __int64 v46; // rcx
  CProcessSubmixProxy *v47; // r14
  CProcessSubmixProxy *v48; // rcx
  __int64 (__fastcall *v49)(unsigned __int64, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *); // r10
  int Stream; // eax
  __int64 v51; // rcx
  void *v52; // rcx
  struct IStreamGroupProxy **v54; // [rsp+28h] [rbp-A9h]
  int v55; // [rsp+28h] [rbp-A9h]
  unsigned int v56; // [rsp+28h] [rbp-A9h]
  int v57; // [rsp+28h] [rbp-A9h]
  int v58; // [rsp+28h] [rbp-A9h]
  CProcessSubmixProxy *v59; // [rsp+68h] [rbp-69h] BYREF
  CProcessSubmixProxy *v60; // [rsp+70h] [rbp-61h] BYREF
  char v61; // [rsp+78h] [rbp-59h]
  __int128 v62; // [rsp+88h] [rbp-49h] BYREF
  struct StreamGroupParams *v63; // [rsp+98h] [rbp-39h] BYREF
  __int64 *v64; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-29h]
  char v66; // [rsp+B0h] [rbp-21h]
  struct ProcessSubmixParams *v67[2]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+2Fh]

  v68 = -2LL;
  if ( (a5 & 0x1000004) != 0 || (a5 & 0xFFF8) != 0 || a6 == 1 && a5 < 0 || (a5 & 0x88000000) == 0x8000000 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL,
      (int)v54);
    return 2147942487LL;
  }
  v63 = 0LL;
  v21 = a11;
  if ( a11 )
    v22 = *((_DWORD *)a11 + 13);
  else
    v22 = 0;
  *(_OWORD *)v67 = *a9;
  v62 = *a8;
  v23 = a10;
  v24 = a13;
  v25 = DeriveStreamGroupParametersForStream(
          a1,
          a7,
          a13,
          *((_QWORD *)a10 + 4),
          v54,
          (__int128 *)v67,
          a16,
          (a5 & 1) != 0,
          (unsigned __int16 *)Src,
          v22,
          (LPVOID **)&v63);
  v27 = v25;
  v28 = v63;
  if ( v25 >= 0 )
  {
    v67[0] = 0LL;
    v29 = DeriveProcessSubmixParametersForStream(a3, v26, a4, v24, (__int64)v63, (__int64)v67);
    v27 = v29;
    v31 = v67[0];
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x437,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v29,
        v56);
    }
    else
    {
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        TemplateEventDescriptor(v30, &AudioResourceManager_StreamSettings_Derived);
      v32 = RpcImpersonateClient(0LL);
      if ( !v32 )
      {
        wil::ScopeExit__lambda_46818ec810044a4765cde12cca0092dd___(&a5);
        v34 = 0LL;
        *(_QWORD *)&v62 = 0LL;
        if ( a17 )
        {
          wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=(&v62);
          v34 = (CProcessSubmixProxy *)v62;
LABEL_37:
          *((_QWORD *)v23 + 13) = *(_QWORD *)v28;
          v59 = v23;
          wil::scope_exit__lambda_cbe9e4feebe37314cade45d366e33fc3___(&v60, &v59);
          v49 = *(__int64 (__fastcall **)(unsigned __int64, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v34 + 24LL);
          v58 = (int)a18;
          if ( v49 == CProcessSubmixProxy::CreateStream )
            Stream = CProcessSubmixProxy::CreateStream((unsigned __int64)v34, a2, v23, a14, a18);
          else
            Stream = ((__int64 (__fastcall *)(CProcessSubmixProxy *, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *))v49)(
                       v34,
                       a2,
                       v23,
                       a14);
          v27 = Stream;
          if ( Stream < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x45E,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)Stream,
              v58);
          }
          else
          {
            if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
              TemplateEventDescriptor(v51, &AudioResourceManager_Stream_Created);
            v27 = 0;
          }
          if ( v61 )
            *((_QWORD *)v60 + 13) = 0LL;
          goto LABEL_45;
        }
        v60 = 0LL;
        v35 = (struct IStreamGroupProxy **)(wil::out_param<std::unique_ptr<SaDeviceParams>>(
                                              (__int64)&v64,
                                              (__int64)&v60)
                                          + 8);
        v36 = *(__int64 (__fastcall **)(CDeviceGraphManager *, struct StreamGroupParams *, int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct IStreamGroupProxy **))(*(_QWORD *)g_DeviceGraphManager + 56LL);
        v57 = (int)v35;
        v37 = v21;
        v38 = a15;
        if ( v36 == CDeviceGraphManager::GetStreamGroup )
          StreamGroup = CDeviceGraphManager::GetStreamGroup(g_DeviceGraphManager, v28, a15, v37, v35);
        else
          StreamGroup = ((__int64 (__fastcall *)(CDeviceGraphManager *, struct StreamGroupParams *, _QWORD, struct AUDIO_DEVICE_MODE_DESCRIPTOR *))v36)(
                          g_DeviceGraphManager,
                          v28,
                          a15,
                          v37);
        v27 = StreamGroup;
        if ( v66 )
        {
          v40 = *v64;
          *v64 = v65;
          if ( v40 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        }
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x444,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v27,
            v57);
        }
        else
        {
          v41 = v60;
          v34 = v60;
          *(_QWORD *)&v62 = v60;
          if ( v60 )
          {
            (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v60 + 8LL))(v60);
            v41 = v60;
          }
          if ( !v31 )
            goto LABEL_35;
          v59 = 0LL;
          v42 = (struct IProcessSubmixProxy **)(wil::out_param<std::unique_ptr<SaDeviceParams>>(
                                                  (__int64)&v64,
                                                  (__int64)&v59)
                                              + 8);
          v44 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ProcessSubmixParams *, unsigned int, struct IProcessSubmixProxy **))(*(_QWORD *)v43 + 320LL);
          if ( v44 == CBaseStreamGroupProxy::GetProcessSubmix )
            ProcessSubmix = CBaseStreamGroupProxy::GetProcessSubmix(v43, v31, v38, v42);
          else
            ProcessSubmix = v44(v43, v31, v38, v42);
          v27 = ProcessSubmix;
          if ( v66 )
          {
            v46 = *v64;
            *v64 = v65;
            if ( v46 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
          }
          if ( v27 >= 0 )
          {
            v47 = v34;
            v48 = v59;
            v34 = v59;
            *(_QWORD *)&v62 = v59;
            if ( v59 )
            {
              (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v59 + 8LL))(v59);
              v48 = v59;
            }
            if ( v47 )
            {
              (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v47 + 16LL))(v47);
              v48 = v59;
            }
            if ( v48 )
              (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v48 + 16LL))(v48);
            v41 = v60;
LABEL_35:
            if ( v41 )
              (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v41 + 16LL))(v41);
            goto LABEL_37;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x44D,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v27,
            v57);
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v59);
        }
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v60);
LABEL_45:
        if ( v34 )
          (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v34 + 16LL))(v34);
        if ( BYTE1(a5) )
          RpcRevertToSelf();
        goto LABEL_49;
      }
      v27 = wil::details::in1diag3::Return_Win32(retaddr, (void *)0x43C, v33, (const char *)v32, v56);
    }
LABEL_49:
    if ( v31 )
    {
      v52 = (void *)*((_QWORD *)v31 + 1);
      if ( v52 )
        CoTaskMemFree(v52);
      operator delete(v31, (const struct std::nothrow_t *)0x20);
    }
    goto LABEL_53;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x433,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v25,
    v55);
LABEL_53:
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
