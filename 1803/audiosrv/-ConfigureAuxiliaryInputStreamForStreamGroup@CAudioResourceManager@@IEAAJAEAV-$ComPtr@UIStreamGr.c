/*
 * XREFs of ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800CFD24
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800D3244 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B2F68 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     _lambda_1a19eda420d26f754031790a40bd90be_::operator() @ 0x1800CF4B4 (_lambda_1a19eda420d26f754031790a40bd90be_--operator().c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
        CAudioResourceManager *this,
        _QWORD *a2,
        const unsigned __int16 *a3)
{
  int AudioSessionManagerProvider; // eax
  int v7; // ebx
  char v8; // di
  __int64 v9; // rcx
  int InternalLoopbackStream; // eax
  int v11; // ebx
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-69h] BYREF
  struct CAudioSessionManagerProvider *v15; // [rsp+30h] [rbp-61h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-59h] BYREF
  __int64 v17; // [rsp+40h] [rbp-51h] BYREF
  char v18; // [rsp+48h] [rbp-49h]
  __int64 v19; // [rsp+50h] [rbp-41h]
  _BYTE v20[96]; // [rsp+58h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v19 = -2LL;
  v15 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v15);
  v7 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider >= 0 )
  {
    v14 = 0LL;
    v16 = &v14;
    v17 = 0LL;
    v8 = 1;
    v18 = 1;
    v7 = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, __int64 *))(*(_QWORD *)v15 + 40LL))(
           v15,
           a3,
           &v17);
    if ( v18 )
    {
      v9 = *v16;
      *v16 = v17;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x520,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_17:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
      goto LABEL_18;
    }
    CAudioSessionManager::RegisterDisconnectNotificationClient(v14, a2);
    memset_0(v20, 0, sizeof(v20));
    v16 = (__int64 *)v20;
    LOBYTE(v17) = 1;
    InternalLoopbackStream = CAudioResourceManager::CreateInternalLoopbackStream(
                               this,
                               a3,
                               (struct IStreamGroupProxy *)*a2,
                               (struct SYSTEM_AUDIO_STREAM *)v20);
    v11 = InternalLoopbackStream;
    if ( InternalLoopbackStream < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1331LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)InternalLoopbackStream);
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const unsigned __int16 *))(*(_QWORD *)*a2 + 288LL))(
              *a2,
              v20,
              a3);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x535,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_15;
      }
      LOBYTE(v17) = 0;
      v8 = 0;
    }
    v7 = 0;
LABEL_15:
    if ( v8 )
    {
      LOBYTE(v17) = 0;
      lambda_1a19eda420d26f754031790a40bd90be_::operator()((__int64 *)&v16);
    }
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51D,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)AudioSessionManagerProvider);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  return (unsigned int)v7;
}
