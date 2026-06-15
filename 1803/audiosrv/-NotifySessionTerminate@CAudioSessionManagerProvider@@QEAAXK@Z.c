/*
 * XREFs of ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800B5070
 * Callers:
 *     VADServerUserSessionChanged @ 0x180008AC4 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800B1D94 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionTerminate(
        CAudioSessionManagerProvider *this,
        unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v5 = 0LL;
    do
    {
      CAudioSessionManager::DisconnectSessionsForTsSession(
        *(CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v5),
        a2,
        eAll);
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 14) );
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
