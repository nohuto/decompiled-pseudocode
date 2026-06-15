/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18009501C
 * Callers:
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x18009BD44 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180093278 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 */

void __fastcall CAudioSessionManagerProvider::DisconnectSessionsForTsSession(
        CAudioSessionManagerProvider *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  CAudioSessionManager **v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v6 = 0LL;
    do
    {
      v7 = (CAudioSessionManager **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                      (_QWORD *)this + 13,
                                      v6);
      CAudioSessionManager::DisconnectSessionsForTsSession(*v7, a2, eRender);
      v6 = ++v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 14) );
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
