/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800205A4
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013EE0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180021120 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800214A0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180024D14 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CAudioSessionManager **a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // esi
  void *v4; // r14
  CAudioSessionManager **v5; // rdx
  CAudioSessionManager *v6; // rcx
  unsigned int (__fastcall *v7)(CAudioSessionManager *__hidden); // rax
  CServerAudioSessionControl *v8; // rcx
  unsigned int (__fastcall *v9)(CServerAudioSessionControl *__hidden); // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-30h] BYREF

  v2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v3 = 0;
  try
  {
    v4 = *(void **)&v2[1].LockCount;
    if ( v4 >= v2[1].OwningThread
      && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                             &v2[1],
                             (char *)v4 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v5 = (CAudioSessionManager **)((char *)v2[1].DebugInfo + 8 * (_QWORD)v4);
    if ( v5 )
    {
      v6 = *a2;
      *v5 = *a2;
      if ( v6 )
      {
        v7 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v6 + 8LL);
        if ( v7 == CAudioSessionManager::AddRef )
          CAudioSessionManager::AddRef(v6);
        else
          v7(v6);
      }
    }
    ++*(_QWORD *)&v2[1].LockCount;
  }
  catch ( ATL::CAtlException *v13 )
  {
    v11 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _o__resetstkoflw();
    v3 = *(_DWORD *)v11;
    v2 = lpCriticalSection;
  }
  LeaveCriticalSection(v2);
  v8 = *a2;
  if ( *a2 )
  {
    v9 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v8);
    }
    else if ( v9 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v8);
    }
    else
    {
      v9(v8);
    }
  }
  return v3;
}
