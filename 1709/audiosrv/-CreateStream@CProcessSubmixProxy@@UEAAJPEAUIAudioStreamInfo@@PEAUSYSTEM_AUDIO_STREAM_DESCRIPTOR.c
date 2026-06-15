/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180012310
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C4F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UI.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000DC00 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180012074 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001D340 (-IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001D350 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001D360 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?GetType@CAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18001D380 (-GetType@CAudioStream@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x180094FB4 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18009503C (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800950C0 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  CBaseStreamGroupProxy *v7; // rcx
  __int64 (*v10)(void); // rax
  int v11; // eax
  int v12; // edi
  CProcessSubmixProxy *v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rax
  char *v15; // rcx
  bool (__fastcall *v16)(CAudioStream *__hidden); // rax
  bool IsStrictPeriodicityClient; // al
  bool (__fastcall *v18)(CAudioStream *__hidden); // rax
  bool IsFormatSensitiveClient; // al
  bool (__fastcall *v20)(CAudioStream *__hidden); // rax
  bool IsLazyPeriodicityClient; // al
  __int64 (__fastcall *v22)(struct IAudioStreamInfo *); // rax
  int Type; // eax
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = *(CBaseStreamGroupProxy **)(this + 192);
  v10 = *(__int64 (**)(void))(*(_QWORD *)v7 + 304LL);
  if ( (char *)v10 == (char *)CBaseStreamGroupProxy::ValidateStreamForStreamGroup )
    v11 = CBaseStreamGroupProxy::ValidateStreamForStreamGroup(v7, a2);
  else
    v11 = v10();
  v12 = v11;
  if ( v11 < 0 )
  {
    v25 = 2722LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12,
      v26);
    return (unsigned int)v12;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 40) + 24LL))(
          *(_QWORD *)(this + 40),
          a3,
          a4,
          a5);
  if ( v12 < 0 )
  {
    v25 = 2724LL;
    goto LABEL_29;
  }
  v13 = (CProcessSubmixProxy *)(this - 8);
  *((_QWORD *)a5 + 8) = this & -(__int64)(this != 8);
  v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(this - 8) + 8LL);
  v15 = (char *)(this - 8);
  if ( v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::AddRef )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::AddRef((__int64)v15);
  else
    v14((__int64)v15);
  v16 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 136LL);
  if ( v16 == CAudioStream::IsStrictPeriodicityClient )
    IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(a2);
  else
    IsStrictPeriodicityClient = v16(a2);
  if ( IsStrictPeriodicityClient )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(v13, 1);
  v18 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 144LL);
  if ( v18 == CAudioStream::IsFormatSensitiveClient )
    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
  else
    IsFormatSensitiveClient = v18(a2);
  if ( IsFormatSensitiveClient )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(v13, 1);
  v20 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 152LL);
  if ( v20 == CAudioStream::IsLazyPeriodicityClient )
    IsLazyPeriodicityClient = CAudioStream::IsLazyPeriodicityClient(a2);
  else
    IsLazyPeriodicityClient = v20(a2);
  if ( IsLazyPeriodicityClient )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients(v13, 1);
  v22 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL);
  if ( (char *)v22 == (char *)CAudioStream::GetType )
    Type = CAudioStream::GetType(a2);
  else
    Type = v22(a2);
  if ( Type != 2 )
    ++*((_DWORD *)v13 + 30);
  CProcessSubmixProxy::AddStream(v13, a2);
  return 0LL;
}
