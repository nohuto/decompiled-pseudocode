/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180013EC0
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18002C878 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180016B80 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180030938 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(CAudioSessionManagerProvider *this, char a2)
{
  char v2; // r15
  CAudioSessionManagerProvider *v3; // rsi
  _QWORD *v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx
  CAudioSessionManager *v10; // rcx
  unsigned int (__fastcall *v11)(CAudioSessionManager *__hidden); // rax
  ATL::CAtlException *v12; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  char v14; // [rsp+38h] [rbp-50h]
  _QWORD *v15; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]

  v2 = a2;
  v3 = this;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = 0LL;
  while ( (unsigned __int64)(unsigned int)v7 < *((_QWORD *)v3 + 14) )
  {
    try
    {
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)v3 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v15,
        *(_QWORD *)(*((_QWORD *)v3 + 13) + 8 * v7));
    }
    catch ( ATL::CAtlException *v12 )
    {
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v3 = this;
      v2 = a2;
    }
    v7 = (unsigned int)(v7 + 1);
    v5 = v16;
    v4 = v15;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  for ( i = 0LL; i < v5; ++i )
  {
    LOBYTE(v6) = v2;
    CAudioSessionManager::Disconnect(v4[i], 6LL, v6);
  }
  if ( v4 )
  {
    for ( j = 0LL; j < v5; ++j )
    {
      v10 = (CAudioSessionManager *)v4[j];
      if ( v10 )
      {
        v11 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v10 + 16LL);
        if ( v11 == CAudioSessionManager::Release )
          CAudioSessionManager::Release(v10);
        else
          v11(v10);
      }
    }
    free(v4);
  }
}
