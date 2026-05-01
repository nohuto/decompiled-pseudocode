/*
 * XREFs of ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180157804
 * Callers:
 *     ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x180157F70 (-v_DismissView@XamlAllUpViewHost@@MEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___::_ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___ @ 0x18015CE28 (wil--details--ScopeExitFn__lambda_a047454074d8556c86caf24d936bfd4b___--_ScopeExitFn__lambda_a047.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180153790 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18015DA54 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a82905e17e8ce16c5170ad40f44874ec___ @ 0x18015F048 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_a82905e17e8ce16c5170ad40f44874ec.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MonitorFrame::DestroyInternal(MonitorFrame *this)
{
  void *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD v10[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( this )
    (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 8LL))(this);
  v10[2] = this;
  if ( this )
    (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 8LL))(this);
  v10[3] = this;
  if ( *((_QWORD *)this + 12) )
  {
    v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v10[0] = this;
    (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 8LL))(this);
    v10[1] = this;
    v3 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a82905e17e8ce16c5170ad40f44874ec___(v2, v10);
    v4 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 12));
    v5 = Windows::UI::Core::ICoreDispatcher::RunAsync(v4, 0LL, v3);
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v6);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, v6);
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, *((_QWORD *)this + 11));
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      *((_QWORD *)this + 8) = 0LL;
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(MonitorFrame *))(*(_QWORD *)this + 16LL))(this);
}
