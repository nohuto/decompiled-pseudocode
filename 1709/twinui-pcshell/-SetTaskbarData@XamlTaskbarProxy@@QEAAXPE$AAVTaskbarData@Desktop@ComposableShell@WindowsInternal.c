/*
 * XREFs of ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180152D30
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x180149140 (Platform--Details--__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows--.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e___ @ 0x180153B44 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e.c)
 *     ??$?0PE$AAVDispatchedHandler@Core@UI@Windows@@@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVDispatchedHandler@Core@UI@Windows@@W4CallbackContext@Platform@@_N@Z @ 0x180153C90 (--$-0PE$AAVDispatchedHandler@Core@UI@Windows@@@ButtonClickedEventHandler@Desktop@ComposableShell.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_8b00f5316257bd8b39ae62d0d59af473___ @ 0x180153D50 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_8b00f5316257bd8b39ae62d0d59af473.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b___ @ 0x180153E9C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180153FE8 (CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
void __fastcall XamlTaskbarProxy::SetTaskbarData(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // r12
  void *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rax
  __int64 v13; // r15
  void *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  void *v18; // rax
  __int64 v19; // r14
  void *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v28[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+58h] BYREF

  v28[2] = -2LL;
  v4 = (RTL_SRWLOCK *)(a1 + 104);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 104));
  v28[3] = v4;
  if ( !*(_QWORD *)(a1 + 72) )
  {
    if ( a2 != *(_QWORD *)(a1 + 72) )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = *(_QWORD *)(a1 + 72);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *(_QWORD *)(a1 + 72) = a2;
    }
    v28[4] = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
    v6 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v29 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
    v7 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e___(v6, &v29);
    v28[5] = v7;
    v8 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v9 = WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler(v8, v7);
    v10 = *(_QWORD *)(a1 + 72);
    v25 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 80LL))(v10, v9, &v25);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v12 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v30 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
    v13 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_8b00f5316257bd8b39ae62d0d59af473___(v12, &v30);
    v28[6] = v13;
    v14 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v15 = WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler(v14, v13);
    v16 = *(_QWORD *)(a1 + 72);
    v26 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 96LL))(v16, v15, &v26);
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v18 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v31 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
    v19 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b___(v18, &v31);
    v28[7] = v19;
    v20 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v21 = WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler(v20, v19);
    v22 = *(_QWORD *)(a1 + 72);
    v27 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 112LL))(v22, v21, &v27);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v28[0] = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
    v24 = *(_QWORD *)(a1 + 56);
    v28[1] = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___(*(_QWORD *)(a1 + 96), v28);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
