/*
 * XREFs of ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x1800956C0
 * Callers:
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x1800954DC (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800945C4 (-RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180094EB4 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::RevokeSessions(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CAudioSessionManagerProvider *v4; // r14
  int v5; // ebx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r15
  unsigned int i; // edi
  __int64 *v9; // rax
  unsigned __int64 j; // rdi
  int v11; // eax
  unsigned __int64 k; // rdi
  __int64 v13; // rcx
  ATL::CAtlException *v15; // rbx
  int v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  ATL::CAtlException *v18; // [rsp+48h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-58h] BYREF
  char v20; // [rsp+58h] [rbp-50h]
  _QWORD *v21; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp-38h]
  int v24; // [rsp+78h] [rbp-30h]

  v4 = this;
  v5 = 0;
  v16 = 0;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *((_QWORD *)v4 + 14); ++i )
  {
    try
    {
      v9 = (__int64 *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (_QWORD *)v4 + 13,
                        i);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v21,
        *v9);
    }
    catch ( ATL::CAtlException *v18 )
    {
      v15 = v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        _o__resetstkoflw();
      v17 = *(_DWORD *)v15;
      v5 = v16;
      v4 = this;
      if ( v17 < 0 )
      {
        if ( v16 >= 0 )
          v5 = v17;
        v16 = v5;
      }
    }
    v7 = v22;
    v6 = v21;
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  for ( j = 0LL; j < v7; ++j )
  {
    v11 = CAudioSessionManager::RevokeSessions(v6[j], a2, a3, a4);
    if ( v11 < 0 && v5 >= 0 )
      v5 = v11;
  }
  if ( v6 )
  {
    for ( k = 0LL; k < v7; ++k )
    {
      v13 = v6[k];
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    free(v6);
  }
  return (unsigned int)v5;
}
