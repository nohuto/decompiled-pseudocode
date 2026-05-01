/*
 * XREFs of ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x180120110
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  const struct _TlgProvider_t *v3; // rax
  RTL_SRWLOCK *v4; // r14
  int v5; // eax
  __int64 **Ptr; // rsi
  __int64 **v7; // r15
  RTL_SRWLOCK *v8; // r12
  __int64 *v9; // rbx
  int MatchingViewEventRegistration; // eax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v14[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h]
  RTL_SRWLOCK *v16; // [rsp+48h] [rbp-19h]
  __int64 *v17; // [rsp+50h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v19; // [rsp+78h] [rbp+17h]
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  int v23; // [rsp+D0h] [rbp+6Fh] BYREF

  v23 = a2;
  v15 = -2LL;
  v3 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    v19 = &v23;
    v20 = 4;
    v21 = 0;
    TlgWrite(v3, &unk_1802606ED, 0LL, 0LL, 3u, &pData);
  }
  v4 = this + 14;
  AcquireSRWLockExclusive(this + 14);
  v16 = this + 14;
  v5 = `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled;
  if ( !`ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled )
  {
    `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled = 2;
    if ( (int)SHRegGetBOOL(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ShellExperienceHost.exe",
                L"AllowSuspension",
                v14) < 0 )
    {
      v5 = `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled;
    }
    else
    {
      v5 = 2 - (v14[0] != 0);
      `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled = v5;
    }
  }
  if ( v5 != 1 )
  {
    Ptr = (__int64 **)this[23].Ptr;
    v7 = &Ptr[(__int64)this[24].Ptr];
    if ( Ptr != v7 )
    {
      v8 = this - 23;
      do
      {
        v9 = *Ptr;
        v17 = v9;
        if ( v9 )
          (*(void (__fastcall **)(__int64 *))(*v9 + 8))(v9);
        *(_QWORD *)v14 = 0LL;
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(v8, v9, v14);
        v11 = *(_QWORD *)v14;
        if ( MatchingViewEventRegistration >= 0 )
        {
          if ( (~(*(_DWORD *)(*(_QWORD *)v14 + 24LL) >> 1) & 1) != 0 )
          {
            v12 = *v9;
            if ( v23 )
              (*(void (__fastcall **)(__int64 *))(v12 + 704))(v9);
            else
              (*(void (__fastcall **)(__int64 *))(v12 + 712))(v9);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x61C,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        if ( v9 )
          (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
        ++Ptr;
      }
      while ( Ptr != v7 );
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
