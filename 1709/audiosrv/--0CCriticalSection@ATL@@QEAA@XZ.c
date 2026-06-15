/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028
 * Callers:
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x180001110 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x180001140 (_dynamic_initializer_for__g_csVadList__.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x180015A2C (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800172E0 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18001A44C (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@11W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001D048 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x180027D84 (--0CVADServer@@QEAA@XZ.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18002D03C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18003101C (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180032084 (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x180060184 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180060AE8 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180060B60 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180060C4C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180067D20 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18006BE40 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18006BEBC (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800790AC (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x1800A2818 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x1800A2B10 (--0CMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
