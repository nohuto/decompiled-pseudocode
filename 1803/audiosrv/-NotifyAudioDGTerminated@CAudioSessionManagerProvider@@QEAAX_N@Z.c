/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180008268
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180008078 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x18000837C (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(CAudioSessionManagerProvider *this, char a2)
{
  char v2; // r15
  CAudioSessionManagerProvider *v3; // rsi
  _QWORD *v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx
  CAudioSessionManager *v9; // rcx
  unsigned int (__fastcall *v10)(CAudioSessionManager *__hidden); // rax
  ATL::CAtlException *v11; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  char v13; // [rsp+38h] [rbp-50h]
  _QWORD *v14; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]

  v2 = a2;
  v3 = this;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = 0LL;
  while ( (unsigned __int64)(unsigned int)v6 < *((_QWORD *)v3 + 14) )
  {
    try
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)v3 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v14,
        *(_QWORD *)(*((_QWORD *)v3 + 13) + 8 * v6));
    }
    catch ( ATL::CAtlException *v11 )
    {
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v3 = this;
      v2 = a2;
    }
    v6 = (unsigned int)(v6 + 1);
    v5 = v15;
    v4 = v14;
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  for ( i = 0LL; i < v5; ++i )
    CAudioSessionManager::Disconnect(v4[i], 6u, v2);
  if ( v4 )
  {
    for ( j = 0LL; j < v5; ++j )
    {
      v9 = (CAudioSessionManager *)v4[j];
      if ( v9 )
      {
        v10 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v9 + 16LL);
        if ( v10 == CAudioSessionManager::Release )
          CAudioSessionManager::Release(v9);
        else
          v10(v9);
      }
    }
    free(v4);
  }
}
