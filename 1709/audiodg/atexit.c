/*
 * XREFs of atexit @ 0x14001D22C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x140001080 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x140001090 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010C0 (_dynamic_initializer_for___AtlModule__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x1400010E0 (_dynamic_initializer_for__g_CpuManager__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x1400010F0 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001100 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140001120 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     _dynamic_initializer_for__SubmixList__ @ 0x140001130 (_dynamic_initializer_for__SubmixList__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001140 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001160 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x140001180 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011C0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1400011E0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140001220 (_dynamic_initializer_for__gEventList__.c)
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001230 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001250 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessTelemetryProviderRegistration__ @ 0x140001270 (_dynamic_initializer_for__g_SpatialCrossProcessTelemetryProviderRegistration__.c)
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400018D0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003230 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140006560 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BDA0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000C200 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000C9D0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FB00 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140012CB4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x1400130E0 (--0CAudioDGModule@@QEAA@XZ.c)
 *     pre_c_initialization @ 0x14001C930 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x14001E050 (__scrt_initialize_thread_safe_statics.c)
 *     ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x140035150 (-FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035300 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140044310 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400448E0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 * Callees:
 *     _onexit @ 0x14001D1DC (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
