/*
 * XREFs of ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800053B8
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18004749C (--1CAudioSession@@MEAA@XZ.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$6 @ 0x18006728D (_CAudioSessionManager--Disconnect_--_1_--dtor$6.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800A53B4 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800A5554 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x1800B1228 (--1CAudioSessionManager@@UEAA@XZ.c)
 *     ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x1800B1F40 (-FinalRelease@CAudioSessionManager@@EEAAXXZ.c)
 *     _CAudioSessionManager::FinalRelease_::_1_::dtor$0 @ 0x1800B20FD (_CAudioSessionManager--FinalRelease_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
