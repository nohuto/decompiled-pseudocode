/*
 * XREFs of ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180025524
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$2 @ 0x180059279 (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$2.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18007BB10 (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x18007BC2F (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     _CVolumeControlBase::_CVolumeControlBase_::_1_::dtor$2 @ 0x180084CC9 (_CVolumeControlBase--_CVolumeControlBase_--_1_--dtor$2.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x180087C10 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180087DF8 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     _CAudioSession::DisconnectStreamList_::_1_::dtor$0 @ 0x18008AF1F (_CAudioSession--DisconnectStreamList_--_1_--dtor$0.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x18008B200 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$0 @ 0x18008B7C4 (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$0.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$1 @ 0x18008B7D0 (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$1.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x180093232 (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x180093420 (-FinalRelease@CAudioSessionManager@@EEAAXXZ.c)
 *     _CAudioSessionManager::FinalRelease_::_1_::dtor$0 @ 0x1800935C3 (_CAudioSessionManager--FinalRelease_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
