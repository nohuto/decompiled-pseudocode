/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18001E588
 * Callers:
 *     VADServerUserSessionChanged @ 0x180025C58 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180093F30 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionAudioProtocol(
        CAudioSessionManagerProvider *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int i; // edi
  CAudioSessionManager **v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *((_QWORD *)this + 14); ++i )
  {
    v7 = (CAudioSessionManager **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 104);
    CAudioSessionManager::NotifySessionAudioProtocol(*v7, a2, a3);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
