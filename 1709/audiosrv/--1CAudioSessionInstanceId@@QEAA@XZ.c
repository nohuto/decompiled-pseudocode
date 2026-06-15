/*
 * XREFs of ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18005B5E4
 * Callers:
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$1 @ 0x180038D04 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CVADServer::CVADServer_::_1_::dtor$1 @ 0x180039AB6 (_CVADServer--CVADServer_--_1_--dtor$1.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800796D0 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$0 @ 0x18007985E (_CAudioSessionManager--DisconnectSessionsForTsSession_--_1_--dtor$0.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180079C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18007A370 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$0 @ 0x18007A48D (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$0.c)
 *     AudioSessionManagerGetExistingSession @ 0x18007AF90 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007B170 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x18007BD80 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSessionInstanceId::~CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 5) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 2) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
