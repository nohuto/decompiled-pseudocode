/*
 * XREFs of ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180031CA0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     VADServerUserSessionChanged @ 0x180008AC4 (VADServerUserSessionChanged.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18003508C (--0CAudioSession@@IEAA@XZ.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800B1D94 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800B2300 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetExistingSession @ 0x1800B4440 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800B45B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x1800B4D20 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800340D0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

CAudioSessionInstanceId *__fastcall CAudioSessionInstanceId::CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v5; // rax
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v7; // rax
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v9; // rax

  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *(_QWORD *)this = (char *)NilString + 24;
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    v5 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v5 = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 1) = (char *)v5 + 24;
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    v7 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v7 = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 2) = (char *)v7 + 24;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 5,
    (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_DWORD *)this + 12) = 0;
  *(GUID *)((char *)this + 24) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v8 == ATL::CAtlStringMgr::GetNilString )
    v9 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v9 = v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 9) = (char *)v9 + 24;
  return this;
}
