/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180044008
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180046A50 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800440C0 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CAudioSessionManager **a2)
{
  CAudioSessionManager **v2; // rdi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // esi
  __int64 i; // rcx
  CAudioSessionManager *v6; // rcx
  __int64 (__fastcall *v7)(CAudioSessionManager *); // rax
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
LABEL_2:
    for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)&v3[1].LockCount; i = (unsigned int)(i + 1) )
    {
      if ( *((CAudioSessionManager **)&v3[1].DebugInfo->Type + i) == *v2 )
      {
        ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(&v3[1]);
        goto LABEL_2;
      }
    }
  }
  catch ( ATL::CAtlException *v9 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v9;
  }
  LeaveCriticalSection(v3);
  v6 = *v2;
  if ( *v2 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v6);
    else
      v7(v6);
  }
  return v4;
}
