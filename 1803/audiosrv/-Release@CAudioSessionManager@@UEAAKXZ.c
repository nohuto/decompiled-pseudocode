/*
 * XREFs of ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820
 * Callers:
 *     ?CallDestructors@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@CAXPEAV?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@_K@Z @ 0x180007B04 (-CallDestructors@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180008268 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180031E5C (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180043810 (-Invoke@CAudioStreamDestroy@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UISessionInternalEvents@@@2@_K@Z @ 0x180043F5C (-CallDestructors@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CCom.c)
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180044008 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800440C0 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180048A90 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@W7EAAKXZ @ 0x1800659F0 (-Release@CAudioSessionManager@@W7EAAKXZ.c)
 *     ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x1800983D8 (--1-$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?Invoke@CAudioChannelVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AA920 (-Invoke@CAudioChannelVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisconnected@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AA9B0 (-Invoke@CAudioSessionDisconnected@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisplayNameChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AAA30 (-Invoke@CAudioSessionDisplayNameChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AAAB0 (-Invoke@CAudioSessionGroupingParamChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionIconPathChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AAB40 (-Invoke@CAudioSessionIconPathChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AABC0 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x1800B4D20 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800B51FC (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800BB6F4 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800BE670 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionManager::Release(CAudioSessionManager *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 8;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 8);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
