/*
 * XREFs of ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180128910
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x18011EE10 (Platform--Details--__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows--.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e___ @ 0x1801296BC (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e.c)
 *     ??$?0PE$AAVDispatchedHandler@Core@UI@Windows@@@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVDispatchedHandler@Core@UI@Windows@@W4CallbackContext@Platform@@_N@Z @ 0x1801297D0 (--$-0PE$AAVDispatchedHandler@Core@UI@Windows@@@ButtonClickedEventHandler@Desktop@ComposableShell.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_8b00f5316257bd8b39ae62d0d59af473___ @ 0x180129890 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_8b00f5316257bd8b39ae62d0d59af473.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b___ @ 0x1801299A4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180129AB8 (CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
void __fastcall XamlTaskbarProxy::SetTaskbarData(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  signed __int32 v5; // eax
  void *v6; // r8
  signed __int32 v7; // eax
  __int64 v8; // r15
  void *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  void *v13; // r8
  signed __int32 v14; // eax
  __int64 v15; // r14
  void *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  void *v20; // r8
  signed __int32 v21; // eax
  __int64 v22; // rsi
  void *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  signed __int32 v27; // eax
  __int64 v28; // rcx
  __int64 v29; // [rsp+28h] [rbp-58h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+38h] [rbp-48h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v33[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+58h] BYREF

  v33[2] = -2LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 88), &SRWLock);
  if ( !*(_QWORD *)(a1 + 56) )
  {
    if ( a2 != *(_QWORD *)(a1 + 56) )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *(_QWORD *)(a1 + 56);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *(_QWORD *)(a1 + 56) = a2;
    }
    v33[3] = a1;
    do
      v5 = *(_DWORD *)(a1 + 36);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v5 + 1, v5) );
    v6 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v34 = a1;
    do
      v7 = *(_DWORD *)(a1 + 36);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v7 + 1, v7) );
    v8 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e___(v6, &v34);
    v33[4] = v8;
    v9 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v10 = WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler(v9, v8);
    v11 = *(_QWORD *)(a1 + 56);
    v29 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, v10, &v29);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v13 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v35 = a1;
    do
      v14 = *(_DWORD *)(a1 + 36);
    while ( v14 != 0x7FFFFFFF && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v14 + 1, v14) );
    v15 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_8b00f5316257bd8b39ae62d0d59af473___(v13, &v35);
    v33[5] = v15;
    v16 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v17 = WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler(v16, v15);
    v18 = *(_QWORD *)(a1 + 56);
    v30 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v18 + 96LL))(v18, v17, &v30);
    if ( v19 < 0 )
      __abi_WinRTraiseException(v19);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v20 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v36 = a1;
    do
      v21 = *(_DWORD *)(a1 + 36);
    while ( v21 != 0x7FFFFFFF && v21 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v21 + 1, v21) );
    v22 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b___(v20, &v36);
    v33[6] = v22;
    v23 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v24 = WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler(v23, v22);
    v25 = *(_QWORD *)(a1 + 56);
    v31 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v25 + 112LL))(v25, v24, &v31);
    if ( v26 < 0 )
      __abi_WinRTraiseException(v26);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v33[0] = a1;
    do
      v27 = *(_DWORD *)(a1 + 36);
    while ( v27 != 0x7FFFFFFF && v27 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v27 + 1, v27) );
    v28 = *(_QWORD *)(a1 + 40);
    v33[1] = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___(*(_QWORD *)(a1 + 80), v33);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)a1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
