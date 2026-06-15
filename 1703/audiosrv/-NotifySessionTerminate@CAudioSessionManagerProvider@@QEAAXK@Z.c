/*
 * XREFs of ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x180095638
 * Callers:
 *     VADServerUserSessionChanged @ 0x180025C58 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180093278 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionTerminate(
        CAudioSessionManagerProvider *this,
        unsigned int a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rax
  CAudioSessionManager **v6; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v5 = 0LL;
    do
    {
      v6 = (CAudioSessionManager **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                      (_QWORD *)this + 13,
                                      v5);
      CAudioSessionManager::DisconnectSessionsForTsSession(*v6, a2, eAll);
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 14) );
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
