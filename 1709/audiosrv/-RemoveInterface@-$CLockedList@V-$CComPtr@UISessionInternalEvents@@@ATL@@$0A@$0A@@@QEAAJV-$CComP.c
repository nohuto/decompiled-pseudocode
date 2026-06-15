/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800150B0
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x1800184F0 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl **v2; // r15
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r14d
  unsigned int i; // edx
  unsigned __int64 v6; // rdi
  CServerAudioSessionControl *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  unsigned int (__fastcall *v11)(CServerAudioSessionControl *__hidden); // rax
  CServerAudioSessionControl *v12; // rcx
  unsigned int (__fastcall *v13)(CServerAudioSessionControl *__hidden); // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  char *v16; // rdx
  char *v17; // rcx
  ATL::CAtlException *v18; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
LABEL_2:
    for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
    {
      v6 = *(_QWORD *)&v3[1].LockCount;
      if ( i >= v6 )
        ATL::AtlThrowImpl(-2147024809);
      v7 = (CServerAudioSessionControl *)*((_QWORD *)&v3[1].DebugInfo->Type + i);
      if ( v7 == *v2 )
      {
        v8 = i + 1LL;
        if ( v8 < i || v8 > v6 )
          ATL::AtlThrowImpl(-2147024809);
        v9 = v6 - v8;
        v10 = 8LL * i;
        if ( v7 )
        {
          v11 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v7 + 16LL);
          if ( v11 == CServerAudioSessionControl::Release )
          {
            CServerAudioSessionControl::Release(v7);
          }
          else if ( v11 == CAudioSessionManager::Release )
          {
            CAudioSessionManager::Release(v7);
          }
          else
          {
            v11(v7);
          }
        }
        if ( v9 )
        {
          DebugInfo = v3[1].DebugInfo;
          v16 = (char *)DebugInfo + 8 * v8;
          v17 = (char *)DebugInfo + v10;
          if ( 8 * v9 )
          {
            if ( !v17 || !v16 )
            {
              *(_DWORD *)_o__errno(v17, v16) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v17, v16, 8 * v9);
          }
        }
        --*(_QWORD *)&v3[1].LockCount;
        goto LABEL_2;
      }
    }
  }
  catch ( ATL::CAtlException *v18 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v18;
  }
  LeaveCriticalSection(v3);
  v12 = *v2;
  if ( *v2 )
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
  return v4;
}
