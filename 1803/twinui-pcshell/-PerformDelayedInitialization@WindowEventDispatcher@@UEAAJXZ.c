/*
 * XREFs of ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x1801D6D30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3DE0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::PerformDelayedInitialization(
        WindowEventDispatcher *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  WindowEventDispatcher *v4; // rbx
  __int64 *v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // r14
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned __int64 i; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v20; // [rsp+58h] [rbp+10h] BYREF
  char *v21; // [rsp+60h] [rbp+18h]

  v4 = this;
  try
  {
    for ( i = 0LL; ; ++i )
    {
      v5 = (__int64 *)*((_QWORD *)v4 + 33);
      v6 = (__int64 *)*((_QWORD *)v4 + 32);
      if ( i >= v5 - v6 )
        break;
      v20 = 0LL;
      AcquireSRWLockExclusive((PSRWLOCK)v4 + 42);
      v21 = (char *)v4 + 336;
      v7 = *(_QWORD *)(*((_QWORD *)v4 + 32) + 8 * i);
      v8 = *((_QWORD *)v4 + 23);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 240LL))(v7);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, v9, 0LL);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          165LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v10);
      v11 = *(_QWORD *)(*((_QWORD *)v4 + 32) + 8 * i);
      v12 = v20;
      v20 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v11 + 200LL))(
              v11,
              &v20);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          166LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v13);
      if ( v4 != (WindowEventDispatcher *)-336LL )
        ReleaseSRWLockExclusive((PSRWLOCK)v4 + 42);
      if ( v20 )
      {
        v14 = WindowEventDispatcher::AppViewRemoved((RTL_SRWLOCK *)v4 - 14, v20);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            174LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v14);
      }
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v20);
    }
    if ( v6 != v5 )
    {
      do
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v6++);
      while ( v6 != v5 );
      v6 = (__int64 *)*((_QWORD *)v4 + 32);
    }
    *((_QWORD *)v4 + 33) = v6;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      a4);
    v4 = this;
  }
  AcquireSRWLockExclusive((PSRWLOCK)v4 + 42);
  *((_BYTE *)v4 + 360) = 1;
  if ( v4 != (WindowEventDispatcher *)-336LL )
    ReleaseSRWLockExclusive((PSRWLOCK)v4 + 42);
  return 0LL;
}
