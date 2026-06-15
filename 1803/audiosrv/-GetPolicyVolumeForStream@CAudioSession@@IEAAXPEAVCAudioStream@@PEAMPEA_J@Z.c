/*
 * XREFs of ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x180096968
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180004F90 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800A86F0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002FE90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 */

void __fastcall CAudioSession::GetPolicyVolumeForStream(
        CAudioSession *this,
        struct CAudioStream *a2,
        float *a3,
        __int64 *a4)
{
  _QWORD *v7; // rax

  *a3 = 1.0;
  *a4 = 0LL;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  GetPolicyVolumeForAudioStream(
    (__int64)a2 + 16,
    (CAudioStream *)(((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL)),
    v7[1],
    a3,
    a4);
}
