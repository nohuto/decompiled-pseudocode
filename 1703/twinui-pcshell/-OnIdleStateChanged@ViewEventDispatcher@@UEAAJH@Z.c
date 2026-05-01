/*
 * XREFs of ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x1800F5220
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  const struct _TlgProvider_t *v3; // rax
  int v4; // eax
  RTL_SRWLOCK **Ptr; // rsi
  RTL_SRWLOCK **v6; // r14
  RTL_SRWLOCK *v7; // r15
  RTL_SRWLOCK *v8; // rbx
  int MatchingViewEventRegistration; // eax
  __int64 v10; // rdi
  RTL_SRWLOCK v11; // rax
  int v13[2]; // [rsp+38h] [rbp-29h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  int v20; // [rsp+D0h] [rbp+6Fh] BYREF

  v20 = a2;
  SRWLock[1] = (PSRWLOCK)-2LL;
  v3 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    v16 = &v20;
    v17 = 4;
    v18 = 0;
    TlgWrite(v3, &unk_1801FD1D0, 0LL, 0LL, 3u, &pData);
  }
  wil::srwlock::lock_exclusive(this + 11, SRWLock);
  v4 = `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled;
  if ( !`ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled )
  {
    `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled = 2;
    if ( (int)SHRegGetBOOL(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ShellExperienceHost.exe",
                L"AllowSuspension",
                v13) < 0 )
    {
      v4 = `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled;
    }
    else
    {
      v4 = 2 - (v13[0] != 0);
      `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled = v4;
    }
  }
  if ( v4 != 1 )
  {
    Ptr = (RTL_SRWLOCK **)this[20].Ptr;
    v6 = &Ptr[(__int64)this[21].Ptr];
    if ( Ptr != v6 )
    {
      v7 = this - 17;
      do
      {
        v8 = *Ptr;
        SRWLock[2] = v8;
        if ( v8 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 1))(v8);
        *(_QWORD *)v13 = 0LL;
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(v7, v8, v13);
        v10 = *(_QWORD *)v13;
        if ( MatchingViewEventRegistration >= 0 )
        {
          if ( (~(*(_DWORD *)(*(_QWORD *)v13 + 24LL) >> 1) & 1) != 0 )
          {
            v11.Ptr = v8->Ptr;
            if ( v20 )
              (*((void (__fastcall **)(RTL_SRWLOCK *))v11.Ptr + 88))(v8);
            else
              (*((void (__fastcall **)(RTL_SRWLOCK *))v11.Ptr + 89))(v8);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x613,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        if ( v8 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 2))(v8);
        ++Ptr;
      }
      while ( Ptr != v6 );
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 0LL;
}
