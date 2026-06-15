/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180020690
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013E60 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180021120 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl **v2; // rdi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // r9
  unsigned int i; // edx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  CServerAudioSessionControl *v12; // rcx
  unsigned int (__fastcall *v13)(CServerAudioSessionControl *__hidden); // rax
  PRTL_CRITICAL_SECTION_DEBUG v14; // rax
  char *v15; // rdx
  char *v16; // rcx
  size_t v17; // r8
  CServerAudioSessionControl *v18; // rcx
  unsigned int (__fastcall *v19)(CServerAudioSessionControl *__hidden); // rax
  ATL::CAtlException *v21; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
LABEL_2:
    for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
    {
      DebugInfo = v3[1].DebugInfo;
      if ( *((CServerAudioSessionControl **)&DebugInfo->Type + i) == *v2 )
      {
        v8 = i + 1LL;
        if ( v8 < i || (v9 = *(_QWORD *)&v3[1].LockCount, v8 > v9) )
          ATL::AtlThrowImpl(-2147024809);
        v10 = v9 - v8;
        v11 = 8LL * i;
        v12 = *(CServerAudioSessionControl **)((char *)&DebugInfo->Type + v11);
        if ( v12 )
        {
          v13 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v12 + 16LL);
          if ( v13 == CServerAudioSessionControl::Release )
          {
            CServerAudioSessionControl::Release(v12);
          }
          else if ( v13 == CAudioSessionManager::Release )
          {
            CAudioSessionManager::Release(v12);
          }
          else
          {
            v13(v12);
          }
        }
        if ( v10 )
        {
          v14 = v3[1].DebugInfo;
          v15 = (char *)v14 + 8 * v8;
          v16 = (char *)v14 + v11;
          v17 = 8 * v10;
          if ( 8 * v10 )
          {
            if ( !v16 || !v15 )
            {
              *(_DWORD *)_o__errno(v16, v15, v17, v5) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v16, v15, v17);
          }
        }
        --*(_QWORD *)&v3[1].LockCount;
        goto LABEL_2;
      }
    }
  }
  catch ( ATL::CAtlException *v21 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v21;
  }
  LeaveCriticalSection(v3);
  v18 = *v2;
  if ( *v2 )
  {
    v19 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v18 + 16LL);
    if ( v19 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v18);
    }
    else if ( v19 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v18);
    }
    else
    {
      v19(v18);
    }
  }
  return v4;
}
