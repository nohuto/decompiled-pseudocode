/*
 * XREFs of WPP_SF_DDD @ 0x140036474
 * Callers:
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004EB0 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005080 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005240 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001A060 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002FFF0 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?WriteSqmInfo@CAudioDGModule@@AEAAXXZ @ 0x14003629C (-WriteSqmInfo@CAudioDGModule@@AEAAXXZ.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140041E28 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DDD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
