/*
 * XREFs of ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4
 * Callers:
 *     ??0CAudioSession@@IEAA@XZ @ 0x180015C90 (--0CAudioSession@@IEAA@XZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180093278 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180093820 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180093F30 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     AudioSessionManagerGetExistingSession @ 0x180094980 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180094AD0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180095360 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 */

CAudioSessionInstanceId *__fastcall CAudioSessionInstanceId::CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(this, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 8, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 16, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 40, &ATL::g_strmgr);
  *((_DWORD *)this + 12) = 0;
  *(GUID *)((char *)this + 24) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 72, &ATL::g_strmgr);
  return this;
}
