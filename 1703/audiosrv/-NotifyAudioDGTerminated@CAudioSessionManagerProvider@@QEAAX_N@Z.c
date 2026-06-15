/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18001E4F0
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180025884 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180094EB4 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(CAudioSessionManagerProvider *this, char a2)
{
  char v2; // r15
  CAudioSessionManagerProvider *v3; // r14
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  unsigned int i; // ebx
  unsigned __int64 j; // rbx
  _QWORD *v9; // rax
  unsigned __int64 k; // rbx
  __int64 v11; // rcx
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
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *((_QWORD *)v3 + 14); ++i )
  {
    try
    {
      v9 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)v3 + 104);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v15,
        *v9);
    }
    catch ( ATL::CAtlException *v12 )
    {
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v3 = this;
      v2 = a2;
    }
    v5 = v16;
    v4 = v15;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  for ( j = 0LL; j < v5; ++j )
  {
    LOBYTE(v6) = v2;
    CAudioSessionManager::Disconnect(v4[j], 6LL, v6);
  }
  if ( v4 )
  {
    for ( k = 0LL; k < v5; ++k )
    {
      v11 = v4[k];
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    free(v4);
  }
}
