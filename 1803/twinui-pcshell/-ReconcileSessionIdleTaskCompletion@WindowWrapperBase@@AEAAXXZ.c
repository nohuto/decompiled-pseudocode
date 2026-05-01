/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x1801F2EA4
 * Callers:
 *     _lambda_84ae6e21f9379359c5dabe643d80e783_::operator() @ 0x1801F0970 (_lambda_84ae6e21f9379359c5dabe643d80e783_--operator().c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F2D1C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerI.c)
 *     ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x1801F4770 (-WindowRemoved@WindowWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_705cc743e216b7b39e0ab2b444dcc264___ @ 0x1801EF008 (Windows--Internal--ComTaskPool--QueueTask__lambda_705cc743e216b7b39e0ab2b444dcc264___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7be2482a1588a72f98f99377279f86d4___ @ 0x1801EF168 (Windows--Internal--ComTaskPool--QueueTask__lambda_7be2482a1588a72f98f99377279f86d4___.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  __int64 v4; // rdi
  bool v5; // cl
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 *p_dwProcessId; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  WindowWrapperBase *v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 dwProcessId; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 168LL))(*((_QWORD *)this + 39));
  try
  {
    v2 = (*(__int64 (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 112LL))(this);
    v4 = *((int *)this + 82);
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 58);
    if ( (v6 & 1) != 0 && *((_DWORD *)this + 82) && v5 )
    {
      if ( (v6 & 2) != 0 )
        return;
      if ( !GetWindowThreadProcessId((HWND)*((int *)this + 82), (LPDWORD)&dwProcessId) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2193LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)0x80070578LL);
      wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
        &v19,
        this);
      v14 = this;
      wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
        v15,
        v19);
      v15[1] = v4;
      v16 = dwProcessId;
      v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_7be2482a1588a72f98f99377279f86d4___(
             v8,
             v7,
             *((_DWORD *)this + 72),
             (__int64)&v14);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2210LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v15);
      *((_DWORD *)this + 58) |= 2u;
      p_dwProcessId = &v19;
    }
    else
    {
      if ( (v6 & 2) == 0 )
        return;
      wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
        &dwProcessId,
        this);
      v14 = this;
      wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
        v15,
        dwProcessId);
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_705cc743e216b7b39e0ab2b444dcc264___(
              v12,
              v11,
              *((_DWORD *)this + 72),
              &v14);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2227LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v15);
      *((_DWORD *)this + 58) &= ~2u;
      p_dwProcessId = &dwProcessId;
    }
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(p_dwProcessId);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8B8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v3);
  }
}
