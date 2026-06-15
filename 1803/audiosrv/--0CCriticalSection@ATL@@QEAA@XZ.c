/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C
 * Callers:
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x1800011B0 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x1800011E0 (_dynamic_initializer_for__g_csVadList__.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180004E3C (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x180018460 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18002A77C (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18002F260 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180032340 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800329A0 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18003508C (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18003589C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18004A09C (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004A190 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004A7BC (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18004E1C4 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x180059674 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0DynamicAudioEndpointManager@@IEAA@XZ @ 0x180059D60 (--0DynamicAudioEndpointManager@@IEAA@XZ.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x18005B538 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x18005CA58 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005FAE4 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800A530C (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800B1104 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x1800DDD0C (--0CMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
