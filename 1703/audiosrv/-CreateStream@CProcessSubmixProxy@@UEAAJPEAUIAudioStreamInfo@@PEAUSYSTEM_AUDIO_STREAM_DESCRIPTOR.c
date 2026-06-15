/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007F30
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008C70 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800088D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UIInspectable@@VN.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000A3D0 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x180019DC0 (-IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x180019DD0 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x180019DE0 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800A7344 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800A73CC (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800A7450 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
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
  void (__fastcall *v14)(char *); // rax
  char *v15; // rcx
  bool (__fastcall *v16)(CAudioStream *__hidden); // rax
  bool IsStrictPeriodicityClient; // al
  bool (__fastcall *v18)(CAudioStream *__hidden); // rax
  bool IsFormatSensitiveClient; // al
  bool (__fastcall *v20)(CAudioStream *__hidden); // rax
  bool IsLazyPeriodicityClient; // al
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = *(CBaseStreamGroupProxy **)(this + 152);
  v10 = *(__int64 (**)(void))(*(_QWORD *)v7 + 312LL);
  if ( (char *)v10 == (char *)CBaseStreamGroupProxy::ValidateStreamForStreamGroup )
    v11 = CBaseStreamGroupProxy::ValidateStreamForStreamGroup(v7, a2);
  else
    v11 = v10();
  v12 = v11;
  if ( v11 < 0 )
  {
    v23 = 2720LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v23,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12,
      v24);
    return (unsigned int)v12;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 40) + 24LL))(
          *(_QWORD *)(this + 40),
          a3,
          a4,
          a5);
  if ( v12 < 0 )
  {
    v23 = 2722LL;
    goto LABEL_25;
  }
  v13 = (CProcessSubmixProxy *)(this - 8);
  *((_QWORD *)a5 + 8) = this & -(__int64)(this != 8);
  v14 = *(void (__fastcall **)(char *))(*(_QWORD *)(this - 8) + 8LL);
  v15 = (char *)(this - 8);
  if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v15);
  else
    v14(v15);
  v16 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 128LL);
  if ( v16 == CAudioStream::IsStrictPeriodicityClient )
    IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(a2);
  else
    IsStrictPeriodicityClient = v16(a2);
  if ( IsStrictPeriodicityClient )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(v13, 1);
  v18 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 136LL);
  if ( v18 == CAudioStream::IsFormatSensitiveClient )
    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
  else
    IsFormatSensitiveClient = v18(a2);
  if ( IsFormatSensitiveClient )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(v13, 1);
  v20 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 144LL);
  if ( v20 == CAudioStream::IsLazyPeriodicityClient )
    IsLazyPeriodicityClient = CAudioStream::IsLazyPeriodicityClient(a2);
  else
    IsLazyPeriodicityClient = v20(a2);
  if ( IsLazyPeriodicityClient )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients(v13, 1);
  return 0LL;
}
