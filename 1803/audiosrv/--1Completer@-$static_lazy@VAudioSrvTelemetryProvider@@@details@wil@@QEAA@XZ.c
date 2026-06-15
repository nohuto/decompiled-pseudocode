/*
 * XREFs of ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0
 * Callers:
 *     AudioServerGetAllVolumes @ 0x180003B40 (AudioServerGetAllVolumes.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     AudioVolumeConnect @ 0x180008720 (AudioVolumeConnect.c)
 *     s_pbmReportHostedAppStateChange @ 0x1800141B0 (s_pbmReportHostedAppStateChange.c)
 *     s_tsSessionGetAudioProtocol @ 0x180014360 (s_tsSessionGetAudioProtocol.c)
 *     s_pbmCastingAppStateChanged @ 0x180014D20 (s_pbmCastingAppStateChanged.c)
 *     s_pbmReportAppInteractivityChange @ 0x180015290 (s_pbmReportAppInteractivityChange.c)
 *     AudioServerDeriveStreamCategory @ 0x180016300 (AudioServerDeriveStreamCategory.c)
 *     s_tsRegisterAudioProtocolNotification @ 0x180016930 (s_tsRegisterAudioProtocolNotification.c)
 *     s_tsUnregisterAudioProtocolNotification @ 0x180016AB0 (s_tsUnregisterAudioProtocolNotification.c)
 *     s_pbmReportApplicationState @ 0x180016D20 (s_pbmReportApplicationState.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18001A970 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CEE0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18001D2B0 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     AudioServerCreateStream @ 0x180023040 (AudioServerCreateStream.c)
 *     AudioServerStartStream @ 0x180023310 (AudioServerStartStream.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180023500 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x180036970 (s_rtgGetDefaultAudioEndpoint.c)
 *     AudioServerStopStream @ 0x180043420 (AudioServerStopStream.c)
 *     AudioServerDestroyStream @ 0x180043620 (AudioServerDestroyStream.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180048360 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     AudioServerDisconnect @ 0x180049220 (AudioServerDisconnect.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(
        unsigned int *a1,
        __int64 a2,
        void *a3)
{
  void (__stdcall *v3)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  __int64 v5; // rbx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rax

  v3 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))a1[2];
  if ( !(_DWORD)v3 )
  {
    v5 = *(_QWORD *)a1;
    v6 = *(const struct _TlgProvider_t **)(*(_QWORD *)a1 + 32LL);
    *(_QWORD *)(v5 + 16) = v6;
    *(_BYTE *)(v5 + 24) = 1;
    TraceLoggingRegisterEx(v6, v3, a3);
    v7 = *(_QWORD *)(v5 + 8);
    *(_DWORD *)(v5 + 28) = 1;
    (*(void (__fastcall **)(__int64))(v7 + 8))(v5 + 8);
    LODWORD(v3) = a1[2];
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, (DWORD)v3, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
