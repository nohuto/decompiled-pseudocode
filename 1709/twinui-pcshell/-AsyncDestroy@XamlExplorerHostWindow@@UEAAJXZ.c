/*
 * XREFs of ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x180155250
 * Callers:
 *     <none>
 * Callees:
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180153790 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce___ @ 0x180155580 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHostWindow::AsyncDestroy(XamlExplorerHostWindow *this)
{
  RTL_SRWLOCK *v2; // rsi
  void *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockShared((PSRWLOCK)this + 10);
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (__fastcall **)(XamlExplorerHostWindow *))(*(_QWORD *)this + 8LL))(this);
    v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v9[0] = this;
    v9[1] = this;
    (*(void (__fastcall **)(XamlExplorerHostWindow *))(*(_QWORD *)this + 8LL))(this);
    v4 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce___(v3, v9);
    v5 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 8), 0LL, v4);
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v6);
    (*(void (__fastcall **)(XamlExplorerHostWindow *, __int64))(*(_QWORD *)this + 16LL))(this, v6);
    v7 = 0;
  }
  else
  {
    v7 = -2147019873;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v7;
}
