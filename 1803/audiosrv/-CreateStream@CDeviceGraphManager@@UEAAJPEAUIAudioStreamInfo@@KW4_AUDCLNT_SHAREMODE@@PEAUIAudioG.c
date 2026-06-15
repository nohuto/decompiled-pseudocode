/*
 * XREFs of ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800C8B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180019FB0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CDeviceGraphManager::CreateStream(
        CDeviceGraphManager *this,
        struct IAudioStreamInfo *a2,
        int a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct IAudioGraphCallback *a5,
        unsigned int a6,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a7,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a8,
        const unsigned __int16 **a9,
        struct SYSTEM_AUDIO_STREAM *a10)
{
  unsigned int v12; // eax
  int StreamGroup; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  struct IStreamGroupProxy *v17; // rcx
  __int64 v18; // rcx
  const struct _TlgProvider_t *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  struct IStreamGroupProxy *v24; // [rsp+48h] [rbp-69h] BYREF
  struct IStreamGroupProxy *v25; // [rsp+50h] [rbp-61h] BYREF
  __int64 v26; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  struct IStreamGroupProxy **v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+90h] [rbp-21h]
  int v30; // [rsp+94h] [rbp-1Dh]
  __int64 *v31; // [rsp+98h] [rbp-19h]
  int v32; // [rsp+A0h] [rbp-11h]
  int v33; // [rsp+A4h] [rbp-Dh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+2Fh]

  if ( (a3 & 0x1000004) != 0
    || (a3 & 0xFFF8) != 0
    || a4 == AUDCLNT_SHAREMODE_EXCLUSIVE && a3 < 0
    || (a3 & 0x88000000) == 0x8000000 )
  {
    v15 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x80070057LL);
    return v15;
  }
  v12 = RpcImpersonateClient(0LL);
  if ( v12 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             2109LL,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
             (const char *)v12);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  StreamGroup = CDeviceGraphManager::GetStreamGroup(this, a9, a6, a7, &v24);
  v15 = StreamGroup;
  if ( StreamGroup >= 0 )
  {
    v17 = v24;
    *((_QWORD *)a8 + 13) = *a9;
    StreamGroup = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v17 + 24LL))(
                    v17,
                    a2,
                    a8,
                    a5,
                    a6,
                    a10);
    v15 = StreamGroup;
    if ( StreamGroup >= 0 )
    {
      v19 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         v18,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v19 > 4u )
      {
        v30 = 0;
        v25 = v24;
        v28 = &v25;
        v20 = *(_QWORD *)a2;
        v29 = 8;
        v21 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(v20 + 80))(a2);
        v33 = 0;
        v26 = v21;
        v31 = &v26;
        v32 = 8;
        TlgWrite(v19, &unk_180145D4C, v22, v23, 4u, &pData);
      }
      v15 = 0;
      goto LABEL_16;
    }
    v16 = 2119LL;
  }
  else
  {
    v16 = 2114LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)StreamGroup);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  RpcRevertToSelf();
  return v15;
}
