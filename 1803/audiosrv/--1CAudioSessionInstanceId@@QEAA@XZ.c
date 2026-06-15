/*
 * XREFs of ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     VADServerUserSessionChanged @ 0x180008AC4 (VADServerUserSessionChanged.c)
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180042C20 (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18004749C (--1CAudioSession@@MEAA@XZ.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$3 @ 0x18006A450 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$3.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$1 @ 0x18006A67C (_CAudioSessionManager--OnStateChanged_--_1_--dtor$1.c)
 *     ??1CVADServer@@QEAA@XZ @ 0x180096DC4 (--1CVADServer@@QEAA@XZ.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800B1D94 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$0 @ 0x1800B1F23 (_CAudioSessionManager--DisconnectSessionsForTsSession_--_1_--dtor$0.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800B2300 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetExistingSession @ 0x1800B4440 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800B45B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x1800B4D20 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180034080 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSessionInstanceId::~CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  volatile signed __int32 *v2; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx
  ATL::CAtlStringMgr *v6; // rcx
  void (__fastcall *v7)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rax
  ATL::CAtlStringMgr *v8; // rcx
  void (__fastcall *v9)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rax

  v2 = (volatile signed __int32 *)(*((_QWORD *)this + 9) - 24LL);
  if ( _InterlockedDecrement(v2 + 4) <= 0 )
  {
    v6 = *(ATL::CAtlStringMgr **)v2;
    v7 = *(void (__fastcall **)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v2 + 8LL);
    if ( v7 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v6, (struct ATL::CStringData *)v2);
    else
      ((void (__fastcall *)(ATL::CAtlStringMgr *))v7)(v6);
  }
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 5) - 24LL);
  if ( _InterlockedDecrement(v3 + 4) <= 0 )
  {
    v8 = *(ATL::CAtlStringMgr **)v3;
    v9 = *(void (__fastcall **)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v3 + 8LL);
    if ( v9 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v8, (struct ATL::CStringData *)v3);
    else
      ((void (__fastcall *)(ATL::CAtlStringMgr *))v9)(v8);
  }
  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 2) - 24LL);
  if ( _InterlockedDecrement(v4 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  if ( _InterlockedDecrement(v5 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
