/*
 * XREFs of ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18001E4F0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18001E588 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18001E600 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180024390 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180024950 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18007BC98 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800880A8 (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x1800885E4 (-RemoveInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$.c)
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180092D40 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x180093420 (-FinalRelease@CAudioSessionManager@@EEAAXXZ.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800944B0 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18009501C (-DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x1800950A0 (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 *     ?GetAudioSessionManager_NoAdd@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800951F0 (-GetAudioSessionManager_NoAdd@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x180095638 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x1800956C0 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
        _QWORD *a1,
        unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + 8 * a2;
}
