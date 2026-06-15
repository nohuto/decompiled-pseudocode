/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C
 * Callers:
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x180001100 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x180001130 (_dynamic_initializer_for__g_csVadList__.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180015C90 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180019BA0 (--0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_S.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18001D53C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800214E0 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180021DD0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180022900 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18002E968 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x1800342C0 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x1800343C8 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x1800348D8 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180035E24 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180036518 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0CVolumeProvider@@QEAA@XZ @ 0x1800383D0 (--0CVolumeProvider@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180038A40 (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x180039EE4 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003B018 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180087B44 (--0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800929CC (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x1800B10D4 (--0CMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
