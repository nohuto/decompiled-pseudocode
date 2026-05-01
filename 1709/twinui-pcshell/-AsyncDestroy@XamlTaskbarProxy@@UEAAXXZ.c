/*
 * XREFs of ?AsyncDestroy@XamlTaskbarProxy@@UEAAXXZ @ 0x180152B30
 * Callers:
 *     <none>
 * Callees:
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180153790 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00___ @ 0x1801539F0 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlTaskbarProxy::AsyncDestroy(XamlTaskbarProxy *this)
{
  RTL_SRWLOCK *v2; // rdi
  void *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockShared((PSRWLOCK)this + 13);
  if ( *((_QWORD *)this + 11) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 13);
    v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v7[0] = this;
    v7[1] = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 13);
    v4 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00___(v3, v7);
    v5 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 11), 0LL, v4);
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(XamlTaskbarProxy *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
