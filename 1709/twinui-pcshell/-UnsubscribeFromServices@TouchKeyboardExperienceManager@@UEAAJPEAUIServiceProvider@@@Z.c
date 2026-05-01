/*
 * XREFs of ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18019B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007B24C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C600 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::UnsubscribeFromServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  v7 = *((_QWORD *)this + 27);
  if ( v7 )
  {
    v3 = *((_QWORD *)this + 27);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v3);
  }
  v8 = *((_QWORD *)this + 41);
  v9 = *((_QWORD *)this + 46);
  if ( v9 )
  {
    v4 = *((_QWORD *)this + 46);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v4);
  }
  v10 = *((_DWORD *)this + 46);
  v11 = *((_QWORD *)this + 30);
  if ( v11 )
  {
    v5 = *((_QWORD *)this + 30);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v5);
  }
  v12 = *((_DWORD *)this + 47);
  v13 = *((_QWORD *)this + 27);
  if ( v13 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *((_QWORD *)this + 41) = 0LL;
  v14 = *((_QWORD *)this + 46);
  if ( v14 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  *((_DWORD *)this + 46) = 0;
  v15 = *((_QWORD *)this + 30);
  if ( v15 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *((_DWORD *)this + 47) = 0;
  *((_QWORD *)this + 24) = 0LL;
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v5 && v12 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, v12);
  if ( v4 && v10 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 48LL))(v4, v10);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v8);
  v16 = *((_QWORD *)this + 24);
  if ( v16 )
    UnregisterScaleChangeEvent(v16);
  SmartCookie::Unregister((TouchKeyboardExperienceManager *)((char *)this + 448));
  v17 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)((char *)this - 48));
  v18 = v17;
  if ( v17 >= 0 )
    v18 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2E9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v18;
}
