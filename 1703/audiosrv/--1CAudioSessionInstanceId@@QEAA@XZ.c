/*
 * XREFs of ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800250BC (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$1 @ 0x18005B144 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$1.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$3 @ 0x18005B2AD (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$3.c)
 *     ??1CVADServer@@QEAA@XZ @ 0x18007AA8C (--1CVADServer@@QEAA@XZ.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180093278 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$0 @ 0x180093406 (_CAudioSessionManager--DisconnectSessionsForTsSession_--_1_--dtor$0.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180093820 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180093F30 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$0 @ 0x18009404D (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$0.c)
 *     AudioSessionManagerGetExistingSession @ 0x180094980 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180094AD0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180095360 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSessionInstanceId::~CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 5) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 2) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
