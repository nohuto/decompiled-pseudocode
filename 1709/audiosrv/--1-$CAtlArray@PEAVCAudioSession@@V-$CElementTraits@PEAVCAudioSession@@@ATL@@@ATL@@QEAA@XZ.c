/*
 * XREFs of ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x180031A6C
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180016B80 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x180038E9B (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     ?FinalRelease@CAudioSessionManager@@EEAAXXZ @ 0x180079880 (-FinalRelease@CAudioSessionManager@@EEAAXXZ.c)
 *     _CAudioSessionManager::FinalRelease_::_1_::dtor$0 @ 0x180079A39 (_CAudioSessionManager--FinalRelease_--_1_--dtor$0.c)
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
