/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18007B800
 * Callers:
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x180083730 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800796D0 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 */

void __fastcall CAudioSessionManagerProvider::DisconnectSessionsForTsSession(
        CAudioSessionManagerProvider *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v6 = 0LL;
    do
    {
      CAudioSessionManager::DisconnectSessionsForTsSession(
        *(CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v6),
        a2,
        eRender);
      v6 = ++v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 14) );
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
