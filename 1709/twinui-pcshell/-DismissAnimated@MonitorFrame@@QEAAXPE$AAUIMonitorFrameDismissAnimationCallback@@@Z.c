/*
 * XREFs of ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x180157104
 * Callers:
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18015AD84 (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180153790 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18015DA54 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___ @ 0x18015DC30 (WindowsInternal--ComposableShell--Experiences--Switcher--DismissAnimationCompleted--DismissAnima.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf2a5585384fc29dd92791fa2021d13d___ @ 0x18015DDA4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf2a5585384fc29dd92791fa2021d13d.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall MonitorFrame::DismissAnimated(RTL_SRWLOCK *a1, __int64 a2)
{
  void *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  void *v7; // r15
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  AcquireSRWLockExclusive(a1 + 22);
  if ( a1 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
  v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v12[0] = a1;
  if ( a1 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v12[1] = a2;
  v5 = WindowsInternal::ComposableShell::Experiences::Switcher::DismissAnimationCompleted::DismissAnimationCompleted__lambda_7d544a6ebe9fabad27cf83ed972508d6___(
         v4,
         v12);
  v6 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v13[2] = a1;
  if ( a1 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v13[3] = v6;
  if ( a1[12].Ptr )
  {
    v7 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v13[0] = a1;
    (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v13[1] = v6;
    v8 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf2a5585384fc29dd92791fa2021d13d___(v7, v13);
    v9 = Windows::UI::Xaml::IWindow::Dispatcher::get(a1[12].Ptr);
    v10 = Windows::UI::Core::ICoreDispatcher::RunAsync(v9, 0LL, v8);
    v11 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v11);
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v11);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  if ( a1 != (RTL_SRWLOCK *)-176LL )
    ReleaseSRWLockExclusive(a1 + 22);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
}
