/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800B51FC
 * Callers:
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800B4EA8 (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x18000837C (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800B3574 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  CAudioSessionManagerProvider *v3; // rdi
  int v4; // ebx
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // r9
  __int64 i; // r14
  unsigned __int64 j; // rdi
  int v10; // eax
  unsigned __int64 k; // rdi
  CAudioSessionManager *v12; // rcx
  void (*v13)(void); // rax
  ATL::CAtlException *v15; // rbx
  bool v16; // [rsp+20h] [rbp-88h]
  int v17; // [rsp+34h] [rbp-74h]
  ATL::CAtlException *v18; // [rsp+40h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-60h] BYREF
  char v20; // [rsp+50h] [rbp-58h]
  _QWORD *v21; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  int v24; // [rsp+70h] [rbp-38h]
  int v28; // [rsp+C8h] [rbp+20h]

  v3 = this;
  v4 = 0;
  v28 = 0;
  v5 = 0LL;
  v21 = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = 0LL; (unsigned __int64)(unsigned int)i < *((_QWORD *)v3 + 14); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 13) + 8 * i) + 324LL) == 1 )
    {
      try
      {
        if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)v3 + 14) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
          &v21,
          *(_QWORD *)(*((_QWORD *)v3 + 13) + 8 * i));
      }
      catch ( ATL::CAtlException *v18 )
      {
        v15 = v18;
        if ( *(_DWORD *)v18 == -1073741571 )
          _o__resetstkoflw();
        v17 = *(_DWORD *)v15;
        v4 = v28;
        v3 = this;
        if ( v17 < 0 )
        {
          if ( v28 >= 0 )
            v4 = v17;
          v28 = v4;
        }
      }
      v6 = v22;
      v5 = v21;
    }
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  for ( j = 0LL; j < v6; ++j )
  {
    v10 = CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(v5[j], a2, a3, v7, v16);
    if ( v10 < 0 && v4 >= 0 )
      v4 = v10;
  }
  if ( v5 )
  {
    for ( k = 0LL; k < v6; ++k )
    {
      v12 = (CAudioSessionManager *)v5[k];
      if ( v12 )
      {
        v13 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
        if ( (char *)v13 == (char *)CAudioSessionManager::Release )
          CAudioSessionManager::Release(v12);
        else
          v13();
      }
    }
    free(v5);
  }
  return (unsigned int)v4;
}
