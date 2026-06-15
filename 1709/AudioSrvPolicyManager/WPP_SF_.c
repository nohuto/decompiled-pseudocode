/*
 * XREFs of WPP_SF_ @ 0x180006B5C
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180004970 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x180006FAC (--0CDuckingManager@@AEAA@XZ.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800074E0 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800077C0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000920C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000955C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000C124 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x18000DFCC (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18000ECD0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x180014420 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x1800154C0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BF7C (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001D8D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18001DBFC (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18001E3F4 (-TS_ServiceStart@@YAXXZ.c)
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x180022760 (-UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ.c)
 *     ?FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z @ 0x180022CF4 (-FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800231B0 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
