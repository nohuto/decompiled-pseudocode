/*
 * XREFs of ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1801D6960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1801D6308 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801DA714 (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::OnShellHookMessage(
        RTL_SRWLOCK *this,
        unsigned __int64 a2,
        HWND a3,
        const char *a4)
{
  RTL_SRWLOCK *v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rbx
  RTL_SRWLOCK *v10; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+78h] [rbp+20h]

  try
  {
    if ( a2 > 0x26 )
      return 0LL;
    if ( (unsigned int)a2 > 0x19 )
    {
      if ( (_DWORD)a2 != 26 && (_DWORD)a2 != 27 )
      {
        if ( (_DWORD)a2 == 31 || (_DWORD)a2 == 36 || (_DWORD)a2 == 38 )
        {
          v13 = 0LL;
          v7 = this + 48;
          AcquireSRWLockShared(this + 48);
          v15 = v7;
          v8 = (__int64 *)WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v14, a3);
          v9 = *v8;
          *v8 = 0LL;
          v13 = v9;
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v14);
          if ( v7 )
            ReleaseSRWLockShared(v7);
          if ( v9 )
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v9 + 272LL))(v9, a2);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v13);
        }
        return 0LL;
      }
    }
    else if ( (_DWORD)a2 != 25 && ((_DWORD)a2 == 17 || (_DWORD)a2 == 18 || (_DWORD)a2 != 19 && (_DWORD)a2 != 23) )
    {
      return 0LL;
    }
    v10 = this + 48;
    AcquireSRWLockExclusive(this + 48);
    v13 = (__int64)v10;
    WindowEventDispatcher::HandleForegroundWindow((WindowEventDispatcher *)&this[-10], a3);
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x15E,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           a4);
  }
  return result;
}
