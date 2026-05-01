/*
 * XREFs of ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1801D6308
 * Callers:
 *     ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x1801D6430 (-HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1801D6960 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801DA5D8 (-WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInterna.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowEventDispatcher::HandleForegroundWindow(WindowEventDispatcher *this, HWND a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    v7 = (__int64 *)WindowEventDispatcher::WindowWrapperFromFrameOrWindow(this, &v14, a2);
    v4 = *v7;
    *v7 = 0LL;
    v13 = v4;
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v14);
    v5 = v4;
    v6 = v4;
  }
  v8 = *((_QWORD *)this + 56);
  if ( v8 != v5 )
  {
    v9 = v6;
    v10 = v6;
    v11 = v6;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 280LL))(v8, 0LL, v6);
      v9 = v6;
      v10 = v6;
      v11 = v6;
    }
    v6 = v10;
    if ( v9 )
    {
      v6 = v11;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 280LL))(v4, 1LL);
    }
  }
  v12 = *((_QWORD *)this + 56);
  *((_QWORD *)this + 56) = v4;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *((_QWORD *)this + 55) = a2;
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v13);
}
