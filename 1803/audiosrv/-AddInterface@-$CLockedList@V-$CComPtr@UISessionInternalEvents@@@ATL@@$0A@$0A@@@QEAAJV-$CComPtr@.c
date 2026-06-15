/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180031E5C
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180034230 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180004AF0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18000B290 (-GrowBuffer@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@U.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CAudioSessionManager **a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // esi
  HANDLE v4; // r14
  CAudioSessionManager *v5; // rcx
  CAudioSessionManager *v6; // rcx
  __int64 (__fastcall *v7)(CServerAudioSessionControl *); // rax
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-30h] BYREF

  v2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v3 = 0;
  try
  {
    v4 = *(HANDLE *)&v2[1].LockCount;
    if ( v4 >= v2[1].OwningThread
      && !ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::GrowBuffer(
            (__int64)&v2[1],
            (size_t)v4 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v5 = *a2;
    *((_QWORD *)&v2[1].DebugInfo->Type + (_QWORD)v4) = *a2;
    if ( v5 )
      (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v5 + 8LL))(v5);
    ++*(_QWORD *)&v2[1].LockCount;
  }
  catch ( ATL::CAtlException *v11 )
  {
    v9 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v3 = *(_DWORD *)v9;
    v2 = lpCriticalSection;
  }
  LeaveCriticalSection(v2);
  v6 = *a2;
  if ( *a2 )
  {
    v7 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v6);
    }
    else if ( v7 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v6);
    }
    else
    {
      v7(v6);
    }
  }
  return v3;
}
