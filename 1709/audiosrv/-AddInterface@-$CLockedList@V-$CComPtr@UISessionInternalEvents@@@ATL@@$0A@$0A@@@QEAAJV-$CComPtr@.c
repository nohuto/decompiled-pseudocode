/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180014F10
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180018570 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800159F0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CAudioSessionManager **a2)
{
  LPCRITICAL_SECTION v2; // rbx
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  unsigned __int64 OwningThread; // rcx
  size_t v6; // rdx
  unsigned __int64 LockSemaphore_low; // r8
  size_t v8; // r14
  struct _RTL_CRITICAL_SECTION_DEBUG *v9; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v10; // r15
  __int64 v11; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  CAudioSessionManager **v13; // rdx
  CAudioSessionManager *v14; // rcx
  unsigned int (__fastcall *v15)(CAudioSessionManager *__hidden); // rax
  CServerAudioSessionControl *v16; // rcx
  unsigned int (__fastcall *v17)(CServerAudioSessionControl *__hidden); // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v19; // rax
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // [rsp+28h] [rbp-40h] BYREF

  v2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v3 = 0;
  try
  {
    v4 = *(_QWORD *)&v2[1].LockCount;
    OwningThread = (unsigned __int64)v2[1].OwningThread;
    if ( v4 < OwningThread )
      goto LABEL_16;
    v6 = v4 + 1;
    if ( v4 + 1 <= OwningThread )
      goto LABEL_16;
    if ( v2[1].DebugInfo )
    {
      LockSemaphore_low = SLODWORD(v2[1].LockSemaphore);
      if ( !LODWORD(v2[1].LockSemaphore) )
      {
        LockSemaphore_low = OwningThread >> 1;
        if ( v6 - OwningThread > OwningThread >> 1 )
          LockSemaphore_low = v6 - OwningThread;
      }
      v8 = OwningThread + LockSemaphore_low;
      if ( v6 >= OwningThread + LockSemaphore_low )
        v8 = v4 + 1;
      v9 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc(v8, 8uLL);
      v10 = v9;
      if ( v9 )
      {
        v11 = *(_QWORD *)&v2[1].LockCount;
        DebugInfo = v2[1].DebugInfo;
        if ( 8 * v11 )
        {
          if ( !DebugInfo )
          {
            *(_DWORD *)_o__errno(v11, 0LL) = 22;
            invalid_parameter_noinfo();
            ATL::AtlThrowImpl(-2147024809);
          }
          memmove(v9, DebugInfo, 8 * v11);
        }
        free(v2[1].DebugInfo);
        v2[1].DebugInfo = v10;
LABEL_15:
        v2[1].OwningThread = (HANDLE)v8;
LABEL_16:
        v13 = (CAudioSessionManager **)((char *)v2[1].DebugInfo + 8 * v4);
        if ( v13 )
        {
          v14 = *a2;
          *v13 = *a2;
          if ( v14 )
          {
            v15 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v14 + 8LL);
            if ( v15 == CAudioSessionManager::AddRef )
              CAudioSessionManager::AddRef(v14);
            else
              v15(v14);
          }
        }
        ++*(_QWORD *)&v2[1].LockCount;
        goto LABEL_40;
      }
    }
    else
    {
      v8 = SLODWORD(v2[1].LockSemaphore);
      if ( v8 <= v6 )
        v8 = v4 + 1;
      v19 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc(v8, 8uLL);
      v2[1].DebugInfo = v19;
      if ( v19 )
        goto LABEL_15;
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v20 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v3 = *(_DWORD *)v20;
    v2 = lpCriticalSection;
  }
LABEL_40:
  LeaveCriticalSection(v2);
  v16 = *a2;
  if ( *a2 )
  {
    v17 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v16 + 16LL);
    if ( v17 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v16);
    }
    else if ( v17 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v16);
    }
    else
    {
      v17(v16);
    }
  }
  return v3;
}
